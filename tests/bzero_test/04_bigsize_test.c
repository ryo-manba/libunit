/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_bigsize_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 08:28:56 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 09:19:12 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	bzero_bigsize_test(void)
{
	char s1[BIG], s2[BIG];

	memset(s1, 'a', BIG);
	memset(s2, 'a', BIG);

	ft_bzero(s1, BIG);
	bzero(s2, BIG);
	if (!memcmp(s1, s2, BIG))
		return (0);
	else
		return (-1);
}
