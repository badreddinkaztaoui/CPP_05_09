/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 03:55:35 by bkaztaou          #+#    #+#             */
/*   Updated: 2024/07/18 06:45:51 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class ShrubberyCreationForm;
class PresidentialPardonForm;
class RobotomyRequestForm;

Intern::Intern() {}

Intern::Intern(Intern const & rhs) {
    *this = rhs;
}

Intern & Intern::operator=(Intern const & rhs) {
    if (this != &rhs) {
        *this = rhs;
    }
    return *this;
}

Intern::~Intern() {}

AForm * Intern::makeForm(std::string const name, std::string const target) {
    if (name == "robotomy request") {
        std::cout << "Intern creates " << name << std::endl;
        return new RobotomyRequestForm(target);
    } else if (name == "presidential pardon") {
        std::cout << "Intern creates " << name << std::endl;
        return new PresidentialPardonForm(target);
    } else if (name == "shrubbery creation") {
        std::cout << "Intern creates " << name << std::endl;
        return new ShrubberyCreationForm(target);
    } else {
        std::cout << "Intern can't create " << name << std::endl;
    }
    return nullptr;
}
