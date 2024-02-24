/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:44:52 by grey              #+#    #+#             */
/*   Updated: 2024/02/24 17:52:30 by grey             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

typedef struct t_stack
{
	int				data;
	int				size;
	struct t_stack	*next;
}	t_stack;
void	new_stack(t_stack *pile);
int		depush(t_stack *pile);
void	push(t_stack *pile, int data);

#endif