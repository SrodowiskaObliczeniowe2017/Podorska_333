#include<stdio.h>
#include<math.h>

int main(void){

int input = 0, count = 0, i, temp = 3, quantity = 0;

int basic = 3;
printf("podaj cene\n");
scanf("%d", &input);

while(1){
       temp = pow(basic, count);
printf("temp %d \n ", temp);
       if( temp<input)
        {
            count++;
        }
        else{
          break;
        }
printf("count %d \n", count);
}
count = count-1;


while(count != 0){
    while(input/pow(basic, count) > 0){
            printf("count %d \n", count);
            if(input/pow(basic,count)>0){
                input = input - pow(basic, count);
                printf("input %d \n", input);
                quantity++;
                printf("quantity %d \n", quantity);
            }
            else{
                count--;
            }
    }
}

printf("najmniejsza liczba monet: %d\n", quantity);
}
