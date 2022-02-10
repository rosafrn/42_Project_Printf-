/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosferna <rosferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:45:23 by rosferna          #+#    #+#             */
/*   Updated: 2022/02/10 15:07:10 by rosferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_specifiers(va_list list, char spcf);
int		ft_char(int c);
int		ft_hex_num_lowercase(unsigned int n);
int		ft_hex_num_uppercase(unsigned int n);
int		ft_decimal_integer(int n);
int		ft_pointer(unsigned long int n);
int		ft_string(char *s);
int		ft_unsigned_decimal(unsigned int n);
char	*ft_strchr(const char *s, char c);

#endif