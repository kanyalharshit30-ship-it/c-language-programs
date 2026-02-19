#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("hk.txt","r");

    if(ptr==NULL)
    {
        printf("file does not exist\n");
        return 0;
    }

    int num;
    char chh;

    fscanf(ptr,"%d",&num);
    printf("the no. inside this is %d\n",num);

    fscanf(ptr,"%c",&chh);   // read char
    printf("the char inside this is %c\n",chh);

    fscanf(ptr,"%d",&num);
    printf("the no. inside this is %d\n",num);

    fclose(ptr);
    return 0;
}
