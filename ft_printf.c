/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:52:40 by rosferna          #+#    #+#             */
/*   Updated: 2022/01/27 20:20:53 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specifiers(const char *spcf)
{
	int	count;

	if (spcf == 'c' || spcf == 's' || spcf == '%')
		count = ft_string(const char *spcf);
	else if (spcf == 'p')
		count = ft_pointer(unsigned long int spcf);
	else if (spcf == 'd' || spcf == 'i')
		count = ft_decimal_integer(int spcf);
	else if (spcf == 'u')
		count = ft_unsigned_decimal(unsigned int spcf);
	else if (spcf == 'x')
		count = ft_hex_num_lowercase(unsigned int spcf);
	else if (spcf == 'X')
		count = ft_hex_num_uppercase(unsigned int spcf);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		count;

	count = 0;
	va_start(list, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			count += ft_specifiers(format++);
			va_arg(list, (void *));
		}
		else
			count += write(1, &format, 1);
		format++;
	}
	va_end(list);
	return (count);
}