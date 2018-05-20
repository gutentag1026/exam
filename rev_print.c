/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhuang <yhuang@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 21:58:22 by yhuang            #+#    #+#             */
/*   Updated: 2018/04/04 22:08:44 by yhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	argc++;
	int i;

	i = 0;
	while(argv[1][i])
		i++;
	i--;
	while(argv[1][i])
	{
		write(1, (argv[1] + i),1);
		i--;
	}
	return (0);
}
