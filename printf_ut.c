#include "ft_printf.h"

int ft_putchar(char c)
{
	return(write(1, &c, 1));
}

int ft_strlen(char *str)
{
	int len;
	len = 0;

	if(!str)
		return(0);
	while(str[len])
		len++;
	return(len);
}

int ft_putstr(char *str)
{
	int len;
	if(!str)
		return(0);
	len = ft_strlen(str);
	return(write(1, str, len))
}

int ft_countdigit(int n)
{
	int count;
	count = 0;
		
	if(n == 0)
		return(count++)
	while(n > 9)
	{
		n / 10;
		count++;
	}
	return(count);
}

char *ft_itoa(int n)
{
	char *num;
	int sign;

	sign = 0;
	if(n < 0)
	{
		sign = 1;
		n *= -1;
	}	
	num = (char *)malloc(sizeof (char) * (ft_countdigit(n)+ sign + 1));



}


