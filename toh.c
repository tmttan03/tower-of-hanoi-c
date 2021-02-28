#include <math.h>
#include<stdio.h>

// Linked List for DISK-POLE Visual Rep.
struct pole
{
  int disk;
  struct node *nextptr;
};

struct pole *stnode, *pole1, *pole2, *pole3;

void TOH(int disk,char x,char y,char z) {
   if(disk > 0) {
      TOH(n-1,x,z,y);
      printf("\n%c to %c",x,y);
      TOH(n-1,z,y,x);
   }
}

char displayChoices(int disk, int currentIteration){
    // Create a new function to cater the next condition
    // which is to evalute if the move is valid for the 
    // current iteration or the current state. If it's
    // possible to return an array then return an array
    // to pass the SELECTED OPTION : ASSOCIATION
    return 'A';
}

void displayVisualState(int disk, int option, int currentIteration){
    // From the selected option and currentiteration display the
    // disk on the selected option or display
}

void printMinMoves(int disk){
    int minimumMoves = pow(2, disk) - 1;
    int moves = 0;
    printf("Minimum moves needed: %d\n", minimumMoves);
    printf("Number of moves made: %d\n", moves);
}

void printIntroduction()
{
    // Print Introduction
    printf("***********************\n");
    printf("*  The Tower of Hanoi *\n");
    printf("*   Interactive Game  *\n");
    printf("*    version 1.0      *\n");
    printf("***********************\n");
}

void getOption(int option)
{
    // Get option list

    // Get inputs
    printf("Your choice?: ");
    scanf("%d", &option); 

    // Iterate the move counter
    // moves++;   

    // From the option list match with the selected option
    // From the selected option
}


void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
    // Replace STDNODE to each POLES
    stnode = (struct pole *)malloc(sizeof(struct pole));

    if(stnode == NULL) //check whether the fnnode is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        // reads data for the node through keyboard
        stnode->disk = n;      
        stnode->nextptr = NULL; // links the address field to NULL
        tmp = stnode;

        // Creating n nodes and adding to linked list
        for(i=n-1; i>=1; i--)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            { 
                fnNode->num = i;      // links the num field of fnNode with num
                fnNode->nextptr = NULL; // links the address field of fnNode with NULL
 
                tmp->nextptr = fnNode; // links previous node i.e. tmp to the fnNode
                tmp = tmp->nextptr; 
            }
        }
    }
}

void displayList()
{
    struct node *tmp;
    if(stnode == NULL)
    {
        // Since stnode will be POLE1, POLE2, POLE3 we can already
        // distinguish the len then we will just loop this according to
        // the no of disk 
        printf(" List is empty.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf("%d=", tmp->num);       // prints the data of current node
            tmp = tmp->nextptr;                     // advances the position of current node
        }

        printf("\n");
    }
} 

int main() {

    // Local Default Variable Declarations
    int disk = 3;
    int moves = 0;
    int isTerminated = 0;

    // Initialize nodes
    struct pole *pole1, *pole2, *pole3;

    initializePole(n, pole1);
    displayList(pole1);

    // printf("Minimum moves needed: %d", moves);  
    // printIntroduction()
    
    // TODO: Function Call
    // To return TOH Display

    // printMoves(disk, counter)

    // Display Choices
    // Display the Possible choice 

    // Get inputs
    // printf("Your choice?: ");
    // scanf("%d", &disk); 
    // Iterate the counter
    // counter++;    

    // Process the Input n
    // we can associate the choices
    // in an array para recognize sa key deretso mu tawag sa ktng
    // pag print sa next state

    return 0;
}