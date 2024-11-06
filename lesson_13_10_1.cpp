#include <iostream>


struct ads_results_day {
	int watch_number{};
	double click_percent{};
	double average_earning_per_click{};
};

ads_results_day get_ads_results() {
	ads_results_day temp{};

	std::cout << "How many ads were shown today? ";
	std::cin >> temp.watch_number;
	std::cout << "What was the click percentage? ";
	std::cin >> temp.click_percent;
	std::cout << "What was the average earnings per click($): ";
	std::cin >> temp.average_earning_per_click;

	return temp;
}

void print_ads_results(ads_results_day &data) {
	std::cout << "Watch count: " << data.watch_number << '\n';
	std::cout << "Click percentage: " << data.click_percent << '\n';
	std::cout << "Average earnings per click: " << data.average_earning_per_click << '\n';
	std::cout << "Total earnings: " << (data.watch_number * (data.click_percent / 100) * data.average_earning_per_click);
}

int main() {
	ads_results_day day_1{ get_ads_results() };

	print_ads_results(day_1);

	return 0;
}