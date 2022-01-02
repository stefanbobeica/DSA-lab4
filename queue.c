#include "utils.h"
#include "queue.h"
#include "queue_node.h"


/**
 * @brief Functie ce aloca dinamic memorie pentru coada,
 *        initializand campurile front si rear
 * 
 * @param queue - pointerul ce trebuie modificat pentru
 *                a tine adresa nou alocata pentru coada
 */
void createQueue(Queue **queue)
{   Queue *aux;
     aux=(Queue*)malloc(sizeof(Queue));
     aux->front=NULL;
     aux->rear=NULL;
     *queue=aux;
    //TODO2.1: Functia va fi folosita pentru a initializa structura Queue
}

/**
 * @brief Functie ce va fi folosita pentru a adauga un nod in coada queue
 * 
 * * Hint:
 *         * se va folosi functia createQueueNode pentru crearea unui nou nod
 *         * trebuie actualizati poniterii rear si front sau doar front
 *         * a se citi cursul :)
 * 
 * @param queue - coada in care trebuie adaugat un nou nod cu informatia data
 * @param data - datele noului nod
 */
void en(Queue *queue, char *data)
{    queue_node *p;
   p=createQueueNode(data);
   
   if(queue->rear==NULL)
        queue->rear=p;
    else
        {
            queue->rear->next=p;
            queue->rear=p;
        }
    
    if(queue->front==NULL)
        queue->front = queue->rear;
    //TODO2.3: adauga un nou nod in coada, noul nod are informatia data
}

/**
 * @brief Functie ce scoate din coada urmatorul nod si
 *        returneaza datele stocate in nod.
 * * Hint:
 *        * a se citi cursul :)
 * 
 * @param queue - coada din care va fi scos nodul 
 * @return char* - datele din interiorul nodului
 */
char *de(Queue *queue){
    queue_node *aux;
    char *ret;
   if(isEmptyQueue(queue)) return 0;
    aux=queue->front;
    ret=(char*) malloc(strlen(aux->data)+1);
    strcpy(ret,aux->data);
    queue->front=(queue->front)->next;
    free(aux);
    return ret;
    //TODO2.4: scoate urmatorul nod din coada si returneaza informatia acestuia
}

/**
 * @brief Functie ce va elibera memoria asociata fiecarui nod al cozi
 *  
 *  * Hint:
 *          * se poate folosi functia deleteQueueNode
 * @param queue - coada a carui noduri vor fi sterse
 */
void deleteQueue(Queue *queue){
    
    // Nice to have
}

/**
 * @brief Functie ce testeaza pointerii rear si front pentru 
 *        a determina daca coada este goala
 * 
 * @param queue - coada ce va fi testata
 * @return true/false - rezultatul verificarii
 */
bool isEmptyQueue(Queue *queue)
{      if(queue->front==NULL){
                  return true;            
} else return false;
    //TODO2.5: Needed by the tests
}
