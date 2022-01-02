#include "queue_node.h"
#include "utils.h"

/**
 * @brief Functie ce copiaza sirul de caractere data si atribuie
 *        adresa de memorie a noului sir campului data al noului
 *        nod creat
 * 
 * @param data 
 * @return queue_node* 
 */
queue_node *createQueueNode(char *data)
{     queue_node *p;
        p=(queue_node*)malloc(sizeof(queue_node));
        p->data=(char*)malloc(strlen(data)+1);
        strcpy(p->data,data);
        p->next=NULL;
      return p;
    // TODO2.2: functie ce ar trebuii folosit in interiorul functiei en() pentru a crea un nod
}
/**
 * @brief Functie ce face eliberarea de memorie pentru nodul oldNode
 * 
 * * Hint:
 *         * doar campul data necesita eliberarea memoriei, acesta fiind alocat dinamic
 * 
 * @param oldNode - nodul a carui date trebuie sterse
 */
void deleteQueueNode(queue_node *oldNode){
    
    
    // Nice to have
}