#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *writefile=NULL;
    FILE *readfile=NULL;
    
    writefile=fopen("grades.dat","wb");
    char c;
    int i=0;
    while(scanf("%c", &c)!=EOF){
        fwrite(&c,sizeof(char),1,writefile);
    }
    fclose(writefile);
    readfile=fopen("grades.dat","rb");
    while(fread(&c,sizeof(char),1,readfile)){
        printf("%c", c);
    }
    fclose(readfile);

}