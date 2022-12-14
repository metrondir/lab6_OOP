#include <iostream> 
#include <time.h>

template<class T>
class Task2 {
    int size;
    T* array;
public:
    Task2() {
        SetSize(0);
    }
    ~Task2() {

    }
    T GetSize()
    {
        return size;
    }
    void SetSize(int value) {
        size = value;
    }
    T* CreateArray() {
        int max = 15, min = -15;
        srand(time(0));
        array = new T[size];
        for (int i = 0; i < size; i++)
        {
            array[i] = min + rand() % (100 * (max - min)) / 100.0f;
        }
        return array;

    }
    T PrintArray() {
        for (int i = 0; i < size; i++) {
            std::cout << array[i] << " ";
        }
        return 0;
    }
    T* SortedArray()
    {
        int s = size / 2;
        while (s > 0)
        {
            for (int i = 0; i < size - s; i++)
            {
                int l = i;
                while (l >= 0 && array[l] < array[l + s])
                {

                    T temp = array[l];
                    array[l] = array[l + s];
                    array[l + s] = temp;
                    l--;
                }
            }
            s /= 2;
        }
        return array;
    }
};




int main()
    {

        int n;
        std::cout << "Type size of array: ";
        std::cin >> n;
        std::cout << "Choose type of your array. float(1). long int(2). long float(3)";
        unsigned int choose;
        std::cin >> choose;
        switch (choose) {
        case 1: {
            Task2<float>ob;
            ob.SetSize(n);
            std::cout << "create array";
            ob.CreateArray();
            ob.PrintArray();
            std::cout << "\nsorted array";
            ob.SortedArray();
            ob.PrintArray();
            

            break;
        }
        case 2: {
            Task2<long int>ob;
            ob.SetSize(n);
            std::cout << "create array";
            ob.CreateArray();
            ob.PrintArray();
            std::cout << "\nsorted array";
            ob.SortedArray();
            ob.PrintArray();
           
            break;

        }
        case 3: {
            Task2<long float>ob;
            ob.SetSize(n);
            std::cout << "create array";
            ob.CreateArray();
            ob.PrintArray();
            std::cout << "\nsorted array";
            ob.SortedArray();
            ob.PrintArray();

            break;

        }
        default: {
            break;
        }

        }
        return 0;
    }