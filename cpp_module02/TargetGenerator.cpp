#include "TargetGenerator.hpp"
#include "ATarget.hpp"

void TargetGenerator::learnTargetType(ATarget *enemy)
{
    if (enemy != nullptr)
    {
        std::map<std::string, ATarget *>::iterator it = target.find(enemy->getType());

        if (it == target.end())
            target[enemy->getType()] = enemy;
    }
}

void TargetGenerator::forgetTargetType(const std::string &enemy_type)
{
    std::map<std::string, ATarget *>::iterator it = target.find(enemy_type);

    if (it != target.end())
        target.erase(enemy_type);
}

ATarget *TargetGenerator::createTarget(const std::string &enemy_type)
{
    std::map<std::string, ATarget *>::iterator it = target.find(enemy_type);

    if (it != target.end())
        return (it->second->clone());
    return nullptr;
}

TargetGenerator::TargetGenerator()
{}

TargetGenerator::~TargetGenerator()
{
    target.clear();
}
