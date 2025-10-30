#include <stdio.h>
int main(){
    long n;
    do{
        printf("nhap n: ");
        scanf("%ld",&n);
        if(n<1){
            printf("nhap lai n: ");
        }

    }while(n<1);

    int inverseN,temp=n,unit;
    while(temp>0){
        unit=temp%10;
        inverseN=inverseN*10+unit;
        temp=temp/10;
    }
    
    if(n==inverseN){
      	printf("%ld la so dao nguoc",n);
	  }else{
	  	printf("%ld khong la so dao nguoc",n);
	  	
	  }
   
	return 0;

}
