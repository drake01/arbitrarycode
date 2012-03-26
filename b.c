#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<netdb.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int sockfd,newsockfd;
	struct sockaddr_in serv_addr;
	if(argc<4)
	{
		printf("Usage: ./a.out name port1 port2");
		exit(1);
	} 
	int portno=atoi(argv[2]);
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	if(sockfd<0)
	{
		printf("ssocket not created");
		exit(1);
	}
	struct hostent *host;
	host=gethostbyname(argv[1]);
	if(host==NULL)
	{
		printf("host not found");
		exit(0);	
	}
	bzero((char*)&serv_addr,sizeof(serv_addr));
	serv_addr.sin_family=AF_INET;
	bcopy((char *)host->h_addr,(char *)&serv_addr.sin_addr.s_addr,host->h_length);
	serv_addr.sin_port=htons(portno);
	char buf[200];
	bzero(buf,sizeof(buf));
	if(connect(sockfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr))<0)
	{
		printf("unable to connect");
		exit(0);
	}
	// server side creation
	int sockfd2,newsockfd2,portno2;
	struct sockaddr_in serv_addr2,cli_addr2;
	portno2=atoi(argv[3]);
	sockfd2=socket(AF_INET,SOCK_STREAM,0);
	if(sockfd2==-1)
	{
		printf("socket for server side not created");
		exit(1);
	}
	bzero((char *)&serv_addr2,sizeof(serv_addr2));
	serv_addr2.sin_port=htons(portno2);
	serv_addr2.sin_family=AF_INET;
	serv_addr2.sin_addr.s_addr=INADDR_ANY;
	if(bind(sockfd2,(struct sockaddr*)&serv_addr2,sizeof(serv_addr2))<0)
	{
		printf("unable to bind the server side");
		exit(1);
	}
	listen(sockfd,5);
	int cli_len2=sizeof(cli_addr2);
	newsockfd2=accept(sockfd2,(struct sockaddr*)&cli_addr2,&cli_len2);
	if(newsockfd2==-1)
	{
		printf("didnot connect");
		exit(1);
	}
	//////////////////
	
	int n=read(sockfd,buf,199);
	printf("%s",buf);
	/*printf("\nenter 2 numbers\n");
	char num1[10];
	char num2[10];
	gets(num1);
	*/
	n=write(sockfd2,buf,sizeof(buf));
	/*if(n<0)
	{
		printf("unable to send data");
		exit(0);
	}
	gets(num2);
	n=write(sockfd,num2,strlen(num2));*/
	if(n<0)
	{
		printf("unable to send data");
		exit(0);
	}
	bzero(buf,sizeof(buf));
	n=read(sockfd,buf,10);
	printf("%s",buf);
	return 0;
	
}
