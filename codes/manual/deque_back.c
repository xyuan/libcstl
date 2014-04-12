/*
 * deque_back.c
 */

#include <stdio.h>
#include <cstl/cdeque.h>

int main(int argc, char* argv[])
{
    deque_t* pdeq = create_deque(int);
    int*     pn_i = NULL;
    int*     pn_j = NULL;

    if (pdeq == NULL) {
        return -1;
    }

    deque_init(pdeq);
    deque_push_back(pdeq, 10);
    deque_push_back(pdeq, 11);

    pn_i = (int*)deque_back(pdeq);
    pn_j = (int*)deque_back(pdeq);

    printf("The last integer of pdeq is %d\n", *pn_i);
    (*pn_i)++;
    printf("The modified last integer of pdeq is %d\n", *pn_j);

    deque_destroy(pdeq);

    return 0;
}
