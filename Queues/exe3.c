#include"queue.c"
#define TIMESLICE 3

int main(){

Queue Q = queue(5); 

enqueue(17, Q);
enqueue(25, Q);
enqueue(39, Q);
enqueue(46, Q);

while(!emptyq(Q)){
    int x = dequeue(Q);
    int p = x / 10;
    int t = x % 10;
    if(t>3) enqueue(p * 10 + (t - TIMESLICE) , Q); 
    else printf("Processo %d concluido\n", p); 
}

destroyq(&Q);

return 0; 


}

