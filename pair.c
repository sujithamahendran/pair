#include<stdio.h>
int main()
{
char c;
        int i,j,n,noc,nod,asc=97,days;
        char name[100];
        printf("enter the value of n");
        scanf("%d",&n);
        noc=2*n;
        nod=noc-1;
        
        /* assigning the name for each child */
        for(i=0;i<noc;i++)
        {
        name[i]=asc;
        asc++;
        }
        days=nod;
        j=2*n-1;
        
        while(days!=0)
        {
        printf("\n the children pairs for the day %d",days);
        /* prints the pairs for the various days */
        for(i=0;i<2*n;i++)
        {
        printf("\n %c %c",name[i],name[j]);
        j--;
        } 
        
        /*shifts the position of children in the array */
        for(int i=0;i<2*n;i++)
        {
        char temp;
        if(i==0)
        {
        temp=name[i];
        }
        name[i]=name[i+1];
        if(i==(2*n)-1)
        {
        name[i]=temp;
        }
        }
        days--;
        }
return 0;
}
