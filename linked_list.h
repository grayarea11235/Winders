#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

typedef struct {
	void *node;
	void *next;
	long length;	
} linked_list_t;

linked_list_t *create_linked_list() {
	linked_list_t *res = malloc(1 * sizeof(linked_list_t));
	res->length = 0;
	res->node = NULL;
	res->next = NULL;
		
	return res;
}

void add_item(linked_list_t *list, void *node) {
	
}


#endif
