#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int size = 0;

    printf("Enter no. of elements\n");
    scanf("%d",&size);

    // dynamic memory allocation
    float * marks = NULL;
    marks = (float *)calloc(size,sizeof(float));


     // iteration
     for(int i=0;i<size;i++)
     {
        printf("Enter your marks of subject %d : \n",i);
        scanf("%f",&marks[i]);
    }

    for(int j=0;j<size;j++){
        printf("\nEntered marks of subject %d : ",j);
        printf("%f",marks[j]);
    }

    free(marks);   // deallocation
    

    return 0;
}