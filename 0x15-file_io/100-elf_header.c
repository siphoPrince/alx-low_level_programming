#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * main - Displays information contained in the ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 98 on failure.
 *
 * Usage: elf_header elf_filename
 * Displayed information: Magic, Class, Data, Version, OS/ABI, ABI Version,
 * Type, Entry point address, Format: the same as readelf -h (version 2.26.1)
 */
int main(int argc, char *argv[])
{
    int fd, i;
    char buf[128];
    Elf64_Ehdr *header;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: elf_header elf_filename\n");
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(98);
    }

    /* Read ELF header */
    if (read(fd, buf, sizeof(Elf64_Ehdr)) < (ssize_t) sizeof(Elf64_Ehdr))
    {
        fprintf(stderr, "Error: Not an ELF file - %s\n", argv[1]);
        exit(98);
    }

    /* Cast header to ELF header structure */
    header = (Elf64_Ehdr *) buf;

    /* Check for valid ELF file */
    if (header->e_ident[EI_MAG0] != ELFMAG0 ||
        header->e_ident[EI_MAG1] != ELFMAG1 ||
        header->e_ident[EI_MAG2] != ELFMAG2 ||
        header->e_ident[EI_MAG3] != ELFMAG3)
    {
        fprintf(stderr, "Error: Not an ELF file - %s\n", argv[1]);
        exit(98);
    }

    /* Print ELF header information */
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x%c", header->e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');
    printf("  Class:%s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:%s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:%d%s\n", header->e_ident[EI_VERSION], header->e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
    printf("  OS/ABI:");

    	switch (header->e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		osabi = "UNIX - System V";
		break;
	case ELFOSABI_HPUX:
		osabi = "UNIX - HP-UX";
		break;
	case ELFOSABI_NETBSD:
		osabi = "UNIX - NetBSD";
		break;
	case ELFOSABI_LINUX:
		osabi = "UNIX - Linux";
		break;
	case ELFOSABI_SOLARIS:
		osabi = "UNIX - Solaris";
		break;
	case ELFOSABI_IRIX:
		osabi = "UNIX - IRIX";
		break;
	case ELFOSABI_FREEBSD:
		osabi = "UNIX - FreeBSD";
		break;
	case ELFOSABI_TRU64:
		osabi = "UNIX - TRU64";
		break;
	case ELFOSABI_ARM_AEABI:
		osabi = "ARM EABI";
		break;
	case ELFOSABI_ARM:
		osabi = "ARM";
		break;
	case ELFOSABI_STANDALONE:
		osabi = "Standalone App";
		break;
	default:
		osabi = "<unknown: ";
		printf("%02x>\n", header->e_ident[EI_OSABI]);
		break;
	}
	printf("  %-35s%s\n", "OS/ABI:", osabi);
	printf("  %-35s%u (%s)\n", "ABI Version:", header->e_ident[EI_ABIVERSION], osabi_ver);

	printf("  %-35s", "Type:");
	switch (header->e_type)
	{
	case ET_NONE:
		printf("NONE (Unknown Type)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", header->e_type);
		break;
	}

	printf("  %-35s0x%lx\n", "Entry point address:", (unsigned long)header->e_entry);

	free(header);
	close_file(fd);
	return (0);
}

