/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ez_short.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 08:08:07 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/29 10:33:18 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack  *ft_ez_short(t_stack *a)
{
    int list_len;

    list_len = ft_list_len(a);
    if (list_len == 2)
        ft_short_two(&a);
    if (list_len == 3)
        ft_short_three(&a);
    if (list_len == 4)
        ft_short_four(&a);
    return (a);
}

void    ft_short_two(t_stack **a)
{
    ft_sa(a);
    ft_free_stack(*a);
    exit(0);
}

void ft_short_three(t_stack **a)
{
    if ((*a)->value > (*a)->next->value)
    {
        if ((*a)->next->value > (*a)->next->next->value) 
        {
            ft_sa(a);
            ft_rra(a);
        } 
        else if ((*a)->value > (*a)->next->next->value) 
            ft_ra(a);
        else
        {
            ft_rra(a);
            ft_sa(a);
            ft_rra(a);
        }
        return ;
    }
    if ((*a)->value > (*a)->next->next->value)
        ft_rra(a);
    else if ((*a)->next->value > (*a)->next->next->value)
    {
        ft_sa(a);
        ft_ra(a);
    }

}


// void    ft_short_four(t_stack **a)
// {
//     t_stack *max_node = ft_get_max_node(*a);
//     // t_stack *forth = (*a)->next->next->next;
//     if (max_node->value != (*a)->value)
//     {
//         max_node->prev->next = max_node->next;
//         if (max_node->next)
//             max_node->next->prev = max_node->prev;
//     }
//     else
//         (*a) = (*a)->next;
//     ft_short_three(a);
//     (*a)->next->next->next = max_node;
//     max_node->next = NULL;
// }

