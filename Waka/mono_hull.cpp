#include "stdafx.h"
#include "mono_hull.h"


// Intentionally blank
Hull::turn_radius Mono_hull::do_get_turn_rad()
{
	return min_turn_radius_;
}

Hull::max_wave_height Mono_hull::do_get_max_wave_height()
{
	return max_wave_height_;
}
