/*1. 计算器（V2.0版）。
设计简单的计算器，允许用户输入简单表达式（一元运算和二元运算表达式，以=结尾），输出计算结果，并等待用户继续输入，直到用户输入字符q。
输入输出举例 ：
输入：10^2=    // 求幂运算，指数必须整数
输出：100
输入：5!=          //阶乘运算
输出：120
输入：9$=          //判断是否平方数
输出：YES
输入：25+4+2= //累加，运算数个数不限
输出：31
输入：3&61&5&9=  //求最大值，运算数个数不限
输出：61
输入：35%          //奇数分解运算，将该数分解为3个素ES数
输出：35=3+3+29  
输入：3+6%8=      //不允许出现以上运算法则之外的表达式
输出：运算符非法，+只支持连用！
输入：10%=
输出：运算数非法，%只支持奇数！
输入：q
输出：谢谢使用！*/
#include<stdio.h>
int main(void)
{
	int ercifang;
	printf("获取一个整数\n");
	scanf("%d",&ercifang);
	ercifang=ercifang*10;
	printf("平方值为%d",ercifang);
	
	return 0;
}