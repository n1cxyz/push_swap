#include "push_swap.h"

int	swap_a(t_list **stack_a)
{
	if (!(swap(stack_a)))
	{
		return (0);
	}
	ft_putstr_fd("sa\n", 1);
	return (1);
}

int	swap_b(t_list **stack_b)
{
	if (!(swap(stack_b)))
	{
		return (0);
	}
	ft_putstr_fd("sb\n", 1);
	return (1);
}

int	swap_ab(t_list **stack_a, t_list **stack_b)
{
	if ((lstsize(*stack_b) < 2) || (lstsize(*stack_a) < 2))
	{
		return (0);
	}
	swap(stack_a);
	swap(stack_b);
	ft_putstr_fd("sb\n", 1);
	return (1);
}