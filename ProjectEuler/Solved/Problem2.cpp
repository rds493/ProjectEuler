/*

    Each new term in the Fibonacci
    sequence is generated by adding
    the previous two terms. By
    starting with 1 and 2, the
    first 10 terms will be:
    1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

    By considering the terms in
    the Fibonacci sequence whose
    values do not exceed four
    million, find the sum of the
    even-valued terms.

*/

#include <iostream>
#include <vector>


int main(){

  long long upperLimit;
  long long sum=0;
  std::vector<long long> fibSeq;
  std::cout << "Input upper limit for fib: ";
  std::cin >> upperLimit;

  fibSeq.push_back(0);
  fibSeq.push_back(1);

  for(int i=0; fibSeq.back() < upperLimit; i++){
    fibSeq.push_back(fibSeq[i]+fibSeq[i+1]);
    std::cout << fibSeq.back() << std::endl;
  }

  for(int i=0; i<fibSeq.size()-1; i++){
    if(fibSeq[i]%2==0)
      sum+=fibSeq[i];
  }

  std::cout<<sum<<std::endl;


}
