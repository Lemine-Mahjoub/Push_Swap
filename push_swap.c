/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:20:18 by grey              #+#    #+#             */
/*   Updated: 2024/02/24 21:50:14 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"lib/lib.h"
#include <stdio.h>

void tri_lemmings(t_stack *a, t_stack *b)
{
	// on verif d'abbord la premiere valeur de la pile a et la second valeur de la pile a
	// si la premiere valeur est plus grande que la seconde, on deplace la premiere dans la pile b
	// dans la pile b on verifie et on place bien la valeur au bonne endroit avec les swap
	while(a->size > 1)
	{
		if(a->data > a->next->data){
			pb(a, b);
		}
		else{
			ra(a);
		}

	}
}


int	main()
{
	t_stack	a;
	t_stack	b;
	new_stack(&a);
	new_stack(&b);
	push(&a, 8);
	push(&a, 6);
	push(&a, 5);
	push(&a, 4);
	push(&a, 3);

	tri_lemmings(&a, &b);
	while(b.size > 0)
	{
		pa(&a, &b);
	}
	return 0;
	
}
