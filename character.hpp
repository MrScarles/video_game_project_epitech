#include "game.hpp"

class Character {
public:
  Character()
  ~Character()

  float GetHP();
  void  SetHP(float _HP);

  float GetArmor();
  void  SetArmor(float _Armor);

  float GetMana();
  void  SetArmor(float _Mana);

  float GetStrengh();
  void  SetStrengh(float _Strengh);

  float GetAgility();
  void  SetAgility(float _Agility);

  float GetIntelligence();
  void  SetIntelligence(float _Intelligence);

  float GetManaRegen();
  void  SetManaRegen(float _ManaRegen);

  float GetAttackSpeed();
  void  SetAttackSpeed(float _AttackSpeed);

  float GetCritChance();
  void  SetCritChance(float _CritChance);

  int   GetSpeed();
  void  SetSpeed(int _Speed);

  int   GetInvisibleDuration();
  void  SetInvisibleDuration();

  std::vector<int>  GetPowerList();
  std::vector<int>  SetPowerList();

  int   GetKnockbackValue();
  void  SetKnockbackValue(int _KnockbackValue);

  int   GetAmmoRemaining();
  void  SetAmmoRemaining(int _AmmoRemaining);

  char* GetSpriteName();
  void  SetSpriteName(char *SpriteName);

  int* GetHitbox();
  void SetHitbox(int* _Hitbox);
private:
  float HP;
  float Armor;
  float Mana;
  float Strengh;
  float Agility;
  float Intelligence;
  float ManaRegen;
  float AttackSpeed;
  float CritChance;
  int   Speed;
  int   InvisibleDuration;
  std::vector<int> PowerList;
  int   KnockbackValue;
  int   AmmoRemaining;
  char* SpriteName;
  int[4]  Hitbox;
  GameObject Character;
}
