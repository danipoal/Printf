#include "test.h"


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

	printf_unit_test("Character:", "'%c'", "0", sizeof(char));

	printf_unit_test("String:", "'%s'", ptr, sizeof(char *));

	printf_unit_test("Pointer:", "'%p'", ptr, 99);

	// DECIMAL
	//printf_unit_test("Decimal:", "'%d'", &decimal, sizeof(double));
	//ft_printf("ft: '%d'", 84.23);	
	//printf("Orig w/ %%f '%f' :\n\n", 84.23); // Me dice que haga %f para decimales....

	printf_unit_test("Entero b0:", "'%i'", &entero, sizeof(int));

	// 
	//ft_printf("Unsigned Decimal b10 ft:'%d' ", 84);
	//printf("Original:'%d'\n", 84);

	printf_unit_test("Hexadecimal min:", "'%x'", &hex, 16);
	printf_unit_test("Hexadecimal may:", "'%X'", &hex, 17);
	printf_unit_test("Porcentaje:", "'%%'", NULL, 0);

	printf_unit_test("Pointer:", "'%p'", NULL, 99);
	printf_unit_test("String:", "'%s'", (char *)NULL, sizeof(char *));

	ft_printf("MultipleFT: '%i' '%s' '%s' \n", 233, "String1", "String2");
	ft_printf("MultipleOrig: '233' 'String1' 'String2'\n");
	
	int a = printf("%p\n", ptr);
	int b = printf("%p\n", ptr);
	if (a == b)
		ft_printf("Mismo output\n");
	else
		ft_printf("Error de return Val %i - %i\n", a, b);
	
	// LIMITS
	ft_printf(" %X %X %X %X %lX %X %X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %X %X %lX %lX %lX %X %X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);


	return (0);
}
