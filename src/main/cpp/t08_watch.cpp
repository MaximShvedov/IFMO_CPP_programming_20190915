//Электронные часы
//
//Электронные часы показывают время в формате h:mm:ss (от 0:00:00 до 23:59:59),
// то есть сначала записывается количество часов,
// потом обязательно двузначное количество минут,
// затем обязательно двузначное количество секунд.
// Количество минут и секунд при необходимости дополняются до двузначного числа нулями.
//
//С начала суток прошло N секунд. Выведите, что покажут часы.
//
//Формат входных данных
//
//        На вход дается натурально число N, не превосходящее 107 (10000000).
//
//Формат выходных данных
//
//        Выведите ответ на задачу.
//
//Sample Input 1:
//
//3602
//Sample Output 1:
//
//1:00:02
//Sample Input 2:
//
//129700
//Sample Output 2:
//
//12:01:40

#include "t08_watch.h"
#include <iostream>

using namespace std;

int t08_watch() {

long int N, A, B, C;

 cin >> N;
 A=N/3600;
 B=(N%3600)/60;
 C=(N%60)%60;

 cout <<A%24<<":"<<B/10<<B%10<<":"<<C/10<<C%10<< endl;

return 0;
}
