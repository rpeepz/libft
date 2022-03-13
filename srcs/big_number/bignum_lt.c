/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bignum_lt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpapagna <rpapagna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:20:32 by rpapagna          #+#    #+#             */
/*   Updated: 2021/11/23 11:21:17 by rpapagna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libbignum.h"

int	bignum_lt(t_bignum *n1, t_bignum *n2)
{
	return (bignum_compare(n1, n2, 1));
}
