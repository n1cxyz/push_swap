#include "push_swap.h"

void    initialize(t_list **stack, char **av)
{
    t_list  *new;
    int     i;

    while (av[i])
    {
        new = lstnew(ft_atoi(av[i]));
        ft_lstadd_back(stack, new);
        i++;
    }
    assign_index(stack);
}

void	assign_index(t_list **stack)
{
	t_list	*lst;
	int		index;

	index = 0;
	lst = get_min(stack);
	while (lst)
	{
		lst->index = index++;
		lst = get_min(stack);
	}
}

t_list	*get_min(t_list **stack)
{
    int		has_min;
	t_list	*lst;
	t_list	*min;

    lst = *stack;
	min = NULL;
	has_min = 0;
	if (lst)
	{
		while (lst)
		{
			if ((lst->index == -1) && (!has_min || lst->value < min->value))
			{
				min = lst;
				has_min = 1;
			}
			lst = lst->next;
		}
	}
	return (min);
}

t_list	**alloc_stack(t_list **stack, char **av, int ac)
{
    t_list **stack;

    stack = (t_list **)malloc(sizeof(t_list));
    if (!stack)
    {
        if (ac == 2)
            free_matrix(av);
        exit (1);
    }
}
