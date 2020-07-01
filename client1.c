#include <stdio>
#include <stdlib.h>
#include <string.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<netdb.h>
#include<arpa/inet.h>
#include<unistd.h>

//creation de ce qui recevra la taille du message du serveur par la fonction typedef struct
typedef struct User
{
	char message[200];
}User;//indication

int main()
{
	int socketclient = socket(AF_INET, SOCK_STREAM, 0)//creation d'un socket duclient

}
