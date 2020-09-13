/*
c++头文件
这是一个愚蠢的头文件，可以让您使用中文编c++程序
预处理命令没有被修改成中文
只修改了部分函数，有意见的可以直接修改头文件
建议初学者不要通过使用本头文件学习c++，
学c++应该学习它原本的样子，而不是这样修改后的样子
再次强调，本文件只能搞笑，不要用于任何程序的开发（除非你开发的程序也是拿来搞笑的）
使用本头文件需要将本文件放在和程序同一目录下或添加到path
程序开头使用预处理命令 #include"cchinese.h"


示例程序：

#include"cchinese.h"
使用 名字空间 标准库;
整数 数字,数组[1001],数字2,最大,最小,n,i;
结构体 新类型{
    整数 数据1;
    浮点数 数据2;
};
无类型 新函数(){
    输出<<"我是新函数"<<结束;
}
整数 主函数(){
    新类型 数字3;
    输入>>数字>>数字2;
    输出<<数字+数字2<<结束;
    输出<<数字-数字2<<结束;
    输入>>数字3.数据1>>数字3.数据2;
    输出<<数字3.数据1+数字3.数据2<<结束;
    新函数();
    输入>>n;
    作为(i=0;i<n;i++){
        输出<<i<<结束;
        如果(i%2==0) 继续;
    }
    i=10;
    当(i>=-1){
        i--;
    }
    输出<<"d"<<结束;
    多选(i){
        盒子 1:输出<<1<<结束;终止;
        盒子 2:输出<<2<<结束;终止;
        默认盒子 :输出<<-1<<结束;
    }
    返回 0;
}



输入输出示例（按顺序）：
输入: 2 3
输出: 5
输出: -1
输入: 1 1
输出: 2
输出: 我是新函数
输入: 7
输出:
7
0
1
2
3
4
5
6
d
-1
*/
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<random>
#define 逻辑与 and
#define 无类型 void
#define 逻辑或 or
#define 逻辑非 not
#define 结束 endl
#define 浮点数 float
#define 双精度 double
#define c输出 printf
#define c输入 scanf
#define 输入 cin
#define 输出 cout
#define 整数 int
#define 长整数 long long
#define 类 class
#define 如果 if
#define 作为 for
#define 当 while
#define 结构体 struct
#define 字符 char
#define 字符串 string
#define 否则 else
#define 返回 return
#define 主函数 main 
#define 继续 continue
#define 终止 break
#define 向下取整 floor
#define 向上取整 ceil
#define 开平方 sqrt
#define 取平方 pow
#define 取随机数 rand
#define c字符串复制 strcpy
#define c字符串长度 strlen
#define 字符串长度 length
#define 数据大小 sizeof
#define 设置内存值 memset
#define 获取一行 getline
#define 获取字符 getchar
#define 求派值 atan
#define 求最小值 min
#define 求最大值 max 
#define 快速排序 sort
#define 初始化数组 fill 
#define 交换 swap 
#define 复制 copy 
#define 查找 find
#define 插入字符 insert
#define 清空字符容器 clear
#define 代替 replace 
#define 比较字符串 compare
#define 开头 begin
#define 结尾 end
#define 字符串链接 stract
#define 绝对值 abs
#define 设置数据类型 typedef
#define 使用 using
#define 名字空间 namespace
#define 标准库 std
#define 常量 const
#define 多选 switch
#define 盒子 case
#define 默认盒子 default