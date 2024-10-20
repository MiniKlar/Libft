/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniklar <miniklar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:04:35 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/21 01:06:54 by miniklar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *memset(void *s, int c, size_t n)
{
    size_t  i;
    unsigned char    str;

    i = 0;
    str = *((unsigned char *)s);
    if (n == 0)
        return (NULL);
    while (i < n)
    {
        str[i] = (unsigned char) c;
        i++;
    }
    return (s);
}
int main(void)
{
    char    str[] = "Salut";
    char *p;

    p = memset(str, '0', 2);
    printf("%s\n", p);
}