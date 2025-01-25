# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "C:/Users/benja/source/repos/walliscode/Cuttlefish/build/debug/_deps/flac-src")
  file(MAKE_DIRECTORY "C:/Users/benja/source/repos/walliscode/Cuttlefish/build/debug/_deps/flac-src")
endif()
file(MAKE_DIRECTORY
  "C:/Users/benja/source/repos/walliscode/Cuttlefish/build/debug/_deps/flac-build"
  "C:/Users/benja/source/repos/walliscode/Cuttlefish/build/debug/_deps/flac-subbuild/flac-populate-prefix"
  "C:/Users/benja/source/repos/walliscode/Cuttlefish/build/debug/_deps/flac-subbuild/flac-populate-prefix/tmp"
  "C:/Users/benja/source/repos/walliscode/Cuttlefish/build/debug/_deps/flac-subbuild/flac-populate-prefix/src/flac-populate-stamp"
  "C:/Users/benja/source/repos/walliscode/Cuttlefish/build/debug/_deps/flac-subbuild/flac-populate-prefix/src"
  "C:/Users/benja/source/repos/walliscode/Cuttlefish/build/debug/_deps/flac-subbuild/flac-populate-prefix/src/flac-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/benja/source/repos/walliscode/Cuttlefish/build/debug/_deps/flac-subbuild/flac-populate-prefix/src/flac-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/benja/source/repos/walliscode/Cuttlefish/build/debug/_deps/flac-subbuild/flac-populate-prefix/src/flac-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
