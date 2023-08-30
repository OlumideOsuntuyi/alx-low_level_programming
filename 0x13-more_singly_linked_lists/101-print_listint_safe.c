#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow, *fast;
    size_t count = 0;

    slow = fast = head;

    while (slow && fast && fast->next)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            printf("-> [%p] %d\n", (void *)slow, slow->n);
            exit(98);
        }

        count++;
    }

    while (head)
    {
        printf("[%p] %d\n", (void *)head, head->n);
        head = head->next;
        count++;
    }

    return count;
}

