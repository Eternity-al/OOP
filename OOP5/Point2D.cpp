#include "Point2D.h"
#include <iostream>
#include <cmath>  // 用于sqrt函数（计算开方）

// 默认构造函数实现
Point2D::Point2D() : x(0.0), y(0.0) {
	std::cout << "Point2D默认构造函数调用：坐标初始化为(0,0)" << std::endl;
}

// 带参数构造函数实现
Point2D::Point2D(double x_val, double y_val) : x(x_val), y(y_val) {
	std::cout << "Point2D带参数构造函数调用：坐标初始化为(" << x << "," << y << ")" << std::endl;
}

// 析构函数实现
Point2D::~Point2D() {
	std::cout << "Point2D析构函数调用：释放点(" << x << "," << y << ")" << std::endl;
}

// move函数实现：修改坐标（x += dx, y += dy）
Point2D& Point2D::move(double dx, double dy) {
	this->x += dx;  // this指针指向当前对象，修改x坐标
	this->y += dy;  // 修改y坐标
	std::cout << "Point2D坐标修改：偏移量(" << dx << "," << dy << ")，新坐标为(" << x << "," << y << ")" << std::endl;
	return *this;  // 返回当前对象引用，支持链式调用
}

// show函数实现：输出坐标信息
void Point2D::show() const {
	std::cout << "二维点坐标：(" << x << ", " << y << ")" << std::endl;
}

// 友元函数实现：计算欧式距离
double distance(const Point2D& p1, const Point2D& p2) {
	double dx = p2.x - p1.x;  // x方向差值
	double dy = p2.y - p1.y;  // y方向差值
	return sqrt(dx * dx + dy * dy);  // 欧式距离公式：√[(x2-x1)²+(y2-y1)²]
}