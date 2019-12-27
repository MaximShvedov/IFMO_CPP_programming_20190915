//Даны пять действительных чисел: x, y, xc, yc, r. 
// Проверьте, принадлежит ли точка (x, y) кругу с центром (xc, yc) и радиусом r. 
// Если точка принадлежит кругу, выведите слово YES, иначе выведите слово NO.
//Решение должно содержать функцию IsPointInCircle(x, y, xc, yc, r), 
// возвращающую True, если точка принадлежит кругу и False, если не принадлежит. 
// Основная программа должна считать координаты точки, вызвать функцию IsPointInCircle 
// и в зависимости от возвращенного значения вывести на экран необходимое сообщение.
//Функция IsPointInCircle не должна содержать инструкцию if.
//
//Формат входных данных
//        Вводятся пять действительных чисел.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//0.5
//0.5
//0
//0
//1
//Sample Output 1:
//
//YES
//        Sample Input 2:
//
//0.5
//0.5
//1
//1
//0.1
//Sample Output 2:
//
//NO

#include <iostream>
#include <cmath>

using namespace std;

float distance(float a, float b, float c, float d); //function distance
bool proverka(float a, float b); //функция проверки
bool IsPointInCircle(float a, float b, float c, float d, float e); //function IsPointInCircle

int t03_circle() {

    float x, y, xc, yc, r;

    cin >> x >> y >> xc >> yc >> r;
    if (IsPointInCircle(x, y, xc, yc, r) == 0)
        cout << "NO";
    else cout << "YES";

    return 0;
}

float distance(float a, float b, float c, float d) {
      return sqrt(abs(pow(a - c, 2) + pow(b - d, 2)));
}
bool proverka(float a, float b) {
     if (a > b)
        return false;
     else return true;
}
bool IsPointInCircle(float a, float b, float c, float d, float e) {
     return proverka(distance(a, b, c, d), e);
}
