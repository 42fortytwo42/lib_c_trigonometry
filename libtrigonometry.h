/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtrigonometry.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 15:28:52 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/13 19:46:06 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBTRIGONOMETRY_H
# define LIBTRIGONOMETRY_H

# include "../libmath/libmath.h"

/*
**	Basics manipulation with Cos and Sin or Tan !
*/
float			ft_find_hypotenuse_with_angle_by_cosinus(float angle,
						float adjacent_side);
float			ft_find_hypotenuse_with_angle_by_sinus(float angle,
						float opposite_side);
float			ft_find_adjacent_side_with_angle_by_hypo_cos(float angle,
						float hypotenuse);
float			ft_find_opposite_side_with_angle_by_hypo_sin(float angle,
						float hypotenuse);
float			ft_define_cosinus_angle(float adjacent_side, float hypotenuse);
float			ft_define_sinus_angle(float opposite_side, float hypotenuse);
float			ft_define_tan_by_angle(float cosinus_angle, float sinus_angle);
float			ft_define_tan_by_side(float opposite_side, float adjacent_side);
/*
**	 Pythagore this !
*/
float			ft_pythagore_squared(float side_one, float side_two);
float			ft_pythagore_rooted(float side_one, float side_two);
/*
**	Circle basis !
*/
float			ft_circle_find_sinus_angle(float cosinus_angle);
float			ft_circle_find_cosinus_angle(float sinus_angle);
/*
**	Basics calculations with Cos and Sin or Tan !
*/
float			ft_add_in_cosinus(float a, float b);
float			ft_minus_in_cosinus(float a, float b);
float			ft_add_in_sinus(float a, float b);
float			ft_minus_in_sinus(float a, float b);
float			ft_add_in_tan(float a, float b);
float			ft_minus_in_tan(float a, float b);

#endif /* !LIBTRIGONOMETRY_H */
