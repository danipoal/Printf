#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

# define HEX_MAY "0123456789ABCDEF"
# define HEX_MIN "0123456789abcdef"
# define DECIMAL "0123456789"

int	ft_printf(char const *s, ...);
void	ft_putnbr_base(long nb, char *base, int *count);
void	ft_putptr(unsigned long nb, char *base, int *count);
void	ft_putdec_base(double nb, char *base);
void	ft_putstr_fd(char *s, int fd, int *count);
void	ft_putchar_fd(char c, int fd, int *count);
char	*ft_strchr(const char *s, int c);
void	ft_putnbr_ubase(unsigned long nb, char *base, int *count);
size_t	ft_strlen(const char *s);

#endif
