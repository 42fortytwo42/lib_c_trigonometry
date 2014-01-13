/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pythagore_this_rooted.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 19:12:00 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/13 19:19:14 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtrigonometry.h"

float	ft_pythagore_rooted(float side_one, float side_two)
{
	float	side_three_squared;
	float	side_three_rooted;

	if (side_one == 0 || side_two == 0)
		return (0);
	side_three_squared = pow(side_one, 2) + pow(side_two, 2);
	side_three_rooted = pow(side_three_squared, 0.5);
	return (side_three_rooted);
}
