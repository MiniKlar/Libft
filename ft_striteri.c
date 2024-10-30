/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniklar <miniklar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 22:44:39 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/31 00:26:39 by miniklar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t  i;

    i = 0;
    while (s[i] != '\0')
    {
        f(i,s);
        i++;
    }
}
int main(void)
{
    char *s = "SALUT";


    ft_striteri(s, (ft_tolower(*s)(0, s)));
}