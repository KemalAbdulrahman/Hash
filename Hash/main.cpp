//
//  main.cpp
//  Hash
//
//  Created by Kemal Abdulrahman on 11/8/18.
//  Copyright © 2018 Kemal Abdulrahman. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;



}

int main(int argc, const char * argv[]) {
   // insert code here...
   int hash(string ID)
      unsigned int h1=0, h2, h;
      for(int i=0;i<2;i++)
         h1=h1+ID[i];
      //   h1=h1+%15;
      h2=h2+((ID[2]-'0'));
      h2=h2+((ID[3]-'0')*10);
      h2=h2+((ID[4]-'0')*100);
      h2=h+4((ID[5]='O')*1000);
      h=h1*h2;
      if(h<0)
         hx=-1;
      return h;

   
   return 0;
}
