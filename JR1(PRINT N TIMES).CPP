vector<string> result;

string str="Coding Ninjas";

vector<string> printNTimes(int n) {

// Write your code here.

//base case

if(n==1){

result.push_back(str);

return result;

}

result.push_back(str);

return printNTimes(n-1);

}
