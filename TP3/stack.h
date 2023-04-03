#ifndef STACK_H
#define STACK_H
#include <stdio.h>

#define MAXSIZE 50

char stack[MAXSIZE];
int top = -1;

int isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int isfull()
{

    if (top == MAXSIZE)
        return 1;
    else
        return 0;
}

char peek()
{
    return stack[top];
}

char pop()
{
    char data;

    if (!isempty())
    {
        data = stack[top];
        top = top - 1;
        return data;
    }
    else
    {
        printf("Could not retrieve data, Stack is empty.\n");
    }
}

void push(char data)
{
    if (!isfull())
    {
        top = top + 1;
        stack[top] = data;
    }
    else
    {
        printf("Could not insert data, Stack is full.\n");
    }
}

#endif