#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile- Reads a Txt file and print letters to STDOUT.
 * @filename: txt file readed
 * @letters: letters printed Number
 * Return: N of printed letter. if not, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
