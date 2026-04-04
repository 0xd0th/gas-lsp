
#include <stdio.h>
#include <strings.h>

// request : {"jsonrpc": "2.0", "method": "subtract", "params": [42, 23], "id": 1}
// response : {"jsonrpc": "2.0", "result": 19, "id": 1}
//          : {"jsonrpc": "2.0", "error": {"code": -32601, "message": "Method not found"}, "id": "1"}

typedef struct {
	short code;
	char message[22];
} ERROR;

typedef struct {
	char JSONRPCVERSION[4];
	char method[16];
	void* params;
	int id;
} JSONRPC_req;

typedef struct {
	char JSONRPCVERSION[4];
	void* result;
	ERROR* error;
	int id;

} JSONRPC_res;

int rpcparser(JSONRPC_req* req, char* buffer );
int rpcserializer(JSONRPC_res* res, char* buffer);

int main(void) {
	

	return 0;
}
