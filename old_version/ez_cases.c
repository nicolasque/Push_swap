#include "push_swap.h"

void ft_case_two(t_stack *a)
{
    if (a->value > a->next->value)
        ft_sa(&a);
}

void ft_case_three(t_stack *a)
{
    if (a->value > a->next->value && a->value > a->next->next->value)
    {
        ft_sa(&a);
        ft_rra(&a);
    }
    else if (a->value > a->next->value)
        ft_sa(&a);
    else if (a->value > a->next->next->value)
        ft_ra(&a);
    else if (a->next->value > a->next->next->value)
    {
        ft_sa(&a);
        ft_ra(&a);
    }
    else if (a->next->value > a->value && a->next->value > a->next->next->value)
    {
        ft_sa(&a);
        ft_rra(&a);
    }
    else if (a->next->value > a->next->next->value)
        ft_rra(&a);
}

void ft_case_four(t_stack *a)
{
    if (a->value > a->next->value && a->value > a->next->next->value && a->value > a->next->next->next->value)
    {
        ft_sa(&a);
        ft_rra(&a);
    }
    else if (a->value > a->next->value && a->value > a->next->next->value)
        ft_sa(&a);
    else if (a->value > a->next->value && a->value > a->next->next->next->value)
    {
        ft_sa(&a);
        ft_ra(&a);
    }
    else if (a->value > a->next->next->value && a->value > a->next->next->next->value)
        ft_rra(&a);
    else if (a->next->value > a->next->next->value && a->next->value > a->next->next->next->value)
    {
        ft_sa(&a);
        ft_rra(&a);
    }
    else if (a->next->value > a->next->next->value)
        ft_ra(&a);
    else if (a->next->value > a->next->next->next->value)
    {
        ft_sa(&a);
        ft_ra(&a);
    }
    else if (a->next->next->value > a->next->next->next->value)
        ft_rra(&a);
}

void ft_case_five(t_stack *a)
{
    if (a->value > a->next->value && a->value > a->next->next->value && a->value > a->next->next->next->value && a->value > a->next->next->next->next->value)
    {
        ft_sa(&a);
        ft_rra(&a);
    }
    else if (a->value > a->next->value && a->value > a->next->next->value && a->value > a->next->next->next->value)
        ft_sa(&a);
    else if (a->value > a->next->value && a->value > a->next->next->value && a->value > a->next->next->next->value)
    {
        ft_sa(&a);
        ft_ra(&a);
    }
    else if (a->value > a->next->value && a->value > a->next->next->next->value)
    {
        ft_sa(&a);
        ft_rra(&a);
    }
    else if (a->value > a->next->next->value && a->value > a->next->next->next->value)
        ft_ra(&a);
    else if (a->value > a->next->next->value && a->value > a->next->next->next->value)
    {
        ft_sa(&a);
        ft_ra(&a);
    }
    else if (a->value > a->next->next->next->value)
        ft_rra(&a);
    else if (a->next->value > a->next->next->value && a->next->value > a->next->next->next->value)
    {
        ft_sa(&a);
        ft_rra(&a);
    }
    else if (a->next->value > a->next->next->value && a->next->value > a->next->next->next->value)
        ft_ra(&a);
    else if (a->next->value > a->next->next->next->value)
    {
        ft_sa(&a);
        ft_ra(&a);
    }
    else if (a->next->next->value > a->next->next->next->value)
        ft_rra(&a);
}

void ft_ez_case(t_stack *a)
{
    ft_printf("Cuantos nodos hay en la lista: %i\n", ft_listlen(a));
    if (ft_listlen(a) == 2)
        ft_case_two(a);
    else if (ft_listlen(a) == 3)
        ft_case_three(a);
    else if (ft_listlen(a) == 4)
        ft_case_four(a);
    else if (ft_listlen(a) == 5)
        ft_case_five(a);
}
