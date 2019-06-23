/*************************************************************************
	> File Name: ex_class2.cpp
	> Author: Lix
	> Mail: 776579471@qq.com
	> URL: https://github.com/JK-Lix
	> Created Time: 2019年06月23日 星期日 16时00分53秒
 ************************************************************************/
#include<iostream>
#include<algorithm>
#include<climits>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;

class Point {
public :  //先执行构造化列表
    Point() : _x(0), _y(0) {
        cout << "Point constructor" << endl;
    }     //构造逻辑，可随便使用对象内的所有方法。
    Point(int x, int y) : _x(x), _y(y) {
        cout << "Point constructor with parameters" << endl;
    }
    Point(const Point &b) { //拷贝构造
        this->_x =b._x;
    }
    int getX() {return this->_x;}
    int getY() {return this->_y;}
private :
    int _x, _y;
};

int main() {
    Point p1(2, 3), p2(3, 4);
    cout << p1.getX() << " " << p1.getY() << endl;
    return 0;
}
