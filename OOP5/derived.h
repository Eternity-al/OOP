#ifndef DERIVED_H
#define DERIVED_H

#include "base.h"  // 包含基类头文件

// 1. 公有继承base类 -> derived1
class derived1 : public base {
public:
	derived1();  // 构造函数
	~derived1(); // 析构函数
	// 测试函数：访问基类成员
	void testAccess() const;
};

// 2. 私有继承base类 -> derived2
class derived2 : private base {
public:
	derived2();  // 构造函数
	~derived2(); // 析构函数
	// 测试函数：访问基类成员
	void testAccess() const;
};

// 3. 保护继承base类 -> derived3
class derived3 : protected base {
public:
	derived3();  // 构造函数
	~derived3(); // 析构函数
	// 测试函数：访问基类成员
	void testAccess() const;
};

#endif // DERIVED_H#pragma once
