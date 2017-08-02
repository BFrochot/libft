/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfrochot <bfrochot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 14:46:50 by bfrochot          #+#    #+#             */
/*   Updated: 2017/08/02 15:37:05 by bfrochot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*palloc(int i)
{
	void *s;

	s = malloc(i);
	if (!s)
	{
		ft_putstr_fd("Malloc error\n", 2);
		exit(1);
	}
	return (s);
}
