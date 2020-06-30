#include "libft/includes/libft.h"

#include "plib.h"
static char	*find_largest(char **stack, int size)			//this function is used to find the largest element in the array (parameters)
{
	char	*l;
	int		i;

	i = 0;
	l = stack[i];
	while (i++ < size - 1)
		if (ft_atoi(stack[i]) > ft_atoi(l))
			l = stack[i];
	return (l);
}

static char	*find_smallest(char **stack, int size)				//for the smallest number in the array
{
	char	*l;
	int		i;

	i = 0;
	l = stack[i];
	while (i++ < size - 1)
		if (ft_atoi(stack[i]) < ft_atoi(l))
			l = stack[i];
	return (l);
}

void		solve3(char **stack_a, char **stack_b, int size[])
{
	char	*l;

	l = find_largest(stack_a, size[0]);
	while (!num_order(size[0], stack_a))
	{
		if (ft_atoi(stack_a[0]) > ft_atoi(stack_a[1]) &&
				ft_atoi(stack_a[1]) > ft_atoi(stack_a[2]))
			commands_handle(0, stack_a, stack_b, size);
		else if (ft_atoi(stack_a[1]) > ft_atoi(stack_a[2]) &&
				ft_atoi(stack_a[2]) > ft_atoi(stack_a[0]))
			commands_handle(0, stack_a, stack_b, size);
		else if (ft_atoi(stack_a[0]) == ft_atoi(l))
			commands_handle(5, stack_a, stack_b, size);
		else if (ft_atoi(stack_a[1]) == ft_atoi(l))
			commands_handle(8, stack_a, stack_b, size);
		else if (ft_atoi(stack_a[2]) == ft_atoi(l))
			commands_handle(0, stack_a, stack_b, size);
	}
}

static void	b_return(char **stack_a, char **stack_b, int size[])
{
	int	i;

	i = 0;
	if ((ft_atoi(stack_b[0]) > ft_atoi(find_largest(stack_a, size[0]))) ||
		(ft_atoi(stack_b[0]) < ft_atoi(find_smallest(stack_a, size[0]))))
		end_bot(stack_a, stack_b, size);
	else
	{
		while (i++ < size[0] - 1)
			if ((ft_atoi(stack_b[0]) > ft_atoi(stack_a[i - 1])) &&
					(ft_atoi(stack_b[0]) < ft_atoi(stack_a[i])))
				break ;
		if (i != size[0])
		{
			if (i <= size[0] / 2)
				while (i-- > 0)
					commands_handle(5, stack_a, stack_b, size);
			else
				while (size[0] - i++ > 0)
					commands_handle(8, stack_a, stack_b, size);
		}
	}
	commands_handle(3, stack_a, stack_b, size);
}

void		small_solve(char **stack_a, char **stack_b, int size[])
{
	while (size[0] > 3)
		commands_handle(4, stack_a, stack_b, size);
	solve3(stack_a, stack_b, size);
	while (size[1])
		b_return(stack_a, stack_b, size);
	end_bot(stack_a, stack_b, size);
}
