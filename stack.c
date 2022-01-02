#include "utils.h"
#include "stack.h"
#include "stack_node.h"

/**
 * @brief Functie ce aloca dinamic memorie pentru stiva,
 *        initializand campurile head si size
 * 
 * @param stack - pointerul ce trebuie modificat pentru
 *                a tine adresa nou alocata pentru stiva
 */

void createStack(Stack **stack)
{     *stack=(Stack *)malloc(sizeof(Stack));
    //TODO1.1: functie ce aloca memorie pentru o stiva noua
}

/**
 * @brief Functie ce dealoca memoria pentru stiva
 * 
 * @param stack - stiva a carei elemente trebuie sterse
 */
void deleteStack(Stack *stack)
{      stack_node *aux,*p;
        p=stack->head;   
        while(p!=NULL){
        aux=p;
        p=p->next;
        free(aux);
        }
    // Nice to have

}

/**
 * @brief Functie ce adauga un nou nod in stiva
 * 
 *  * Hint:
 *          * a se citi cursul :)
 *          * se va modifica pointer-ul head al structurii Stack
 * 
 * @param stack - stiva in care se va adauga un nou nod
 * @param data - informatiile noului nod
 */
void push(Stack *stack, char data)
{      stack_node *aux;
       aux=(stack_node*)malloc(sizeof(stack_node));
       aux->data=data;
       aux->next=stack->head;
       stack->head=aux;
     
    //TODO1.3: functie ce adauga un nou nod in stiva
}

/**
 * @brief Functie ce elimina urmatorul nod din stiva
 * 
 *  * Hint:
 *          * a se citi cursul :)
 *          * se va modifica pointer-ul head al structurii Stack
 * 
 * @param stack - stiva din care se va elimina nodul
 * @param data - informatiile noului scos 
 */
char pop(Stack *stack)
{       
    stack_node *p;
    p=stack->head;
    char aux;
    aux=p->data;
    free(p);
    return aux;
    
    //TODO1.4: functie ce elimina urmatorul nod din stiva
}

/**
 * @brief Functie ce testeaza dimensiune stivei pentru a vedea daca este goala
 * 
 * @param stack - stiva ce va fi testata
 * @return true/false - rezultatul verificarii
 */
bool isEmptyStack(Stack *stack)
{       if(stack->size==0)
           return true;
           if(stack->size!=0)
             return false;
                 
     
    //TODO1.5: Needed by the tests
}
