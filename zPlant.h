#ifndef ZPLANT_H  // 创建完系统自带
#define ZPLANT_H  // 创建完系统自带


#include "zObject.h"

// 植物父类，自己写，继承zObject
class zPlant : zObject  // 创建完系统自带
{  // 创建完系统自带

public:  // 创建完系统自带
    zPlant();  // 创建完系统自带
    int row;  // 植物所在行
    int col;  // 植物所在列
    void act();  // 自己写，植物行为
};  // 创建完系统自带

#endif // ZPLANT_H  // 创建完系统自带
