
#include <stdio.h>
#include <string.h>

int main(void) {

	FILE* fd = fopen("/tmp/log.txt", "a");
	
	while(1) {
	for ( int c = 0, itr = 0 ; itr != 4096 && (c = getc(stdin)) != EOF ; itr ++)
	{
			putc(c, fd);
			fflush(fd);
	}

    const char* json = "{\"jsonrpc\":\"2.0\",\"id\":1,\"result\":{\"capabilities\":{}}}";

    printf("Content-Length: %zu\r\n\r\n%s", strlen(json), json);
    fflush(stdout);
	
	}

	fclose(fd);
	return 0;

}

