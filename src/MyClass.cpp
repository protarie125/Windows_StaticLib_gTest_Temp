#include "MyClass.h"

xyz::MyClass::MyClass(const std::int32_t& x)
	: x_{ x }
{
}

xyz::MyClass::~MyClass() noexcept = default;

bool xyz::MyClass::IsPositive() const noexcept
{
	return 0 < x_;
}
