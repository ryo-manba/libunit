/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_zero_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 19:54:42 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/10 20:23:13 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	itoa_zero_test(void)
{
	char	*s = ft_itoa(0);
	int		ans;

	if (!strcmp(s, "0"))
		ans = 0;
	else
		ans = -1;
	return (ans);
}
