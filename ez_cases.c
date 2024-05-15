#include "push_swap.h"

void ft_case_two(t_stak *a)
{
    if (a->value > a->next->value)
        ft_sa(&a);
}
