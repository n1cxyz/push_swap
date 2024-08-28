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
	t_list	*temp;
	t_list	*min;
	int		i;
	int		size;

	size = lstsize(*stack_a);

	min = get_min(stack_a);

	push_b(stack_a, stack_b);



}
