/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prn_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatyko <omatyko@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:13:12 by omatyko           #+#    #+#             */
/*   Updated: 2024/12/03 17:59:30 by omatyko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	prn_nbr(int num)
{
	int		c;
	int		cr;
	
	c = 0;
	cr = 0;
	if (num < 0)
	{
		c = prn_char('-');
		if (c == -1)
			return (-1);
		num = -num;
	}
	if (num >= 10)
		cr = prn_nbr(num / 10);
	if (cr == -1)
		return (-1);
	c = prn_char((num % 10) + '0');
	if (c == -1)
		return (-1);
	return (c + cr);
}
