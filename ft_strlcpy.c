/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:04:54 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/21 14:23:13 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dest, char *src, size_t size)
{
    size_t srclen = strlen(src);
    size_t i;

    i = 0;
    while (i < size && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (srclen);
}

int main(void)
{
    char    dest[100] = "";
    char    src[100] = "test";

    printf("%zu\n", ft_strlcpy(dest, src, 100));
    printf("%s\n", dest);
}


// ajouter fonction strlen pour le bon return