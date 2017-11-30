#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

typedef struct {
	void *data;
	int size;
} linked_list_item_t;

typedef struct {
	linked_list_item_t *node;
	linked_list_item_t *next;
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

void *get_item(linked_list_t *list) {
	
}

void *remove_item(linked_list_t *list) {
	
}

#endif
