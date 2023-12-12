#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>

namespace Pycoas {
    class Parser {
    private:
        static bool IsDouble(const std::string& string) {
            char* end = nullptr;
            double val = strtod(string.c_str(), &end);
            return end != string.c_str() && *end == '\0';
        }

        static double StringToDouble(const std::string& string) {
            return std::stod(string.c_str());
        }

    public:
        static std::vector<double> FileToDoubleVector(const std::string& fileName) {
            std::fstream fileStream(fileName);
            std::string fileContent;
            std::vector<double> vector;

            if (!fileStream.is_open()) {
                throw ("File cannot be opened");
            }

            while (fileStream.good()) {
                fileStream >> fileContent;

                if (!IsDouble(fileContent)) {
                    throw ("Bad file content");
                }

                vector.push_back(StringToDouble(fileContent));
            }

            return vector;
        }
    };
}