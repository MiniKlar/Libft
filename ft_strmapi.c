/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniklar <miniklar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:12:03 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/31 00:26:38 by miniklar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    size_t  i;
    char    *new_s;

    i = 0;
    new_s = malloc((sizeof(char) * ft_strlen(s)) + 1);
    if (!new_s)
        return (NULL);
    while (s[i] != '\0')
    {
        new_s[i] = f(i, *s);
        i++;
    }
    new_s[i] = '\0';
    return(new_s);
}
int main(void)
{
    char *s = "SALUT";

    ft_strmapi(s, )
}