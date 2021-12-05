#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdbool.h>

int main (){
while(true){
printf("0: exit\n");
printf("1: cd\n");
printf("2: cp\n");
printf("3: rm\n");
printf("4: mv\n");
printf("5: grep\n");

int comanda_number;
scanf("%d",&comanda_number);
if(comanda_number==0){
false;
break;

}
switch (comanda_number){

  case 1: {

   char arg1_cd[100];

   scanf("%s",arg1_cd);


   pid_t pid = fork();

   if(pid == 0){

    char *arg_list_cd[] = {"../bin/myproject_cd",arg1_cd,NULL};

    execv(arg_list_cd[0], arg_list_cd);

   }

   break;

        }case 2: {

   char arg1_cp[100];

   char arg2_cp[100];

   scanf("%s %s",arg1_cp,arg2_cp);


   pid_t pid = fork();

   if(pid == 0){

    char* arg_list_cp[]= {"../bin/myproject_cp",arg1_cp,arg2_cp,NULL};

    execv(arg_list_cp[0], arg_list_cp);

   }

   break;

        }case 3: {


   char arg1_rm[100];

  scanf("%s",arg1_rm);

   pid_t pid = fork();

   if(pid == 0){

    char* arg_list_rm[] = {"../bin/myproject_rm",arg1_rm,NULL};

    execv(arg_list_rm[0], arg_list_rm);

   }

   break;

        }case 4: {

   char arg1_mv[100];

   char arg2_mv[100];

   scanf("%s %s",arg1_mv,arg2_mv);

   pid_t pid = fork();

   if(pid == 0){

    char* arg_list_mv[] = {"../bin/myproject_mv",arg1_mv,arg2_mv,NULL};

    execv(arg_list_mv[0], arg_list_mv);

   }

   break;

        }case 5: {


   char arg1_grep[100];

   char arg2_grep[100];

   scanf("%s %s",arg1_grep,arg2_grep);

   pid_t pid = fork();

   if(pid == 0){

    char* arg_list_grep[] = {"../bin/myproject_grep",arg1_grep,arg2_grep,NULL};

    execv(arg_list_grep[0], arg_list_grep);

   }

   break;

  }

  default:
printf("Please be carefull\n");

  }

 }

}
