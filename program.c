#include<stdio.h>
#include<math.h>

int main(void){

int input, output, count = 0;
printf("podaj cenę\n");
scanf("%d", &input);
printf("cena: %d\n", input);
for(int i = 0; i < 1000; i++){
	while(input > 3^i){
		input = input - 3^i;
		count++;
	}
}
output = count;
printf("najmniejsza liczba monet: %d\n", output);
}
