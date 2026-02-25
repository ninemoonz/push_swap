/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:03:41 by koodal            #+#    #+#             */
/*   Updated: 2026/02/25 19:33:31 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	int num[3] = {1, 2, 3};
	printf("&num: %p\n", &num);
	printf("&num[0]: %p\n", &num[0]);
	printf("&num[1]: %p\n", &num[1]);
	printf("&num[2]: %p\n", &num[2]);
	printf("*num: %d\n", *num);
	printf("*num[0]: %d\n", num[0]);
	printf("*num[1]: %d\n", num[1]);
	printf("*num[2]: %d\n", num[2]);
	return (0);
}