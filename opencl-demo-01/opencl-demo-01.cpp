// opencl-demo-01.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<stdio.h>
#include<CL/cl.h>
#include<iostream>
using namespace std;
int main(void)
{
    cl_int err;
    cl_uint numPlatforms;

    err = clGetPlatformIDs(0, NULL, &numPlatforms);
    if (CL_SUCCESS == err)
        printf("\nDetected OpenCL platforms: %d", numPlatforms);
    else
        printf("\nError calling clGetPlatformIDs. Error code: %d", err);
    printf("\nPress any key to exit...");
    cin.get();
    return 0;
}

