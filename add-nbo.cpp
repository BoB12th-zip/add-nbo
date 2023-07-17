#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>

int main(int argc, char* argv[]){
	FILE *fp;
	uint32_t x;
	uint32_t y;

	fp = fopen(argv[1], "r");
	fread(&x, sizeof(uint32_t), 1, fp);


	fp = fopen(argv[2], "r");
	fread(&y, sizeof(uint32_t), 1, fp);

	x = htonl(x);
	y = htonl(y);

	printf("%d(0x%x) +  %d(0x%x) = %d(0x%x)\n",x, x, y, y, x+y, x+y);
}
