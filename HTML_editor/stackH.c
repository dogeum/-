#include <stdlib.h>
#include "stackH.h"

//스택이 비었는지 확인
int isHtmlEmpty(void) {
	if (top == NULL) return 1;
	else return 0;
}

//스택에 top에 원소 삽입
void push(element item) {
	HtmlNode* temp = (HtmlNode*)malloc(sizeof(HtmlNode));

	temp->tag = item;
	temp->link = top;
	top = temp;
}

element pop(void) {
	element item;
	HtmlNode* temp = top;

	if (isHtmlEmpty()) {
		printf("\n\n Stack is empty\n");
		return 0;
	}
	else {
		item = temp->tag;
		top = temp->link;
		free(temp);
		return item;
	}
}

void printHtml(void) {
	HtmlNode* p = top;
	while(isHtmlEmpty()==1)
		printf("</%c>", top);
}