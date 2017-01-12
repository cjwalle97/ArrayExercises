#include <iostream>

//4.Create a program that asks for 5 numbers from the user, and store them in an array. Print
//out the numbers in reverse order.int ReverseOrder(int a, int b, int c, int d, int e)
{
	int ReversedArray[5] = { a, b, c, d, e };
	for (int i = 5; i > 0 ; i--)
	{
		std::cout << ReversedArray[i] << std::endl;
	}
}

//5.Write a program that lets the user enter 10 values into an array. The program should then
//display the largest and smallest values stored in the array.
int FindMinMax(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j)
{
	int List[10] = { a,b,c,d,e,f,g,h,i,j };
	int Largest = List[0];
	int Smallest = List[0];
	for (int i = 0; i < 10; i++)
	{
		if (List[i] > Largest)
		{
			Largest = List[i];
		}
		if (List[i] < Smallest)
		{
			Smallest = List[i];
		}
	}
}

//6.Create a program that creates a small 3x3 array of integers. Use a nested for loop to initialise
//the numbers 1 - 9. Output the numbers in a grid format.int Keypad()
{
	int Pad[3][3];
	for (int i = 0; i<3;i++)
	{
		for (int k = 0; k < 3; k++)
		{
			if(k>0)
			{
				Pad[i][k] = i + (k * 3);
				continue;
			}
			Pad[i][k] = i;
		}
	}
}

//7.

int main()
{
	//1.Is each of the following a valid or invalid array definition? (If a definition is invalid, explain
	//why)
	/*int numbers[10] = { 0, 0, 1, 0, 0, 1, 0, 0, 1, 1 }; Valid
	int matrix[5] = { 1, 2, 3, 4, 5, 6, 7 }; Invalid: too man variables in the array
	double radii[10] = (3.2, 4.7}; Valid
	int table[7] = { 2, , , 27, , 45, 39 }; Invalid: you can not skip indexes in the array
	char codes[] = { 'A', 'X', '1', '2', 's' }; Valid
	int blanks[]; Invalid: Array must at least have either a size or variables inside of it
	int collection[-20]; Invalid: size of an array con not be negative
	int hours[3] = 8, 12, 16; Invalid: variables in the array must be scoped*/

	/*2.Given the following array definition:
	int values[] = {2, 6, 10, 14};
	What does each of the following display?	*/
	/* a) cout << values[2] displays 10
	b) cout << ++values[0]; displays 2
	c) cout << values[1]++; displays 10
	d) x = 2;
	cout << values[++x]; displays 10
	e) cout << values[4]; causes an error becuase there is no index of 4*/

	//3.Write a for loop to initialize the following array (int data[10]) with the values 10, 9, 8… (Etc)	int data[10];
	for (int i = 0; i < 10; i++)
	{
		data[i] = 10 - i;
	}

}