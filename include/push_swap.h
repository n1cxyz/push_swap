#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "libft.h"

typedef struct s_list
{
	int             value;
	int             index;
	struct s_list   *next;
}                   t_list;

//     	initialization
void	initialize(t_list **stack, char **av);
void	assign_index(t_list **stack);
t_list	*get_min(t_list **stack);
t_list	**alloc_stack(t_list **stack, char **av, int ac);
//      list_utils
//t_list	*lstlast(t_list *lst);
void	lstadd_front(t_list **stack, t_list *new);
void	lstadd_back(t_list **stack, t_list *new);
t_list	*lstnew(int value);
int		lstsize(t_list *lst);
t_list	*lstlast(t_list *lst);
void	printlist(t_list *lst);
void	printlist_index(t_list *lst);
//		utils
int		a_is_sorted(t_list **stack);
void	error_exit(char *message);
void	free_matrix(char **str);
void	free_stack(t_list **stack);
void	free_exit(t_list **stack_a, t_list **stack_b);
//		parsing
void	check_input(char **av, int ac);
int		ft_isnum(char *nmb);
int		check_duplicates(int nmb, char **av, int i);
//		operations
int		push(t_list **stack_a, t_list **stack_b);
int		push_a(t_list **stack_a, t_list **stack_b);
int		push_b(t_list **stack_a, t_list **stack_b);
int		rotate(t_list **stack);
int		rotate_a(t_list **stack_a);
int		rotate_b(t_list **stack_b);
int		rotate_ab(t_list **stack_a, t_list **stack_b);
int		reverserotate(t_list **stack);
int		reverserotate_a(t_list **stack_a);
int		reverserotate_b(t_list **stack_b);
int		reverserotate_ab(t_list **stack_a, t_list **stack_b);
int		swap(t_list **stack);
int		swap_a(t_list **stack_a);
int		swap_b(t_list **stack_b);
int		swap_ab(t_list **stack_a, t_list **stack_b);
//		sorting
void    sort_big_stack(t_list **stack_a, t_list **stack_b);
int		get_bits(t_list **stack);