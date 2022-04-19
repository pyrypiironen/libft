/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:38:34 by ppiirone          #+#    #+#             */
/*   Updated: 2021/11/20 19:38:43 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(long long n)
{
	int			i;
	char		arr[24];
	long long	k;

	if (n < -9223372036854775807)
		return(ft_strdup("-9223372036854775808"));
	i = 0;
	k = n;
	ft_bzero(arr, 24);
	if (n < 0)
		k = k * -1;
	arr[i] = k % 10 + '0';
	i++;
	while (k / 10 > 0)
	{
		k = k / 10;
		arr[i] = (k % 10 + '0');
		i++;
	}
	if (n < 0)
		arr[i] = '-';
	return (ft_strduprev(arr));
}


// OLD VERSION
// char	*ft_itoa(int n)
// {
// 	int		i;
// 	char	arr[20];
// 	long	k;

// 	i = 0;
// 	k = n;
// 	ft_bzero(arr, 20);
// 	if (n < 0)
// 		k = k * -1;
// 	arr[i] = k % 10 + '0';
// 	i++;
// 	while (k / 10 > 0)
// 	{
// 		k = k / 10;
// 		arr[i] = (k % 10 + '0');
// 		i++;
// 	}
// 	if (n < 0)
// 		arr[i] = '-';
// 	return (ft_strduprev(arr));
// }
