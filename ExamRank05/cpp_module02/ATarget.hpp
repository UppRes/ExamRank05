#pragma once

#include<iostream>
class ASpell;

class ATarget
{
	protected:
		std::string type;
	public:
		const std::string &getType() const;
		virtual ATarget *clone() const = 0;
		void getHitBySpell(const ASpell &) const;

		ATarget(const std::string &);
		virtual ~ATarget();
};