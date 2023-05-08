#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    char *buffer;
    int fd;
    ssize_t count, written;

    if (filename == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buffer = malloc((letters + 1) * sizeof(char));
    if (buffer == NULL)
    {
        close(fd);
        return (0);
    }

    count = read(fd, buffer, letters);
    if (count == -1 || (size_t)count != letters)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    buffer[count] = '\0';

    written = write(STDOUT_FILENO, buffer, count);
    if (written == -1 || (size_t)written != (size_t)count)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    free(buffer);
    close(fd);
    return (count);
}
