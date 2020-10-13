
#include <stdio.h>  
 
int main(){  
	double a;
	int b;
	double c;
	int t=0;
	scanf("%lf %d",&a,&b);
	if(b<5){
		t=0;
	}else {
		t=b/5;
	}
	if(a<=3){
		c=10+2*t;
	}else if(a>3&&a<=10){
		c=10+(a-3)*2+2*t;
	}else if(a>10){
		c=24+(a-10)*3+2*t;
	}
		c=(int)(c+0.5);
			
	printf("%.0f",c);
    return 0;  
 } 

