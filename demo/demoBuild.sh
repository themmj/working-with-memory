#!/bin/bash

build ( ) {
  echo "Build Premake"
  pushd vendor/premake-core
  if [ -f "bin/release/premake5" ]; then
    echo "Premake is already built"
  else 
    make -f Bootstrap.mak $1
  fi
  popd
  echo "Build Project Files"
  vendor/premake-core/bin/release/premake5 $2
  echo "Done"
}

help ( ) {
  echo "build PLATFORM BUILDSYSTEM"
  echo "  PLATFORM: osx or linux"
  echo "  BUILDSYSTEM: vs2019, vs2017, gmake2, xcode4, codelite"
}

if declare -f "$1" > /dev/null
then
  # call arguments verbatim
  "$@"
else
  # Show a helpful error
  if [ "$1" != "" ]; then
    echo "'$1' is not a known function name!" >&2
  fi
  help
fi
