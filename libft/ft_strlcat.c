/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtetwa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 13:17:18 by smtetwa           #+#    #+#             */
/*   Updated: 2018/06/07 13:17:22 by smtetwa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t d_size;
	size_t s_size;

	i = 0;
	s_size = 0;
	while (dst[i])
		i++;
	while (src[s_size])
		s_size++;
	d_size = i;
	while (*src && i + 1 < size)
		dst[i++] = *(src++);
	dst[i] = 0;
	return (s_size + ((d_size > size) ? size : d_size));
}
