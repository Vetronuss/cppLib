#include <iostream> 
#include <string>
#include <assert.h>
#include <vector>
#include <ctime>
#include <cmath>
#include <algorithm>
#include <fstream>
#include <iterator>
using namespace std;
namespace coop{

	const double PI = 3.1415926535;

	template <class t>
	t toDegrees(t n)
	{
		double num = 180/PI;
		return n*num;
	}

	template <class t>
	t toRadians(t n)
	{
		double num = PI/180;
		return n*num;
	}

	//exponent calc
	template <class t, class y>
	t pow(t num1, y num2)
	{
		for (int i = 1; i < num2; i++)
		{
			num1*=num1;
		}
		return num1;
	}

	//square
	template <class t>
	t sq(t num)
	{
		return num * num;
	}

	///generate random double between min and max
	///dec is decimal precision, default is 2 decimals
	double randomD(int min, int max, int dec = 2)
	{
		static bool first = true;
		if (first){
			srand(time(NULL));
			first = false;
		}
		int num = rand() % (int)(max*pow(10,dec)-min*pow(10,dec));
		return (min*pow(10,dec)+num)/pow(10,dec);
	}
	
	int random(int min, int max) //range : [min, max]
	{
		
	   static bool first = true;
	   if (first) 
	   {  
	      srand( time(NULL) ); //seeding for the first time only!
	      first = false;
	   }
	   return min + rand() % (( max + 1 ) - min);
	}
	
	string input(string &str)
	{
		str = "";
		while (str == "")
		{
			getline(cin, str);
		}
		return str;
	}
	
	template <class T>
	T min(T var[], int size, int start = 0)
	{
		T smallest = var[start];
		for (int i = start+1; i < size; i ++)
		{
			if (var[i] < smallest)
			{
				smallest = var[i];
			}
		}
		return smallest;
	}
	
	template <class T>
	int minIndex(T var[], int size, int start = 0)
	{
		T smallest = var[start];
		int index = start;
		for (int i = start+1; i < size; i ++)
		{
			if (var[i] < smallest)
			{
				smallest = var[i];
				index = i;
			}
		}
		return index;
	}
	
	template <class T>
	T max(T var[], int size, int start = 0)
	{
		T greatest = var[start];
		for (int i = start+1; i < size; i ++)
		{
			if (var[i] > greatest)
			{
				greatest = var[i];
			}
		}
		return greatest;
	}
	
	template <class T>
	int maxIndex(T var[], int size, int start = 0)
	{
		T greatest = var[start];
		int index = start;
		for (int i = start+1; i < size; i ++)
		{
			if (var[i] > greatest)
			{
				greatest = var[i];
				index = i;
			}
		}
		return index;
	}
	
	template <class T>
	void print(T arr[],int size)
	{
		cout << "{";
		for (int i = 0; i < size; i++)
		{
			if (i <size-1)
				cout << arr[i] << ",";
			else
				cout << arr[i] << "}";
		}
	}

	template <class type>
	void askFile(type& stream)
	{
		string name;
		input(name);
		if (name.find(".")==string::npos)
			name+=".txt";
		stream.open(name.c_str());
		assert(stream.good());
	}

	template <class type>
	void sort(type arr[],int arrSize)
	{
		for (int i = 0; i < arrSize; i++)
		{
			int index = minIndex(arr,arrSize,i);
			type tempVal = arr[i];
			arr[i] = arr[index];
			arr[index] = tempVal;
		}
	}

	template <class t>
	t clamp(t var, double min, double max)
	{
		if (var < min)
			var = min;
		else if (var > max)
			var = max;
		return var;
	}

	template <class t>
	void insertionSort(t arr[], int n) 
	{ 
    int i, j;
		t key;
    for (i = 1; i < n; i++)
    { 
        key = arr[i]; 
        j = i - 1; 
 
        while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
	} 

	bool contains(string input, string substr)
	{
		if (input.find(substr) != string::npos)
		{
			return true;
		}else
		{
			return false;
		}
	
	}

	template <class type>
	void shuffle(type arr[], int length)
	{
		vector<type> arr2(arr, arr + length);;
		vector<type> arr3;
		for (int i = 0; i < length; i++)
		{
			int p = rand() % arr2.size();
			arr3.push_back(arr2[p]);
			arr2.erase(arr2.begin()+p);
		}
		for (int i = 0; i < arr3.size(); i++)
		{
			arr[i] = arr3[i];
		}
		
	}

	template <class t>
	void reverse(t arr[], int length)
	{
		t arr2[length];
		for (int i = 0; i < length; i++)
		{
			arr2[i] = arr[length-i-1];
		}
		copy(arr2, arr2+length, arr);
	}

	
}
