//Шахматный ферзь ходит по диагонали, горизонтали или вертикали. Даны две различные клетки шахматной доски, определите, может ли ферзь попасть с первой клетки на вторую одним ходом.
//
//Формат входных данных
//        Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.
//Формат выходных данных
//        Программа должна вывести YES, если из первой клетки ходом ферзя можно попасть во вторую или NO в противном случае.
//Sample Input 1:
//
//1
//1
//2
//2
//Sample Output 1:
//
//YES
//        Sample Input 2:
//
//1
//1
//2
//3
//Sample Output 2:
//
//NO

#include "t07_chess_queen.h"
#include <iostream>
#include <cmath>

using namespace std;

int t07_chess_queen() {

int A1, B1, A2, B2, x, y;

  cin >> A1;
  cin >> B1;
  cin >> A2;
  cin >> B2;

  x=A1-A2;
  y=B1-B2;
  if (x<0) { x=x*(-1);}
  if (y<0) { y=y*(-1);}

  if ( ((x=y) && ((x+y)!=0)) || ((A1==A2) && (B1!=B2)) || ((A1!=A2) && (B1==B2)) ) {
        cout << "YES";
  } else cout << "NO";

  return 0;
};