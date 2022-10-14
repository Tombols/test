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

//#include <stdio.h>
//
//int main (void)//function protoype
//{
//	unsigned int hours1;
//	unsigned int hours2;
//	unsigned int hours3;
//	
//	printf("hours rented by customer 1: \n");
//	scanf_s("%d", &hours1);
//	printf("hours rented customer 2: \n");
//	scanf_s("%d", &hours2);
//	printf("hours rented customer 3: \n");
//	scanf_s("%d", &hours3);
//
//	float charge1 = 25 + 5 * hours1;
//	float charge2 = 25 + 5 * hours2;
//	float charge3 = 25 + 5 * hours3;
//
//if (hours1 > 9)
//	{
//		int extra = hours1 - 9;
//		float charge1 = 25 + (5 * extra) + (0.50 * hours1);
//		printf("car\t%d\t%.2f\n", hours1, charge1);
//	}
//
//	else
//	{
//		printf("car\t%d\t%.2f\n", hours1, charge1);
//	}
//
//if (hours2 > 9)
//	{
//		int extra = hours2 - 9;
//		float charge2 = 25 + (5 * extra) + (0.50 * hours2);
//		printf("car\t%d\t%.2f\n", hours2, charge2);
//	}
//
//	else
//	{
//		printf("car\t%d\t%.2f\n", hours2, charge2);
//	}
//
//if (hours3 > 9)
//	{
//		int extra = hours3 - 9;
//		float charge3 = 25 + (5 * extra) + (0.50 * hours3);
//		printf("car\t%d\t%.2f\n", hours3, charge3);
//	}
//		
//	else
//	{
//		printf("car\t%d\t%.2f", hours3, charge3);
//	}
//}

//5.10

//#include <stdio.h>
//
//int ceil(float);
//int main()
//{
//	float number;
//
//	printf("Geef een nummer:\t\n");
//	scanf_s("%f", &number);
//
//	printf("De ceil van %.1f is %d\n", number, ceil(number));
//
//}
//
//int ceil(float x)
//{
//	int y;
//
//	y = x + .5;
//	return y;
//}

//5.18

//#include <stdio.h>
//
//int isEven(int nr);
//
//int main()
//{
//	int harry;
//	printf("Give a value for x: ");
//	scanf_s("%d", &harry);
//	int j = isEven(harry);
//
//	if (j == 1)
//	{
//		printf("%d is een even getal", harry);
//	}
//	
//	else
//	{
//		printf("%d is een oneven getal", harry);
//	}
//}
//
//int isEven(int nr)
//{
//	if ((nr % 2) == 0)
//	{
//		return 1;
//	}
//
//	else
//	{
//		return 0;
//	}
//}

//5.22

#include <stdio.h>
int round(float);
int remainder(int);
int main()
{
	

}
	
int round(float)
{
	int a;
	int b;

	printf("Give a value for a:\n");
	scanf_s("%d", &a);

	printf("Give a value for b:\n");
	scanf_s("%d", &b);
		
	int x = a / b;
	int y;
	y = round(x);
	return y;
	}
	
int remainder(int)
{
	int a;
	int b;
	int x = a / b;

	if (x)
}

}

//6.10, 6.11, 6.14,	6.19, 6.22

//6.10
//
//#include <stdio.h>
//
//float sales(float salaries);
//
//int main(void)
//{
//	char string[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i' };
//	int range[] = { 200 - 299, 300 - 399, 400 - 499, 500 - 599, 600 - 699, 700 - 799, 800 - 899, 900 - 999, 1000 };
//
//	for (size_t i = 0; i < 9; i++)
//	{
//		printf("%s\t", i, string[i]);
//		printf("%d\n", i, range[i]);
//	}
//
//}
//}
//
//
//#include <stdio.h>
//int main(void)
//{
//	int category[9];
//
//	do
//	{
//		printf("Enter the gross");
//		scanf_s("%d", &gross);
//
//		salary = 200 + 0.09 * gross;
//
//	} 
//	}
//	printf("%d", smallest);
//}

//6.10

//#include <stdio.h>
//
//int main(void)
//{
//	int category[9] = { 0 }; // init all values to 0
//	int gross;
//
//	do
//	{
//		printf("Enter the gross (-1 to stop): ");
//		scanf_s("%d", &gross);
//
//		if (gross != -1)
//		{
//			int salary = 200 + 0.09 * gross;
//
//			for (int i = 0; i < 8; i++)
//			{
//				// check category
//				if (salary > ((2 + i) * 100) && salary < (((2 + i) * 100) + 99))
//				{
//					category[i]++;
//				}
//			}
//			if (salary > 1000)
//			{
//				category[8]++;
//			}
//		}
//	} while (gross != -1);
//
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d - %d: %d\n", ((2 + i) * 100), (((2 + i) * 100) + 99), category[i]);
//	}
//	printf("    >1000: %d\n", category[8]);
//
//	return 0;
//}


//6.19

//#include<stdio.h>
//#include <cstdlib>
//#define MAX 36000
//int main(void)
//{
//	int array1[] = {1,2,3,4,5,6};
//	int array2[] = {1,2,3,4,5,6};
//
//	int random = rand() % 6 + 1;
//}

