/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniklar <miniklar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:04:52 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/21 00:05:09 by miniklar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
    while (*s)
    {
        write(fd, &*s, 1);
        *s++;
    }
}

/*int main(void)
{
    ft_putstr_fd("Salut\n", 1);
}*/