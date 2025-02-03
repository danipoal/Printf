#include "test.h"

int	main()
{
	char *s;

	s = "a";
	ft_printf("Caracter: '%c'\n", 's');
	ft_printf("String: '%s'\n", "word");
	ft_printf("Puntero: '%p'\n", s);
	ft_printf("'%d' :Decimal\n", 84.23);
	ft_printf("Entero b10: '%i'\n", 84);
//	ft_printf("Unsigned Decimal b10: '%d'\n", 84);
	ft_printf("Hexadecimal min: '%x'\n", 88888);
	ft_printf("Hexadecimal may: '%X'\n", 88888);
//	ft_printf("Porcentaje: '%%'\n", 84);

	return (0);
}
