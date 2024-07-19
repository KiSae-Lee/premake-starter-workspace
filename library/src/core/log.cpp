#include "log.h"

#include "spdlog/sinks/stdout_color_sinks.h"

namespace Library
{
    std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
    std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

    void Log::Initialize()
    {
        spdlog::set_pattern("%^[%Y-%m-%d %H:%M:%S:%e] %n: %v%$");
        s_CoreLogger = spdlog::stdout_color_mt("Core");
        s_CoreLogger->set_level(spdlog::level::trace);

        s_ClientLogger = spdlog::stdout_color_mt("Client");
        s_ClientLogger->set_level(spdlog::level::trace);

        CORE_TRACE("Log System initialized.");
    }
}