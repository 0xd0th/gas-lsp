
enum { INVALIDJSON = -1}; 

typedef struct {
	char id;
	char JSONRPCVERSION[4];
	char method[16];
	void* params;
} JSONRPC_req;

typedef struct {
	short code;
	char message[22];
} ERROR_res;

typedef struct {
	char JSONRPCVERSION[4];
	void* result;
	ERROR_res* error;
	int id;

} JSONRPC_res;

int rpcparser(char* buffer, JSONRPC_req* req);
int rpcserializer(JSONRPC_res* res, char* buffer);

