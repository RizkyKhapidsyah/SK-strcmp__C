#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
	//String Comparison

	char str[30] = "Nama Saya Rizky Khapidsyah";

	if (strcmp(str, "Hello") == 0) {
		printf("\n isi String sama!");
	} else {
		printf("\n isi String tidak sama!");
	}

	_getch();
	return 0;
}