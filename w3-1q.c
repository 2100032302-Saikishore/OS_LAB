#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
pid_t pid,ppid;
gid_t gid;
uid_t uid;
pid = getpid();
ppid = getppid();
gid = getgid();
uid = getuid();
if(pid < 0)
{
perror("unable to get process id(PID) \n");
}
else
{
printf("PROCESS ID : %d \n",pid);
}
if(ppid < 0)
{
perror("unable to get parent process id(PPID) \n");
}
else
{
printf("PARENT PROCESS ID IS : %d \n",ppid);
}
if(gid < 0)
{
perror("unable to get group id(GID) \n");
}
else
{
printf("GROUP ID IS : %d \n",gid);
}
if(uid < 0)
{
perror("unable to get user id(UID) \n");
}
else
{
printf("USER ID IS : %d \n",uid);
}
return 0;
}
