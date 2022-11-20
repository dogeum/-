#include <stdio.h>
#include <string.h>
#include "stackH.h"
#include "HTML.h"

int testHtml(char* exp) {
	char symbol;
	int i, length = strlen(exp);
	top = NULL;

	for (i = 0; i < length; i++) {
		symbol = exp[i];
		switch (symbol) {
		case '<':
			push(symbol); 
		case '>':
			break;
		case '.': 
			printHtml();
		}
	}
}