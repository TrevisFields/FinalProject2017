#include "TestMessage.h"
#include <iostream>
#include <string>
using namespace std;

TestMessage::TestMessage()
{
  cout << "This is a call to the constructor.\n";
}

TestMessage::~TestMessage()
{
   cout << "This is a call to the destructor.\n";
}
