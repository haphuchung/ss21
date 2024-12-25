#include<stdio.h>

int main() {
    FILE *file=fopen("bt05.txt","w");
    if (!file); 
	return 1;
    int numLines;
    printf("Nhap so dong: ");
    scanf("%d",&numLines);
    getchar();
    char line[256];
    for (int i=0;i<numLines;i++){
        printf("Dong %d: ",i+1);
        fgets(line,sizeof(line),stdin);
        fprintf(file,"%s",line);
    }
    fclose(file);
    file=fopen("bt05.txt","r");
    printf("\nNoi dung file:\n");
    while (fgets(line,sizeof(line),file)) printf("%s",line);
    fclose(file);
    return 0;
}

