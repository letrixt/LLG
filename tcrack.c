#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	int a[atoi(argv[1])], b[4] = {
		0x21, 0x7e, 0x00,
		0x20, 0x0a
	}, c = atoi(argv[1]), i;

	int l(int x){
		switch(a[x]){
		case (a[x] < b[0]):
			a[c] = { 0 };
		case (a[x] == b[1]):
			a[x] = b[0];
			l(x-1);
		default:
			a[x]++;
		}
	}
	
	for(i = 0; i < 94*c; i++){
		l(c - 1);
	}
}
