/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/
int equal(char *f, char *s, int i, int j)
{
	for (int k = i; k <= j; k++)
	{
		if (f[k]-48 < s[k]-48)
			return -1;
		if (f[k]-48 > s[k]-48)
			return 1;
		if (k == j)
			return 0;
	}
}
int valid(char *dob1, char *dob2)
{
	int i;
	if ((dob1[2] != '-') || (dob2[2] != '-') || (dob1[5] != '-') || (dob2[5] != '-'))
		return -1;
	for (i = 0; i < 10; i++)
	{
		if ((dob1[i] - 48 < 0) || (dob2[i] - 48 < 0))
			return -1;
	}
	return 1;
}
int isOlder(char *dob1, char *dob2)
{
	int e, v;
	v = valid(dob1, dob2);
	if (v == -1)
	{
		return -1;
	}
	e = equal(dob1, dob2, 6, 9);
	if (e == 0)
	{
		e = equal(dob1, dob2, 3, 4);
		if (e == 0)
		{
			e = equal(dob1, dob2, 0, 1);
			if (e == 0)
				return 0;
			else if (e == -1)
				return 1;
			else
				return 2;
		}
		else if (e == -1)
			return 1;
		else
			return 2;
	}
	else if (e == -1)
		return 1;
	else
		return 2;
}
