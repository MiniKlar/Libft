/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniklar <miniklar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:04:56 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/21 00:04:56 by miniklar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(char *string)
{
    int i;
    i = 0;

    while (*string)
    {
        i++;
        string++;
    }
    return (i);
}

/*int main(void)
{
    char str[100] = "Salut";
    printf("%d\n", strlen(str));
}*/