#include <stdio.h>
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
	int socketclient = socket(AF_INET, SOCK_STREAM, 0);//creation d'un socket duclient
	struct sockaddr_in addrclient;
	addrclient.sin_addr.s_addr = inet_addr("127.0.0.1");// adresse par defaut du serveur 
	addrclient.sin_family = AF_INET;
	addrclient.sin_port = htons(2500);//l'etablissement de la connection au port
	connect(socketclient, (const struct sockaddr *)&addrclient, sizeof(addrclient));//l'etablissement de la connexion entre le client et l'adresse client au serveur
	printf("vous etes maintenant connecte\n");
	User user;
	recv(socketclient, &user, sizeof(User), 0);//prendre le message au serveur et renvoyer au client
	printf("%s \n",user.message);
	
	close(socketclient);

	return 0;
	

}
