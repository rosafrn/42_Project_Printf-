/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:52:40 by rosferna          #+#    #+#             */
/*   Updated: 2022/02/10 15:06:01 by rosferna         ###   ########.fr       */
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
				counter += ft_specifiers(list, format[i++]);
				continue ;
			}
		}
		counter += write(1, &format[i], 1);
		i++;
	}
	va_end(list);
	return (counter);
}
