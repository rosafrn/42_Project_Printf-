/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_num_uppercase.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:45:00 by rosferna          #+#    #+#             */
/*   Updated: 2022/01/31 20:53:07 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_num_uppercase(unsigned int n)
{
	int		counter;
	char	*hex;

	counter = 0;
	hex = "0123456789ABCDEF";
	if (n >= 16)
	{
		counter += ft_hex_num_uppercase(n / 16);
	}
	n = n % 16;
	counter += write(1, &hex[n], 1);
	return (counter);
}
