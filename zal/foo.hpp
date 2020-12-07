#pragma once

#include "Human.hpp"


#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
  std::vector <char> v;
  std::vector <char> vout;
    // Twoja implementacja tutaj
    for(Human e:people)
    {
      e.birthday();
      if(e.isMonster() == true)
      {v.push_back('n');}
      else
      {v.push_back('y');}
    }
    
    for (unsigned int i=1;i<=v.size();i++)
    {
      vout.push_back(v[v.size()-i]);
    }
    return {vout};
}
