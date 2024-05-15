/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:51:03 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/15 10:55:24 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <stdio.h>

typedef struct t_stak
{
	int		value;
	int		li_pos;

	struct t_stak	*next;
	struct t_stak	*prev;
}	t_stak;


// free.c
int	ft_free_list(t_stak *a);

// list_utils.c
size_t ft_listlen(t_stak *a);
int ft_is_allnum(char *str);
int ft_is_shoted(t_stak *a);
int ft_is_repeat(t_stak *a);


//movements.c
void    ft_sa(t_stak **a);

// ez_cases.c
void ft_case_two(t_stak *a);




#endif //PUSH_SWAP_H