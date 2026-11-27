//头文件保护：防止被重复包含
#ifndef MEAN_LENGTH_HPP
#define MEAN_LENGTH_HPP

//引入动态数组工具
#include <vector>
//引入装空数组的特殊工具
#include <optional>

//12.求数组的长度均值，空数组返回std::nullopt
//13.统计一组长度不小于给定阀值的个数
std::optional<double> meanLength(const std::vector<double>& lengths);
int countGreaterOrEqual(const std::vector<double>& lengths, double threshold);
//std::optional:函数返回类型
//&：引用传递
//std::vector<double>:动态数组存放double类型的数据
//double threshold:阀值（按值传递）

//关闭结界（呼应#ifndef)
#endif//MEAN_LENGTH_HPP