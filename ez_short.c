/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ez_short.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 08:08:07 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/29 11:39:21 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void  ft_ez_short(t_stack **a, t_stack **b)
{
    int list_len;

    list_len = ft_list_len(*a);
    if (list_len == 2)
        ft_short_two(a);
    if (list_len == 3)
        ft_short_three(a);
    if (list_len == 4)
        ft_short_four(a, b);
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

void    ft_short_four(t_stack **a, t_stack **b)
{
    t_stack *min_node;

    min_node = ft_get_min_node(*a);
    
    while ((*a)->value != min_node->value)
        if ((*a)->index <= 2)
            ft_ra(a);
        else
            ft_rra(a);
    ft_pb(a, b);
    ft_short_three(a);
    ft_pa(a, b);
}


