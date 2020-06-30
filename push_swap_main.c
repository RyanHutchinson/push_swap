#include "libft/includes/libft.h"
#include "plib.h"

static int	submain(int argc, char **argv)
{
	char	*stack_a[argc - 1];
	char	*stack_b[argc - 1];
	int		size[2];
	int		n;

	create_stack(stack_a, stack_b, argv, argc - 2);
	size[0] = (int)sizeof(stack_a) / 8;
	size[1] = 0;
	n = passing_commands(stack_a, stack_b, size);
	while (n)
		n = passing_commands(stack_a, stack_b, size);
	return (0);
}

int			main(int argc, char **argv)
{
	char	*list[100000];
	int		num;

	num = 0;
	if (argc > 1)
	{
		arg_format(argc - 1, &argv[1], &num, list);
		submain(num + 1, list);
	}
	return (0);
}
