/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatyko <omatyko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 22:19:35 by omatyko           #+#    #+#             */
/*   Updated: 2024/11/27 00:03:29 by omatyko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>

static void	ft_putchar(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

static void	ft_putstr(char *s, int *count)
{
	if (!s)
		s = "(null)";
	while (*s)
		ft_putchar(*s++, count);
}

static void	ft_putnbr(int n, int *count)
{
	if (n < 0)
	{
		ft_putchar('-', count);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10, count);
	ft_putchar(n % 10 + '0', count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count = 0;

	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == 'c')
				ft_putchar(va_arg(args, int), &count);
			else if (*str == 's')
				ft_putstr(va_arg(args, char *), &count);
			else if (*str == 'd')
				ft_putnbr(va_arg(args, int), &count);
			else if (*str == '%')
				ft_putchar('%', &count);
		}
		else
			ft_putchar(*str, &count);
		str++;
	}
	va_end(args);
	return (count);
}

int main()
{
	int count = ft_printf("This is a string: %s, a number: %d, and a char: %c\n", "Hello", 42, 'A');
	ft_printf("Characters printed: %d\n", count);
	return (0);
}
