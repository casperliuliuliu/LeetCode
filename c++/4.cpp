#include<iostream>
#include<vector>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
{
    vector<int> merge;
    int ms=nums1.size()+nums2.size();
    int i1=0,i2=0;
    while(i1<nums1.size()&&i2<nums2.size())
    {
        if(nums1.at(i1)<nums2.at(i2))
        {
            merge.push_back(nums1.at(i1));
            i1++;
        }
        else
        {
            merge.push_back(nums2.at(i2));
            i2++;
        }
    }
    for(i1;i1<nums1.size();i1++)
        merge.push_back(nums1.at(i1));
    for(i2;i2<nums2.size();i2++)
        merge.push_back(nums2.at(i2)); 
    if(ms%2==0)
    {
        double dd=(merge.at(ms/2)+merge.at(ms/2-1))/2.0;
        
        return dd;
    }
    else
        return double(merge.at(ms/2));
}

int main()
{
    vector<int> n1,n2,n3,n4;
    n1.push_back(1);
    n1.push_back(3);
    n2.push_back(2);
    n3.push_back(1);
    n3.push_back(2);
    n4.push_back(3);
    n4.push_back(4);


    cout << findMedianSortedArrays(n1,n2) << endl;
    cout << findMedianSortedArrays(n3,n4) << endl;

}