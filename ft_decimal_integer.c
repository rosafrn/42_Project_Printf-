/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_integer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:45:03 by rosferna          #+#    #+#             */
/*   Updated: 2022/01/31 15:37:34 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_integer(int n)
{
	static int	counter = 1;

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
		ft_integer(n / 10);
		counter++;
	}
	n = n % 10 + 48;
	write(1, &n, 1);
	return (counter);

}

/*int ptrnumb(long long int n, char *base)
{
	int counter;

	counter = 0;
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
		counter++;
	}
	if (n >= strlen(base))
		counter += ptrnumb(n / (long long int)strlen(base), base);
	counter += write(1, &base[n % strlen(base)], 1);
	return (counter);
}*/
