/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_dif.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpapagna <rpapagna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:36:10 by rpapagna          #+#    #+#             */
/*   Updated: 2021/11/28 13:39:50 by rpapagna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libbignum.h"

char	do_dif(size_t *i, size_t *j, char *n1, char *n2)
{
	char	x;

	x = 0;
	if (*i != 0)
	{
		--(*i);
		if (n1[*i] != '-')
			x += (n1[*i] - '0');
	}
	if (*j != 0)
	{
		--(*j);
		if (n2[*j] != '-')
			x -= (n2[*j] - '0');
	}
	return (x);
}
