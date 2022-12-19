/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:03:05 by abinet            #+#    #+#             */
/*   Updated: 2022/12/19 08:36:32 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

// int	main()
// {
	// int				d;
	// char			c;
	// char			*s;
	// int 			i;
	// int				j;
	// int				k;
	// int				l;

	// void			*p;
	// unsigned int	u;
	// unsigned int	x;
	// unsigned int	xx;

	// d = INT_MIN;
	// c = '\0';
	// s = NULL;

	// p = NULL;
	// u = 0;
	// x = 250;
	// xx = 250;

	// i = printf("d = salut%d%d%dcava | commentc = %c%c%c |ok oks =      %s%s%s letsgo %%%%| ", d, 32, 46, c, 'a', 'b', "salut", "cava", s);
	// j = printf("p = %p%p%p | u = %u%u%u | x = %x%x%x | X = %X%X%X \n", p, &d, &x, u, -1, 8943, x, 9548, 9843, xx, 65856, 5756);
	// k = ft_printf("d = salut%d%d%dcava | commentc = %c%c%c |ok oks =      %s%s%s letsgo %%%%| ", d, 32, 46, c, 'a', 'b', "salut", "cava", s);
	// l = ft_printf("p = %p%p%p | u = %u%u%u | x = %x%x%x | X = %X%X%X \n", p, &d, &x, u, -1, 8943, x, 9548, 9843, xx, 65856, 5756);

	// printf("printf = %d %d \nft_printf = %d %d\n", i, j, k, l);
	//printf("%d\n", printf(0));
// 	return (0);
// }

int	main(void)
{
	int		original;
	int		mine;
	char	*str;

	str = "Just some text..";

	printf("\n\n--- ALL ---\n");
	original = printf("-> %c | %s | %p | %d | %i | %u | %x | %X | %% |", str[0], str, str, 42, 42, 42, 42, 42);
	printf("\n");
	mine = ft_printf("-> %c | %s | %p | %d | %i | %u | %x | %X | %% |", str[0], str, str, 42, 42, 42, 42, 42);
	printf("\n");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- SAME WITH %%%%%% AT THE END ---\n");
	original = printf("-> %c | %s | %p | %d | %i | %u | %x | %X | %% |%%%", str[0], str, str, 42, 42, 42, 42, 42);
	printf("\n");
	mine = ft_printf("-> %c | %s | %p | %d | %i | %u | %x | %X | %% |%%%", str[0], str, str, 42, 42, 42, 42, 42);
	printf("\n");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- SAME WITH %%%%%% AT THE END AND SOME TEXT ---\n");
	original = printf("-> %c | %s | %p | %d | %i | %u | %x | %X | %% |%%%%| texte", str[0], str, str, 42, 42, 42, 42, 42);
	printf("\n");
	mine = ft_printf("-> %c | %s | %p | %d | %i | %u | %x | %X | %% |%%%%| texte", str[0], str, str, 42, 42, 42, 42, 42);
	printf("\n");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- EMPTY STRING ---\n");
	original = printf("");
	mine = ft_printf("");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- WITH ft_printf(0) ---\n");
	original = printf(0);
	mine = ft_printf(0);
	printf("%d : %d\n", original, mine);

	printf("\n\n--- WITH STR AS ONLY ARGUMENT ---\n");
	original = printf(str);
	printf("\n");
	mine = ft_printf(str);
	printf("\n");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- WITH NULL AS STRING AND ADRESS ---\n");
	original = printf("-> %s | %p", NULL, NULL);
	printf("\n");
	mine = ft_printf("-> %s | %p", NULL, NULL);
	printf("\n");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- WITH TAB AND ANTICIPATED END OF STRING ---\n");
	original = printf("-> \t|\0\0gloubiboulgah");
	printf("\n");
	mine = ft_printf("-> \t|\0\0gloubiboulgah");
	printf("\n");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- WITH NEGATIVE VALUES ---\n");
	original = printf("%u | %x | %X | %d | %i | %c | %p", -42, -42, -42, -42, -42, -42, (void *) -42);
	printf("\n");
	mine = ft_printf("%u | %x | %X | %d | %i | %c | %p", -42, -42, -42, -42, -42, -42, (void *) -42);
	printf("\n");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- PRINT ADRESS WITH %%x and %%X ---\n");
	original = printf("%x | %X | %x | %X", NULL, NULL, &str, &str);
	printf("\n");
	mine = ft_printf("%x | %X | %x | %X", NULL, NULL, &str, &str);
	printf("\n");
	printf("%d : %d\n", original, mine);
}
