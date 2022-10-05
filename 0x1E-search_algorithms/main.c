#include <stdlib.h>
#include <stdio.h>

int min(int a, int b)
{
        if (a > b)
                return a;
        return b;
}

int main() {

	printf("%i\n", min(1, 2));

	return 0;
}
