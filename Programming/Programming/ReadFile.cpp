#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


void readFile() {

	FILE* myfile;
	int numInt;

	myfile = fopen("myfile.txt", "r");


	if (!myfile) {

		printf("error\a\n");
		exit(101);
	}


	while ((fscanf(myfile, "%d", &numInt)) == 1) {
		printf("%d ", numInt);
	}
	fclose(myfile);

}

void writeFile(){
	FILE* myfile;
	int numInt;

	myfile = fopen("myfile.txt", "w");

	if (!myfile) {
		printf("error\a\n");
		exit(101);
	}

	fprintf(myfile, "i just write this file");

	fclose(myfile);	

}
