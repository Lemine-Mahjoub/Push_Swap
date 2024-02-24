/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:25:57 by grey              #+#    #+#             */
/*   Updated: 2024/02/24 23:35:22 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	pa(t_stack *a, t_stack *b)
{
	int	value;

	if (b->size == 0)
	{
		return ;
	}
	else
	{
		value = depush(b);
		push(a, value);
	}
}

void	pb(t_stack *a, t_stack *b)
{
	pa(b, a);
}
