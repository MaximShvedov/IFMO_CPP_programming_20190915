//Шахматный король ходит по горизонтали, вертикали и диагонали, но только на 1 клетку. Даны две различные клетки шахматной доски, определите, может ли король попасть с первой клетки на вторую одним ходом.
//
//Формат входных данных
//        Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.
//Формат выходных данных
//        Программа должна вывести YES, если из первой клетки ходом короля можно попасть во вторую или NO в противном случае.
//Sample Input:
//
//4
//4
//5
//5
//Sample Output:
//
//YES

#include "t05_chess_king.h"
#include <iostream>
#include <cmath>

using namespace std;

int t05_chess_king() {

int A1, B1, A2, B2, x, y;

  cin >> A1;
  cin >> B1;
  cin >> A2;
  cin >> B2;

  x=A1-A2;
  y=B1-B2;
  if (x<0) { x=x*(-1);}
  if (y<0) { y=y*(-1);}

  if ( ((x==0) && (y==0)) || ((x>1) || (y>1)) ) {
        cout << "NO";
  } else cout << "YES";

  return 0;