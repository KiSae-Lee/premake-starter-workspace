#pragma once

#include <memory>

#include "spdlog/spdlog.h"

namespace Library {

	class Log
	{
	public:
		static void Initialize();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Engine log macros
#define CORE_TRACE(...)    ::Library::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CORE_INFO(...)     ::Library::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CORE_WARN(...)     ::Library::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CORE_ERROR(...)    ::Library::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CORE_FATAL(...)    ::Library::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Server log macros
#define TRACE(...)	      ::Library::Log::GetClientLogger()->trace(__VA_ARGS__)
#define INFO(...)	      ::Library::Log::GetClientLogger()->info(__VA_ARGS__)
#define WARN(...)	      ::Library::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ERROR(...)	      ::Library::Log::GetClientLogger()->error(__VA_ARGS__)
#define FATAL(...)	      ::Library::Log::GetClientLogger()->fatal(__VA_ARGS__)