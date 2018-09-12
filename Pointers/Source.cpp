#include <iostream>

//int main()
//{
//	//Declare an array 'int nums[6]' with the value of 1
//	//Use ptr to initialize all values in nums to 1
//	//nums = {1, 1, 1, 1, 1, 1}    <----Result
//
//	int nums[6];
//	int *myptr = &nums[6];
//	*myptr = nums[0];
//	*myptr = 1;
//	myptr++;
//	*myptr = 1;
//	myptr++;
//	*myptr = 1;
//	myptr++;
//	*myptr = 1;
//	myptr++;
//	*myptr = 1;
//	myptr++;
//	*myptr = 1;
//
//	system("pause");
//	return 0;
//}

//Reverse the elements that ptr points to
void reverseArray(int arr[], int size)
{
	//First Number
	int *first = &arr[0];
	//Last Number
	int *last = &arr[2];

	//Swapping First & Last
	int temp = *first;
	*first = *last;
	*last = temp;

	//Displays Swap
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n" << std::endl;
}
int main()
{
	int nums[3] = {2,4,6};
	reverseArray(nums, 3);
	system("pause");
}