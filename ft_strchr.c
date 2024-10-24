/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniklar <miniklar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:31:30 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/24 16:43:35 by miniklar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strchr(const char *s, int c)
{
    while (s)
    {
        if (*s == (const char)c)
            return ((char *)s);
        else
            s++;
    }
    return (NULL);
}

/*int main(void)
{
    printf("%s\n", ft_strchr("pofpojfpqofjeifjefisefjefsjifsfijsoefjsoiefjosiejfisjefsjifojsifjsijfsioefjsifjsezsejfsoiefjsojifeosjefosijefosijefosjefsoifjsef", 'z'));
}*/