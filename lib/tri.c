/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 00:58:10 by grey              #+#    #+#             */
/*   Updated: 2024/02/25 04:25:06 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <unistd.h>

void	rotate_or_go_up(t_stack *a, t_stack *b, long int *i)
{
	if (a->data > a->next->data)
	{
		pb(a, b);
		write(1, "pb\n", 3);
		(*i)++;
	}
	else
	{
		ra(a);
		write(1, "ra\n", 3);
		(*i)++;
	}
}

int	tri_lemmings(t_stack *a, t_stack *b)
{
	long int	i;

	i = 0;
	while (a->size > 0)
	{
		if (a->size == 1)
			return (i);
		if (a->size == 2)
		{
			if (a->data > a->next->data)
			{
				sa(a);
				write(1, "sa\n", 3);
				i++;
				return (i);
			}
			return (i);
		}
		rotate_or_go_up (a, b, &i);
	}
	return (i);
}

void	tri_lemmings_silencieux(t_stack *a, t_stack *b)
{
	while (a->size > 0)
	{
		if (a->size == 1)
			return ;
		if (a->size == 2)
		{
			if (a->data > a->next->data)
			{
				sa(a);
				return ;
			}
			return ;
		}
		if (a->data > a->next->data)
		{
			pb(a, b);
		}
		else
		{
			ra(a);
		}
	}
	return ;
}
