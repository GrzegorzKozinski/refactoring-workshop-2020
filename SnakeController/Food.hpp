#pragma once
#include <algorithm>
#include <functional>
#include "IEventHandler.hpp"

namespace Snake
{

class Food : public IEventHandler
{
    int foodX, foodY;
    std::pair<int, int> m_foodPosition;
    public:
    Food();
    
    void sendPlaceNewFood(int x, int y);
    void sendClearOldFood();
    void updateFoodPosition(int x, int y, std::function<void()> clearPolicy);
   
   
};
}
 