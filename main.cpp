//导入工具与头文件
#include <iostream>
#include <vector>
#include "mean_length.hpp"
using namespace std;

int main(){

//1.测试普通数组：
    vector<double> data1 ={1.0, 2.0, 3.0, 4.0};
    optional<double> result1 = meanLength(data1);
    
    //如果程序出错
    if (!result1.has_value()){
        cout << "测试1失败:程序出错。" << endl;
        return 1;
    
    }

    //如果均值算错
    if (result1.value() != 2.5) {
        cout << "测试1失败:均值算错。" << endl;
        return 1;
    }

//2.测试空数组：
    vector<double> empty_data;
    optional<double> result2 = meanLength(empty_data);

    //如果程序出错（空数组有值）
    if (result2.has_value()){
        cout << "测试2失败:空数组不应有均值。" << endl;
        return 1;
    }

//3.测试统计个数：
    //使用data1，阀值为3.0
    int count = countGreaterOrEqual (data1, 3.0);
    if (count != 2){
        cout << "测试3失败:统计个数错误。" << endl;
        return 1;
    }

//测试均通过:
    cout << "测试均通过⌯>ᴗo⌯.ᐟ " << endl;
    return 0;
    }

//"rm -rf build"删除旧编辑文件
//"cmake -B build"检查环境
//"cmake --build build"编译
//"./build/test_program"测试