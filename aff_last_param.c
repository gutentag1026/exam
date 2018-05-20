/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhuang <yhuang@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 23:52:28 by yhuang            #+#    #+#             */
/*   Updated: 2018/03/09 00:13:57 by yhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
  if (argc < 2)
    write(1,"\n",1);
  else
  {
    int i;

    i = 0;
    while (argv[argc-1][i])
    {
      write(1,&argv[argc-1][i],1);
      i++;
    }
	write(1,"\n",1);
  }
  return (0);
}
