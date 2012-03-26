#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int sockfd,newsockfd,portno;
	struct sockaddr_in serv_addr,cli_addr;
	if(argc<2)
	{
		printf("enter portno also");
		exit(1);	
	}
	portno=atoi(argv[1]);
	sockfd=socket(AF_INET,SOCK_STREAM,0);
	if(sockfd==-1)
	{
		printf("socket  not created");
		exit(1);
	}
	bzero((char *)&serv_addr,sizeof(serv_addr));
	serv_addr.sin_port=htons(portno);
	serv_addr.sin_family=AF_INET;
	serv_addr.sin_addr.s_addr=INADDR_ANY;
	
	if(bind(sockfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr))<0)
	{
		printf("unable to bind");
		exit(1);
	}
	listen(sockfd,5);
	int cli_len=sizeof(cli_addr);
	newsockfd=accept(sockfd,(struct sockaddr*)&cli_addr,&cli_len);
	if(newsockfd==-1)
	{
		printf("didnot connect");
		exit(1);
	}
	char buf[200];
	bzero(buf,sizeof(buf));
	char msg[200];
	gets(msg);
	int n=write(newsockfd,msg,strlen(msg));
	if(n<0) 
	{
		printf("unable to post to client");
		
	}
	bzero(buf,sizeof(buf));
	n=read(newsockfd,buf,10);
	if(n<0)
	{
		printf("cannot read");
	}
	int num1=atoi(buf);
	printf("%d\n",num1);
	bzero(buf,sizeof(buf));
	n=read(newsockfd,buf,10);
	if(n<0)
	{
		printf("cannot read");
	}
	int num2=atoi(buf);
	printf("%d\n",num2);
	int sum=num1+num2;
	int i=0;
	//printf("%d\n",sum);
	bzero(buf,sizeof(buf));
	for(;sum!=0;i++,sum=sum/10)
	{
		int temp=sum%10;
		buf[i]=temp+48;
	}
	int j=0;
	for(;j<i/2;j++)
	{
		char temp=buf[j];
		buf[j]=buf[i-j-1];
		buf[i-j-1]=temp;
	}
	//printf("%d",sum);
	//char result=(char)sum;
	//printf("%s",buf);
	n=write(newsockfd,buf,strlen(buf));
	printf("%s",buf);
	return 0;

}
