#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <algorithm>

int main() 
{
    int n, l, s;
    std::cin >> n >> l >> s;
    std::cin.ignore();
    std::vector<std::tuple<char, int, int, int, int>> input;
    for (int i = 0; i < n; ++i)
    {
        std::string temp;
        std::getline(std::cin, temp);
        std::stringstream stream(temp);
        stream >> temp;
        if (temp == "TAXI")
        {
            int timestamp, taxi_id, taxi_position;
            stream >> timestamp >> taxi_id >> taxi_position;
            input.push_back(std::tuple<char, int, int, int, int>{'T', timestamp, taxi_id, taxi_position, -1});
        }
        else 
        {
            int timestamp, order_id, order_position, order_time;
            stream >> timestamp >> order_id >> order_position >> order_time;
            input.push_back(std::tuple<char, int, int, int, int>{'O', timestamp, order_id, order_position, order_time});
        }
    }
    std::unordered_map<int, std::pair<int, int>> taxi;
    for (const auto &pair : input) 
    {
        char type = std::get<0>(pair);
        int timestamp = std::get<1>(pair);
        int id = std::get<2>(pair);
        int position = std::get<3>(pair);
        int time = std::get<4>(pair);
        if (type == 'T') 
        {
            if (!taxi.count(id) || taxi[id].first < timestamp)
            {
                taxi[id] = {timestamp, position};
            }
        } 
        else 
        {
            std::vector<int> result;
            for (const auto& [taxi_id, data] : taxi) 
            {
                int taxi_timestamp = data.first;
                int taxi_position = data.second;
                if (taxi_timestamp > timestamp) 
                {
                    continue;
                }
                long long time1 = timestamp - taxi_timestamp;
                long long maxTaxi = s * time1;
                long long maxOrder = s * time;
                long long distance = (position - taxi_position + l) % l;
                if (maxTaxi + maxOrder >= distance)
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
                for (int i = 0; i < std::min(5, static_cast<int>(result.size())); ++i) 
                {
                    std::cout << result[i];
                    if (i + 1 < std::min(5, static_cast<int>(result.size()))) 
                    {
                        std::cout << " ";
                    }
                }
                std::cout << "\n";
            }
        }
    }
    return 0;
}