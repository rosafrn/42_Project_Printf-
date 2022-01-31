/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:52:40 by rosferna          #+#    #+#             */
/*   Updated: 2022/01/31 15:37:51 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_specifiers(const char *spcf)
{
	va_list	list;
	int	counter;

	counter = 0;
	if (*spcf == 'c' || *spcf == 's' || *spcf == '%')
		counter = ft_string(va_arg(list, const char *));
	else if (*spcf == 'p')
		counter = ft_pointer(va_arg(list, unsigned long int));
	else if (*spcf == 'd' || *spcf == 'i')
		counter = ft_decimal_integer(va_arg(list, int));
	else if (*spcf == 'u')
		counter = ft_unsigned_decimal(va_arg(list, unsigned int));
	else if (*spcf == 'x')
		counter = ft_hex_num_lowercase(va_arg(list, unsigned int));
	else if (*spcf == 'X')
		counter = ft_hex_num_uppercase(va_arg(list, unsigned int));
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		counter;

	counter = 0;
	va_start(list, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
		//counter += ((int (*)())ft_func_select(format[i++]))(va_arg(n_arg, void *));
			counter += ft_specifiers(format++);
		}
		else
			counter += write(1, &format, 1);
		format++;
	}
	va_end(list);
	return (counter);
}