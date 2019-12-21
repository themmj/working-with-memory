workspace "demo"
	architecture "x64"
	
	configurations
	{
		"Debug",
		"Release"
	}
	
outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "demo"
	kind "ConsoleApp"
	language "C++"
	
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	
	files
	{
		"src/**.h",
		"src/**.hpp",
		"src/**.c",
		"src/**.cpp"
	}

	cppdialect "C++17"
	staticruntime "Off"
	systemversion "latest"
		
	filter "configurations:Debug"
		defines "DM_DEBUG"
		symbols "On"
	
	filter "configurations:Release"
		defines "DM_RELEASE"
		optimize "On"
