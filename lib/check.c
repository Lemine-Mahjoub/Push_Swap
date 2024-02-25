/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 22:41:28 by grey              #+#    #+#             */
/*   Updated: 2024/02/25 03:53:15 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <unistd.h>

int	is_sorted(t_stack *pile)
{
	while (pile->size > 1)
	{
		if (pile->data > pile->next->data)
		{
			return (0);
		}
		pile = pile->next;
	}
	return (1);
}

void	checker(t_stack	*pile)
{
	if (is_sorted(pile))
	{
		write(1, "OK\n", 3);
	}
	else
	{
		write(1, "KO\n", 3);
	}
}
