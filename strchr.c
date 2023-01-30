#include <stddef.h>
char *stu_strchr(const char *str, char search)
{
    int i;
    i = 0;
    int y;
    y = 0;
    while (str[i] != '\0')
        {
            i +=1;
        }
    if(search[y] != str[i]){
        search[y] += 1;
        search[y] = str[i];
        return (char*)str;
    } else {
        return (NULL);
    }
}
