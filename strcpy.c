char *stu_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i += 1;
    }
    return(dest);
}
