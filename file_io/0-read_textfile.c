#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: pointer to filename
 * @letters: number of letters
 * Return: returns the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	filename fh;

	fh = read_textfile("filename", "r");

	if (fh != NULL)
	{
		char c;
		while ((c = fgetc(fh)) != EOF);
		_putchar (c);

		fclose(fh);

	}
	else
		return (0);
}
