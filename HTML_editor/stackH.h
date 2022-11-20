#pragma once
typedef char element;

typedef struct HtmlNode {
	element tag;
	struct HtmlNode* link;
}HtmlNode;

HtmlNode* top;

int isHtmlEmpty(void);
void push(element item);
element pop(void);
void printHtml(void);
