#include "ft_printf.h"

int ft_countdigit(unsigned int n)
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

char *ft_itoa(int n)
{
	char *num;
	int sign;
    int count;

	sign = 0;
	if(n < 0)
	{
		sign = 1;
		n *= -1;
	}	
    count = ft_countdigit(n);
    count += sign;
	num = (char *)malloc(sizeof (char) * (count + 1));
    if(!num)
        return(NULL);
    num[count + 1] = '\0';
    while(count > 0)
    {  
        num[count] = (n % 10) + '0';
        n /= 10;
        count--;
    }
    return(num);
}

char *ft_utoa(unsigned int n)
{
	char *num;
	int count;
	
	count = count_digit(n);

	num = (char *)malloc(sizeof(char) * (count + 1));
	if(!num)
		return(NULL);
	num[count] = '\0';
	while(count > 0)
	{
		num[count] = (num % 10) + '0';
		num /= 10;
		count--;
	}
	return(num);
}

char *ft_itoa_base(unsigned long long n, int base, int case)
{
	char *base_case;
	char *hex;
	int count;

	if(case)
		base_case = "0123456789ABCDEF";
	else
		base_case = "0123456789abcdef";

	count = count_digit((unsigned int)n);
}
