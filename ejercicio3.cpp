#include <unordered_map>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class FrequencyTracker
{
private:
    unordered_map<int, vector<int>> values_by_freq;
    unordered_map<int, int> values_by_key;

public:
    FrequencyTracker() = default;

    void add(int number)
    {
        int curr_freq;
        if (values_by_key.find(number) == values_by_key.end())
        {
            curr_freq = 0;
            values_by_key[number] = 1;
        }
        else
        {
            curr_freq = values_by_key[number];
            values_by_key[number];
        }

        if (curr_freq == 0)
        {
            if (values_by_freq.find(0) == values_by_freq.end())
            {
                values_by_freq[0].push_back(number);
            }
        }
        else{
            auto it = values_by_freq[curr_freq]

        }
    }

    void deleteOne(int number)
    {
    }

    bool hasFrequency(int frequency)
    {
    }
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */