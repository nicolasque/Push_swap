/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:16:13 by nquecedo          #+#    #+#             */
/*   Updated: 2024/06/07 11:26:32 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_free_stack(t_stack *a)
{
    t_stack  *next;

    while (a)
    {
        next = a->next;
        free(a);
        a = next;        
    }
}

void     ft_free_split(char **result)
{
    int i;

    i = 0;
	while (result[i])
    {
        free(result[i]);
        i++;
    }
    free(result);
}
