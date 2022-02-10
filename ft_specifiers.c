/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifiers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:44:58 by rosferna          #+#    #+#             */
/*   Updated: 2022/02/10 15:07:03 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specifiers(va_list list, char spcf)
{
	if (spcf == 'c')
		return (ft_char(va_arg(list, int)));
	else if (spcf == 's')
		return (ft_string(va_arg(list, char *)));
	else if (spcf == 'p')
		return (ft_pointer(va_arg(list, unsigned long int)));
	else if (spcf == 'd' || spcf == 'i')
		return (ft_decimal_integer(va_arg(list, int)));
	else if (spcf == 'u')
		return (ft_unsigned_decimal(va_arg(list, unsigned int)));
	else if (spcf == 'x')
		return (ft_hex_num_lowercase(va_arg(list,unsigned int)));
	else if (spcf == 'X')
		return (ft_hex_num_uppercase(va_arg(list, unsigned int)));
	return (0);
}
