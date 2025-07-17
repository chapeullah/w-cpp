#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <algorithm>

int main() {
    int n, l, s;
    std::cin >> n >> l >> s;
    std::string temp;
    std::getline(std::cin, temp);
    std::unordered_map<int, std::pair<int, int>> taxi;
    std::vector<std::tuple<int, int, int, int>> orders;
    for (int i = 0; i < n; ++i) 
    {
        std::string line;
        std::getline(std::cin, line);
        std::stringstream stream(line);
        std::string type;
        stream >> type;
        if (type == "TAXI") 
        {
            int timestamp, taxi_id, taxi_position;
            stream >> timestamp >> taxi_id >> taxi_position;
            if (!taxi.count(taxi_id) || taxi[taxi_id].first < timestamp) 
            {
                taxi[taxi_id] = {timestamp, taxi_position};
            }
        }
        else if (type == "ORDER") 
        {
            int timestamp, order_id, order_position, order_time;
            stream >> timestamp >> order_id >> order_position >> order_time;
            orders.emplace_back(timestamp, order_position, order_time, order_id);
        }
    }
    for (const auto &order : orders) 
    {
        int timestamp = std::get<0>(order);
        int position = std::get<1>(order);
        int time = std::get<2>(order);
        std::vector<int> result;
        for (const auto& [taxi_id, data] : taxi) 
        {
            int taxi_timestamp = data.first;
            int taxi_position = data.second;
            if (taxi_timestamp > timestamp) 
            {
                continue;
            }
            int distance = (position - taxi_position + l) % l;
            if (distance <= s * time) 
            {
                result.push_back(taxi_id);
            }
        }
        if (result.empty()) 
        {
            std::cout << "-1\n";
        } 
        else 
        {
            std::sort(result.begin(), result.end());
            for (int i = 0; i < std::min(5, (int)result.size()); ++i) 
            {
                std::cout << result[i];
                if (i + 1 < std::min(5, (int)result.size())) 
                {
                    std::cout << " ";
                }
            }
            std::cout << "\n";
        }
    }
    return 0;
}