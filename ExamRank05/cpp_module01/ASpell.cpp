#include "ASpell.hpp"
#include "ATarget.hpp"

std::string ASpell::getName() const
{
    return (this->name);
}

std::string ASpell::getEffects() const
{
    return (this->effects);
}

void ASpell::launch(const ATarget &src) const
{
    src.getHitBySpell(*this);
}

ASpell::ASpell(const std::string &name, const std::string &effects):name(name), effects(effects)
{}

ASpell::~ASpell()
{}
