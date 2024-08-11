
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
        printList(*stack_a);
        //a_is_sorted();
		//push_swap(av);
	}
	return (0);
}