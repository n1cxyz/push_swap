#include "push_swap.h"

int	a_is_sorted(t_list **stack)
{
	t_list *temp;

	temp = *stack;
	while (temp->next && temp)
	{
		if (temp->next > temp->next->next)
			return (-1);
		temp = temp->next;
	}
	return (1);
}

void    error_exit(char *message)
{
	ft_putstr_fd(message, STDOUT_FILENO);
	exit(1);
}

void	free_exit(t_list **stack_a, t_list **stack_b)
{
	free_stack(stack_a);
    free_stack(stack_b);
	exit(0);
}

void    free_matrix(char **str)
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
}