/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:16:16 by grey              #+#    #+#             */
/*   Updated: 2024/02/24 23:47:36 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <unistd.h>

void	sa(t_stack *a)
	{
	int	value_1;
	int	value_2;

	if (a->size < 2)
		return ;
	value_1 = depush(a);
	value_2 = depush(a);
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
