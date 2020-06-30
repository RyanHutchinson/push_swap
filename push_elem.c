#include "libft/includes/libft.h"
#include "plib.h"

static void	find_smol(char **stack_a, char **stack_b, int size[])
{
	int	i;
	int	low;

	i = -1;
	low = 0;
	while (++i < size[0])
		low = (ft_atoi(stack_a[low]) < ft_atoi(stack_a[i])) ?   //if low is < -1, you return low else you return i  
			low : i;
	(low == 0) ? commands_cond_exe("pb", stack_a, stack_b, size) :		// if low is 0 then you push B else you rotate A
				commands_cond_exe("ra", stack_a, stack_b, size);
}

void		push_elem(char **stack_a, char **stack_b, int size[])				//brute solve finds the smallest element then pushes it to stack A
{
	while (size[0] > 1)
		find_smol(stack_a, stack_b, size);
	while (size[1])												//checks the number of elements and perfoms the operation and push A
		commands_cond_exe("pa", stack_a, stack_b, size);
}
