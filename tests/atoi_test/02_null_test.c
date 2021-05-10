/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuka <rmatsuka@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 22:43:03 by rmatsuka          #+#    #+#             */
/*   Updated: 2021/05/09 22:44:09 by rmatsuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../tester.h"

int	atoi_null_test(void)
{
	if (ft_atoi(NULL) == atoi(NULL))
		return (0);
	else
		return (-1);
}