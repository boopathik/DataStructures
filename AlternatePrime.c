#include <stdio.h>
int main(){

	int i=3, count= 0, c=0,flag=1, n=0; 
	printf("Enter the number of alternate prime numbers to be printed\n");
	scanf("%d",&n);

	if(n >= 1){
		printf("2\t");
	
		for(count = 2; count <= n; ){

			for(c=2; c<= i-1; c++){
				if(i%c == 0){
					break;
				}
			}
			if(c == i){
				if(flag == 1){
					flag = 0;
				}
				else{
					printf("%d\t",i);
					count++;
					flag = 1;
				}
			
			
			}
			i++;
		}
		printf("\n");

	}

return 0;
}
