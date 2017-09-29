#include <stdio.h>
#include <stdint.h>
#include <calculate.h>

int main(int argc, char **argv)
{
	uint16_t erg = calculate(0, 5);
	printf("erg: %u\n", erg);
	return 0;
}
