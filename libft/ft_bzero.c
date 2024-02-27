/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:05:05 by nquecedo          #+#    #+#             */
/*   Updated: 2023/12/12 19:48:45 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Esta función pone a cero (bytes con '0') los primeros n bytes
* del área de memoria apuntada por s.
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
