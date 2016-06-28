/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: johnchan
 *
 * Created on 2016年6月26日, 下午 4:52
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Josephus Problem
 */

typedef struct node* link;
struct node {int item; link next;};

int main(int argc, char** argv) {
    int i,N = atoi(argv[1]),M = atoi(argv[2]);
    //int i,N = 9,M = 5;

    link t = malloc(sizeof *t), x = t;
    t->item = 1; t->next=t;
    for(i = 2;i<= N;i++){
        x = (x->next = malloc(sizeof *x));
        x->item = i; x->next = t;
    }
    
    while(x != x->next){
        for(i=1;i<M;i++){
            x = x->next;

        }
         printf("%d\n", x->next->item);

        x->next = x->next->next;N--;

    }
    printf("The result is %d\n", x->item);

    
    return (EXIT_SUCCESS);
}

