/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:38:13 by dasal             #+#    #+#             */
/*   Updated: 2024/08/13 12:38:15 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_input(char **av, int ac)
{
	int		i;
	long	tmp;

	i = 0;
	while (av[i])
	{
		tmp = ft_atoi(av[i]);
		if ((!(ft_isnum(av[i]))) || check_duplicates(tmp, av, i + 1) || 
			(tmp < MIN || tmp > MAX))
		{
			if (ac == 2)
				free_matrix(av);
			error_exit("Error\n");
		}
		i++;
	}
}

int	ft_isnum(char *nmb)
{
	int	i;

	i = 0;
	if (nmb[0] == '-' || nmb[0] == '+')
		i++;
	while (nmb[i])
	{
		if (!(ft_isdigit(nmb[i])))
			return (0);
		i++;
	}
	return (1);
}

int	check_duplicates(int nmb, char **av, int i)
{
	while (av[i])
	{
		if (ft_atoi(av[i]) == nmb)
			return (1);
		i++;
	}
	return (0);
}
