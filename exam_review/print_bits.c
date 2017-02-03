#include <unistd.h>

void print_bits(unsigned char octet)
{
	int oct;
	int i;

	i = 128;
	oct = octet;
	while (i != 0)
	{
		if (i <= oct)
		{
			write(1, "1", 1);
			oct %= i;
		}
		else
			write(1, "0", 1);
		i /= 2;
	}
}

int main()
{
	print_bits(128);
}