#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmpstr(const void* a, const void* b) {
	//const char* aa = (const char*)a;
	//const char* bb = (const char*)b;
	return 0;//strcmp(aa, bb);
}

char* longest(char* s1, char* s2) {
	char* rez = s1;
	int sz;
	sz = strlen(rez);
	printf("Size: %d\n", sz);
	qsort(rez, sz, sizeof(char*), cmpstr);
	return rez;
}

int main() {

	printf("Start..\n");

	printf("Result: %s\n", longest("aretheyhere", "yestheyarehere"));

	return 0;
}
