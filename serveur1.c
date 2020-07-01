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
	addrServer.sin_addr.s_addr = inet_addr("127.0.0.1"); // il s'agit ici de l'adresse par defaut du serveur
	addrServer.sin_family = AF_INET;
	addrServer.sin_port = htons(2500)//l'ouverture d'un port(un recepteur de donnes)
	bind(socketServer, (const struct sockaddr *)&addrServer, sizeof(addrServer));//l'etablissessement de la connexion au serveur
	
	listen(socketServer, 1);// le serveur est en attente d'une connection client
	printf("attente de connexion du client\n");	
}
