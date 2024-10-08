/*
	THIS FILE IS A PART OF GTA V SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2015
*/

#pragma once

#include <string>

// returns module load path with trailing slash
std::string GetCurrentModulePath();

std::uint8_t* PatternScan(void* module, const char* signature);

/*
* Adapted from the CitizenFX project, retrieved 2022-12-04
* You can view the original project and license terms at:
https://github.com/citizenfx/fivem/blob/master/code/LICENSE
https://runtime.fivem.net/fivem-service-agreement-4.pdf
*/
template<typename T>
inline T get_address(uintptr_t address)
{
	intptr_t target = *(int32_t*)(address);
	target += (address + 4);

	return (T)target;
}