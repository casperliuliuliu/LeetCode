#include<iostream>
#include <map>
#include<vector>
using namespace std;

class TimeMap {
public:
    struct Kvt{
        string key;
        string value;
        int timestamp;
        Kvt(string k, string v,int t)
        {
            key = k;
            value = v;
            timestamp = t;
        }
    };
    struct bytime { 
        bool operator()(Kvt const &a, Kvt const &b) const { 
            return a.timestamp < b.timestamp;
        }
    };
    struct bykey { 
        bool operator()(Kvt const &a, Kvt const &b) const { 
            return a.key < b.key;
        }
    };
    vector <Kvt> vv;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        Kvt temp(key,value, timestamp);
        vv.push_back(temp);
        sort(vv.begin(),vv.end(),bytime());
        sort(vv.begin(),vv.end(),bykey());

    }   
    
    string get(string key, int timestamp) {
        int ans=-1;
        for(int ii=0;ii<vv.size();ii++)
        {
            if(vv.at(ii).key == key){
                for(ii=0;vv.at(ii).key == key &&ii<vv.size();ii++){
                    if(vv.at(ii).timestamp <= timestamp)
                        ans = ii;
                }
                break;
            }
                
        }
        if(ans==-1)
            return "";
        return vv.at(ans).value;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */