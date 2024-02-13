#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *writefile=NULL;
    writefile=fopen("grades.dat","wb");
    char c;
    int i=0;
    while(scanf("%c", &c)!=EOF){
        fwrite(&c,sizeof(char),1,writefile);
    }

}