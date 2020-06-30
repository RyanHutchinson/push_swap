#include "libft/includes/libft.h"
#include "plib.h"

static void	ops_swap(char *cmd, char **stack_a, char **stack_b, int size[])    //FUNCTION TO PERFOM THE SWAPPING OF THE STACKS
{
	if (ft_strcmp("sa", cmd) == 0)
	{
		if (size[0] >= 2)
			ft_swapstr(&stack_a[0], &stack_a[1]);
	}
	else if (ft_strcmp("sb", cmd) == 0)
	{
		if (size[1] >= 2)
			ft_swapstr(&stack_b[0], &stack_b[1]);
	}
	else if (ft_strcmp("ss", cmd) == 0)
	{
		if (size[0] >= 2)
			ft_swapstr(&stack_a[0], &stack_a[1]);
		if (size[1] >= 2)
			ft_swapstr(&stack_b[0], &stack_b[1]);
	}
	else
		c_popout_error();
}

static void	ops_cont(char *cmd, char **stack_a, char **stack_b, int size[])
{
	if (ft_strcmp("ra", cmd) == 0)
		rot_stack(stack_a, &size[0]);
	else if (ft_strcmp("rb", cmd) == 0)
		rot_stack(stack_b, &size[1]);
	else if (ft_strcmp("rr", cmd) == 0)
	{
		rot_stack(stack_a, &size[0]);
		rot_stack(stack_b, &size[1]);
	}
	else if (ft_strcmp("rra", cmd) == 0)
		revrot_stack(stack_a, &size[0]);
	else if (ft_strcmp("rrb", cmd) == 0)
		revrot_stack(stack_b, &size[1]);
	else if (ft_strcmp("rrr", cmd) == 0)
	{
		revrot_stack(stack_a, &size[0]);
		revrot_stack(stack_b, &size[1]);
	}
	else
		c_popout_error();
}

void		commands_exe(char *cmd, char **stack_a, char **stack_b, int size[])
{
	if (ft_strncmp("s", cmd, 1) == 0)
		ops_swap(cmd, stack_a, stack_b, size);
	else if (ft_strcmp("pa", cmd) == 0)
	{
		if (size[1] > 0)
			push_stack(stack_b, stack_a, &size[1], &size[0]);
	}
	else if (ft_strcmp("pb", cmd) == 0)
	{
		if (size[0] > 0)
			push_stack(stack_a, stack_b, &size[0], &size[1]);
	}
	else
		ops_cont(cmd, stack_a, stack_b, size);
}
