#include <cmath>

const double DAILY_RATE = 8;
const double BILLABLE_DAYS  = 22;

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    return (hourly_rate * DAILY_RATE);
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    return before_discount - (before_discount * discount / 100);
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    return std::ceil(daily_rate(apply_discount(hourly_rate, discount)) * BILLABLE_DAYS);
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    return std::floor(budget / daily_rate(apply_discount(hourly_rate, discount)));
}