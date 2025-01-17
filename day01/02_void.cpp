/*
 * @Author: sanjayzhong
 * @Github: https://github.com/sanjayzzzhong
 * @Date: 2019-09-30 15:06:18
 */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


struct Person{
    char name[64];
    int age;
    struct Person *p;
};

void test01(){
    //void a; //void不能直接定义变量,因为编译器不知道分配多少内存给变量
    struct Person p;
}

//2. void 对函数返回的限定, 对函数参数的限定
int fun(void){
    return 10;
}

void test02(){
    printf("ret = %d\n", fun());
    printf("the size of pointer: %ld\n", sizeof(char *)); //64位, 所以指针是8bytes
}

//3. void* 无类型指针
//所有类型指针的祖宗
//任何类型的指针都可以不经过强转成void*类型
void test03(){
    void *p = NULL;

    int *pInt = NULL;
    char *pChar = (char *)pInt;

    void *pVoid = pInt;
}

//4. void *主要用于数据结构的封装

int main(){
    test02();
    test03();

    return 0;
}