//#include <stdio.h>

//function begins excercise 2.17
//int main(void)
//
//{
//	int u; // velocity
//	int a; // acceleration
//	int t; // time
//
//	printf("Enter the velocity of the object\n");
//	scanf_s("%d", &u); // read integer1
//
//	printf("Enter the acceleration of the object\n");
//	scanf_s("%d", &a); // read integer2
//
//	printf("Enter the time that has elapsed\n");
//	scanf_s("%d", &t); // read integer3
//
//	int sum;
//	sum = u + a; // formule
//
//	printf("Sum is %d\n", sum); // print sum
//
//	int sum2;
//	sum2 = u * t + 0.5 * a * t * t; // formule 2
//
//	printf("Sum is %d\n", sum2);
//}


////2.19
//int main(void)
//{
//	int a, b, c;
//
//	printf("Enter three numbers\n");
//	scanf_s("%d%d%d", &a, &b, &c);
//
//
//	int sum;
//	sum = a + b + c;
//
//	printf("Sum is %d\n", sum);
//
//	int average;
//	average = (a + b + c) / 3;
//
//	printf("Average is %d\n", average);
//
//	int product;
//	product = a * b * c;
//
//	printf("Product is %d\n", product);
//
//
//	if (a < b && a < c) {
//		printf("Smallest number is %d\n", a);
//
//	}
//
//	else if (b < a && b < c) {
//		printf("Smallest number is %d\n", b);
//
//	}
//	else {
//		printf("Smallest number is %d\n", c);
//	}
//	
//	
//	if (a > b && a > c) {
//		printf("Largest number is %d\n", a);
//	}
//	else if (b > a && b > c) {
//		printf("Largest number is %d\n", b);
//	}
//	else {
//		printf("Biggest number is %d\n", c);
//	}
//	return 0;
//}

//2.26
//int main (void)
//{
//	int a, b;
//
//printf("Enter two numbers\n");
//scanf_s("%d%d", &a, &b);
//
//if (b % a == 0) {
//	printf("%d is a multiple of %d", b, a);
//}
//else {
//	printf("%d is not a multiple of the %d", b, a);
//}
//return 0;
//}

//2.31
//int main(void)
//{
	//printf("number		square		cube \n");

	//int a = 0, b = a * a, c = a * a * a;
	//printf("%d\t\t%d\t\t%d\n", a, b, c);

	//a = 1, b = a * a, c = a * a * a;
	//printf("%d\t\t%d\t\t%d\n", a, b, c);

	//a = 2, b = a * a, c = a * a * a;
	//printf("%d\t\t%d\t\t%d\n", a, b, c);

	//a = 3, b = a * a, c = a * a * a;
	//printf("%d\t\t%d\t\t%d\n", a, b, c);

	//a = 4, b = a * a, c = a * a * a;
	//printf("%d\t\t%d\t\t%d\n", a, b, c);

	//a = 5, b = a * a, c = a * a * a;
	//printf("%d\t\t%d\t\t%d\n", a, b, c);

	//a = 6, b = a * a, c = a * a * a;
	//printf("%d\t\t%d\t\t%d\n", a, b, c);

	//a = 7, b = a * a, c = a * a * a;
	//printf("%d\t\t%d\t\t%d\n", a, b, c);

	//a = 8, b = a * a, c = a * a * a;
	//printf("%d\t\t%d\t\t%d\n", a, b, c);

	//a = 9, b = a * a, c = a * a * a;
	//printf("%d\t\t%d\t\t%d\n", a, b, c);

	//a = 10, b = a * a, c = a * a * a;
	//printf("%d\t\t%d\t\t%d\n", a, b, c);

//}

//3.19

//int main(void)
//{
//
//float principal;
//float rate;
//int days;
//float interest;
//
//principal = 0;
//
//while (principal != -1) {
//
//printf("%s", "Enter loan principal, (-1 to end): ");
//scanf_s("%f", &principal);
//
//printf("%s", "Enter interest rate: ");
//scanf_s("%f", &rate);
//
//printf("%s", "Enter term of the loan in days: ");
//scanf_s("%d", &days);
//
//interest = (float)principal * rate * days / 365;
//printf("The interest charge is $%.2f: \n\n", interest);
//}
//return 0;
//}
//3.21

//int main(void)
//{
//	int a = 5;
//
//	printf("%d\n", a);
//	printf("%d\n", ++a);
//	printf("%d\n\n", a);
//
//	a = 5;
//	printf("%d\n", a);
//	printf("%d\n", a++);
//	printf("%d\n", a);
//}

//3.22

//int main(void)
//{
//	int number;
//	int b = 0;
//
//		printf("Enter a number\n");
//		scanf_s("%d", &number);
//
//		for (int i = 1; i <= number; i++) {
//			if (number % i == 0) {
//				++b;
//			}
//		}
//		if (b == 2) {
//			printf("%d is a prime number\n\n", number);
//		}
//		else {
//			printf("%d is not a prime number\n\n", number);
//		}
//
//	}

//3.23

//#include <stdio.h>
//int main(void)
//{
//	unsigned int number[10];
//	unsigned int counter;
//	unsigned int largest;
//	printf("enter the amount of units sold by each person\n");
//	
//	for (counter = 0; counter < 10; counter++){
//		scanf_s("%d", &number[counter]);
//	}
//
//	largest = number[0];
//	for (counter = 0; counter < 10; counter++) {
//		if (number[counter] > largest) {
//			largest = number[counter];
//	}
//	}
//	printf("%d is the largest", largest);
//	return 0;
//}

//3.24
//for loop

//#include <stdio.h>
//int main(void)
//{
//	printf("N\tN2\tN3\tN4\n\n");
//
//	int a[11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	for (int i = 1; i <= 10; i++) {
//		int b = i * i;
//		int c = i * i * i;
//		int d = i * i * i * i;
//		printf("%d\t%d\t%d\t%d\t\n", a[i], b, c, d);
//	}
//}



//3.24
//while loop

//#include <stdio.h>
//int main(void)
//{
//	printf("N\tN2\tN3\tN4\n\n");
//
//	int i = 1;
//	int a[11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	while (i <= 10) {
//		int b = i * i;
//		int c = i * i * i;
//		int d = i * i * i * i;
//		printf("%d\t%d\t%d\t%d\t\n", a[i], b, c, d);
//		i++;
//	}
//}

//4.9
#include <stdio.h>
int main(void)
{
	int integer1, integer2, integer3, integer4, integer5, integer6, integer7;
	int sum;
	int average;

	printf("Enter a sequence of numbers\n"); //ask numbers
	scanf_s("%d", &integer1);

	while (integer1 != 0, integer1--) {
		scanf_s("%d%d%d%d%d%d%d%d%d", &integer2, &integer3, &integer4, &integer5, &integer6, &integer7);
	}

	sum = integer1 + integer2 + integer3 + integer4 + integer5 + integer6 + integer7;
	average = sum / 7;

}
//4.14

//#include <stdio.h>
//int main(void) {
//
//
//}