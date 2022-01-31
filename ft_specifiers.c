/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifiers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:44:58 by rosferna          #+#    #+#             */
/*   Updated: 2022/01/31 20:57:48 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_specifiers(char spcf)
{
	if (spcf == 'c')
		return (ft_char);
	else if (spcf == 's')
		return (ft_string);
	else if (spcf == 'p')
		return (ft_pointer);
	else if (spcf == 'd' || spcf == 'i')
		return (ft_decimal_integer);
	else if (spcf == 'u')
		return (ft_unsigned_decimal);
	else if (spcf == 'x')
		return (ft_hex_num_lowercase);
	else if (spcf == 'X')
		return (ft_hex_num_uppercase);
	return (0);
}
