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

//#include <stdio.h>
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

//#include <stdio.h>
//int main(void)
//{
//	printf("N\tN2\tN3\tN4\n\n");
//
//	for (int i = 1; i <= 10; i++) {
//		int b = i * i;
//		int c = i * i * i;
//		int d = i * i * i * i;
//		printf("%d\t%d\t%d\t%d\n", i, b, c, d);
//	}
//}

//#include <stdio.h>
//int main (void)
//{
//	int nv;
//	int n;
//	printf("Enter number value\n");
//	scanf_s("%d", &nv);
//
//	printf("Enter %d numbers\n", nv); //ask numbers
//
//	while (nv !=, nv--) {
//		scanf_s("%d", &n)
//			printf("%d", n);
	/*}*/
	
	/*sum = integer1 + integer2 + integer3 + integer4 + integer5 + integer6 + integer7;
	average = sum / 7;*/
//}



//4.9

//#include <stdio.h>
//int main(void) {
//
//	int nv, i, sum = 0, numbers;
//	float average;
//	printf("Enter number value:\n");
//	scanf_s("%d", &nv);
//
//	printf("Enter %d numbers\n", nv);
//	for (i = 0; i < nv; ++i) {
//		scanf_s("%d", &numbers);
//		sum = sum + numbers;
//	}
//	average = sum / nv;
//
//	printf("total %d numbers = %d\n", nv, sum);
//	printf("average of %d numbers = %.1f", nv, average);
//	
//	return 0;
//}


//#include <stdio.h>
//#include <math.h>
//int main(void) {
//
//	int i;
//	printf("N1\tN2\tN3\tN4\n\n");
//
//	for (i = 1; i <= 5; i++) {
//		int a = pow(i, 2);
//		int b = pow(i, 3);
//		int c = pow(i, 4);
//		int d = pow(i, 5);
//		printf("%d\t%d\t%d\t%d\n", i, a, b, c);
//	}
//	return 0;
//}

//4.14
//#include <stdio.h>
//int main(void) {
//
//	int factorial = 1;
//	printf("N1\tN2\n\n");
//
//	for (int i = 1; i <= 5; i++) {
//		factorial *= i;
//		printf("%d\t%d\n", i, factorial);
//	}
//	return 0;
//}

//factorial 20 wordt niet geprint omdat het een heel groot getal is.  

//4.16
//#include <stdio.h>
//int main(void) {
//
//	int rows = 10;
//
//	for (int i = 1; i <= rows; ++i) {
//		for (int j = 1; j <= i; ++j)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//
//	
//	for (int i = rows; i >= 1; --i)
//	{
//		for (int j = 1; j <= i; ++j)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//
//
//	for (int i = rows; i >= 1; --i)
//	{
//		for (int k = rows - i; k > 0; k--)
//			printf(" ");
//		for (int j = 1; j <= i; ++j)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	for (int i = 1; i <= rows; ++i)
//	{
//		for (int k = rows - i; k > 0; k--)
//			printf(" ");
//		for (int j = 1; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//	return 0;
//}


//4.20
//
//#include <stdio.h>
//int main(void) {
//
//	printf("Condition 1\tCondition\t\tCondition 1 && Condition 2\n");
//	printf("0\t\t0\t\t\t0\n");
//	printf("0        \tnonzero \t\t0        \n");
//	printf("nonzero         0\t\t\t0        \n");
//	printf("nonzero         nonzero\t\t        1\n\n");
//
//	printf("Condition 1\tCondition\t\tCondition 1 && Condition 2\n");
//	printf("0\t\t0\t\t\t0\n");
//	printf("0        \tnonzero \t\t1        \n");
//	printf("nonzero         0\t\t\t1        \n");
//	printf("nonzero         nonzero\t\t        1\n\n");
//
//	printf("Condition 1\tCondition\n");
//	printf("0\t\t1\n");
//	printf("nonzero         0\n\n");
//}

//5.9; 5.10; 5.18; 5.22 en 5.39

//5.9

//$25 for 8 hours
//additional $5 per hour after 8 hours
//max charge is $50 exclusive of tax
//$0.50 per hour as service tax

//#include <stdio.h>
//float calculateCharges(int hours) 
//{
//	float charge = 25;
//	int extra;
//	int tax = 0.5;
//	float days;
//	int max = 50;
//
//	if (hours > 8)
//	{
//		extra = hours - 8;
//		charge = charge + (5 * extra);
//	}
//
//	if (charge > 50) 
//	{
//		charge = max;
//	}
//
//	if (hours >= 24) 
//	{
//		days = hours / 24;
//		charge = charge / days;
//	}
//
//	if (hours != 0)
//	{
//		tax = tax * hours;
//	}
//
//	return charge;
//
//}
//
//
//int main(void) 
//{
//	int hours;
//
//	for (int i = 1; i <= 3; i++) 
//	{
//		scanf_s("%d", &hours);
//		printf("Car\tHours\tCharge\n");
//		printf("%d\t%d\t%.2f", i, hours, calculateCharges(hours));
//	}
//
//}


//5.10

//#include <stdio.h>
//#include <math.h>
//
//int main(void)
//{
//
//	int x;
//	int y;
//
//	printf("Define X\n");
//	scanf_s("%d", &x);
//	
//	y = ceil(x + .5);
//	printf("Y = %d", y);
//
//	return 0;
//}

//5.18

#include <stdio.h>

float isEven(int total)
{
	int total = 0;

	scanf_s("%d", &n);
	while (n % 2 == 0)
	{
		scanf_s("%d", &n);
		printf("%d", n);
		total = total + n;
	}
	return n;
}
int main(void)
{
	int n;

	printf("Enter an integer\n");
	scanf_s("%d", &n);

	printf (%f, isEven);
}