#include <stddef.h>
char *stu_strchr(const char *str, char search)
{
    int i;

    i = 0;
    if (!str) {
        return NULL;
    }
    if (search = str[i]) {
        return (char*)str;
    }
    str += 1;
    return 0;
}
