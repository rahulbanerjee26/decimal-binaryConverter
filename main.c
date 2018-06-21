#include <stdio.h>
#include <math.h>


int binaryToDecimal(int a);
int decimalToBinary(int b);
int main(int argc, char **argv)
{
	int number;
	char function;
	printf("Enter B for conversion of Binary to Decimal, OR \nEnter D for conversion of Decimal to Binary: ");
	scanf("%c",&function);
	printf("Enter your number: ");
	if(function!='B'&&function!='D'){
	printf("Invalid input; Goodbye");	
	}
	else{
		scanf(" %d",&number); //IFF input is B or D, number will be inputed
		int a=number;
		if(function=='B'){
			int b=binaryToDecimal(number); // invoking of function
			printf("%d in binary = %d in decimal",a,b);
		}
		if(function=='D'){
			int c=decimalToBinary(number); // invoking of function
			printf("%d in decimal= %d in binary",a,c);
		}
	}
	return 0;
}

int decimalToBinary(int b){
	int temporary2=b;
	int i=1;
	int sum=0;
	while(temporary2>0){
		int remainder;
		//checking for remainder when number is divided by 2
	if(temporary2%2==0){
		remainder=0;
	}
	else{
		remainder=1;
	}
	temporary2/=2;// dividing number by 2
	sum=i*remainder+sum; //calculating the result
	i=i*10;
	}
	return sum;
	//printf("%d in decimal = %d in binary",b,sum);
}

int binaryToDecimal(int b){
	int temporary2=b;
	int temporary3=b;
	int sum=0;
	int numberOfDigits;
	int i=0;
	//counting the number of digits
	for(numberOfDigits=0;temporary2>0;numberOfDigits++){
	temporary2=temporary2/10;
	}
	//calculating the result
	for(i=0;i<numberOfDigits;i++)
	{
			int d=temporary3%10;
			sum=sum + d*pow(2,i);
			temporary3/=10;
	}
	//printf("%d in binary = %d in decimal",b,sum);
return sum;
}
