#include "shell.h"

/**
 * main - main function for shell
 *
 * Return: 0 if success 1 if fail
 */
int main(void)/*int ac, char **av, char **env)*/
{
	printf("Before execve\n");
	 const char *str = getenv("PATH");
    const char *substr = "/system/bin";

    int index = searchSubstring(str, substr);
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	}
	printf("After execve\n");
	return (0);
}
