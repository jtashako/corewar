/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 01:27:31 by jochang           #+#    #+#             */
/*   Updated: 2018/05/25 17:51:46 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	(n < 0 ? ft_putchar('-') : 0);
	n *= (n > 0 ? -1 : 1);
	(n <= -10 ? ft_putnbr(-(n / 10)) : 0);
	ft_putchar('0' - n % 10);
}
