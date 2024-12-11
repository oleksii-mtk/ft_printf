/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omatyko <omatyko@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:49:50 by omatyko           #+#    #+#             */
/*   Updated: 2024/12/11 13:49:54 by omatyko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdint.h>
# include <unistd.h>

int	print_non_def_prefix(const char *str);
int	is_alpha(const char *str);
int	is_prefix(const char *str);
int	prn_ptr(uintptr_t num, char *prefix);
int	prn_char(char c);
int	prn_str(const char *str);
int	prn_u_hex(unsigned int num, unsigned int base, char upper);
int	prn_nbr(int num);
int	ft_printf(const char *str, ...);

#endif
