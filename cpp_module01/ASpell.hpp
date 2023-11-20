#pragma once

#include<iostream>
class ATarget;

class ASpell
{
	protected:
		std::string name;
		std::string effects;
	public:
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell *clone() const = 0;
		void launch(const ATarget &) const;

		ASpell(const std::string &, const std::string &);
		virtual ~ASpell();
};