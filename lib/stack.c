/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:31:07 by grey              #+#    #+#             */
/*   Updated: 2024/02/24 14:58:36 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <stdlib.h>

void	new_stack(s_stack *pile)
{
	pile->size = 0;
	pile->data = 0;
	pile->next = (s_stack *)malloc(sizeof(s_stack));
}

void	push(s_stack *pile, int data)
{
	int		old_data;
	int		size;
	s_stack	*next;

	old_data = pile->data;
	size = pile->size;
	next = pile->next;
	pile->data = data;
	pile->size = size + 1;
	pile->next = (s_stack *)malloc(sizeof(s_stack));
	pile->next->data = old_data;
	pile->next->size = size;
	pile->next->next = next;
}

int	depush(s_stack	*pile)
{
	int		data;
	int		size;
	s_stack	*next;

	data = pile->data;
	size = pile->size;
	next = pile->next;
	pile->data = next->data;
	pile->size = size - 1;
	pile->next = next->next;
	free(next);
	return (data);
}

int	main(void)
{
	return (0);
}
