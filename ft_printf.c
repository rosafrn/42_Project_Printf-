/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:52:40 by rosferna          #+#    #+#             */
/*   Updated: 2022/01/31 20:55:58 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		counter;
	int		i;

	counter = 0;
	i = 0;
	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (ft_strchr("csidupxX", format[i]))
			{
				counter += ((int (*)())ft_specifiers(format[i++]))
					(va_arg(list, void *));
				continue ;
			}
		}
		counter += write(1, &format[i], 1);
		i++;
	}
	va_end(list);
	return (counter);
}
