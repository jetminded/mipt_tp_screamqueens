#pragma once
#include "../stats/stats.cpp"
#include <string>
#include <vector>

namespace pers_class
{

  struct DiceRoll { // надо потом перенести в другой файл
    short to_hit = 0; // на попадание
    short dmg = 0; // урон
    DiceRoll() = default;
    ~DiceRoll() = default;
  };

  class PrefixVector {
   private:
    std::vector<int> a;
   public:
    int Sum() { return a[a.size() - 1]; }
    int Index(int roll) { return lower_bound(a.begin(), a.end(), roll)
                                 - a.begin(); }
    PrefixVector(const std::vector<int>&);
    ~PrefixVector() = default;
  };

  class Person {
   protected:
    stats_library::SkillList skills_;
    stats_library::ParameterList parameters_;
    PrefixVector att_prob_; // вероятности атак
    PrefixVector def_prob_; // вероятности защит
    PrefixVector tool_prob_; // вероятности рычагов
   public:
    std::string name_;
    // атаки
    DiceRoll Seduce(); // соблазнить
    DiceRoll MakeAnArgument(); // привести довод
    DiceRoll Intimidate(); // запугать
    DiceRoll Deceive(); // обмануть
    DiceRoll Mock(); // насмехнуться
    // защиты
    DiceRoll Ignore(); // игнорировать
    DiceRoll ChangeTheme(); // смена темы
    // рычаги
    short Love(); // любовь
    short Research(); // изучить
    short Hint(); // намёк
    short Bribe(); // подкуп
    // атака для ИИ, для игрока - случайная атака
    int RandomAttack();
    int RandomDefense();
    int RandomTool();
    // конструктор / деструктор
    Person(const std::string&, const stats_library::ParameterList&,
           const stats_library::SkillList&, const std::vector<int>&,
           const std::vector<int>&, const std::vector<int>&);
    ~Person() = default;
  };

}