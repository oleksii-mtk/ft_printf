/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prn_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatyko <omatyko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:56:49 by omatyko           #+#    #+#             */
/*   Updated: 2024/12/06 00:41:10 by omatyko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	prn_ptr(uintptr_t num, char *prefix)
{
	char	*nmb;
	int		c;
	int		cr;

	nmb = "0123456789abcdef";
	c = 0;
	cr = 0;
	if (!num)
		return prn_str("(nil)");
	if (*prefix)
		c = prn_str(prefix);
	if (c == -1)
		return (-1);
	if (num >= 16)
		cr = prn_ptr(num / 16, "");
	if (cr == -1)
		return (-1);
	if (prn_char(nmb[num % 16]) == -1)
		return (-1);
	return (c + cr + 1);
}
