#include "push_swap.h"

void    error_exit(char *message)
{
	ft_putstr_fd(message, STDOUT_FILENO);
	exit(1);
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