
#include <stdio.h>
#include <unistd.h>
int printchar(char c)
{
	return write(1,&c,1);
}

int printnum(int num,const int base,const int upper)
{
	char    *numbers;
	int	c;
	int	cr;

	c = 0;
	cr = 0;
	if (num < 0)
	{
		c = printchar('-');
		if (c == -1)
    		return (-1);
		num = -num;
	}
    numbers = "0123456789abcdef";
	if (num > base)
	   	cr = printnum(num / base, base, upper);
	if (cr == -1)
		return (-1);
	if ((numbers[num % base]) >= 'a' && (numbers[num % base]) <= 'f' && upper )
	c = printchar(numbers[num % base] - 32);
	else
	c = printchar(numbers[num % base]);
    if (c == -1)
    	return (-1);
	return (c + cr);
}
int	printstr(const char *str)
{
	int	c;
	int res;

	c = 0;
	res = 0;
	if (str == NULL)
		return (printstr("(null)"));
	while (*str)
	{
		res = printchar(*str);
		if (res == -1)
    		return (-1);
		c += res;
		str++;
	}
	return (c);

}

int main()
{

    int res;
	char	*strg;

	strg = NULL;
	//res = printnum(255,16,1);
	res = printstr(strg);
	dprintf(2,"\n");
	dprintf(2,"Printed %d\n",res);
	return (0);
}
