#include<bits/stdc++.h>
using namespace std;
class resterant{
    private:
        string name, type, location;
    public:
        resterant(){
            name = " ";
            type = " ";
            location = " ";
        }
        void read(string n, string t, string l){
            name = n;
            type = t;
            location = l;
        }
        string getn(){
            return name;
        }
        string gett(){
            return type;
        }
        string getl(){
            return location;
        }
};
int main(){
    vector <string> area;
    vector <string> cata;
    vector <string> ans;
    vector <resterant> data;
    ifstream infile;
    infile.open("What to eat.csv");
    while(infile.good()){
        cout<<"in"<<endl;
        string n, t, l;
        getline(infile, n, ',');
        getline(infile, t, ',');
        getline(infile, l, ',');
        infile>>n>>t>>l;
        resterant res;
        res.read(n, t, l);
        data.push_back(res);
        if(area.size()==0){
            area.push_back(l);
            cata.push_back(t);
        }
        else{
            if(area[area.size()-1]!= l)
                area.push_back(l);
            if(cata[cata.size()-1]!= t)
                cata.push_back(t);
        }
    }
    cout<<data.size()<<" "<<area.size()<<" "<<cata.size()<<endl;
    infile.close();
    system("pause");
    return 0;
}