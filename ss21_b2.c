#include<stdio.h>

int main(){
    FILE *file=fopen("bt01.txt","r");
    if (!file){
        printf("Khong the mo file bt01.txt.\n");
        return 1;
    }
    char firstChar=fgetc(file); 
    if (firstChar!=EOF){
        printf("Ki tu dau tien trong file la:'%c'\n",firstChar);
    } else {
        printf("File rong.\n");
    }
    fclose(file);
    return 0;
}

