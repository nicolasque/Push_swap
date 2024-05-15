/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 10:08:19 by nquecedo         #+#    #+#             */
/*   Updated: 2024/05/15 10:08:20 by nquecedo        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sa(t_stak **a)
{
    t_stak	*temp;

    if (*a == NULL || (*a)->next == NULL)
        return ;
    temp = (*a)->next;
    (*a)->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = *a;
    temp->next = *a;
    temp->prev = NULL;
    (*a)->prev = temp;
    *a = temp;
    ft_printf("sa\n");
}
