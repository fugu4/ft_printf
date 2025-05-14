/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogi <hnogi@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:00:15 by hnogi             #+#    #+#             */
/*   Updated: 2025/05/13 16:46:40 by hnogi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_F
# define FT_PRINT_F

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int ft_printf(const char *format, ...);
int ft_putchar(char c);

#endif
