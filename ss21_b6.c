#include<stdio.h>

int main(){
    FILE *src=fopen("bt01.txt","r");
    if (!src){
        printf("Khong the mo file bt01.txt.\n");
        return 1;
    }
    FILE *dest=fopen("bt06.txt","w");
    if (!dest){
        printf("Khong the tao file bt06.txt.\n");
        fclose(src);
        return 1;
    }
    char ch;
    while ((ch=fgetc(src))!=EOF){
        fputc(ch,dest);
    }
    fclose(src);
    fclose(dest);
    printf("Da sao chep noi dung tu bt01.txt sang bt06.txt.\n");
    return 0;
}
