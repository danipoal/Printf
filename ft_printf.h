#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(char const *s, ...);
void	ft_putnbr_base(long nb, char *base);
void	ft_putptr(long nb, char *base);
void	ft_putdec_base(double nb, char *base);

#endif
