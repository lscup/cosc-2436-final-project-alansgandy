#include "Guitar.h"
#include <algorithm>

std::vector<Guitar> Guitar::guitarCollection;
std::map<std::string, Guitar> Guitar::guitarMap;

void Guitar::addGuitar(const Guitar &guitar) {
  guitarCollection.push_back(guitar);
  guitarMap[guitar.getModel()] = guitar;
}

void Guitar::removeGuitar(const std::string &model) {
  // remove from the vector and the map
  for (size_t i = 0; i < guitarCollection.size(); ++i){
      if (guitarCollection[i].getModel() == model) {
          guitarCollection.erase(guitarCollection.begin() + i);
          break;
      }  
  }
  guitarMap.erase(model);
}

bool compareGuitarByYear(const Guitar &a, const Guitar &b) {
  return a.getYear() < b.getYear();
}

void Guitar::sortByYear() {
  std::sort(guitarCollection.begin(), guitarCollection.end(),
            compareGuitarByYear);
}

Guitar* Guitar::searchByModel(const std::string& model) {
    for (size_t i = 0; i < guitarCollection.size(); ++i) {
        if (guitarCollection[i].getModel() == model) {
            return &guitarCollection[i];
        }
    }
    return nullptr;
}

Guitar* Guitar::searchByModelInMap(const std::string& model) {
    auto it = guitarMap.find(model);
    if (it != guitarMap.end()) {
        return &(it->second);
    }
    return nullptr;
}

std::string Guitar::getModel() const {
    return model;
}

int Guitar::getYear() const {
    return year;
}
