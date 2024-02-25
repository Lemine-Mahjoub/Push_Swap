/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:35:43 by grey              #+#    #+#             */
/*   Updated: 2024/02/25 04:53:43 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_int(const char *str)
{
	if (*str == '+' || *str == '-')
		str++;
	if (!*str)
		return (0);
	while (*str)
	{
		if (!is_digit(*str))
			return (0);
		str++;
	}
	return (1);
}

long long int	char_to_int(char **str_ptr)
{
	char			*str;
	long long int	result;
	int				sign;

	str = *str_ptr;
	result = 0;
	sign = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (is_digit(*str))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	*str_ptr = str;
	return (result * sign);
}
