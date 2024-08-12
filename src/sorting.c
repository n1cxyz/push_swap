#include "push_swap.h"

void    sort_big_stack(t_list **stack_a, t_list **stack_b)
{
	t_list *temp;
	int		bits;
	int		size;
	int		i;
	int		j;

	bits = get_bits(stack_a);
	temp = *stack_a;
	size = (lstsize(temp));
	i = 0;
	while (i < bits)
	{
		j = 0;
		while (j < size)
		{
			temp = *stack_a;
			if (((temp->index >> i) & 1) == 1)
				rotate_a(stack_a);
			else
				push_b(stack_a, stack_b);
			j++;
		}
		while (lstsize(*stack_b) != 0)
			push_a(stack_a, stack_b);
		i++;
	}
}

int	get_bits(t_list **stack)
{
	t_list	*temp;
	int		bits;
	int		highest_number;

	bits = 0;
	temp = *stack;
	highest_number = temp->index;
	while (temp)
	{
		if (temp->index > highest_number)
			highest_number = temp->index;
		temp = temp->next;
	}
	while ((highest_number >> bits) != 0)
	{
		bits++;
	}
	return (bits);
	/* t_list	*head;
	int		max;
	int		max_bits;

	head = *stack;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits); */
}