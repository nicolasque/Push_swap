/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:24:28 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/20 10:58:14 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sa(t_stak **a)
{
    t_stak *temp;

    if (*a == NULL || (*a)->next == NULL)
        return;

    temp = *a;
    *a = (*a)->next;
    temp->next = (*a)->next;
    (*a)->next = temp;
    (*a)->prev = NULL;
    if (temp->next != NULL)
        temp->next->prev = temp;
    temp->prev = *a;
    ft_printf("sa\n");
}

// void ft_ra(t_stak **a)
// {
//     t_stak  *first;
//     t_stak  *last;

//     first = *a;
//     a* = 
// }