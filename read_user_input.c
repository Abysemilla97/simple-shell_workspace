#define MAX_BUFFER_SIZE

/**
 * read_user_input - reads command inputted by user from stdin.
 * Return: a pointer to a buffer containing the text inputted
 * by the user.
 */
char *read_user_input()
{
	char *buffer_containing_text = NULL;
	size_t buffer_size = MAX 1024;
	size_t number_of_char_read;
	number_of_char_read = getline(&buffer_containing_text, &buffer_size, stdin); /*the getline returns the no of char read, the delimiter char excluding the terminating null byte, and returns -1 on failure, includeing EOF*/

	/*testing the end of file condition*/
	if (number_of_char_read == EOF)
	{
		_print("\n");
		free(buffer_containing_text);
		exit(127);
	}
	/*exit status is returned by bin/sh if a command inputted is not found within the PATH system variable. It's not a built in shell command*/

	buffer_containing_text[_stringlen(buffer_containing_text) - 1] = '\0';
	return (buffer_containing_text);

}
