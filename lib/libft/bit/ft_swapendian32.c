/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapendian32.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 17:27:42 by jochang           #+#    #+#             */
/*   Updated: 2019/04/18 07:22:52 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint32_t	ft_swapendian32(uint32_t i)
{
	return (((i >> 24) & 0xFF) | ((i >> 8) & 0xFF00) |
			((i << 8) & 0xFF0000) | ((i << 24) & 0xFF000000));
}