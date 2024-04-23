-- premake5.lua
workspace "CplusplusWorkplace"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   -- startproject " "

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

include "EnumToString"
include "TestMoveConstructor"