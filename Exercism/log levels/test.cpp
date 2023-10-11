#include <string>

using namespace std;

namespace log_line
{
    string message(const string& input)
    {
        int level = input.find(' ');
        return input.substr(level + 1);
    }

    string log_level(const string& input)
    {
        return input.substr(input.find('[') + 1, input.find(']') - 1);
    }

    string reformat(const string& input)
    {
        string msg = message(input);
        string level = log_level(input);

        return msg + " " + "(" + level + ")";
    }
}
