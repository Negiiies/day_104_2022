int stu_strcmp(const char *s1, const char *s2)
{
    int i;
    int y;

    i = 0;
    y = 0;
    while (s1[i] != '\0' && s2[y] != '0' && s1[i] == s2[y]) {
        i += 1;
        y += 1;
    }
    if (s1[i] == s2[y]) {
        return(0);
    } else {
        return (s1[i] - s2[y]);
    }
}
