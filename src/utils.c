/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesper-s <fesper-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 08:57:12 by fesper-s          #+#    #+#             */
/*   Updated: 2022/10/13 08:12:27 by fesper-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	listsize(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

void	stack_free(t_stack **stack)
{
	t_stack	*buffer;
	t_stack	*del;

	buffer = *stack;
	while (buffer)
	{
		del = buffer;
		buffer = buffer->next;
		free(del);
	}
	*stack = NULL;
}

void	add_split_in_stack(t_stack **stack, char *str)
{
	char	**splitarg;
	int		i;

	i = -1;
	splitarg = ft_split(str, ' ');
	while (splitarg[++i])
		listadd_back(stack, listnew(ft_atoi(splitarg[i])));
	i = -1;
	while (splitarg[++i])
		free(splitarg[i]);
	free(splitarg);
}

void	add_argv_in_stack(t_stack **stack, int size, char **str)
{
	int	i;

	i = 0;
	while (++i < size)
		listadd_back(stack, listnew((ft_atoi(str[i]))));
}
