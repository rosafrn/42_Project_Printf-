/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:45:23 by rosferna          #+#    #+#             */
/*   Updated: 2022/01/31 15:38:16 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		LIBFTPRINTF_H
# define	LIBFTPRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int	ft_hex_num_lowercase(unsigned int n);
int	ft_hex_num_uppercase(unsigned int n);
int	ft_decimal_integer(int n);
int	ft_pointer(unsigned long int n);
int	ft_string(const char *s);
int	ft_unsigned_decimal(unsigned int n);

#endif