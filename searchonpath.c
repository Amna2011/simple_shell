#include "shell.h"

int searchSubstring(const char *str, const char *substr) 
{
    int str_len = strlen(str);
    int substr_len = strlen(substr);

    for (int i = 0; i <= str_len - substr_len; i++) {
        int j;
        for (j = 0; j < substr_len; j++) {
            if (str[i + j] != substr[j]) {
                break;
            }
        }
        if (j == substr_len) {
	{
return (i);
}
}
return (-1);
}
