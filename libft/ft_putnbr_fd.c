/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtetwa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 13:14:52 by smtetwa           #+#    #+#             */
/*   Updated: 2018/06/07 13:15:00 by smtetwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0 && n * (-1) != n)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n % 10 != n)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd(n % 10 > 0 ? n % 10 + '0' : n % 10 * (-1) + '0', fd);
}
