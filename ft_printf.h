/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatyko <omatyko@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:34:43 by omatyko           #+#    #+#             */
/*   Updated: 2024/12/03 17:41:27 by omatyko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
int	prn_char(char c);
int	prn_str(const char *str);
int	prn_u_hex(unsigned int num, unsigned int base, const int upper);
int     prn_nbr(int num);

#endif
