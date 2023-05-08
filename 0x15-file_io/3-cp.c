#include <stdio.h>
#include <stdlib.h>

char *read_file(char *file);

/**
 * read_file - Reads the contents of a file and returns a pointer to a buffer.
 * @file: The name of the file to read.
 *
 * Return: A pointer to the buffer containing the file contents.
 */
char *read_file(char *file)
{
    char *buffer;
    long length;
    FILE *f;

    f = fopen(file, "rb");

    if (f == NULL)
    {
        fprintf(stderr, "Error: Could not open file %s\n", file);
        exit(1);
    }

    fseek(f, 0, SEEK_END);
    length = ftell(f);
    fseek(f, 0, SEEK_SET);
    buffer = malloc(length);

    if (buffer == NULL)
    {
        fprintf(stderr, "Error: Could not allocate memory for buffer\n");
        fclose(f);
        exit(1);
    }

    fread(buffer, 1, length, f);
    fclose(f);

    return buffer;
}

/**
 * main - Reads a file and outputs its contents to the console.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 1.
 *              If the file cannot be read - exit code 1.
 */
int main(int argc, char *argv[])
{
    char *buffer;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        exit(1);
    }

    buffer = read_file(argv[1]);
    printf("%s", buffer);
    free(buffer);

    return 0;
}

