
#include <iostream> 
#include <time.h>
template<typename T>
T* FoundMaxValue(int size)
{
  
	T* Array = new T[size];
    T max = 0;
	int maxs = 15, min = -15;
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		Array[i] = min + rand() % (100 * (maxs - min)) / 100.0f;
	}
    for (int i = 0; i < size; i++)
    {
        std::cout << Array[i]<<" ";
    }
    for (int i = 0; i < size; i++)
    {
        if (max < Array[i])
        {
            max = Array[i];
            
        }
    }
    std::cout <<"\nMaxValue: " << max ;
	return Array;
}

int main()
{
	
    int n;
    std::cout << "Type size of array: ";
    std::cin >> n;
    std::cout << "Choose type of your array1. int(1) ,long double(2) ,float(3)\n";
    unsigned int choose;
    std::cin >> choose;
    switch (choose) {
    case 1: {
        int* array = new int[n];
        std::cout << "Generated array: ";
        array = FoundMaxValue<int>(n);
        
        break;
    }
    case 2: {
        long double* array = new long double[n];
        std::cout << "Generated array: ";
        array = FoundMaxValue<long double>(n);
        break;
       
    }
    case 3: {
        float* array = new float[n];
        std::cout << "Generated array: ";
        array = FoundMaxValue<float>(n);
        break;
        
    }
    default: {
        break;
    }
    }
    return 0;
}
