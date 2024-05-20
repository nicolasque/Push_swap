/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:32:38 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/20 10:56:12 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_list_len(t_stak *a)
{
    int i;

    i = 0;
    while (a->next)
    {
        a = a->next;
        i++;
    }
    return (i);
}

t_stak  *ft_get_last_node(t_stak *a)
{
    while (a->next->next)
    {
        a = a->next;
    }
    return (a);
}