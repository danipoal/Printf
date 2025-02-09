# Printf

Este proyecto es una recodificación de la función `printf` de la biblioteca estándar de C. Implementa las principales funcionalidades de `printf` sin el uso de la función original.

## Características

- Manejo de los siguientes especificadores de formato:
  - `%c` → Caracter
  - `%s` → Cadena de caracteres
  - `%p` → Puntero en formato hexadecimal
  - `%d` → Entero decimal con signo
  - `%i` → Entero decimal con signo
  - `%u` → Entero decimal sin signo
  - `%x` → Número hexadecimal en minúsculas
  - `%X` → Número hexadecimal en mayúsculas
  - `%%` → Símbolo `%`

## Uso

1. Clona este repositorio en tu máquina local:
   ```sh
   git clone https://github.com/danipoal/Printf.git
   ```
2. Compila la biblioteca:
   ```sh
   make
   ```
3. Incluye `libftprintf.a` en tu proyecto y compila con:
   ```sh
   gcc -Wall -Wextra -Werror tu_archivo.c -L. -lftprintf -o tu_programa
   ```

## Ejemplo

```c
#include "ft_printf.h"

int main()
{
    ft_printf("Hola, %s! Tienes %d mensajes.\n", "Mundo", 42);
    return 0;
}
```

## Evaluación en 42

Este proyecto sigue las normas de la escuela 42:
- No se permite el uso de funciones prohibidas como `printf`, `sprintf`, `asprintf`, etc.
- El código sigue las normas de Norminette.
- Se debe gestionar correctamente la memoria sin fugas.
