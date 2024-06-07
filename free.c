/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:16:13 by nquecedo          #+#    #+#             */
/*   Updated: 2024/06/07 10:43:41 by nquecedo         ###   ########.fr       */
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

char	**ft_free_split(char **result, int i)
{
	while (i >= 0)
	{
		free(result[i--]);
	}
	free(result);
	return (NULL);
}