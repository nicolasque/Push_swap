/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:32:38 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/28 10:39:04 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_list_len(t_stack *a)
{
    int i;

    i = 0;
    while (a)
    {
        a = a->next;
        i++;
    }
    return (i);
}

t_stack  *ft_get_last_node(t_stack *a)
{
    while (a->next)
    {
        a = a->next;
    }
    return (a);
}
