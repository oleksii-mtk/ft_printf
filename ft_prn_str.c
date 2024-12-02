/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prn_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatyko <omatyko@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:41:07 by omatyko           #+#    #+#             */
/*   Updated: 2024/12/02 17:42:41 by omatyko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	prn_str(const char *str)
{
	int	c;
	int	res;

	c = 0;
	res = 0;
	if (str == NULL)
		return (printstr("(null)"));
	while (*str)
	{
		res = printchar(*str);
		if (res == -1)
			return (-1);
		c += res;
		str++;
	}
	return (c);
}
