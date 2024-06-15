#include<stdio.h>
#include <syslog.h>
#include <stdlib.h>
int main(int argc , char* argv[])
{
	printf("%s -- %d","HELLO",argc);
	char* writefile=argv[1];
	char* writestr=argv[2];
	FILE *fptr;
	openlog("Writing",LOG_PID|LOG_CONS,LOG_USER);
	if(argc==1)
	{
		syslog(LOG_PERROR,"No parameters passed. Please pass parameters");
		exit(1);
	}
	if(argc==2)
	{
		syslog(LOG_PERROR,"Missing one parameter");
		exit(1);
	}
	if(argc==3)
	{
		syslog(LOG_DEBUG,"%s to %s ", argv[1], argv[2]);
		fptr=fopen(argv[1],"w");
		fprintf(fptr,"%s",argv[2]);
		fclose(fptr);
	}
	closelog();
}
