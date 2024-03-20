/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:01:39 by mochen            #+#    #+#             */
/*   Updated: 2024/03/18 15:14:14 by mochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	box;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		box = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i -1] = box;
		++i;
	}
}

/*int	main(void)
{
	int tab[10] = {0,1,2,3,4};

	printf("4,3,2,1,0:");
	ft_rev_int_tab(tab, 5);
	printf("%d,%d,%d,%d,%d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}*/
