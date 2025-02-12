#include "test.h"

void	printf_unit_test(char *title, char *s, void *arg, size_t size)
{

	ft_printf(title);
	if (size == sizeof(char))
	{
		char *cp = (char *) arg;
		printf(" Original'%c'", cp[0]);
		ft_printf(" Ft:");
		ft_printf(s, cp[0]);
	}
	else if(size == sizeof(char *))
	{
		char * cp = (char *) arg;
		printf(" Original'%s'", cp);
		ft_printf(" Ft:");
		ft_printf(s, cp);
	}
	else if(size == 99)   // Por alguna razon no entraba en sizeof(void *)
	{
		printf("P Original'%p'",(void *) arg);
		ft_printf(" Ft:");
		ft_printf(s, arg);
	}
	else if(size == sizeof(double))
	{
		double *cp = (double *) arg;
		printf(" Original'%f'", *cp);
		ft_printf(" Ft:");
		ft_printf(s, *cp);
	}
	else if(size == sizeof(int))
	{
		int	*cp = (int *) arg;
		printf(" Original'%i'", *cp);
		ft_printf(" Ft:");
		ft_printf(s, *cp);
	}
	else if(size == 16)
	{
		int	*cp = (int *) arg;
		printf(" Original'%x'", *cp);
		ft_printf(" Ft:");
		ft_printf(s, *cp);
	}
	else if(size == 17)
	{
		int	*cp = (int *) arg;
		printf(" Original'%X'", *cp);
		ft_printf(" Ft:");
		ft_printf(s, *cp);
	}
	else if (!arg)
	{
		printf(" Original'%%'");
		ft_printf(" Ft:");
		ft_printf(s);
	}
	printf("\n");
}


int	main()
{
	char	ptr[] = "abcdE";
	//double	decimal = 32.32;
	int	entero = 84;
	int	hex = 5498;

	// CHARACTER
	printf_unit_test("Character:", "'%c'", "0", sizeof(char));
	ft_printf("Character ft:'%c' ", '0');
	printf("Original: '%c'\n\n", '0');

	// STRING
	printf_unit_test("String:", "'%s'", ptr, sizeof(char *));
	ft_printf("String ft:'%s' ", ptr);
	printf("Original: '%s'\n\n", ptr);

	// POINTER
	printf_unit_test("Pointer:", "'%p'", ptr, 99);
	ft_printf("Puntero ft: %p ", ptr);
	printf("Original: %p\n\n", ptr);

	// DECIMAL
	//printf_unit_test("Decimal:", "'%d'", &decimal, sizeof(double));
	//ft_printf("ft: '%d'", 84.23);	
	//printf("Orig w/ %%f '%f' :\n\n", 84.23); // Me dice que haga %f para decimales....

	//INT entero
	printf_unit_test("Entero b0:", "'%i'", &entero, sizeof(int));
	ft_printf("Entero b10 ft:'%i' ", entero);
	printf("Original: '%i'\n\n", entero);

	// 
	//ft_printf("Unsigned Decimal b10 ft:'%d' ", 84);
	//printf("Original:'%d'\n", 84);

	// Hexadecimal Minuscula
	printf_unit_test("Hexadecimal min:", "'%x'", &hex, 16);
	ft_printf("Hexadecimal min ft: '%x' ", hex);
	printf("Original: '%x'\n\n", hex);

	// Hexadecimal Mayuscuula
	printf_unit_test("Hexadecimal may:", "'%X'", &hex, 17);
	ft_printf("Hexadecimal may ft: '%X' ", hex);
	printf("Original: '%X'\n\n", hex);

	// Porcentaje %
	printf_unit_test("Porcentaje:", "'%%'", NULL, 0);
	ft_printf("Porcentaje ft: '%%' ");
	printf("Original: '%%'\n");

	//NULL POINTER
	printf_unit_test("Pointer:", "'%p'", NULL, 99);
	ft_printf("Puntero ft: %p ", NULL);
	printf("Original: %p\n\n", NULL);

	//NULL STRING
	printf_unit_test("String:", "'%s'", (char *)NULL, sizeof(char *));
	ft_printf("String ft:'%s' ", (char *)NULL);
	printf("Original: '%s'\n\n",(char *) NULL);



	ft_printf("MultipleFT: '%i' '%s' '%s' \n", 233, "String1", "String2");
	ft_printf("MultipleOrig: '233' 'String1' 'String2'\n");
	
	int a = printf("%p\n", ptr);
	int b = printf("%p\n", ptr);
	if (a == b)
		ft_printf("Mismo output\n");
	else
		ft_printf("Error de return Val %i - %i\n", a, b);
	return (0);
}
