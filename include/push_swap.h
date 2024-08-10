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
void	printList(t_list *lst);
//		utils
void	error_exit(char *message);
void	free_matrix(char **str);
void	free_stack(t_list **stack);
//		parsing
void	check_input(char **av);
int		ft_isnum(char *nmb);
int		check_duplicates(int nmb, char **av, int i);
//		operations