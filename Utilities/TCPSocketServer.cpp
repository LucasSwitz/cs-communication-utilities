#include "TCPSocketServer.h"


#define DEFAULT_BUFFER_SIZE 512
#define SOCKET_ERROR -1
#define INVALID_SOCKET -1
#define SOCKET_READ_TIMEOUT_SEC 1


TCPSocketServer::TCPSocketServer(std::string address, int port) {
	if ((st = socket(AF_INET, SOCK_DGRAM, IPPROTO_TCP)) == INVALID_SOCKET)
	{
		printf("Could not create socket.\n");
		return;
	}
	else
	{
		printf("Socket created.\n");
	}

	Addr.sin_family = AF_INET;
	Addr.sin_addr.s_addr = inet_addr(IPADDRESS.c_str());
	Addr.sin_port = htons(PORT);

	if (bind(st, (SOCKADDR*)&Addr, sizeof(Addr)) == SOCKET_ERROR)
	{
		printf("Connection error :: binding.\n");
		return;
	}
	else
	{
		printf("Connected.\n");
	}

	return;
}

TCPSocketServer::~TCPSocketServer() {
	printf("object being destroyed");

}

int TCPSocketServer::server() {
	//implement function here
}

int TCPSocketServer::send() {
	//implement function here
}