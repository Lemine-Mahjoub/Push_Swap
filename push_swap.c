/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:20:18 by grey              #+#    #+#             */
/*   Updated: 2024/02/24 21:31:02 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"lib/lib.h"
#include <stdio.h>

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

	int value;

	while(a.size	> 1)

	return 0;
	
}
