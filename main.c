#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include "ft_printf.h"

int	main(void)
{
	char 	ch = 48;
	char	ptr[] = "0x";
	char 	str[] = "Hello world! HELLO WORLD! HEEEEELLLOOOOOO WOOOOORLLLDDDDDDD HI HOLA BONJOUR ZDRAVEY .... 123456789   GOOOOOOODBYEEEEE";
	int		integer = 1234;
	int		hex = 123456;
	int		dec = 00012;

//	ft_printf(" %d\n %d\n %ld\n %ld\n %lu\n %d\n %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	write(1, "\n", 1);
	ft_printf("========== FT_PRINTF ==========\n");
	write(1, "\n", 1);
	ft_printf("%d\n", INT_MAX);
	ft_printf("%d\n", INT_MIN);
//	ft_printf(" %ld ", LONG_MAX);
//	ft_printf(" %ld ", LONG_MIN);
	ft_printf("%d", UINT_MAX);
//	ft_printf(" %lu ", ULONG_MAX);
//	ft_printf(" %lld ", 9223372036854775807LL);
//	ft_printf(" %llu ", ULLONG_MAX);
//	ft_printf(" %lu ", ULONG_MAX);
//	ft_printf(" %lld ", LLONG_MIN);
//	ft_printf(" %lld ", LLONG_MAX);
	ft_printf("\nString: %s\nCharacter: %c\n", str, ch);
	ft_printf("Integer: %i\nHexadecimal:  %x / %X\n", integer, hex, hex);
	ft_printf("Pointer: %p %p\n", NULL, ptr);
	ft_printf("Decimal: %d\n", dec);
	ft_printf("Percent: %%\n");
	ft_printf("Unsigned decimal: %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u\n", 0, -1, 1, 9, 10, 11, 15, 16, 17, 99, 100, 101, -9, -10, -11, -14, -15, -16, -99, -100, -101, INT_MAX, INT_MIN);
//	printf(" %d\n %d\n %ld\n %ld\n %lu\n %d\n %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);


	write(1, "\n", 1);
	printf("========== ORIGINAL PRINTF ==========\n");
	write(1, "\n", 1);
	printf("%d\n", INT_MAX);
	printf("%d\n", INT_MIN);
//	printf(" %ld ", LONG_MAX);
//	printf(" %ld ", LONG_MIN);
	printf("%d\n", UINT_MAX);
//	printf(" %lu ", ULONG_MAX);
//	printf(" %lld ", 9223372036854775807LL);
//	printf(" %llu ", ULLONG_MAX);
//	printf(" %lu ", ULONG_MAX);
//	printf(" %lld ", LLONG_MIN);
//	printf(" %lld ", LLONG_MAX);
	printf("String: %s\nCharacter: %c\n", str, ch);
	printf("Integer: %i\nHexadecimal: %x / %X\n", integer, hex, hex);
	printf("Pointer: %p %p\n", NULL, ptr);
	printf("Decimal: %d\n", dec);
	printf("Percent: %%\n");
	printf("Unsigned decimal: %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u\n", 0, -1, 1, 9, 10, 11, 15, 16, 17, 99, 100, 101, -9, -10, -11, -14, -15, -16, -99, -100, -101, INT_MAX, INT_MIN);

	return (0);
}
