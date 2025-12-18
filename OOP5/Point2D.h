#ifndef POINT2D_H
#define POINT2D_H

class Point2D {
private:
	double x;  // 二维坐标x
	double y;  // 二维坐标y

public:
	// 构造函数：默认构造（初始化坐标为(0,0)）
	Point2D();
	// 构造函数：带参数构造（初始化坐标为(x_val, y_val)）
	Point2D(double x_val, double y_val);
	// 析构函数
	~Point2D();

	// 成员函数：修改坐标（偏移量dx, dy），返回对象引用支持链式调用
	Point2D& move(double dx, double dy);
	// 常成员函数：输出坐标信息（不修改对象状态）
	void show() const;
	double getX() const { return x; }
	double getY() const { return y; }
	// 友元函数：计算两个二维点之间的欧式距离
	friend double distance(const Point2D& p1, const Point2D& p2);
};

#endif // POINT2D_H#pragma once
