#include "libft.h"

void *ft_bzero(void *s, size_t n)
{
    size_t  i;
    
    i = 0;
    if (n == 0)
        return (NULL);
    while (i < n)
    {
        *(unsigned char *)s = '0';
        s++;
        i++;
    }
}
/*int main(void)
{
    char    buffer[100] = "Salut";
    ft_bzero(buffer, 3);
    printf("%s\n", buffer);
}*/