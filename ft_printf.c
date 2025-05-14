/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogi <hnogi@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:01:24 by hnogi             #+#    #+#             */
/*   Updated: 2025/05/13 19:27:44 by hnogi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_process_format(char format, va_list args)
{
	if(format == 'c')
		return(ft_print_char(va_arg(args, int)));
	else if(format == 's')
		return()
}

int ft_printf(const char *format, ...)
{
	va_list args;
	int count;
	int i;
	
	if(!format)
	 return(-1);
	va_start(args, format);
	 count = 0;
	 i = 0;
	 while(format[i] != '\0')
	 {
		if(format[i] == '%' && format[i + 1])
		{
			i++;
			count += ft_process_format(format[i], args);
		}
		else if(format[i] != '%')
			count += ft_putchar(format[i]);
			i++;
	 }
	 va_end(args);
	 return(count);
}
