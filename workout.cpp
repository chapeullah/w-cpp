#include <iostream>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <algorithm>

struct TaxiInfo 
{
    int timestamp;
    int position;
};

int main() 
{
    int n, l, s;
    std::cin >> n >> l >> s;
    std::cin.ignore();
    std::unordered_map<int, TaxiInfo> taxi_data;
    for (int i = 0; i < n; ++i)
    {
        std::string line, type;
        std::getline(std::cin, line);
        std::stringstream stream(line);
        stream >> type;
        if (type == "TAXI")
        {
            int timestamp, taxi_id, taxi_position;
            stream >> timestamp >> taxi_id >> taxi_position;
            if (!taxi_data.count(taxi_id) || taxi_data[taxi_id].timestamp < timestamp)
            {
                taxi_data[taxi_id] = {timestamp, taxi_position};
            }
        }
        else if (type == "ORDER")
        {
            int timestamp, order_id, order_position, order_time;
            stream >> timestamp >> order_id >> order_position >> order_time;
            std::vector<int> result;
            for (const auto& [taxi_id, info] : taxi_data)
            {
                if (info.timestamp > timestamp)
                {
                    continue;
                }
                long long time_diff = timestamp - info.timestamp;
                long long max_taxi_distance = 1LL * s * time_diff;
                long long max_order_distance = 1LL * s * order_time;
                long long distance = (order_position - info.position + l) % l;
                if (max_taxi_distance + max_order_distance >= distance)
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
                for (size_t i = 0; i < std::min<size_t>(5, result.size()); ++i)
                {
                    std::cout << result[i];
                    if (i + 1 < std::min<size_t>(5, result.size()))
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