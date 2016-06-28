/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: johnchan
 *
 * Created on 2016年6月25日, 下午 11:24
 */

#include <cstdlib>
#include<iostream>
using namespace std;

/*
 * 
 */
#define N 1000000

int main(int argc, char** argv) {

    int i;
    int j;
    int a[N];
    int counter = 0;
    //初始化
    for(i=2;i<N;i++){
        a[i] = 1;
    }
    
    for(i=2;i<N;i++){
        if(a[i]){
            for(j=i;j<N/i;j++){
                a[i*j] = 0;
            }
        }
    }
    
    for(i=2;i<N;i++){
        if(a[i]){
            counter++;
            printf("%4d ",i);

        }
    }
    printf("\n");
    printf("Counter: %d ",counter);

    return 0;
}

