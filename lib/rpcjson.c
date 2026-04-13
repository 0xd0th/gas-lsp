
#include "rpcjson.h"
#include <string.h>

typedef struct {
	char key[32];
	char value[4096];
} pair;

void skipws(char** ptr ){
	while ( **ptr == ' ' || **ptr == '\n' || **ptr == '\t' || **ptr == '\r') (*ptr)++;
};

int rpcparser(char* buffer, JSONRPC_req* req){

	skipws(&buffer);
	if ( *buffer++ != '{')
		return INVALIDJSON; 
	
	skipws(&buffer);
	while(1) {

		if ( *buffer != '\"')
			return INVALIDJSON;
	
	} 	

	return 0; 	
};

int rpcserializer(JSONRPC_res* res, char* buffer);
