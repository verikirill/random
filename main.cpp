#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> chipinkos;
    int n, a, k;
    std::cin>>n;
    for (int i = 0; i < n; i++){
        std::cin>>a;
        chipinkos.push_back(a);
    }
    std::cin>>k;
    for (int i = 0; i < k; i++){
        chipinkos.push_back(chipinkos[i]);
    }
    chipinkos.erase(chipinkos.begin(), chipinkos.begin()+ k);

    std::reverse(chipinkos.begin(), chipinkos.end());
    for (auto el : chipinkos){
        std::cout<<el<<" ";
    }
    std::cout<<'\n'<<"std::reverse";
}
