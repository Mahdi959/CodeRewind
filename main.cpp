#include "tree.h"
#include <fstream>


int main(){
  Tree<int> obj;
  Tree<int> obj1;
  std::ofstream me("new.txt");

  me<<"okke";
  int arr[]= {4,3,4,2,22,7,88,43,45,1,3,2,4};
  for (int i = 0; i<10;i++){
    obj.insert(arr[i]);
  }
  int arr2[10];
  for (int i = 0; i<10;i++){
    std::cin>>arr2[i];
    obj1.insert(arr2[i]);
  }

  obj.inOrder();
  obj1.inOrder();
  std::cout<<std::endl;
  for (int i = 0; i<10;i++){
    for (int j = 0; j<10 ; j++){
      if (i==0 || j== 0 || i==9 || j== 9)
          {std::cout<<"#";}
      else
          std::cout<< " ";
        
    }
    std::cout<<std::endl;

    
  }
  std::cout<<"delete: ";
    int cc;
    std::cin>>cc;
    obj1.searchAndDestroy(cc);
    obj1.inOrder();
//   std::cout<<"1. OWL"<<endl;
//   std::cout<<"(=o               ^o               =) "<<endl<<endl;
//   std::cout<<"2. CAT" <<endl;
//   std::cout << " /\\_/\\ \n"
//                            "( o            .o )\n"
//                  " > ^ < " << std::endl;
// } 
} 