/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jroldan- <jroldan-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:51:15 by Jroldan-          #+#    #+#             */
/*   Updated: 2023/04/11 21:00:05 by Jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d", atoi(argv[1]) + atoi(argv[3]));
		if (argv[2][0] == '-')
			printf("%d", atoi(argv[1]) - atoi(argv[3]));	
		if (argv[2][0] == '*')
			printf("%d", atoi(argv[1]) * atoi(argv[3]));
		if (argv[2][0] == '/')
			printf("%d", atoi(argv[1]) / atoi(argv[3]));
		if (argv[2][0] == '%')
			printf("%d", atoi(argv[1]) % atoi(argv[3]));
	}
	printf("\n");
}
