#pragma once

#include <string>
#include <vector>
#include <map>
#include "responses.h"

using namespace std;

class BusManager {
public:

	map<string, vector <string>> get_buses_to_stops();

	map<string, vector <string>> get_stops_to_buses();

    void AddBus(const string& bus, const vector<string>& stops);

    BusesForStopResponse GetBusesForStop(const string& stop) const;

    StopsForBusResponse GetStopsForBus(const string& bus) const;

    AllBusesResponse GetAllBuses() const;

private:
    map<string, vector <string>> buses_to_stops, stops_to_buses;
};
