#include "base.h"
#include <iostream>

// 静态数据成员初始化：类外初始化，默认值0
int base::count = 0;

// 构造函数实现：初始化数据成员，count自增
base::base() : a(10), b(20), c(30) {
	count++;  // 每创建一个对象，count+1
	std::cout << "base构造函数调用：a=" << a << ", b=" << b << ", c=" << c << "，当前对象个数：" << count << std::endl;
}

// 析构函数实现：count自减
base::~base() {
	count--;  // 每销毁一个对象，count-1
	std::cout << "base析构函数调用：当前对象个数：" << count << std::endl;
}

// print函数实现：输出公有和保护成员（私有成员c无法直接访问）
void base::print() const {
	std::cout << "base类成员：a=" << a << ", b=" << b << "（c为私有成员，无法直接输出）" << std::endl;
}

// 静态成员函数实现：返回当前对象个数
int base::Manage() {
	return count;
}