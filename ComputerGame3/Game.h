#pragma once

#include <cstdint>

constexpr static std::uint32_t LEN_X = 10;
constexpr static std::uint32_t START = 0;
constexpr static std::uint32_t GOAL = 9;

constexpr static char LEFT = 'a';
constexpr static char RIGHT = 'd';

void game();
