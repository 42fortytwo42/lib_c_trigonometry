/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle_find_cosinus_angle.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 19:21:27 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/13 19:27:17 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtrigonometry.h"

float	ft_circle_find_cosinus_angle(float sinus_angle)
{
	float	cosinus_angle;
	float	calculation_part_one;

	if (sinus_angle == 0)
		return (0);
	calculation_part_one = 1 - pow(sinus_angle, 2);
	cosinus_angle = pow(calculation_part_one, 0.5);
	return (cosinus_angle);
}
