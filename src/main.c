/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:38:08 by dasal             #+#    #+#             */
/*   Updated: 2024/08/13 12:38:09 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		t_list	**stack_a;
		t_list	**stack_b;

		av++;
		if (ac == 2)
			av = ft_split(*av, ' ');
		check_input(av, ac);
		//stack_a = alloc_stack(stack_a, av, ac);
		//stack_b = alloc_stack(stack_b, av, ac);
		stack_a = (t_list **)malloc(sizeof(t_list));
		stack_b = (t_list **)malloc(sizeof(t_list));
		*stack_a = NULL;
		*stack_b = NULL;
		initialize(stack_a, av);
		if (a_is_sorted(stack_a) == 1)
			free_exit(stack_a, stack_b);
		sort_big_stack(stack_a, stack_b);
		printlist(*stack_a);
		free_stack(stack_a);
		free(stack_b);
	}
	return (0);
}
