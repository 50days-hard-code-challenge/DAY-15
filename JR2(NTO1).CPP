void rec(vector<int> &v, int x){

   if (x==0)

     return;

 v.push_back(x);

 rec(v,x-1);

}

vector<int> printNos(int x) {

   vector <int> v;

   rec(v,x);

   return v;

}
