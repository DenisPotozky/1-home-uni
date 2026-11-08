#pragma once

struct Menu
{
	const char* const title;
	void (*func)();
};