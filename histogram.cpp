#include "histogram.h"

void find_minmax(const vector<double>dogi, double& min, double& max) {
    min = dogi[0];
    max = dogi[0];
    for (double x : dogi) {
        if (x < min) {
            min = x;
        }
        else if (x > max) {
            max = x;
        }
    }
}
