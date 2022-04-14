#include <stdio.h>
#include <stdarg.h>

void print_strings(int n, char f,  ...){
	va_list(argptr);
	va_start(argptr, n);
	printf("%c\n", argptr);
	va_end(argptr);
	
}

int main(){
	print_strings(2, 'c', 'd');
	return 0;
}

