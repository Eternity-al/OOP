#ifndef BASE_H
#define BASE_H

class base {
public:
	int a;  // 公有数据成员
protected:
	int b;  // 保护数据成员
private:
	int c;  // 私有数据成员
	static int count;  // 私有静态数据成员：统计对象创建个数

public:
	// 构造函数
	base();
	// 析构函数
	~base();

	// 成员函数：输出类的公有和保护数据成员（私有成员无法直接输出）
	void print() const;
	// 静态成员函数：管理count，返回当前对象个数
	static int Manage();
};

#endif // BASE_H#pragma once
