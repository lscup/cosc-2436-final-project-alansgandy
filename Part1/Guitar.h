#include <vector>
#include <map>
#include <string>



class Guitar {
private:
    std::string model;
    std::string brand;
    int year;
    std::string type;


    static std::vector<Guitar> guitarCollection;
    static std::map<std::string, Guitar> guitarMap;


public:
    Guitar(std::string model, std::string brand, int year, std::string type);


    // Getters and Setters

    std::string getModel() const;
    int getYear() const;

    static void addGuitar(const Guitar& guitar);
    static void removeGuitar(const std::string& model);

    static void sortByYear();
    static Guitar* searchByModel(const std::string& model);
    static Guitar* searchByModelInMap(const std::string& model);
};
