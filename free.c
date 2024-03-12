/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:36:29 by nquecedo          #+#    #+#             */
/*   Updated: 2024/03/12 11:19:31 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_free_list(t_stak *a)
{
	t_stak	*next_node;

	while (a)
	{	
		next_node = a->next;
		free(a);
		a = next_node;
	}
	return (0);
}
