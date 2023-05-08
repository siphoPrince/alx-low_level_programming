#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - main function used for text file and print to stdout
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 * Return: the number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t nread, nwritten, total = 0;
	char *buf;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(file);
		return (0);
	}

	nread = read(file, buf, letters);
	while (nread > 0 && total < (ssize_t)letters)
	{
		nwritten = write(STDOUT_FILENO, buf + total, nread);
		if (nwritten <= 0)
		{
			free(buf);
			close(file);
			return (0);
		}

		total += nwritten;
		nread -= nwritten;
	}

	free(buf);
	close(file);

	if (nread == -1 || total != (ssize_t)letters)
		return (0);

	return (total);
}
