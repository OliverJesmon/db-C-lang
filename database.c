#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct index
{
    char alias[20];
    int age;
    char gen;
};
int main()
{
	FILE *fp;
	fp=fopen("data.txt","a+");
    struct index in[50];
    int i,n,j;
    int choice;
    printf("Created by Oliver Jesmon.");
    printf("\n\nEnter no. of people: ");
    scanf("%d",&n);
    system("clear");
    for(i=0; i<n; i++)
    {
        printf("\nEnter name:");
        scanf("%s",in[i].alias);
        printf("\nEnter age:");
        scanf("%d",&in[i].age);
        printf("\nGender:1.Male\t2.Female\n");
        scanf("%d",&choice);
        system("clear");
        switch(choice)
        {
        case 1:
            in[i].gen='M';
            break;
        case 2:
            in[i].gen='F';
            break;
        default:
            exit(0);
            break;
        }
    }
    system("clear");
    //fprintf(fp,"  Name\t\t\tAge   Gender");
    printf("  Name\t\t\tAge   Gender");
    for(i=0; i<n; i++)
    {

	    fprintf(fp,"\n%d.%s\t",i+1,in[i].alias);
        printf("\n%d.%s\t",i+1,in[i].alias);
	fprintf(fp,"\t");
        printf("\t");
	fprintf(fp,"%d",in[i].age);
        printf("%d",in[i].age);
	fprintf(fp,"    %c",in[i].gen);
        printf("    %c",in[i].gen);
    }
    fclose(fp);
    return 0;//Signing out Jesmon
}
