/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:48:02 by fesper-s          #+#    #+#             */
/*   Updated: 2022/10/17 08:31:27 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// print_stack for testing
void	print_stack(t_stack *stack)
{
	while (stack)
	{
		ft_printf("INDEX = %d      DATA = %d\n", stack->index, stack->data);
		stack = stack->next;
	}
}

void	testing(t_stack **stack_a, t_stack **stack_b)
{
	ft_printf("\n");
	ft_printf("----- before operation -----\n\n");
	ft_printf("        stack A:\n");
	print_stack(*stack_a);
	ft_printf("\n");
	ft_printf("        stack B:\n");
	print_stack(*stack_b);
	ft_printf("\n");
	ft_printf("------- OPERATIONS --------\n\n");
	push_x(stack_b, stack_a, 'b');
	push_x(stack_b, stack_a, 'b');
	push_x(stack_b, stack_a, 'b');
	rrotate_r(stack_a, stack_b);
	ft_printf("\n");
	ft_printf("----- after operation -----\n\n");
	ft_printf("        stack A:\n");
	print_stack(*stack_a);
	ft_printf("\n");
	ft_printf("        stack B:\n");
	print_stack(*stack_b);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		validate_arg(argc, argv);
		if (argc == 2)
			add_split_in_stack(&stack_a, argv[1]);
		else
			add_argv_in_stack(&stack_a, argc, argv);
		validate_dup(stack_a);
		if (a_is_sorted(stack_a))
			return (0);
		find_index(&stack_a);
		testing(&stack_a, &stack_b); // JUST FOR TESTING !!
		stack_free(&stack_a);
		stack_free(&stack_b);
	}
	return (0);
}
