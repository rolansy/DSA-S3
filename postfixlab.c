#include  <stdio.h>
#include <string.h>
#include <stdlib.h>

void post(char inf[100],char postf[100]);
/*int isop(char c);*/
int val(char c);
void main(){
	char inf[100];
	char postf[100];
	
	printf("Enter Infix Expression : ");
	scanf("%s", inf);
	//printf("%s", inf);
	
	post(inf, postf);
    	printf("Postfix expression: %s\n", postf);
}

void post(char inf[100],char postf[100]){
	char s[100];
	int top=-1;
	int j=0;
	int n = (int)strlen(inf);
	printf("%d", n);
	
	
	for(int i=0;i<n;i++){
	
		char c=inf[i];
	//	printf("%s", "testing");
		
		if ( c>='0' && c<='9'){
			postf[j++]=c;
		}
		else if (c=='('){
			s[++top]=c;
		}
		else if (c==')'){
			while (top!=-1 && s[top]!='('){
				postf[j++]=s[top--];
			}
			if (top!=-1 && s[top]!='('){
				top--;
			}
		}
		else if (c=='+' || c=='-' || c=='/' || c=='*'){
			while(top!=-1 && val(s[top])>=val(c)){
				postf[j++]=s[top--];
			}
		s[++top]=c;
		}
		
	
	}
		
	while(top!=-1){
		postf[j++]=s[top--];
	}
	printf("%d", j);
}
/*
int isop(char c){
	return (c=="+" || c=="-" || c=="/" || c=="*");
}
*/
int val(char c){
	if (c=='+' || c=='-'){
		return 1;
	}
	else if (c=='/' || c=='*'){
		return 2;
	}
	else {
		return 0;
	}
}
