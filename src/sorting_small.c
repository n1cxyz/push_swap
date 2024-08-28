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

void	sort_small_stack(t_list **stack_a, t_list **stack_b)
{
	t_list	*topElementA;
	t_list	*topElementB;
	int		sizeA;
	int		sizeB;
	int		i;
	int		j;

	sizeA = lstsize(*stack_a);
	i = 0;
	while (i < sizeA)
	{
		topElementA = *stack_a;
		topElementB = *stack_b;
		sizeB = lstsize(*stack_b);
		j = 0;
		//printf("B:%d\n", topElementB->index);
		//printf("A:%d\n", topElementA->index);
		while ((j < sizeB) && (topElementB->index > topElementA->index))
		{
			//printf("hello\n");
			push_a(stack_a, stack_b);
			rotate_a(stack_a);
			j++;
		}
		push_b(stack_a, stack_b);
		printlist(*stack_a);
		printf("\n");
		printlist(*stack_b);
		printf("\n");
		i++;
	}
	sizeB = lstsize(*stack_b);
	i = 0;
	while (i < sizeB)
	{
		push_a(stack_a, stack_b);
		i++;
	}
}
