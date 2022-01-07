#include <stddef.h>
#include "ll_cycle.h"
#include <stdlib.h>

int ll_has_cycle(node *head) {
    node *hare = head;
    node *tortoise = head;
    // try a while loop
    while (1) {
        if (!hare) return 0;
        hare = hare->next;
        if (!hare) return 0;
        hare = hare->next;
        tortoise = tortoise->next;
        if (hare == tortoise) return 1;
    }
}