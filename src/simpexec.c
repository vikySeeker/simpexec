#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void c(char*farg);
void cpp(char *farg);
void py(char *farg);
char *filename;
int main(int argc,char *argv[]){
if(argc<3){
	printf("Minimum 3 Arguments should be specified along with command\n\n\tthe required command format is...\n\n./simpexec.out <programming-language>(exetnsion is acceptable like \"py\" for python) <input-filename>\n\n");
	exit(1);
}
char *lang=argv[1];
char *fg=argv[2];
char *p1="python";
//py();
if(!(strcmp(lang,"python")) || !(strcmp(lang,"py"))){
	
	py(fg);

}else if(!(strcmp(lang,"c++")) || !(strcmp(lang,"cpp"))){
	cpp(fg);
}else if(!(strcmp(lang,"c")) || !(strcmp(lang,"C"))){
	c(fg);
}else{
	exit(0);
}


//char *filename=argv[2];
return 0;
}

void c(char *farg){
	filename=farg;
	
	char str1[70]= "gcc ";
	char str2[13]=" -o main.out";
	filename=farg;
	if(strlen(filename)>49){
		printf("Filename should exceed more than 50 characters...\n");
		exit(1);
	}
	strcat(str1,filename);
	strcat(str1,str2);
	char pc[75]="sudo chmod +x ";
	strcat(pc,filename);
	system(pc);
	system(str1);
	char rc[15]="./main.out";
	system(rc);
	
}
void cpp(char *farg){
	filename=farg;
	
	char str1[70]= "g++ -o main.out ";                           //char str2[13]=" -o main.out";
	filename=farg;
	if(strlen(filename)>49){
		printf("Filename should exceed more than 50 characters...\n");
		exit(1);
	}
	strcat(str1,filename);                  //strcat(str1,str2);
	char pc[75]="sudo chmod +x ";
	strcat(pc,filename);
	system(pc);
	system(str1);
	char rc[15]="./main.out";
	system(rc);
	
}
void py(char *farg){
	filename=farg;
	
	char str1[70]= "python3 ";                                   //char str2[13]=" -o main.out";
	filename=farg;
	if(strlen(filename)>49){
		printf("Filename should exceed more than 50 characters...\n");
		exit(1);
	}
	strcat(str1,filename);                                       //strcat(str1,str2);
	char pc[75]="sudo chmod +x ";
	strcat(pc,filename);
	system(pc);
	system(str1);                                              //char rc[15]="./main.out";                       //system(rc);
	
}


