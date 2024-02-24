/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:35:43 by grey              #+#    #+#             */
/*   Updated: 2024/02/24 19:01:22 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_int(const char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	if (*str == '+' || *str == '-')
	{
		str++;
		if (*str == '\0')
		{
			return (0);
		}
	}
	while (*str != '\0')
	{
		if (!is_digit((unsigned char)*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	char_to_int(const char *str)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign = -1;
		}
		str++;
	}
	while (is_digit((unsigned char)*str))
	{
		n = n * 10 + *str - '0';
		str++;
	}
	return (n * sign);
}
