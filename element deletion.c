#include <stdio.h>
int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("enter the index:");
    int index;
    scanf("%d",&index);
    
    for(int i = 0 ; i<10 ; i++){
        if(index == i){
            int temp = 0;
            array[i] = temp;
        }printf("\nnew_array:%d",array[i]);
    }
    printf("\nDO U WANT TO FILL THE VACANT SPOT:");
    char DECISION;
    scanf(" %c",&DECISION);
    if(DECISION=='y'){
        printf("\nenter the element:");
        scanf("%d",&array[index]);

    }else if(DECISION == 'n'){
        printf("\nPOSITION REMAINS VACANT");
        
    }
   

}