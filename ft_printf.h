/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogi <hnogi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 17:02:08 by hnogi             #+#    #+#             */
/*   Updated: 2025/05/25 21:01:38 by hnogi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		print_pointer(unsigned long long ptr);
int		print_decimal(int n);
int		print_unsigned(unsigned int n);
int		print_hex(unsigned int num, const char format);
int		print_percent(void);

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*itoa_base(long long n, int base);
char	*utoa_base(unsigned long long n, int base);

#endif
