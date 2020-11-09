#include "holberton.h"

/**
 * main - copy content of file to another
 * @ac:number of args
 * @av:argument passed to function
 *  Return:0
 */
int main(int ac, char *av[])
{
	int fd, rd, c, len;
	int fd2, w, ps;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

fd = open(av[1], O_RDONLY);
rd = read(fd, buff, 1024);
if (fd == -1 || rd == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	exit(98);
}
c = close(fd);
	for (len = 0; buff[len] != '\0'; len++)
		;
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
fd2 = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
w = write(fd2, buff, len);
	if (fd2 == -1 || w == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
	exit(99);
	}
ps = close(fd2);
	if (ps == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
return (0);
}
