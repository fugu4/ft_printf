/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogi <hnogi@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:57:12 by hnogi             #+#    #+#             */
/*   Updated: 2025/05/24 22:58:23 by hnogi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int countdigit(unsigned int n)
{
	int count;
	count = 0;
		
	if(n == 0)
		return(1);
	while(n > 0)
	{
		n /= 10;
		count++;
	}
	return(count);
}

int ft_print_hex(unsigned int num, const char format)
{
    char *number;
    char *hex;
    int i;
    int len;

    hex = "0123456789ABCDEF";
    if(format == 'x')
        hex = "0123456789abcdef";
    
    if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}

    len = count_digit(num);
    number = (char *)malloc(sizeof(char) * (len + 1));
    number[len + 1] = '\0';
    
    while(num > 0)
    {
        
    }
}
