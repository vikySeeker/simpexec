#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char str1[150]= "gcc ";
char str2[20]=" -o main.out";
char filename[50];
scanf("%s",&filename);
if(strlen(filename)>49){
	printf("Filename should exceed more than 50 characters...\n");
	exit(1);
}
strcat(str1,filename);
strcat(str1,str2);
char pc[150]="sudo chmod +x ";
strcat(pc,filename);
system(pc);
system(str1);
char rc[155]="./main.out";
system(rc);
return 0;
}
