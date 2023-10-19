#ifndef LISTS_H
#define LISTS_H


/**
 *list_t - list structure
* struct list_s - structure for list
* @param str - string
* @param len - length of string
* @param next - pointer to next node
* @return pointer to list
*/

typedef struct list_s

{
	char *str;
	unsigned int len;
	struct list_s *next;

}
list_t;


size_t print_list(const list_t *h);
size_t print_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t **head);
