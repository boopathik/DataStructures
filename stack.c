#include <stdio.h>
#define SIZE  5
int stack[SIZE];
int count = 0;
void push(int);
void Display();
void pop();


int main(){
	
	int i=0;
	int data=0;
	int choice = 0;
	printf("Enter the choice to do stack operation\n");
	do{
		
		printf("1.Push\t2.Pop 3. Display \n");
		scanf("%d",&choice);

		if(choice == 1){
			printf("Enter the value to be pushed\n");
			scanf("%d",&data);
			push(data);
		}
		else if(choice == 2){
			
			pop();

		}
		else if(choice == 3){
			Display();
		}
		else if (choice == 0){
			printf("Exiting...\n");
		}


	}while(choice != 0);
	
}
void push(int data){
	if(count >= SIZE){
		printf("Stack Overflow...\n your value - %d - is not pushed into stack\n",data);
	}
	else {

		stack[count++] = data;
	}

}
void pop(){

	if(count <= 0){
		printf("Stack Underflow...\n");
		
	}
	else {

		printf("Data %d  is poped out from the stack",stack[--count]);
	}

}
void Display(){

	int i=0;
	for(i =count-1; i>=0; i--){
		printf("%d\t",stack[i]);
	}
	printf("\n");
}
