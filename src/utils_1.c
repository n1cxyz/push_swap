/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:38:49 by dasal             #+#    #+#             */
/*   Updated: 2024/08/13 12:38:51 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp_a;
	t_list	*temp_b;
	t_list	*temp;

	if (lstsize(*stack_b) == 0)
		return (0);
	temp_a = *stack_a;
	temp_b = *stack_b;
	temp = temp_b;
	temp_b = temp_b->next;
	*stack_b = temp_b;
	if (!temp_a)
	{
		temp_a = temp;
		temp_a->next = NULL;
		*stack_a = temp_a;
	}
	else
	{
		temp->next = temp_a;
		*stack_a = temp;
	}
	return (1);
}

int	rotate(t_list **stack)
{
	t_list	*start;
	t_list	*end;

	if (lstsize(*stack) < 2)
	{
		return (0);
	}
	start = *stack;
	end = lstlast(start);
	*stack = start->next;
	start->next = NULL;
	end->next = start;
	return (1);
}

int	reverserotate(t_list **stack)
{
	t_list	*start;
	t_list	*end;

	if (lstsize(*stack) < 2)
		return (0);
	start = *stack;
	end = lstlast(start);
	while (start)
	{
		if (start->next->next == NULL)
		{
			start->next = NULL;
			break ;
		}
		start = start->next;
	}
	end->next = *stack;
	*stack = end;
	return (1);
}

int	swap(t_list **stack)
{
	int		value;
	int		index;
	t_list	*next;
	t_list	*temp;

	if (lstsize(*stack) < 2)
		return (0);
	temp = *stack;
	next = temp->next;
	if (!temp && !next)
	{
		error_exit("Error\n");
	}
	index = temp->index;
	value = temp->value;
	temp->index = next->index;
	temp->value = next->value;
	next->index = index;
	next->value = value;
	return (1);
}
