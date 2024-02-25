/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:44:52 by grey              #+#    #+#             */
/*   Updated: 2024/02/25 01:34:43 by grey             ###   ########.fr       */
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
int		is_int(const char *str);
int		is_sorted(t_stack *pile);
int		is_digit(char c);
int		char_to_int(const char *str);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);
void	checker(t_stack	*pile);
int		is_sorted(t_stack *pile);
int		tri_lemmings(t_stack *a, t_stack *b);
void	doublon(t_stack pile, int data);
void	rotate_or_go_up(t_stack *a, t_stack *b, long int *i);

#endif