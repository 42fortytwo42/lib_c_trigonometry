/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle_find_sinus_angle.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 19:21:27 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/13 19:25:55 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtrigonometry.h"

float	ft_circle_find_sinus_angle(float cosinus_angle)
{
	float	sinus_angle;
	float	calculation_part_one;

	if (cosinus_angle == 0)
		return (0);
	calculation_part_one = 1 - pow(cosinus_angle, 2);
	sinus_angle = pow(calculation_part_one, 0.5);
	return (sinus_angle);
}
