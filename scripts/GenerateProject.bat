@echo off

pushd ..
mkdir %1
copy .\premake5_template.lua .\%1\premake5.lua

popd
./Setup.bat

pause