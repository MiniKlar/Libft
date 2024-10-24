/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniklar <miniklar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:45:20 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/24 17:16:50 by miniklar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strchr(const char *s, int c)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        if (s[i] == (const char)c)
                j++;
        i++;
    }
    while (s)
    {
        if (*s == (const char)c)
        { 
            j--;
            if (j == 0)
                return ((char *)s);
        }
        s++; 
    }
    return (NULL);
}

int main(void)
{
    printf("%s\n", ft_strchr("sazlutztoilozlollol", 'w'));
}