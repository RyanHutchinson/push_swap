#include "libft/includes/libft.h"
#include "plib.h"

void		commands_handle(int num, char **stack_a, char **stack_b, int size[])
{
	const char	*cmds[] = {"sa", "sb", "ss", "pa", "pb",
		"ra", "rb", "rr", "rra", "rrb", "rrr"};

	ft_putendl(cmds[num]);
	commands_cond_exe((char *)cmds[num], stack_a, stack_b, size);
}

int			num_order(int size, char **stack)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (ft_atoi(stack[i]) > ft_atoi(stack[i + 1]))
			return (0);
		i++;
	}
	return (1);
}

int			passing_commands(char **stack_a, char **stack_b, int size[])
{
	int		solved;

	solved = num_order(size[0], stack_a);
	if (solved == 0)
	{
		if (size[0] == 2)
			commands_handle(0, stack_a, stack_b, size);
		else if (size[0] == 3)
			solve3(stack_a, stack_b, size);
		else if (size[0] <= SORT_SIZE)
			small_solve(stack_a, stack_b, size);
		else if (size[0] <= 240)
			compare_stacks(stack_a, stack_b, size);
		else
			compare_stacks2(stack_a, stack_b, size);
		return (1);
	}
	return (0);
}
