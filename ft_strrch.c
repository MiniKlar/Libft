/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniklar <miniklar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:45:20 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/24 20:56:53 by miniklar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strchr(const char *s, int c)
{
    while (s)
        s++;
    while (s)
    {
        if (*s == (const char)c)
            return ((char *)s);
        s--; 
    }
    return (NULL);
}
/*int main(void)
{
    printf("%s\n", strrchr("sazlutztoi", 'u'));
}*/