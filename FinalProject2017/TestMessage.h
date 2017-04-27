#include <string>

class TestMessage
{
private:
  std::string _Greeting();
  
public:
  std::string _Greeting(std::string);
  
  TestMessage();
  ~TestMessage();
};
