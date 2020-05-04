#include<stdio.h>
#include<string.h>
struct libdata
{
    int accno,price;
    char title[25],ano[25];
    char issue[5];

}s[10];
int main()
{
    int a,b,i,c,count=0,z;
    char temp[25];
    //printf("1. Add book information\n2. Display book informations\n3. List all books of a given author\n4. List the title of specified book\n5. List the count of all the Books\n6. Exit\n");
    //scanf("%d",&a);
    do
    {
        printf("\n1. Add book information\n2. Display book informations\n3. List all books of a given author\n4. List the title of specified book\n5. List the count of all the Books\n6. Exit\n");
        scanf("%d",&a);
        switch(a)
    {
        case 1: printf("Enter the data number to be altered\n");
                scanf("%d",&b);
                printf("Enter Accession  number\n");
                scanf("%d",&s[b].accno);
                printf("Enter title of the book\n");
                scanf("%s",&s[b].title);
                printf("Enter Author Name\n");
                scanf("%s",&s[b].ano);
                printf("Enter price of the book\n");
                scanf("%d",&s[b].price);
                printf("Issue Status\n");
                scanf("%s",s[b].issue);
                break;
        case 2: printf("Enter the data number\n");
                scanf("%d",&b);
                printf("%d\n%s\n%s\n%d\n%s\n",s[b].accno,s[b].title,s[b].ano,s[b].price,s[b].issue);
                break;
        case 3: printf("Enter the name of the author\n");
                scanf("%s",&temp);
                z=strlen(s[1].ano);
                for(i=0;i<z;i++)
                {
                    if(temp[i]==s[i].ano[i])
                    {
                        printf("%d\n%s\n%s\n%d\n%s\n",s[i].accno,s[i].title,s[i].ano,s[i].price,s[i].issue);
                    }
                }
                break;
        case 4: printf("Enter the data number\n");
                scanf("%d",&b);
                printf("%s",s[b].title);
                break;
        case 5: for(i=0;i<10;i++)
                {
                    if(s[i].title!='\0')
                        count++;
                }
                printf("%d",count);
                break;
        case 6: a=6;
        default: printf("\nInvalid input......Exiting Application");
                a=6;
    }
    }while(a!=6);
    return 0;
}
