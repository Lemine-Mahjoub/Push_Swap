/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grey <grey@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:44:52 by grey              #+#    #+#             */
/*   Updated: 2024/02/24 20:14:03 by grey             ###   ########.fr       */
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
void	s(t_stack *a);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	rab(t_stack *a);
void	rrab(t_stack *a);
void	rr(t_stack *a, t_stack *b);
void	rrr(t_stack *a, t_stack *b);
void	sab(t_stack *a);

#endif