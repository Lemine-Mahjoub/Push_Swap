/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:16:16 by grey              #+#    #+#             */
/*   Updated: 2024/02/24 21:28:03 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	sa(t_stack *a)
	{
	int	value_1;
	int	value_2;

	value_1 = depush(a);
	value_2 = depush(a);
	if (value_1 == -1)
	{
		return ;
	}
	if (value_2 == -1)
	{
		push(a, value_1);
		return ;
	}
	push(a, value_1);
	push(a, value_2);
}

void	sb(t_stack *b)
{
	sa(b);
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}
