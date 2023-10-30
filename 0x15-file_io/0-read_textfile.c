#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename:filename.
 * @letters:the number of letters it should read and print.
 * Return:the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_R, num_W;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	num_R = read(fd, buffer, letters);
	num_W = write(STDOUT_FILENO, buffer, num_R);

	close(fd);
	free(buffer);

	return (num_W);

}
