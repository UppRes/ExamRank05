#pragma once

#include<iostream>
#include<map>
class ASpell;

class SpellBook
{
	private:
		std::map<std::string, ASpell *> spell;
	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell *);
		void forgetSpell(const std::string &);
		ASpell *createSpell(const std::string &);
};