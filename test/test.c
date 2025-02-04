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
	else if(size == sizeof(void *))
	{
		printf(" Original'%p'",(void *) arg);
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
	printf("\n");
}


int	main()
{
	char	ptr[] = "aaa";
	double	decimal = 32.32;


	printf_unit_test("Character:", "'%c'", "a", sizeof(char));
	printf_unit_test("String:", "'%s'", "Holi", sizeof(char *));
	printf_unit_test("Pointer:", "'%p'", ptr, sizeof(void *));
	printf_unit_test("Decimal:", "'%d'", &decimal, sizeof(double));

	//ft_printf("'%d' :Decimal\n", 84.23);	
	//printf("'%d' :Decimal\n", 84.23); // Me dice que haga %f para decimales....

	ft_printf("Entero b10 ft:'%i' ", 84);
	printf("Original: '%i'\n", 84);

	ft_printf("Unsigned Decimal b10 ft:'%d' ", 84);
	printf("Original:'%d'\n", 84);

	ft_printf("Hexadecimal min ft: '%x' ", 88888);
	printf("Original: '%x'\n", 88888);

	ft_printf("Hexadecimal may ft: '%X' ", 88888);
	printf("Original: '%X'\n", 88888);

	ft_printf("Porcentaje ft: '%%' ");
	printf("Original: '%%'\n");


	// Error en los punteros de la funcion
	printf("Puntero original: %p\n", ptr);
	ft_printf("Puntero ft: %p", ptr);
	return (0);
}
