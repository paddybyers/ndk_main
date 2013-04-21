#include <stdio.h>
#include <stdlib.h>

#define DEBUG 1

#include "defines.h"

int main() {
	LOGV("ndk_main: starting ...");
	printf("hello, world\n");
	LOGV("ndk_main: exiting ...");
	exit(0);
}
