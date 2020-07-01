#include<stdio.h>
#include<stdlib.h>
#include<string.h>		
#include<sys/types.h>		
#include<sys/socket.h>	
#include<netinet/in.h>
#include<netdb.h>
#include<arpa/inet.h>
#include<unistd.h>
typedef struct User
{
	char message[1000];
}User;
int main(void)
{
	int socketServer = socket(AF_INET, SOCK_STREAM, 0); // ce socket permettra la liaison entre le serveur et le client
}
