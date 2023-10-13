include<iostream>
int
main()
{
  std::string name;
  std::cout << "Введите ваше имя"; //Enter username
  std::cin >> name;
  std::cout << "Hello world " << name
            << endl; //Output Hello world with the username
  return 0;
}
