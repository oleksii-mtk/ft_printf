/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prn_u_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatyko <omatyko@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:50:37 by omatyko           #+#    #+#             */
/*   Updated: 2024/12/11 13:50:39 by omatyko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	prn_u_hex(unsigned int num, unsigned int base, char upper)
{
	char	*nmb;
	int		c;
	int		cr;

	c = 0;
	cr = 0;
	nmb = "0123456789abcdef";
	if (num >= base)
		cr = prn_u_hex(num / base, base, upper);
	if (cr == -1)
		return (-1);
	if ((nmb[num % base]) >= 'a' && (nmb[num % base]) <= 'f' && upper == 'X')
		c = prn_char(nmb[num % base] - 32);
	else
		c = prn_char(nmb[num % base]);
	if (c == -1)
		return (-1);
	return (c + cr);
}
