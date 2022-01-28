#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){

if(argc>1){
if(strcmp(argv[1],"--help")==0){
printf(" \n\n In this small project we Implement a process manager that will help you to deal with processes in easy way ,\n please follow the menue. \n we wish this help :) \n\n Best wishes. \n\n ");
}
}
else{

char user[50],command[200],t,z;
int PID[20];

while(1){

printf("\n\nEnter :\n1-) List all the processes in the system. \n2-)List all the processes grouped by user.\n3-)Display process ID of all the processes. \n4-)Run/stop a specific process \n5-)Send specific signals to specific process.\n6-)Exit\n\n");

int c,x;
scanf("%d",&c);
t=getchar();
switch(c){

case 1:
strcpy(command,"ps -a");
system(command);
break;

case 2:
strcpy(command,"ps -u ");
printf("Enter the name of the user :");
gets(user);
strcat(command,user);
system(command);
break;

case 3:
strcpy(command,"ps -eo pid");
system(command);

break;

case 4:

printf("\n\nEnter : \n1-) To stop specific process\n2-) To run specific process\n\n");
scanf("%d",&x);
z=getchar();
switch(x){
case 1:
strcpy(command,"kill -STOP ");
printf("Enter the process ID:");
gets(PID);
strcat(command,PID);
system(command);
break;

case 2:
strcpy(command,"kill -CONT ");
printf("Enter the process ID:");
gets(PID);
strcat(command,PID);
system(command);
break;
}
break;

case 5:
strcpy(command,"kill ");
printf("Enter the process ID:");
gets(PID);
strcat(command,PID);
system(command);
break;

case 6:
exit(0);
break;

defualt : 
printf("Enter correct choice :(  ");
break;
}
}
}
return 0;
}
