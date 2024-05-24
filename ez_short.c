/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ez_short.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 08:08:07 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/24 08:35:59 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stak  *ft_ez_short(t_stak *a)
{
    if (ft_list_len(a) == 2)
        ft_short_two(&a);
    if (ft_list_len(a) == 3)
        ft_short_three(&a);
    return (a);
}

void    ft_short_two(t_stak **a)
{
    ft_sa(a);
    ft_free_stack(*a);
    exit(0);
}

void    ft_short_three(t_stak **a)
{
    int first = (*a)->value;
    int second = (*a)->next->value;
    int third = (*a)->next->next->value;

    if (first > second && second > third)
    {
        ft_sa(a);
        ft_rra(a);
    }
    else if (first > second && first < third)
        ft_sa(a);
    else if (second > first && second > third)
    {
        ft_ra(a);
    }
    else if (first > third && third > second)
    {
        ft_rra(a);
        ft_rra(a);
    }
    else if (second > third && third > first)
    {
        ft_sa(a);
        ft_ra(a);
    }
    }
    