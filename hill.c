#include<stdio.h>
void main(){
    int i,j,n, mat[20][20],sum=0,ans[20][1];
    char text[20];
    printf("Enter the string:\n");
    scanf("%s",text);
    for(i=0;i<20;i++)
    {
        if(text[i]>=97&&text[i]<122) {
        }
        else
        {n=i;
        break;
        }
    }
for(i=0;i<n;i++)
    {
        text[i]=text[i]-'a';
    }
    printf("\nEnter key matrix row by row.\n",n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
     printf("key[%d][%d] : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\n");
 printf("Key matrix is :\n");
    for(i = 0; i <n; i++) {
        for(j = 0; j <n; j++)
     printf("%d\t", mat[i][j]);

        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum+=mat[i][j]*(int)text[j];
        }
        ans[i][0]=sum;
    }
    printf("\nCipher Text is: ");
    for(i=0;i<n;i++)
    {
        printf(" %c",((ans[i][0])%26)+97);
    }
}



