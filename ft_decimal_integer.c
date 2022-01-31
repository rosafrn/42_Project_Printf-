/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_integer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:45:03 by rosferna          #+#    #+#             */
/*   Updated: 2022/01/31 20:52:43 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal_integer(int n)
{
	int	counter;

	counter = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(1, "-2147483648", 11);
			return (11);
		}
		write(1, "-", 1);
		n = -n;
		counter++;
	}
	if (n >= 10)
	{
		counter += ft_decimal_integer(n / 10);
	}
	n = n % 10 + 48;
	counter += write(1, &n, 1);
	return (counter);
}
