#include <stdio.h>

int main(){
    int a[100], size, x, flag=0;
    printf("Enter the number of elements: \n");
    scanf("%d", &size);
    printf("\nEnter the elements: \n");
    for(int i = 0; i < size ; i++){
        printf("\nElement %d : \n",(i+1));
        scanf("%d", &a[i]);
    }

    do{
    
    flag=0;
    printf("\nEnter the element to be searched: \n");
    scanf("%d", &x);

    for(int i=0; i < size; i++){
        if(a[i]==x){
            printf("\nFound at %d\n", (i+1));
            flag=1;
        }
    }

    if(flag==0){
        printf("\nNot Found\n");
    }
    }while(x!=-999);
}