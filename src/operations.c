/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:14:38 by fesper-s          #+#    #+#             */
/*   Updated: 2022/09/28 14:08:34 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_x(t_stack *stack)
{
	int	buffer;

	buffer = stack->data;
	stack->data = stack->next->data;
	stack = stack->next;
	stack->data = buffer;
}

void	push_x(t_stack **stack_x, t_stack *stack_y)
{

	listadd_front(stack_x, listnew(stack_y->data));
	*stack_y = *stack_y->next;
}

void	rotate_x(t_stack *stack)
{
	int	buffer;

	buffer = stack->data;
	while (stack->next)
	{
		stack->data = stack->next->data;
		stack = stack->next;
	}
	stack->data = buffer;
}

void	rrotate_x(t_stack *stack)
{
	listadd_front(&stack, listlast(stack));
}
