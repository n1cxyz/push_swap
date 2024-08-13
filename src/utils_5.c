/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:39:07 by dasal             #+#    #+#             */
/*   Updated: 2024/08/13 12:39:08 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	reverserotate_a(t_list **stack_a)
{
	if (!(reverserotate(stack_a)))
	{
		return (0);
	}
	ft_putstr_fd("rra\n", 1);
	return (1);
}

int	reverserotate_b(t_list **stack_b)
{
	if (!(reverserotate(stack_b)))
	{
		return (0);
	}
	ft_putstr_fd("rrb\n", 1);
	return (1);
}

int	reverserotate_ab(t_list **stack_a, t_list **stack_b)
{
	if ((lstsize(*stack_b) < 2) || (lstsize(*stack_a) < 2))
	{
		return (0);
	}
	reverserotate(stack_a);
	reverserotate(stack_b);
	ft_putstr_fd("rrr\n", 1);
	return (1);
}
