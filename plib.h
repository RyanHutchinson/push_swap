#ifndef PLIB_H
# define PLIB_H

# define SORT_SIZE 21
# define SORT_SIZE2 60

void	commands_cond_exe(char *cmd, char **stack_a, char **stack_b, int size[]);
void	push_stack(char **give, char **get, int *sz_give, int *sz_get);
void	rot_stack(char **stack, int *size);
void	revrot_stack(char **stack, int *size);

int		checka(char **stack_a, char **stack_b, int size);
void	create_stack(char **stack_a, char **stack_b, char **list, int size);
void	disp_lists(char **stack1, char **stack2, int size_a, int size_b);
void	arg_format(int n, char **arg, int *num, char **list);

void	commands_exe(char *cmd, char **stack_a, char **stack_b, int size[]);

int		c_checka(char **stack_a, char **stack_b, int size);
void	c_create_stack(char **stack_a, char **stack_b, char **list, int size);
void	c_disp_lists(char **stack1, char **stack2, int size_a, int size_b);

void	compare_stacks(char **stack_a, char **stack_b, int size[]);
void	compare_stacks2(char **stack_a, char **stack_b, int size[]);
void	push_elem(char **stack_a, char **stack_b, int size[]);
void	commands_handle(int num, char **stack_a, char **stack_b, int size[]);
void	end_topa(char **stack_a, char **stack_b, int size[]);
void	end_topb(char **stack_a, char **stack_b, int size[]);
void	end_bot(char **stack_a, char **stack_b, int size[]);
int		num_order(int size, char **stack);
int		passing_commands(char **stack_a, char **stack_b, int size[]);
void	size_compare1(char **stack_a, char **stack_b, int size[], int n);
void	size_compare2(char **stack_a, char **stack_b, int size[], int n);
void	small_solve(char **stack_a, char **stack_b, int size[]);
void	solve3(char **stack_a, char **stack_b, int size[]);

void	popout_error(void);
void	c_popout_error(void);

#endif
