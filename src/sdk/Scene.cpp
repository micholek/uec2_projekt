#include "Scene.h"

const float Scene::BLINK_TIME = 0.2f;

Scene::Scene(Scene *next_scene, uint8_t id)
    : active(0),
	  id(id),
      next_scene(next_scene)
{

}

void Scene::Activate()
{
    active = 1;
}

uint8_t Scene::IsActive() const
{
    return active;
}

uint8_t Scene::ID() const
{
    return id;
}

Scene * Scene::NextScene() const
{
    return next_scene;
}

void Scene::Init(uint8_t info)
{

}

void Scene::HandleInput(uint8_t key)
{

}

void Scene::Update(float dt)
{

}

uint8_t Scene::Info() const
{
	return 0;
}
