#ifndef WORLD_H__
#define WORLD_H__

#include <vector>
class Entity;



class World
{
public:
    void Init();
    void Step();

protected:
    std::vector<Entity*> m_entities;
};



#endif