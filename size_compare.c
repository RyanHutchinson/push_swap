#include "libft/includes/libft.h"
#include "plib.h"

void	end_bot(char **stack_a, char **stack_b, int size[])
{
	int		i;
	int		j;
	char	*end;

	i = 0;
	j = 0;
	end = stack_a[i];
	while (i < size[0] - 1)
	{
		i++;
		if (ft_atoi(stack_a[i]) > ft_atoi(end))					//swaps stack a's last number (checks if the 1st number is greater than the last one)
		{
			j = i;
			end = stack_a[i];									//then stores into J (temporary) 
		}														// then perfoms the swap of the two numbers		
	}
	j++;
	if (j <= size[0] / 2)
		while (j--)
			commands_handle(5, stack_a, stack_b, size);					// J is used as a median number
	else
		while (size[0] - j++)
			commands_handle(8, stack_a, stack_b, size);
}

void	end_topa(char **stack_a, char **stack_b, int size[])
{
	int		i;
	int		j;
	char	*end;

	i = 0;
	j = 0;
	end = stack_a[i];
	while (i < size[0] - 1)						// second to last index
	{
		i++;
		if (ft_atoi(stack_a[i]) > ft_atoi(end))		//atoi is used to convert the string params to int
		{
			j = i;
			end = stack_a[i];						// 
		}
	}
	if (j <= size[0] / 2)
		while (j--)
			commands_handle(5, stack_a, stack_b, size);
	else
		while (size[0] - j++)
			commands_handle(8, stack_a, stack_b, size);
}

void	end_topb(char **stack_a, char **stack_b, int size[])
{
	int		i;
	int		j;
	char	*end;

	i = 0;
	j = 0;
	end = stack_b[i];
	while (i < size[1] - 1)
	{
		i++;
		if (ft_atoi(stack_b[i]) > ft_atoi(end))
		{
			j = i;
			end = stack_b[i];
		}
	}
	if (j <= size[1] / 2)
		while (j--)
			commands_handle(6, stack_a, stack_b, size);
	else
		while (size[1] - j++)
			commands_handle(9, stack_a, stack_b, size);
}

void	size_compare2(char **stack_a, char **stack_b, int size[], int n)
{
	while (n)
	{
		commands_handle(8, stack_a, stack_b, size);
		n--;
	}
	commands_handle(4, stack_a, stack_b, size);
}

void	size_compare1(char **stack_a, char **stack_b, int size[], int n)
{
	while (n)
	{
		commands_handle(5, stack_a, stack_b, size);
		n--;
	}
	commands_handle(4, stack_a, stack_b, size);
}
