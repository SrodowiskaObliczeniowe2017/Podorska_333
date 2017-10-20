#include<stdio.h>
#include<math.h>

int main(void){

int input = 0, output, count = 0, i;
printf("podaj cene\n");
scanf("%d", &input);
for(i = 0; i < 1000; i++){
	if(input > pow(3,i)){
		input = input - 3^i;
		count++;
	}
	else if(input == 1){
        output = 1;
	}
}
output = count + 1;
printf("najmniejsza liczba monet: %d\n", output);
}
