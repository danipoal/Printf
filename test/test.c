#include "test.h"


/**
 * Little current test, to check a major problem
 */

void	current_test()
{
	int	a = printf("Or %c-%c-%c \n", 0 ,'1', '2');
	int	b = ft_printf("Ft %c-%c-%c \n", 0, '1', '2');

	
	ft_printf("Resultados Or: '%i', Ft: '%i'", a, b);
}


/**
 * Unit test el formato siempre tiene que ser '%x'
 *
 *
 */

int	main()
{
	char	ptr[] = "abcdE";
	int	entero = 84;
	int	hex = 5498;
	unsigned int	int_max = INT_MAX;

	printf_unit_test("Character:", "'%c'", "0");

	printf_unit_test("String:", "'%s'", ptr);
	printf_unit_test("Pointer:", "'%p'", ptr);
	printf_unit_test("Decimal:", "'%d'", &entero);
	printf_unit_test("Entero:", "'%i'", &entero);
	//printf("Orig w/ %%f '%f' :\n\n", 84.23); // Me dice que haga %f para decimales....
	printf_unit_test("Unsigned Int:", "'%u'", &int_max);
	printf_unit_test("Hexadecimal min:", "'%x'", &hex);
	printf_unit_test("Hexadecimal may:", "'%X'", &hex);
	printf_unit_test("Porcentaje:", "'%%'", NULL);

	printf_unit_test("Pointer:", "'%p'", NULL);
	printf_unit_test("String:", "'%s'", (char *)NULL);

	ft_printf("MultipleFT: '%i' '%s' '%s' \n", 233, "String1", "String2");
	ft_printf("MultipleOrig: '233' 'String1' 'String2'\n");
	
	// LIMITS
	ft_printf(" %X %X %X %X %lX %X %X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %X %X %lX %lX %lX %X %X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	current_test();
	return (0);
}
