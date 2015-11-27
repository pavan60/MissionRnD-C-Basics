/*
OVERVIEW:  Given 2 integers (num1, num2), write a function that returns the count of numbers between the num1..num2 that are divisible by num1.
		E.g.: count(3, 15) returns 5 (3, 6, 9, 12, 15).

INPUTS:  Two numbers num1, num2.
		num1, num2 >= 0.

OUTPUT: Return the count of numbers between the num1..num2 that are divisible by num1.

ERROR CASES: Return -1 in error cases.

NOTES:
*/
int count(int num1, int num2)
{
	int count;
	if ((num1 <=0) || (num2 < 0))
		return -1;
	if (num2 == 0)
		return 0;
	while (1)
	{
		count = num2%num1;
		if (count == 0)
			return num2/num1;
		else
			num2--;
	}
}