/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ez_short.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 08:08:07 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/28 10:57:53 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack  *ft_ez_short(t_stack *a)
{
    if (ft_list_len(a) == 2)
        ft_short_two(&a);
    if (ft_list_len(a) == 3)
        ft_short_three(&a);
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
    int first = (*a)->value;
    int second = (*a)->next->value;
    int third = (*a)->next->next->value;

    if (first > second)
    {
        if (second > third) 
        { // Case [3, 2, 1]
            ft_sa(a);
            ft_rra(a);
        } 
        else if (first > third) 
            ft_ra(a);
        else
        {
            ft_rra(a);  // Corrected operation
            ft_sa(a);
            ft_rra(a);
        }
    }
    else
    { // first < second
        if (first > third)
            ft_rra(a);
        else if (second > third)
        { // Case [1, 2, 3]
            ft_sa(a);
            ft_ra(a);
        } // Case [3, 1, 2] - already sorted, do nothing
    }
}

