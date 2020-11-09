#include "holberton.h"

/**
 * main - copy content of file to another
 * @ac:number of args
 * @av:argument passed to function
 *  Return:0
 */
int main(int ac, char *av[])
{
	int fd, rw, cw, l;
	int fd2, ww, cw2;
	char *buff = malloc(sizeof(char) * 1024);

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	rw = read(fd, buff, 1024);
	if (fd == -1 || rw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	cw = close(fd);
	for (l = 0; buff[l] != '\0'; l++)
	;
	if (cw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	fd2 = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	ww = write(fd2, buff, l);
	if (fd2 == -1 || ww == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	cw2 = close(fd2);
	if (cw2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	free(buff);
	return (0);
}
