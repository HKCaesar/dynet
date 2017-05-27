#include "dynet/globals.h"
#include "dynet/devices.h"

namespace dynet {

std::mt19937* rndeng = nullptr;
std::vector<Device*> devices;
Device* default_device = nullptr;
float weight_decay_lambda;
int autobatch_flag; 
int autobatch_debug_flag = 0;
int pool_size = 0;

}
