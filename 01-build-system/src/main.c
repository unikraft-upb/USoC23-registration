#include <stdio.h>
#include <myheader.h>

extern char* traveler;
extern char *get_key();

int main(int argc, char *argv[])
{
	printf("Hello, %s!\n", traveler);
	printf("Here is what you're looking for: %s\n", get_key());
	return 0;
}
