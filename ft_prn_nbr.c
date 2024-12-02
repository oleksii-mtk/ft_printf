/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prn_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatyko <omatyko@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:13:12 by omatyko           #+#    #+#             */
/*   Updated: 2024/12/02 18:16:25 by omatyko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	prn_nbr(int num, const int base)
{
	char	*numbers;
	int		c;
	int		cr;

	c = 0;
	cr = 0;
	if (num < 0)
	{
		c = printchar('-');
		if (c == -1)
			return (-1);
		num = -num;
	}
	numbers = "0123456789";
	if (num > base)
		cr = printnum(num / base, base);
	if (cr == -1)
		return (-1);
	c = printchar(numbers[num % base]);
	if (c == -1)
		return (-1);
	return (c + cr);
}
