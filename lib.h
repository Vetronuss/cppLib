#include <iostream> 
#include <string>
#include <assert.h>
#include <vector>
#include <ctime>
#include <cmath>
#include <fstream>
using namespace std;
namespace coop{

	
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

	

}