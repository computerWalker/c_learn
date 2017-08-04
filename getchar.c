#include<stdio.h>
int main(){
	int c;
	while((c=getchar())!=EOF){
	switch(c){
	case '0':
		printf("number:");
		putchar(c);
		printf("\n");
		break;
	defaut:
		putchar(c);
		}
	}
	return 0;
}
