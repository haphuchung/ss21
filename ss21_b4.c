#include<stdio.h>

int main() {
    FILE *file=fopen("bt01.txt","r");
    if (!file); 
	return 1;
    char line[256];
    if (fgets(line,sizeof(line),file)){
        printf("Dong dau tien:%s",line);
    }else{
        printf("File rong hoac khong the doc.\n");
    }
    fclose(file);
    return 0;
}

