/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:45:13 by rosferna          #+#    #+#             */
/*   Updated: 2022/01/27 20:46:15 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_aux(unsigned long int n);

int ft_pointer(unsigned long int n)
{
	int counter;
	
	counter += write(1, "0x", 2);
	counter += ft_aux(n);
	return (counter);
}

int	ft_aux(unsigned long int n)
{
	int	counter = 1;
	char *hex;

	hex = "0123456789abcdef";
	if (n >= 16)
	{
		ft_hex_num_lowercase(n / 16);
		counter++;
	}
	n = n % 16;
	write(1, &hex[n], 1);
	return (counter);
}

int main ()
{
	char *s ="r";
	char *x ="r9";
	printf("%p\n", x);
	ft_pointer((unsigned long int)s);
}