/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:52:40 by rosferna          #+#    #+#             */
/*   Updated: 2022/01/26 18:33:51 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

int	ft_specifiers(const char* spcf)
{
	if (spcf == 'c')
	if (spcf == 's')
	if (spcf == 'p')
	if (spcf == 'd')
	if (spcf == 'i')
	if (spcf == 'u')
	if (spcf == 'x')
	if (spcf == 'X')
	if (spcf == '%')
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