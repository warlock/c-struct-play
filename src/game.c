#include <stdio.h>

struct Data
{
    int first;
    double second;
    char third[10];
};

int main() {
	/*
	struct Data data = {22, 4.0, "Hi"};
	FILE* output;

	output = fopen("Data.dat", "wb");

	fwrite(&data, sizeof(data), 1, output);

	fclose(output);
	return(0);
	*/

	struct Data data;
	FILE* input;

	input = fopen("Data.dat", "rb");

	fread(&data, sizeof(data), 1, input);
	printf("Test: %s\n", data.third);
	return(0);
}