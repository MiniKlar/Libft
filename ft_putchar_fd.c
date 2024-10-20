/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miniklar <miniklar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:04:50 by miniklar          #+#    #+#             */
/*   Updated: 2024/10/21 00:05:10 by miniklar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

/*int main(void)
{
    ft_putchar_fd('l', 2);
    ft_putchar_fd('\n', 2);
}*/