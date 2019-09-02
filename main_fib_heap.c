#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int key;
    int degree;
    struct NODE *left_sibling;
    struct NODE *right_sibling;
    struct NODE *parent;
    struct NODE *child;

}node;

node make_fib_heap(node n1)
{
    int ele, deg;
    printf("Enter data for the node and degree of the node = " );
    scanf("%d %d",&ele, &deg);
    n1.key = ele;
    n1.degree = deg;
    n1.left_sibling = NULL;
    n1.right_sibling = NULL;
    n1.parent = NULL;
    n1.child = NULL;
    return n1;
}
int insert()
{
    printf("insert has been called");
    return 0;
}
int main(int argc, char **argv)
{
    node n1, root;
    int choice;
    printf("Fibonacci Heap Implementation \n 1.Make Fib Heap \n 2. Insert Node \n");
    printf("select your choice :");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:make_fib_heap(n1);
           break;
    case 2:insert();
           break;
    }
}