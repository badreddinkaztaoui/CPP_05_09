/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 03:55:26 by bkaztaou          #+#    #+#             */
/*   Updated: 2024/07/18 06:36:42 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class Intern {
    public:
        Intern();
        Intern(Intern const & rhs);
        Intern & operator=(Intern const & rhs);
        ~Intern();

        AForm * makeForm(std::string const name, std::string const target);
};

#endif