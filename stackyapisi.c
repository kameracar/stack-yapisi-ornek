#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

int stack[SIZE]={};
int top=-1;
void push();
void pop();
void display();



int main() {
	int islem;
	while(1){
		printf("lutfen yapmak istediginiz degeri giriniz\n1-push\n2-pop\n3-display\n4-exit\n");
		scanf("%d",&islem);
		
		switch(islem){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				return 0;
				break;
			default:
				printf("lutfen uygun bir deger seciniz\n");
				break;
		}
		
	}
}

void push(){
	int alinan;
	if(top==SIZE-1){
		printf("stack tamamen dolu\n");
	}else{
		top++;
		printf("lutfen push yapilacak sayiyi giriniz\n");
		scanf("%d",&alinan);
		stack[top]=alinan;
	}
}

void pop(){
	if(top==-1){
		printf("stack zaten bos\n");
	}else{
		top--;
	}
}

void display(){
	if(top==-1){
		printf("stack bos\n");
	}else{
		int i;
		for(i=0;i<=top;i++){
		printf("%d\n",stack[i]);
	}
}
}
