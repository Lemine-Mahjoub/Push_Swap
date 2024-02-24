/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:31:07 by grey              #+#    #+#             */
/*   Updated: 2024/02/24 23:20:44 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <stdlib.h>

#include <unistd.h>

void	new_stack(t_stack *pile)
{
	pile->size = 0;
	pile->data = 0;
	pile->next = (t_stack *)malloc(sizeof(t_stack));
}

void	push(t_stack *pile, int data)
{
	int		old_data;
	int		size;
	t_stack	*next;

	doublon(*pile, data);
	old_data = pile->data;
	size = pile->size;
	next = pile->next;
	pile->data = data;
	pile->size = size + 1;
	pile->next = (t_stack *)malloc(sizeof(t_stack));
	pile->next->data = old_data;
	pile->next->size = size;
	pile->next->next = next;
}

int	depush(t_stack	*pile)
{
	int		data;
	int		size;
	t_stack	*next;

	if (pile->size == 0)
	{
		return (-1);
	}
	data = pile->data;
	size = pile->size;
	next = pile->next;
	pile->data = next->data;
	pile->size = size - 1;
	pile->next = next->next;
	free(next);
	return (data);
}

void	doublon(t_stack pile, int data)
{
	while (pile.size > 0)
	{
		if (pile.data == data)
		{
			write(1, "Error\n", 6);
			exit(2);
		}
		pile = *pile.next;
	}
}
