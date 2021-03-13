#pragma once
#include <map>
#include <string>
#include <vector>
#include "Global.h"
#include "MathExtension.h"
#include <memory>
#include <SDL_ttf.h>
#include "Font.h"

class ResourceManager
{
public:
    static ResourceManager& getInstance();
private:
    ResourceManager() {}
      

public:
    ResourceManager(ResourceManager const&) = delete;
    void operator=(ResourceManager const&) = delete;

	std::map<const std::string, std::shared_ptr<std::vector<Vector2>>> _shapes;
    std::map<const std::string, std::shared_ptr<Font>> _fonts;

    template<typename TArray>
    void AddShape(std::string key, TArray points)
    {
        int arrSize = points.size();

        auto ptr = std::make_shared<std::vector<Vector2>>();
        ptr->resize(arrSize);
        for (size_t i = 0; i < arrSize; i++)
        {
            (*ptr)[i] = points[i];
        }

        _shapes[key] = ptr;
    }

    void AddFont(std::string key, std::string path, int fontSize);

};

