#include <iostream>
#include <algorithm>
#include <array>
#include <bitset>
#include <vector>
#include <deque>
#include <list>
#include <valarray>

class StaticArrays 
{
public:
    // Одномерный массив
    int array[5] = 
    {
        1, 2, 3, 4, 5
    };

    
    // Двумерный массив
    int matrix[3][3] = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    

    // Трёхмерный массив
    int tensor[3][3][3] =
    {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        },
        {
            {19, 20, 21},
            {22, 23, 24},
            {25, 26, 27}
        }
    };


    // Массив символов
    char string[6] = "Hello";


    // Массив bool значений
    bool flags[4] = 
    {
        true, false, false, true
    };


    // Массив структур
    struct Point
    {  
        int x, y;
    };
    Point points[3] =
    {
        {0, 0},
        {1, 1},
        {2, 2}
    };


    // Массив указателей
    int *ptrs[5] = 
    {
        &array[0], 
        &array[1], 
        &array[2], 
        &array[3], 
        &array[4]
    };
    

    // Массив фиксированной длины с использованием constexpr
    static constexpr int size = 4;
    int constexprarray[size] = 
    {
        1, 2, 3, 4
    };


    // std::array
    std::array<int, 5> std_array =
    {
        1, 2, 3, 4, 5
    };


    // static constexpr std::array - Более оптимизированный вариант при известных значениях
    static constexpr std::array<int, 5> static_std_array = 
    {
        6, 7, 8, 9, 10
    };


    // std::tuple 
    std::tuple<int, std::string, float, char> tuple =
    {
        1, "Hello", 1.02f, '!'
    };


    // std::pair - пара типов
    std::pair<std::string, int> pair =
    {
        "Age=", 22
    };


    // Битовые массивы
    std::bitset<8> bits = 0b10110101;
};

class DynamicArrays 
{
public:
    DynamicArrays() {}
    ~DynamicArrays() {}


    // new + delete Динамическое выделение памяти, работает только внутри функций, методов
    int* new_delete() 
    {
        int *array = new int[5];
        array[0] = 1;
        array[1] = 2;
        array[2] = 3;
        array[3] = 4;
        array[4] = 5;
        return array;
        delete[] array; // <- не произойдет, что не удобно (утчеки памяти), поэтому есть умные указатели unique_ptr
    }


    // std::unique_ptr - Умный указатель
    std::unique_ptr<int[]> uniqueptr() 
    {
        std::unique_ptr<int[]> uptr(new int[5]);
        uptr[0] = 1;
        uptr[1] = 2;
        uptr[2] = 3;
        uptr[3] = 4;
        uptr[4] = 5;
        // std::unique_ptr<int[]> ptr2 = uptr; <- Ошибка, так как у нас уникальный указаталь и он может быть только 1
        return uptr; // uptr = {1, 2, 3, 4, 5}
    }


    // std::shared_ptr - Умный указатель с возможностью копирования
    std::shared_ptr<int[]> sharedptr()
    {
        std::shared_ptr<int[]> sptr(new int[5]);
        sptr[0] = 6;
        sptr[1] = 7;
        sptr[2] = 8;
        sptr[3] = 9;
        sptr[4] = 10;
        return sptr; // sptr = {6, 7, 8, 9, 10}
    }

    
    // std::vector
    std::vector<int> vector = 
    {
        1, 2, 3, 4, 5
    };


    // std::deque - Работа с крайними элементами front и back
    std::deque<int> dq = 
    {
        1, 2, 3, 4, 5
    };


    // std::list 
    std::list<int> lst = 
    {
        1, 2, 3
    };


    // std::valarray
    std::valarray<int> valarray() 
    {
        std::valarray<int> va = 
        {
            1, 2, 3, 4, 5
        };
        va = va + 1;
        return va; // va = {2, 3, 4, 5, 6}
    }
};  

int main() 
{
    StaticArrays staticArrays;
    
    DynamicArrays dynamicArrays;
    
    return 0;
}