
#include <stdio.h>
#include <unistd.h>
int printchar(char c)
{
	return write(1,&c,1);
}

int printnum(int num, int base)
{
    char    *numbers;
    int c;
    int cr;

    numbers = "0123456789ABCDEF";
    if (num == 0) // Base case
    {
        c = printchar('0');
        if (c == -1)
        return (-1);
        else
        return (c);

    }


    cr = printnum(num / base, base);
    if (cr == -1)
        return (-1);
    c = printchar(numbers[num % base]);
        if (c == -1)
        return (-1);
    return (c + cr);
}

int main()
{

    int res;
	printf("Hello World\n");
	res = printnum(9,10);
	dprintf(2,"%d\n",res);


	return 0;
}