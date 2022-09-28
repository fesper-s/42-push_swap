/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:47:38 by fesper-s          #+#    #+#             */
/*   Updated: 2022/09/28 14:05:21 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}					t_stack;

// error.c
void	error(void);
int		is_decimal(char c);
void	validate_arg(int size, char **str);
void	validate_dup(t_stack *stack);
// utils.c
t_stack	*listnew(int data);
t_stack	*listadd(t_stack *stack);
t_stack	*listlast(t_stack *stack);
void	listadd_front(t_stack **stack, t_stack *new);
void	listadd_back(t_stack **stack, t_stack *new);
int		listsize(t_stack *stack);
// operations.c
void	swap_x(t_stack *stack);
void	push_x(t_stack **stack_x, t_stack *stack_y);
void	rotate_x(t_stack *stack);
void	rrotate_x(t_stack *stack);

#endif