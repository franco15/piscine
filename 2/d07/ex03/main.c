#include <stdio.h>
#include <stdlib.h>

char *ft_concat_params(int argc, char **argv);

int main(int argc, char **argv)
{
	char *b = ft_concat_params(argc, argv);
	printf("%s", b);
	free(b);
}