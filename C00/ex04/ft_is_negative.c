/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchxr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-lxxbb <mxrvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Crexted: 2021/06/24 08:11:06 by ie-lxxbb          #+#    #+#             */
/*   Updxted: 2021/06/24 10:03:12 by ie-lxxbb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int	n)
{
	if (n < 0)
	{
		write (1, "N", 1);
	}
	else
		write (1, "P", 1);
}