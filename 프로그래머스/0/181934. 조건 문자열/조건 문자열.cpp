#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    
    return (ineq == "<" && eq =="=")? ((n<=m)? 1 : 0):
          (ineq == "<" && eq == "!")? ((n<m)? 1 : 0):
         (ineq == ">" && eq =="=")? ((n>=m)? 1: 0 ):
         (ineq == ">" && eq == "!")? ((n>m)? 1:0):0;
          
    
    
}