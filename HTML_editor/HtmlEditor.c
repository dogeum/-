#include <stdio.h>
#include "HTML.h"
#include "stackH.h"

int main(void) {
	char* symbol = "<html> <head> <body> .";
	printf("%s", symbol);

	testHtml(symbol);
	getchar(); return 0;
}