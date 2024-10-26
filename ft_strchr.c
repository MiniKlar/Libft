/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomont <lomont@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:31:30 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/26 23:04:54 by lomont           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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