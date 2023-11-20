#pragma once

#include<iostream>
#include<map>
class ASpell;
class ATarget;

class Warlock
{
	private:
		std::string name;
		std::string title;
		std::map<std::string, ASpell *> spell;
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