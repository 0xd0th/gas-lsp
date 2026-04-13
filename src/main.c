
#include <stdio.h>

int main(void) {

	FILE* fd = fopen("/tmp/log.txt", "a");
	
	for ( int c = 0, itr = 0 ; itr != 4096 && (c = getc(stdin)) != EOF ; itr ++)
	{
			putc(c, fd);
			fflush(fd);
	}
	
	const char* response = "Content-Length: 52\r\n\r\n{\"jsonrpc\":\"2.0\",\"id\":1,\"result\":{\"capabilities\":{}}}";

		
	printf("%s", response);

	for ( int c = 0, itr = 0 ; itr != 4096 && (c = getc(stdin)) != EOF ; itr ++)
	{
			putc(c, fd);
			fflush(fd);
	}

	fclose(fd);
	return 0;

}

