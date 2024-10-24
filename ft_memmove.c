/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniklar <miniklar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:33:57 by lomont            #+#    #+#             */
/*   Updated: 2024/10/24 14:23:47 by miniklar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char temp;

    i = 0;

    while (i < n)
    {
        temp = *(unsigned char *)src;
        *(unsigned char *)dest = temp;
        src++;
        dest++;
        i++;
    }
    
    return (dest);
}
/*int main(void)
{

    char    dest[100] = "SALUT00000000";
    char    src[100] = "BONJOUR";
    
    ft_memmove(dest, src, 4);
    printf("%s\n", dest);
}*/