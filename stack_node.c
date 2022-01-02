#include "stack_node.h"

/**
 * @brief Functie ce creaza un nod pentru stiva
 * 
 * 
 * @param data - informatiile noului nod
 * @return stack_node* - pointer-ul noului 
 */
stack_node *createStackNode(char data)
{       stack_node *p;
        p=(stack_node *)malloc(sizeof(stack_node));
        p->data=data;
        return p;
    // TODO1.2: functie ce atribuie campului data parametru primit
}