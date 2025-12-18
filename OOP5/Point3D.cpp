#include "Point3D.h"
#include <iostream>
#include <cmath>  // 用于sqrt函数

// 默认构造函数实现：调用基类默认构造，初始化z=0.0
Point3D::Point3D() : Point2D(), z(0.0) {
	std::cout << "Point3D默认构造函数调用：z坐标初始化为0.0，三维坐标(0,0,0)" << std::endl;
}

// 带参数构造函数实现：调用基类带参数构造，初始化z=z_val
Point3D::Point3D(double x_val, double y_val, double z_val) : Point2D(x_val, y_val), z(z_val) {
	std::cout << "Point3D带参数构造函数调用：三维坐标初始化为(" << x_val << "," << y_val << "," << z_val << ")" << std::endl;
}

// 析构函数实现
Point3D::~Point3D() {
	// 通过基类show函数获取x,y坐标（需借助基类public成员或友元，此处简化输出）
	std::cout << "Point3D析构函数调用：释放三维点(" << /*x*/ "," << /*y*/ "," << z << ")" << std::endl;
}

// move函数实现：修改三维坐标
Point3D& Point3D::move(double dx, double dy, double dz) {
	// 调用基类的move函数修改x,y坐标
	Point2D::move(dx, dy);
	this->z += dz;  // 修改z坐标
	std::cout << "Point3D坐标修改：z轴偏移" << dz << "，新三维坐标为(" << /*x*/ "," << /*y*/ "," << z << ")" << std::endl;
	return *this;  // 返回当前对象引用
}

// show函数实现：输出三维坐标信息
void Point3D::show() const {
	Point2D::show();  // 调用基类show函数输出x,y坐标
	std::cout << "三维点坐标：(" << /*x*/ "," << /*y*/ "," << z << ")" << std::endl;
}

// 友元函数实现：计算三维欧式距离
double distance(const Point3D& p1, const Point3D& p2) {
	// 通过基类公有函数获取x、y
	double dx = p2.getX() - p1.getX();
	double dy = p2.getY() - p1.getY();
	double dz = p2.z - p1.z;
	return sqrt(dx * dx + dy * dy + dz * dz);
}