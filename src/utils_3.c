
#include "push_swap.h"

int	rotate_a(t_list **stack_a)
{
	if ((rotate(stack_a)) == 0)
	{
		return (0);
	}
	ft_putstr_fd("ra\n", 1);
	return (1);
}

int	rotate_b(t_list **stack_b)
{
	if ((rotate(stack_b)) == 0)
	{
		return (0);
	}
	ft_putstr_fd("rb\n", 1);
	return (1);
}

int	rotate_ab(t_list **stack_a, t_list **stack_b)
{
	if ((lstsize(*stack_b) < 2) || (lstsize(*stack_a) < 2))
	{
		return (0);
	}
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr_fd("rr\n", 1);
	return (1);
}