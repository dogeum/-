#pragma once
#define STACK_SIZE 100
typedef char element;
element stack[STACK_SIZE];

typedef struct HtmlNode {
	element tag;
	struct HtmlNode* link;
}HtmlNode;

HtmlNode* top;

int isHtmlEmpty(void);
void push(element item);
element pop(void);
void printHtml(void);
