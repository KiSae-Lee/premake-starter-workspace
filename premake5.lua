workspace "PremakeStarterWorkspace"
   configurations { "Debug", "Release" }
   platforms {"Win64"}
   location "build"

project "client"
   kind "ConsoleApp"
   language "C++"
   cppdialect "C++17"
   targetdir "bin/%{cfg.buildcfg}/client"
   location "build/client"

   links{ "library" }
   includedirs{"library/src"}

   files { "client/src/**.h", "client/src/**.cpp" }

   filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"

project "library"
   kind "StaticLib"
   language "C++"
   cppdialect "C++17"
   targetdir "bin/%{cfg.buildcfg}/library"
   location "build/library"

   libdirs {"library/external/spdlog/build/Release/"}
   links{ "spdlog" }
   includedirs{"library/external/spdlog/include"}

   files { "library/src/**.h", "library/src/**.cpp" }

   filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"