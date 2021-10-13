#include"stdio.h"


class Array
{
	public:
		Array(int num)
		{
			array = new int[num];
		}


		~Array()
		{
			delete[] array;
			array = nullptr;
		}


		void Set_Array(int num)
		{
			array[num] = num;
		}

		int Get_Array(int num)
		{
			return array[num];
		}

	private:

		int* array = nullptr;

};




int main()
{
	int num = 1000;

	Array a(num);

	for (int i = 0; i < num; i++)
	{
		a.Set_Array(i);
	}

	for (int i = 0; i < num; i++)
	{
		printf("%d\n", a.Get_Array(i));
	}

}