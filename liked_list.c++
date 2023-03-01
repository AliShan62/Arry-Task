#include <iostream>
#include <list>

using namespace std;

list<int> my_list = {};
int value, position, number;
int insert_start()
{
  cout<<"Enter value in Start of Arry:";
  cin>>value;
  my_list.push_front(value);
 
  return 0;
}
int insert_End()
{
 cout<<"Enter value in End of Arry:";
  cin>>value;
  my_list.push_back(value);
 
  return 0;
}
int insert_Anywhere()
{
  cout << "Enter the Position Where You Want to Store :";
  cin >> position;
  cout << "Enter the Value You Want to Store :";
  cin >> number;
  auto iterator = my_list.begin();
  advance(iterator, position - 1);
  my_list.insert(iterator, number);
  return 0;
}

int delete_start()
{
  cout << "Enter the Value Where You Want to Delete :";
  cin >> position;

  my_list.remove(position);
  return 0;
}
int delete_End()
{
  cout << "Enter the Value Where You Want to Delete :";
  cin >> position;

  my_list.remove(position);
  return 0;
}
int delete_Anywhere()
{
  cout << "Enter the Value You Want to Delete :";
  cin >> position;

  my_list.remove(position);
  return 0;
}

int display()
{

  if (my_list.empty())
  {
    cout << "Element are This:";
    for (int i = 0; i < 5; i++)
    {
      my_list.push_back(0);
    }
    
    for(int x: my_list ){
       cout<<x; 
    }
  }

  else
  {

    for (int element : my_list)
    {
      cout << element;
    }
  }

  return 0;
}

int modify(){
    
     cout << "Enter the Position Where You Want to Store :";
  cin >> position;
  cout << "Enter the Value You Want to Store :";
  cin >> number;
  auto iterator = my_list.begin();
  advance(iterator, position - 1);
  * iterator =  number;
 
}

int main()
{
p:

  int a;
  cout << "\n1: To Store Value at Position  Start";
  cout << "\n2: To Store Value at position End ";
  cout << "\n3: To store Value at Any Position";
  cout << "\n4: To delete Value at Position  Start";
  cout << "\n5: To delete Value at position End ";
  cout << "\n6: To delete Value at Any Position";
  cout << "\n7: To display Values ";
   cout << "\n8: To modify Values ";
  cout << "\n9: To Stop Programe";
   cout << "\n10: Enter Your Choice ";
  cin >> a;
  switch (a)
  {
  case 1:
    insert_start();
    break;
  case 2:
    insert_End();
    break;

  case 3:
    insert_Anywhere();
    break;

  case 4:
    delete_start();
    break;
  case 5:
    delete_End();
    break;

  case 6:
    delete_Anywhere();
    break;

  case 7:
    display();
    break;
     case 8:
    modify();
    break;
  case 9:
    exit(0);
    break;
  default:
    cout << "Enter Correct Number " << endl;
  }
  goto p;
}
