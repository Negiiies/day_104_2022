#include <unistd.h>

unsigned int stu_strlen(const char *str);

int stu_puts(const char *str)
{
    int i;
    char c;
    c = '\n';
    i = stu_strlen(str);
    i = write(1, str, i);
    write(1, &c, 1);
    if (i < 0){
        return (-1);
    } else {
        return(i + 1);
    }
}
