#include "derived.h"
#include <iostream>

// ------------------------------ derived1（公有继承）------------------------------
derived1::derived1() {  // 隐式调用基类默认构造函数
	std::cout << "derived1（公有继承）构造函数调用" << std::endl;
}

derived1::~derived1() {
	std::cout << "derived1（公有继承）析构函数调用" << std::endl;
}

// 测试访问基类成员
void derived1::testAccess() const {
	std::cout << "derived1（公有继承）访问基类成员：" << std::endl;
	std::cout << "基类公有成员a=" << a << "（类内可访问）" << std::endl;
	std::cout << "基类保护成员b=" << b << "（类内可访问）" << std::endl;
	// std::cout << "基类私有成员c=" << c;  // 错误：基类私有成员无法访问
	print();  // 基类公有成员函数可访问
}

// ------------------------------ derived2（私有继承）------------------------------
derived2::derived2() {  // 隐式调用基类默认构造函数
	std::cout << "derived2（私有继承）构造函数调用" << std::endl;
}

derived2::~derived2() {
	std::cout << "derived2（私有继承）析构函数调用" << std::endl;
}

// 测试访问基类成员
void derived2::testAccess() const {
	std::cout << "derived2（私有继承）访问基类成员：" << std::endl;
	std::cout << "基类公有成员a=" << a << "（类内可访问，子类中变为私有）" << std::endl;
	std::cout << "基类保护成员b=" << b << "（类内可访问，子类中变为私有）" << std::endl;
	// std::cout << "基类私有成员c=" << c;  // 错误：基类私有成员无法访问
	print();  // 基类公有成员函数可访问，子类中变为私有
}

// ------------------------------ derived3（保护继承）------------------------------
derived3::derived3() {  // 隐式调用基类默认构造函数
	std::cout << "derived3（保护继承）构造函数调用" << std::endl;
}

derived3::~derived3() {
	std::cout << "derived3（保护继承）析构函数调用" << std::endl;
}

// 测试访问基类成员
void derived3::testAccess() const {
	std::cout << "derived3（保护继承）访问基类成员：" << std::endl;
	std::cout << "基类公有成员a=" << a << "（类内可访问，子类中变为保护）" << std::endl;
	std::cout << "基类保护成员b=" << b << "（类内可访问，子类中变为保护）" << std::endl;
	// std::cout << "基类私有成员c=" << c;  // 错误：基类私有成员无法访问
	print();  // 基类公有成员函数可访问，子类中变为保护
}