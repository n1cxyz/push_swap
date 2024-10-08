/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:38:53 by dasal             #+#    #+#             */
/*   Updated: 2024/08/13 12:38:54 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_a(t_list **stack_a, t_list **stack_b)
{
	if ((push(stack_a, stack_b)) == 0)
	{
		return (0);
	}
	ft_putstr_fd("pa\n", 1);
	return (1);
}

int	push_b(t_list **stack_a, t_list **stack_b)
{
	if ((push(stack_b, stack_a)) == 0)
	{
		return (0);
	}
	ft_putstr_fd("pb\n", 1);
	return (1);
}
