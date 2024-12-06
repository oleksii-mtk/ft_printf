/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prn_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatyko <omatyko@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:13:12 by omatyko           #+#    #+#             */
/*   Updated: 2024/12/06 13:03:54 by omatyko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	prn_nbr(int num)
{
	int	c;
	int	cr;

	c = 0;
	cr = 0;
	if (num < 0)
	{
		if (num == -2147483648)
			return (prn_str("-2147483648"));
		c = prn_char('-');
		if (c == -1)
			return (-1);
		num = -num;
	}
	if (num >= 10)
		cr = prn_nbr(num / 10);
	if (cr == -1)
		return (-1);
	if (prn_char((num % 10) + '0') == -1)
		return (-1);
	return (c + cr + 1);
}
