# Based on original work by David Manura
# Copyright (C) 2007-2012 LuaDist.
# Copyright (C) 2013 Brian Sidebotham
# Copyright (C) 2016-2019 Jean-Luc Barriere

# Redistribution and use of this file is allowed according to the terms of the
# MIT license.
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.


# Modified by Pushen to cross compile openssl 1.1.1g for Android:
# 1. Remove c_rehash and apps.
# 2. Hard code opensslconf.h, bn_conf.h and dso_conf.h for Android build.

set( CMAKE_LEGACY_CYGWIN_WIN32 0 )
project( openssl )
cmake_minimum_required( VERSION 3.1.0 )

set( CMAKE_DISABLE_SOURCE_CHANGES ON )
set( CMAKE_DISABLE_IN_SOURCE_BUILD ON )

set( CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" )

# OpenSSL version detection imported from FindOpenSSL.cmake

file( STRINGS "${PROJECT_SOURCE_DIR}/include/openssl/opensslv.h" openssl_version_str
  REGEX "^#[\t ]*define[\t ]+OPENSSL_VERSION_NUMBER[\t ]+0x([0-9a-fA-F])+.*" )

function(from_hex HEX DEC)
  string( TOUPPER "${HEX}" HEX )
  set( _res 0 )
  string( LENGTH "${HEX}" _strlen )

  while( _strlen GREATER 0 )
    math( EXPR _res "${_res} * 16" )
    string( SUBSTRING "${HEX}" 0 1 NIBBLE )
    string( SUBSTRING "${HEX}" 1 -1 HEX )
    if( NIBBLE STREQUAL "A" )
      math( EXPR _res "${_res} + 10" )
    elseif( NIBBLE STREQUAL "B" )
      math( EXPR _res "${_res} + 11" )
    elseif( NIBBLE STREQUAL "C" )
      math( EXPR _res "${_res} + 12" )
    elseif( NIBBLE STREQUAL "D" )
      math( EXPR _res "${_res} + 13" )
    elseif( NIBBLE STREQUAL "E" )
      math( EXPR _res "${_res} + 14" )
    elseif( NIBBLE STREQUAL "F" )
      math( EXPR _res "${_res} + 15" )
    else()
      math( EXPR _res "${_res} + ${NIBBLE}" )
    endif()

    string( LENGTH "${HEX}" _strlen )
  endwhile()

  set( ${DEC} ${_res} PARENT_SCOPE )
endfunction()

string( REGEX REPLACE "^.*OPENSSL_VERSION_NUMBER[\t ]+0x([0-9a-fA-F])([0-9a-fA-F][0-9a-fA-F])([0-9a-fA-F][0-9a-fA-F])([0-9a-fA-F][0-9a-fA-F])([0-9a-fA-F]).*$"
  "\\1;\\2;\\3;\\4;\\5" OPENSSL_VERSION_LIST "${openssl_version_str}" )
  list( GET OPENSSL_VERSION_LIST 0 OPENSSL_VERSION_MAJOR )
  list( GET OPENSSL_VERSION_LIST 1 OPENSSL_VERSION_MINOR )
  from_hex( "${OPENSSL_VERSION_MINOR}" OPENSSL_VERSION_MINOR )
  list( GET OPENSSL_VERSION_LIST 2 OPENSSL_VERSION_FIX )
  from_hex( "${OPENSSL_VERSION_FIX}" OPENSSL_VERSION_FIX )
  list( GET OPENSSL_VERSION_LIST 3 OPENSSL_VERSION_PATCH )

if( NOT OPENSSL_VERSION_PATCH STREQUAL "00" )
  from_hex( "${OPENSSL_VERSION_PATCH}" _tmp )
  # 96 is the ASCII code of 'a' minus 1
  math( EXPR OPENSSL_VERSION_PATCH_ASCII "${_tmp} + 96" )
  unset( _tmp )
  string( ASCII "${OPENSSL_VERSION_PATCH_ASCII}" OPENSSL_VERSION_PATCH_STRING )
endif()

set( OPENSSL_VERSION "${OPENSSL_VERSION_MAJOR}.${OPENSSL_VERSION_MINOR}.${OPENSSL_VERSION_FIX}${OPENSSL_VERSION_PATCH_STRING}" )

message( STATUS "OpenSSL version ${OPENSSL_VERSION}" )

set( VERSION_MAJOR ${OPENSSL_VERSION_MAJOR} )
set( VERSION_MINOR ${OPENSSL_VERSION_MINOR} )
set( VERSION_PATCH ${OPENSSL_VERSION_FIX} )

set( VERSION_STRING ${OPENSSL_VERSION} )
set( LIB_VERSION ${VERSION_MAJOR}.${VERSION_MINOR} )
set( LIB_SOVERSION ${VERSION_MAJOR}.${VERSION_MINOR} )

add_definitions( -DOPENSSL_NO_ASM )
add_definitions( -DOPENSSL_NO_STATIC_ENGINE )

if( MSVC )
  include( MSVCRuntime )
  configure_msvc_runtime()
  set( OPENSSLDIR "C:/ssl" )
  set( ENGINESDIR "C:/engines-1.1" )
else()
  set( OPENSSLDIR "/usr/local/ssl" )
  set( ENGINESDIR "/usr/local/engines-1.1" )
endif()
add_definitions( "-DOPENSSLDIR=\"${OPENSSLDIR}\"" )
add_definitions( "-DENGINESDIR=\"${ENGINESDIR}\"" )

if( APPLE )
  set( CMAKE_MACOSX_RPATH ON )
  add_definitions( -DOPENSSL_SYSNAME_MACOSX )
endif()

if( WIN32 )
  set( CMAKE_SHARED_LIBRARY_PREFIX "lib" )
  set( CMAKE_STATIC_LIBRARY_PREFIX "lib" )
endif()

if( WIN32 AND NOT CYGWIN )
  add_definitions( -DOPENSSL_SYSNAME_WIN32 )
  add_definitions( -DWIN32_LEAN_AND_MEAN )
  add_definitions( -D_CRT_SECURE_NO_WARNINGS )

  if(BUILD_SHARED_LIBS)
    # avoid conflict: ocsp.h and wincrypt.h
    add_definitions( -D_WINDLL )
  endif()
endif()

if( MINGW )
  set( CMAKE_SHARED_LINKER_FLAGS "-Wl,--export-all" )
endif()

include( CheckTypeSize )
check_type_size( "long" LONG_INT )
check_type_size( "long long" LONG_LONG_INT )
check_type_size( "int" INT )
if( HAVE_LONG_INT AND (${LONG_INT} EQUAL 8) )
  set( SIXTY_FOUR_BIT_LONG ON )
  set( BN_CONF "# define SIXTY_FOUR_BIT_LONG")
elseif( HAVE_LONG_LONG_INT AND (${LONG_LONG_INT} EQUAL 8) )
  set( SIXTY_FOUR_BIT ON )
  set( BN_CONF "# define SIXTY_FOUR_BIT")
else()
  set( THIRTY_TWO_BIT ON )
  set( BN_CONF "# define THIRTY_TWO_BIT")
endif()

if( MSVC OR ( WIN32 AND MINGW AND NOT CYGWIN ) )
  set( OPENSSL_EXPORT_VAR_AS_FUNCTION 1 )
endif()

# Begin configure public headers
file( COPY ${PROJECT_SOURCE_DIR}/include/internal DESTINATION include )
file( COPY ${PROJECT_SOURCE_DIR}/include/crypto DESTINATION include )
file( COPY ${PROJECT_SOURCE_DIR}/include/openssl DESTINATION include )

set( CONF "
# include <openssl/opensslv.h>
# define OPENSSL_NO_RFC3779
# define OPENSSL_NO_MD2
# define OPENSSL_NO_RC5
# define OPENSSL_THREADS
# define OPENSSL_RAND_SEED_OS
# define OPENSSL_NO_ASAN
# define OPENSSL_NO_ASM
# define OPENSSL_NO_CRYPTO_MDEBUG
# define OPENSSL_NO_CRYPTO_MDEBUG_BACKTRACE
# define OPENSSL_NO_DEVCRYPTOENG
# define OPENSSL_NO_EC_NISTP_64_GCC_128
# define OPENSSL_NO_EGD
# define OPENSSL_NO_EXTERNAL_TESTS
# define OPENSSL_NO_FUZZ_AFL
# define OPENSSL_NO_FUZZ_LIBFUZZER
# define OPENSSL_NO_HEARTBEATS
# define OPENSSL_NO_MSAN
# define OPENSSL_NO_SCTP
# define OPENSSL_NO_SSL_TRACE
# define OPENSSL_NO_SSL3
# define OPENSSL_NO_SSL3_METHOD
# define OPENSSL_NO_UBSAN
# define OPENSSL_NO_UNIT_TEST
# define OPENSSL_NO_WEAK_SSL_CIPHERS
# define OPENSSL_NO_STATIC_ENGINE
# define OPENSSL_NO_AFALGENG
# define NON_EMPTY_TRANSLATION_UNIT static void *dummy = &dummy;
# define DECLARE_DEPRECATED(f)   f __attribute__ ((deprecated));
# define OPENSSL_MIN_API 0
# define OPENSSL_API_COMPAT 0
# define DEPRECATEDIN_1_2_0(f)   f;
# define DEPRECATEDIN_1_1_0(f)   DECLARE_DEPRECATED(f)
# define DEPRECATEDIN_1_0_0(f)   DECLARE_DEPRECATED(f)
# define DEPRECATEDIN_0_9_8(f)   DECLARE_DEPRECATED(f)
# define OPENSSL_FILE __FILE__
# define OPENSSL_LINE __LINE__
# undef OPENSSL_UNISTD
# define OPENSSL_UNISTD <unistd.h>
# undef OPENSSL_EXPORT_VAR_AS_FUNCTION
# undef BN_LLONG
# undef SIXTY_FOUR_BIT_LONG
# undef SIXTY_FOUR_BIT
# undef THIRTY_TWO_BIT
${BN_CONF}
# define RC4_INT unsigned int")

file( WRITE ${PROJECT_BINARY_DIR}/opensslconf.h.cmake "${CONF}")

configure_file( ${PROJECT_BINARY_DIR}/opensslconf.h.cmake
  ${PROJECT_BINARY_DIR}/include/openssl/opensslconf.h )
# End configure public headers

add_subdirectory(crypto)
add_subdirectory(ssl)

file( GLOB PUBLIC_HEADERS "${PROJECT_BINARY_DIR}/include/openssl/*.h" )
install( FILES ${PUBLIC_HEADERS} DESTINATION include/openssl )

install( DIRECTORY doc DESTINATION share )

# Generate the package target
set( CPACK_GENERATOR ZIP TGZ )
set( CPACK_PACKAGE_NAME "${CMAKE_PROJECT_NAME}" )
set( CPACK_PACKAGE_VERSION_MAJOR ${VERSION_MAJOR} )
set( CPACK_PACKAGE_VERSION_MINOR ${VERSION_MINOR} )
set( CPACK_PACKAGE_VERSION_PATCH ${VERSION_PATCH} )
set( CPACK_PACKAGE_FILE_NAME "${CMAKE_PROJECT_NAME}-${VERSION_STRING}" )

include( CPack )