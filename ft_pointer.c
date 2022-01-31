/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:45:13 by rosferna          #+#    #+#             */
/*   Updated: 2022/01/31 20:55:04 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_aux(unsigned long int n);

int	ft_pointer(unsigned long int n)
{
	int	counter;

	counter = write(1, "0x", 2);
	counter += ft_aux(n);
	return (counter);
}

int	ft_aux(unsigned long int n)
{
	int		counter;
	char	*hex;

	counter = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		counter += ft_aux(n / 16);
	n = n % 16;
	counter += write(1, &hex[n], 1);
	return (counter);
}
