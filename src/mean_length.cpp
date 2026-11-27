//1.求数组长度
//引入头文件
#include "mean_length.hpp"

std::optional<double>meanLength(const std::vector<double>& lengths)
{

//空数组时返回std::nullopt
    if (lengths.empty()){
        return std::nullopt;  
    }

//非空数组时返回均值
    double sum = 0.0;
    for (double len : lengths){
        sum = sum + len;
    }
return sum / lengths.size();
}

//2.统计长度范围
//引入头文件
int countGreaterOrEqual (const std::vector<double>& lengths, double threshold)
{

//准备计数器和数组中长度
int count = 0;
    for (double len : lengths){
        
//不小于阀值计数一次
        if (len >= threshold){
            count = count + 1;
        }
    }
    
    return count;

}