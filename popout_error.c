#include "libft/includes/libft.h"

void	popout_error(void)
{
	ft_putendl_fd("Error", 2);
	exit(-1);
}

void	c_popout_error(void)
{
	ft_putendl_fd("\033[1;31mError\033[0m", 2);
	exit(-1);
}
