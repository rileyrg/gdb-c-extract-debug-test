#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define BITS_IN_INT (sizeof(int) * CHAR_BIT)
/* git test */
void IntToBin(int num, char *p)
{
	unsigned int bitMask = 1 << (BITS_IN_INT - 1);
	int fStarted = 0;
	do {
		int fSet = num & bitMask;
		if (fStarted || (fStarted = fSet))
			*p++ = (fSet ? '1' : '0');
	} while (bitMask >>= 1);
	*p = '\0';
}

int main(int argc, char **argv)
{
	char buff[BITS_IN_INT + 1];
	int i = atoi(argv[1]);
	IntToBin(i, buff);
	printf("Binary of %d is %s.\n", i, buff);
}
