#include "logic.h"

int find_index_in_b(t_stack *b, int value) {
    int index;
    int min_value;

    if (value < find_min_value(b) || value > find_max_value(b)) {
        index = find_max_node(b)->index;
    } else {
        if (value < get_last_element(b)->data && value > b->data)
            return 0;
        else {
            index = 1;
            while (b->next != NULL && !(value < b->data && value > b->next->data)) {
                index++;
                b = b->next;
            }
        }
    }
}


