#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define buffer_size 255
#define fileName "numbers.txt"
#define format "%d\n"
FILE* in;
FILE* out;

int main() {
	char buffer_out[buffer_size];
	srand(time(0));
	int number = rand();
	//--WRITE
	fopen_s(&out, fileName, "a"); //w-write, r-read, a-append

	if (out == NULL)
	{
		printf("Couldn't open file");
		return 1;
	}
	printf("Writing in specified file...\n");
	sprintf_s(buffer_out, buffer_size, format, number);
	size_t bytes_wrote = fwrite(buffer_out, sizeof(char), strlen(buffer_out), out);
	fclose(out);
	if (bytes_wrote != strlen(buffer_out))
	{
		printf("Couldn't write in file.");
		return 1;
	}
	printf(format, number);
	printf("Done!\n");
	return 0;
}