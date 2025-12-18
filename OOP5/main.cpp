#include <iostream>
#include "Point2D.h"
#include "Point3D.h"
#include "derived.h"

int main() {
	std::cout << "==================== 任务二：点类测试 ====================" << std::endl;
	// 测试Point2D类
	Point2D p1(1, 2);
	Point2D p2(4, 6);
	p1.show();
	p2.show();
	p1.move(2, 3);  // 修改p1坐标
	p1.show();
	double dist2D = distance(p1, p2);
	std::cout << "p1与p2的二维欧式距离：" << dist2D << std::endl;

	// 测试Point3D类
	Point3D p3(1, 2, 3);
	Point3D p4(4, 6, 8);
	p3.show();
	p4.show();
	p3.move(2, 3, 4);  // 修改p3坐标
	p3.show();
	double dist3D = distance(p3, p4);
	std::cout << "p3与p4的三维欧式距离：" << dist3D << std::endl;

	std::cout << "\n==================== 任务三：继承特性测试 ====================" << std::endl;
	// 1. 测试派生类访问基类成员
	std::cout << "\n----- 测试1：派生类类内访问基类成员 -----" << std::endl;
	derived1 d1;
	d1.testAccess();
	derived2 d2;
	d2.testAccess();
	derived3 d3;
	d3.testAccess();

	// 2. 测试派生类类外访问基类成员
	std::cout << "\n----- 测试2：派生类类外访问基类成员 -----" << std::endl;
	std::cout << "derived1（公有继承）类外访问a：" << d1.a << "（允许，a仍为公有）" << std::endl;
	// std::cout << "derived1类外访问b：" << d1.b;  // 错误：b为保护成员，类外不可访问
	d1.print();  // 允许：print为公有成员

	// std::cout << "derived2（私有继承）类外访问a：" << d2.a;  // 错误：a变为私有，类外不可访问
	// d2.print();  // 错误：print变为私有，类外不可访问

	// std::cout << "derived3（保护继承）类外访问a：" << d3.a;  // 错误：a变为保护，类外不可访问
	// d3.print();  // 错误：print变为保护，类外不可访问

	// 3. 测试构造/析构次序
	std::cout << "\n----- 测试3：构造/析构函数调用次序 -----" << std::endl;
	{
		derived1 temp;  // 局部对象，作用域结束后销毁
	}  // 此处触发temp的析构

	// 4. 测试静态成员count（对象个数统计）
	std::cout << "\n----- 测试4：静态成员统计对象个数 -----" << std::endl;
	std::cout << "当前对象总数：" << base::Manage() << std::endl;
	derived1 d1_2;
	derived2 d2_2;
	std::cout << "创建2个新对象后，总数：" << base::Manage() << std::endl;

	std::cout << "\n==================== 测试结束 ====================" << std::endl;
	return 0;
}