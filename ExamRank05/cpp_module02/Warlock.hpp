#pragma once

#include<iostream>
#include<map>
#include "SpellBook.hpp"
class ASpell;
class ATarget;

class Warlock
{
	private:
		std::string name;
		std::string title;
		SpellBook spell_book;
	public:
		const std::string &getName() const;
		const std::string &getTitle() const;
		void setTitle(const std::string &);
		void introduce() const;

		void learnSpell(ASpell *);
		void forgetSpell(std::string);
		void launchSpell(std::string, const ATarget &);

	    Warlock(const std::string &, const std::string &);
	    ~Warlock();
};