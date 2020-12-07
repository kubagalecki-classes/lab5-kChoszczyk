#pragma once

#include "Human.hpp"


#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
  vector <char> v;
  vector <char> vout;
    // Twoja implementacja tutaj
    for(Human e:people)
    {
      e.birthday();
      if(e.isMonster())
      v.push_back('y');
      else
      v.push_back('n');
    }
    
    for (unsigned int i=0;i<v.size();i++)
    {
      vout.push_back(v[v.size()-i]);
    }
    return {vout};
}
