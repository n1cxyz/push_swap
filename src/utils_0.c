/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_0.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:38:45 by dasal             #+#    #+#             */
/*   Updated: 2024/08/13 12:38:47 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	a_is_sorted(t_list **stack)
{
	t_list	*temp;

	temp = *stack;
	while (temp->next && temp)
	{
		if (temp->value > temp->next->value)
			return (-1);
		temp = temp->next;
	}
	return (1);
}

void	error_exit(char *message)
{
	ft_putstr_fd(message, STDOUT_FILENO);
	exit(1);
}

void	free_exit(t_list **stack_a, t_list **stack_b, int ac, char **av)
{
	/* free_stack(stack_a);
	free_stack(stack_b);
	free(stack_b); */
	free_stack(stack_a);
	free(stack_b);
	if (ac == 2)
		free_matrix(av);
	exit(0);
}

void	free_matrix(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	free_stack(t_list **stack)
{
	t_list	*tmp;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
	free(stack);
}
