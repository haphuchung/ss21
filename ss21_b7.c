#include<stdio.h>

typedef struct{
    int id;
    char name[100];
    int age;
}Student;

int main(){
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d",&n);
    getchar();
    Student students[n];
    for (int i=0;i<n;i++){
        printf("\nNhap thong tin sinh vien thu %d:\n",i+1);
        printf("ID: ");
        scanf("%d",&students[i].id);
        getchar();
        printf("Ten: ");
        fgets(students[i].name,sizeof(students[i].name),stdin);
        printf("Tuoi: ");
        scanf("%d",&students[i].age);
        getchar();
    }
    FILE *file=fopen("students.txt","w");
    for (int i=0;i<n;i++){
        fprintf(file,"%d, %s, %d\n",students[i].id,students[i].name,students[i].age);
    }
    fclose(file);
    printf("\nThong tin da luu vao students.txt.\n");
    return 0;
}

