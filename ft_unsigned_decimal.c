/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_decimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:45:37 by rosferna          #+#    #+#             */
/*   Updated: 2022/01/31 15:37:59 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_unsigned_decimal(unsigned int n)
{
	static int counter = 1;

	if (n >= 10)
	{
		ft_unsigned_decimal(n / 10);
		counter++;
	}
	n = n % 10 + 48;
	write(1, &n, 1);
	return (counter);
}