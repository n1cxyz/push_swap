
#include "push_swap.h"

/* t_list *lstlast(t_list *lst)
{
    if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
} */

void    lstadd_front(t_list **stack, t_list *new)
{
    new->next = *stack;
    *stack = new;
}

void    lstadd_back(t_list **stack, t_list *new)
{
    t_list	*temp;

	if (!stack || !new)
		return ;
	if (!(*stack))
	{
		*stack = new;
		return ;
	}
	temp = *stack;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}

t_list	*lstnew(int value)
{
	t_list	*new;

	new = (t_list *) malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = -1;
	new->next = NULL;
	return (new);
}

int	lstsize(t_list *lst)
{
	size_t	count;
	t_list	*tmp;

	tmp = lst;
	count = 0;
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}

void	printList(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp != NULL)
	{
		ft_putnbr_fd(tmp->value, 1);
        ft_putstr_fd("", 1);
		tmp = tmp->next;
	}
}