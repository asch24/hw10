﻿#include <iostream>
using namespace std;


// 1. Дано натуральное число n.Выведите все числа от 1 до n.

//void show_numbers(int a, int b)
//{
//    if (a > b)
//    {
//        return;
//    }
//    cout << a << " ";
//    show_numbers(a + 1, b);
//}
//
//int main() 
//{
//    setlocale(0, "");
//    int num;
//    cout << "Введите число: ";
//    cin >> num;
//    show_numbers(1, num);
//}

//----------------------------------------------------------

// 2. Дано натуральное число N. Выведите все его цифры по одной, в обратном порядке, разделяя их пробелами. 
// При решении этой задачи нельзя использовать строки, списки, массивы(ну и циклы, разумеется).Разрешена только рекурсия и целочисленная арифметика.

//void num_reversed(int number) 
//{
//    if (number == 0)
//    {
//        return;
//    }
//    cout << number % 10 << " ";
//    num_reversed(number / 10);
//}
//
//int main() 
//{
//    setlocale(0, "");
//    int num;
//    cout << "Введите число: ";
//    cin >> num;
//
//    num_reversed(num);
//}

//----------------------------------------------------------

// 3. Дано натуральное число N. Вычислите сумму его цифр. 
// При решении этой задачи нельзя использовать строки, списки, массивы, глобальные переменные(ну и циклы, разумеется).

//int sum_of_digits(int number) 
//{
//    if (number == 0)
//    {
//        return 0;
//    }
//    return number % 10 + sum_of_digits(number / 10);
//}
//
//int main() 
//{
//    setlocale(0, "");
//    int num;  
//    cout << "Введите число: ";
//    cin >> num;
//    cout << "Сумма цифр числа: " << sum_of_digits(num);
//}
