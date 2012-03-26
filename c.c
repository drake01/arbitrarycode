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
	if(argc<3)
	{
		printf("provide hostname portno");
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
	int n=read(sockfd,buf,199);
	printf("%s",buf);
	printf("\nenter 2 numbers\n");
	char num1[10];
	char num2[10];
	gets(num1);
	
	n=write(sockfd,num1,strlen(num1));
	if(n<0)
	{
		printf("unable to send data");
		exit(0);
	}
	gets(num2);
	n=write(sockfd,num2,strlen(num2));
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
