/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatyko <omatyko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 22:19:35 by omatyko           #+#    #+#             */
/*   Updated: 2024/12/06 00:39:39 by omatyko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

static int case_next_symbol(va_list args, const char *str, int *count)
{
    int res;

    if (*str == 'c')
        res = prn_char(va_arg(args, int));
    else if (*str == 's')
        res = prn_str(va_arg(args, char *));
	else if (*str == 'p')
		res = prn_ptr(va_arg(args, uintptr_t), "0x");
    else if (*str == 'd' || *str == 'i')
        res = prn_nbr(va_arg(args, int));
    else if (*str == 'x' || *str == 'X')
        res = prn_u_hex(va_arg(args, unsigned int), 16, *str);
    else if (*str == 'u')
        res = prn_u_hex(va_arg(args, unsigned int), 10, '0');
    else if (*str == '%')
        res = prn_char('%');
    else
        res = -1;

    if (res == -1)
        return (-1);

    *count += res;
    return (0);
}


int ft_printf(const char *str, ...)
{
    va_list args;
    int count = 0;
    int res;

    va_start(args, str);
    while (*str)
    {
        if (*str == '%')
        {
            str++; // Skip '%'
            if (*str && case_next_symbol(args, str, &count) == -1)
                return (-1);
        }
        else
        {
            res = prn_char(*str);
            if (res == -1)
                return (-1);
            count += res;
        }
        str++;
    }
    va_end(args);
    return (count);
}
