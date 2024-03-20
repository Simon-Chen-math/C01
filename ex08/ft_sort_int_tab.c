/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:09:54 by mochen            #+#    #+#             */
/*   Updated: 2024/03/18 15:27:17 by mochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_put_small_at_start_ind(int *tab, int size, int start_ind)
{
	int	start_num;
	int	min;
	int	min_ind;
	int	i;

	start_num = tab[start_ind];
	min = tab[start_ind];
	i = start_ind;
	while (i < size)
	{
		if (min >= tab[i])
		{
			min = tab[i];
			min_ind = i;
		}
		++i;
	}
	tab[start_ind] = min;
	tab[min_ind] = start_num;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_put_small_at_start_ind(tab, size, i);
		++i;
	}
}

/*int	main(void)
{
	int c[5] = {55,-10,59,0,54};
	ft_sort_int_tab(c, 5);
	printf("Ordre croissant:? ");
	printf("%d, %d, %d, %d, %d", c[0], c[1], c[2], c[3], c[4]);
}*/
