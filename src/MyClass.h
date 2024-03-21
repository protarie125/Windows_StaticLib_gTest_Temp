#pragma once
#include <cstdint>

namespace xyz {
	class MyClass final {
	public:
		explicit MyClass(const std::int32_t& x);
		~MyClass() noexcept;
		bool IsPositive() const noexcept;

	private:
		std::int32_t x_{ 0 };
	};
}