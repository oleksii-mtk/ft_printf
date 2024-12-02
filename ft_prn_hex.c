/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prn_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatyko <omatyko@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:56:49 by omatyko           #+#    #+#             */
/*   Updated: 2024/12/02 18:01:41 by omatyko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int prn_hex(unsigned int num,const int base,const int upper)
{
        char    *nmb;
        int     c;
        int     cr;

        c = 0;
        cr = 0;
        nmb = "0123456789abcdef";
        if (num > base)
		cr = prn_hex(num / base, base, upper);
	if (cr == -1)
		return (-1);
	if ((nmb[num % base]) >= 'a' && (nmb[num % base]) <= 'f' && upper )
		c = prn_char(nmb[num % base] - 32);
	else
		c = prn_char(nmb[num % base]);
	if (c == -1)
		return (-1);
	return (c + cr);
}
