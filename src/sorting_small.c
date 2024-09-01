/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:47:12 by dasal             #+#    #+#             */
/*   Updated: 2024/08/28 09:47:14 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **stack_a)
{
	while (a_is_sorted(stack_a) != 1)
	{
		if ((*stack_a)->value > (*stack_a)->next->value)
			swap_a(stack_a);
		else
			reverserotate_a(stack_a);
	}
}

int	get_direction(t_list *temp)
{
	int	lstSize;
	int	minIndex;
	int	i;
	int	min;

	min = MAX;
	i = 0;
	minIndex = 0;
	lstSize = lstsize(temp) / 2;
	while (temp)
	{
		if (temp->value < min)
		{
			min = temp->value;
			minIndex = i;
		}
		temp = temp->next;
		i++;
	}
	if (minIndex < lstSize)
		return (1);
	else
		return (0);
}

int	get_minN(t_list *stack_a)
{
	int min;

	min = stack_a->value;
	stack_a = stack_a->next;
	while (stack_a)
	{
		if (stack_a->value < min)
			min = stack_a->value;
		stack_a = stack_a->next;
	}
	return (min);
}

void	sort_small_stack(t_list **stack_a, t_list **stack_b)
{
	int	min;
	int direction;

	if (lstsize(*stack_a) == 2)
		swap_a(stack_a);
	else if (lstsize(*stack_a) == 3)
		sort_three(stack_a);
	else
	{
		while (lstsize(*stack_a) >= 4)
		{
			direction = get_direction(*stack_a);
			min = get_minN(*stack_a);
			while ((*stack_a)->value != min)
			{
				if (direction)
					rotate_a(stack_a);
				else
					reverserotate_a(stack_a);
			}
			push_b(stack_a, stack_b);
		}
		sort_three(stack_a);
		while (lstsize(*stack_b) > 0)
		{
			push_a(stack_a, stack_b);
		}
	}
}