/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_num_uppercase.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:45:00 by rosferna          #+#    #+#             */
/*   Updated: 2022/01/27 20:16:06 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_num_uppercase(unsigned int n)
{
	static int	counter = 1;
	char *hex;

	hex = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_hex_num_uppercase(n / 16);
		counter++;
	}
	n = n % 16;
	write(1, &hex[n], 1);
	return (counter);
}