/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_comon.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 08:00:56 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/22 08:26:15 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"


// Move from stack a to stack b
void	ft_pb(t_stak **a, t_stak **b)
{
    t_stak  *temp;

    temp = *a;
    if (!*a)
        return ;
    *a = (*a)->next;
    if (*a)
    (*a)->prev = NULL;
    if (*b)
        (*b)->prev = temp;
    temp->next = *b;
    *b = temp;
    ft_printf("pb\n");
}


void	ft_pa(t_stak **a, t_stak **b)
{
    t_stak  *temp;

    temp = *b;
    if (!*b)
        return ;
    *b = (*b)->next;
    if (*b)
    (*b)->prev = NULL;
    if (*a)
        (*a)->prev = temp;
    temp->next = *a;
    *a = temp;
    ft_printf("pa\n");
}