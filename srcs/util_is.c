/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_is.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaron-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 17:19:57 by lmaron-g          #+#    #+#             */
/*   Updated: 2019/01/07 17:20:01 by lmaron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_flag(char c)
{
	if (c == '-' || c == '+' || c == ' ' || c == '#' || c == '0')
		return (1);
	return (0);
}

int	is_type(char c)
{
	if (c == 'd' || c == 'i' || c == 'u' || c == 'o' || c == 'x' \
	|| c == 'D' || c == 'U' || c == 'O' || c == 'C' || c == 'S'  \
	|| c == 'X' || c == 'f' || c == 'c' || c == 's' || c == 'p' || c == '%')
		return (1);
	return (0);
}

int	is_right(char c)
{
	if (c == 'd' || c == 'i' || c == 'u' || c == 'o' || c == 'x'          \
	|| c == 'D' || c == 'U' || c == 'O' || c == 'C' ||  c == 'S'           \
	|| c == 'X' || c == 'f' || c == 'c' || c == 's' || c == 'p' || c == '%' \
	|| c == '-' || c == '+' || c == ' ' || c == '#' || c == '0' || c == 'h'  \
	|| c == 'l' || c == 'L' || c == 'z' || c == 'j' || c == '*' || c == '.'   \
	|| ('0' <= c && c <= '9'))
		return (1);
	return (0);
}
