#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main()
{
    printf("Q1...........\n");
    int q,w,c,temp,cho;
    printf("enter the length of array: \n");
    scanf("%d",&c);
    int ar[c];
    printf("Enter %d number : \n",c);
    for(q =0 ; q<c ;q++)
    {
        scanf("%d",&ar[q]);
    }
    printf("ascending order press 0 , descending order press 1 \n");
    scanf("%d",&cho);
    if (cho == 0 )
    {
        for(q=0;q<5;q++)
        {
        for(w=q+1 ;w<5;w++)
            {
            if(ar[q]>ar[w])
                {
                temp=ar[q];
                ar[q]=ar[w];
                ar[w]=temp;
                }
            }
        }
        printf("Array elements: ");
        for(q=0;q<5;q++)
        {
            printf("%d ",ar[q]);
        }
    }
    else
    {
        for(q=0;q<5;q++)
        {
        for(w=q+1 ;w<5;w++)
            {
            if(ar[q]<=ar[w])
                {
                temp=ar[q];
                ar[q]=ar[w];
                ar[w]=temp;
                }
            }
        }
        printf("Array elements: ");
        for(q=0;q<5;q++)
        {
            printf("%d ",ar[q]);
        }
    }

    printf("\n");
    return 0;
}
