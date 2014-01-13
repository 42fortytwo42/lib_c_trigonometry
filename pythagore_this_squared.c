/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pythagore_this_squared.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 19:12:00 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/13 19:18:39 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtrigonometry.h"

float	ft_pythagore_squared(float side_one, float side_two)
{
	float	side_three_squared;

	if (side_one == 0 || side_two == 0)
		return (0);
	side_three_squared = pow(side_one, 2) + pow(side_two, 2);
	return (side_three_squared);
}
