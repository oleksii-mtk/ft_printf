/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prn_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatyko <omatyko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:56:49 by omatyko           #+#    #+#             */
/*   Updated: 2024/12/05 23:19:01 by omatyko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	prn_ptr(unsigned int num)
{
	char	*nmb;
	int		c;
	int		cr;
	int		cp;

	c = 0;
	cr = 0;
	cp = 0;
	if (num == NULL)
		cp = prn_str('(nil)');
	else
		cp = prn_str('0x');
	if (cp == -1)
		return (-1);
	nmb = "0123456789abcdef";
	if (num >= 16)
		cr = prn_u_hex(num / 16, 16, 'x');
	if (cr == -1)
		return (-1);
	c = prn_char(nmb[num % 16]);
	if (c == -1)
		return (-1);
	return (c + cr + cp);
}
