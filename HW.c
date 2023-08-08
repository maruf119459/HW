#include <stdio.h>
int main(){
    int x;
    int arr[15];
    while (1){
        printf("Please enter an integer. 1 to 15 range.\n\n");
        if (scanf("%d", &x) == 1)
        {
            if (x >= 1 && x <= 15){
                printf("Thanks! Your input is valid.\n");
                printf("Please, Input %d numbers for the array.\n\n",x);
                for(int i = 0; i < x; i++){
                    scanf("%d",&arr[i]);
                }break;
            }
            else{
                printf("Invalid input.You enter input again\n");
            }
        } else{
            printf("Invalid input. Please enter an integer.\n");
            while (getchar() != '\n');
        }
    }
    printf("Print the all element of array.\n\n");
    for(int i = 0; i < x; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;  }
