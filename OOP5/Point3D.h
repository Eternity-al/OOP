#ifndef POINT3D_H
#define POINT3D_H

#include "Point2D.h"  // 包含基类头文件

class Point3D : public Point2D {  // 公有继承Point2D类
private:
	double z;  // 三维坐标补充：z轴坐标

public:
	// 构造函数：默认构造（初始化坐标为(0,0,0)）
	Point3D();
	// 构造函数：带参数构造（初始化坐标为(x_val, y_val, z_val)）
	Point3D(double x_val, double y_val, double z_val);
	// 析构函数
	~Point3D();

	// 成员函数：修改三维坐标（偏移量dx, dy, dz），重写基类move函数
	Point3D& move(double dx, double dy, double dz);
	// 常成员函数：输出三维坐标信息，重写基类show函数
	void show() const;

	// 友元函数：计算两个三维点之间的欧式距离
	friend double distance(const Point3D& p1, const Point3D& p2);
};

#endif // POINT3D_H#pragma once
