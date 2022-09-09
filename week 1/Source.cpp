#include <stdio.h>

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
int main(void)
{
	printf("number		square		cube \n");

	int a = 0, b = a * a, c = a * a * a;
	printf("%d\t\t%d\t\t%d\n", a, b, c);

	a = 1, b = a * a, c = a * a * a;
	printf("%d\t\t%d\t\t%d\n", a, b, c);
	
	a = 2, b = a * a, c = a * a * a;
	printf("%d\t\t%d\t\t%d\n", a, b, c);
	
	a = 3, b = a * a, c = a * a * a;
	printf("%d\t\t%d\t\t%d\n", a, b, c);

	a = 4, b = a * a, c = a * a * a;
	printf("%d\t\t%d\t\t%d\n", a, b, c);

	a = 5, b = a * a, c = a * a * a;
	printf("%d\t\t%d\t\t%d\n", a, b, c);

	a = 6, b = a * a, c = a * a * a;
	printf("%d\t\t%d\t\t%d\n", a, b, c);

	a = 7, b = a * a, c = a * a * a;
	printf("%d\t\t%d\t\t%d\n", a, b, c);

	a = 8, b = a * a, c = a * a * a;
	printf("%d\t\t%d\t\t%d\n", a, b, c);

	a = 9, b = a * a, c = a * a * a;
	printf("%d\t\t%d\t\t%d\n", a, b, c);
	
	a = 10, b = a * a, c = a * a * a;
	printf("%d\t\t%d\t\t%d\n", a, b, c);

}