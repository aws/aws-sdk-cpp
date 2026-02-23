add_project(aws-cpp-sdk-core "Core http and utility library for the AWS C++ SDK")

if(VERSION_STRING)
    set(AWSSDK_VERSION_STRING ${VERSION_STRING})

    message(STATUS "Updating version info to ${VERSION_STRING}")
    if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/include/aws/core/VersionConfig.h})
        FILE(REMOVE ${CMAKE_CURRENT_SOURCE_DIR}/include/aws/core/VersionConfig.h})
    endif()
    string(REPLACE "." ";" VERSION_LIST ${VERSION_STRING})
    list(GET VERSION_LIST 0 AWSSDK_VERSION_MAJOR)
    list(GET VERSION_LIST 1 AWSSDK_VERSION_MINOR)
    list(GET VERSION_LIST 2 AWSSDK_VERSION_FULLPATCH)
    string(REPLACE "-" ";" AWSSDK_VERSION_PRERELEASE ${AWSSDK_VERSION_FULLPATCH})
    list(GET AWSSDK_VERSION_PRERELEASE 0 AWSSDK_VERSION_PATCH)
    list(GET AWSSDK_VERSION_PRERELEASE -1 AWSSDK_VERSION_PRERELEASE)

    set(AWSSDK_VERSION_MAJOR ${AWSSDK_VERSION_MAJOR})
    set(AWSSDK_VERSION_MINOR ${AWSSDK_VERSION_MINOR})
    set(AWSSDK_VERSION_PATCH ${AWSSDK_VERSION_PATCH})
    configure_file(
        "${CMAKE_CURRENT_SOURCE_DIR}/include/aws/core/VersionConfig.h.in"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/aws/core/VersionConfig.h"
        NEWLINE_STYLE UNIX)
else()
    message("Not able to compute versioning string, not updating.")
endif()

# If building shared libraries, custom memory management enabled is the default, otherwise regular memory management is the default.
# We make custom memory management the default on shared library builds because it is safer and much more difficult to accidentally
# allocate in one DLLs heap while freeing in another (which will lead to runtime crashes)
if(CUSTOM_MEMORY_MANAGEMENT OR (BUILD_SHARED_LIBS AND NOT DEFINED CUSTOM_MEMORY_MANAGEMENT))
    set(USE_AWS_MEMORY_MANAGEMENT ON)
    message(STATUS "Custom memory management enabled; stl objects now using custom allocators")
else()
    set(USE_AWS_MEMORY_MANAGEMENT OFF)
    message(STATUS "Custom memory management disabled")
endif()

configure_file("${CMAKE_CURRENT_SOURCE_DIR}/include/aws/core/SDKConfig.h.in"
               "${CMAKE_CURRENT_SOURCE_DIR}/include/aws/core/SDKConfig.h"
               NEWLINE_STYLE UNIX)

file(GLOB AWS_HEADERS "include/aws/core/*.h")
file(GLOB AWS_AUTH_HEADERS "include/aws/core/auth/*.h")
file(GLOB AWS_AUTH_SIGNER_HEADERS "include/aws/core/auth/signer/*.h")
file(GLOB AWS_AUTH_SIGNER_PROVIDER_HEADERS "include/aws/core/auth/signer-provider/*.h")
file(GLOB AWS_AUTH_BEARER_TOKEN_PROVIDER_HEADERS "include/aws/core/auth/bearer-token-provider/*.h")
file(GLOB AWS_CLIENT_HEADERS "include/aws/core/client/*.h")
file(GLOB AWS_INTERNAL_HEADERS "include/aws/core/internal/*.h")
file(GLOB NET_HEADERS "include/aws/core/net/*.h")
file(GLOB HTTP_HEADERS "include/aws/core/http/*.h")
file(GLOB HTTP_STANDARD_HEADERS "include/aws/core/http/standard/*.h")
file(GLOB CONFIG_HEADERS "include/aws/core/config/*.h")
file(GLOB CONFIG_DEFAULTS_HEADERS "include/aws/core/config/defaults/*.h")
file(GLOB ENDPOINT_HEADERS "include/aws/core/endpoint/*.h")
file(GLOB ENDPOINT_INTERNAL_HEADERS "include/aws/core/endpoint/internal/*.h")
file(GLOB MONITORING_HEADERS "include/aws/core/monitoring/*.h")
file(GLOB PLATFORM_HEADERS "include/aws/core/platform/*.h")
file(GLOB UTILS_HEADERS "include/aws/core/utils/*.h")
file(GLOB UTILS_EVENT_HEADERS "include/aws/core/utils/event/*.h")
file(GLOB UTILS_BASE64_HEADERS "include/aws/core/utils/base64/*.h")
file(GLOB UTILS_CHECKSUM_HEADERS "include/aws/core/utils/checksum/*.h")
file(GLOB UTILS_CRYPTO_HEADERS "include/aws/core/utils/crypto/*.h")
file(GLOB UTILS_JSON_HEADERS "include/aws/core/utils/json/*.h")
file(GLOB UTILS_CBOR_HEADERS "include/aws/core/utils/cbor/*.h")
file(GLOB UTILS_THREADING_HEADERS "include/aws/core/utils/threading/*.h")
file(GLOB UTILS_XML_HEADERS "include/aws/core/utils/xml/*.h")
file(GLOB UTILS_MEMORY_HEADERS "include/aws/core/utils/memory/*.h")
file(GLOB UTILS_COMPONENT_REGISTRY_HEADERS "include/aws/core/utils/component-registry/*.h")
file(GLOB UTILS_STL_HEADERS "include/aws/core/utils/memory/stl/*.h")
file(GLOB UTILS_LOGGING_HEADERS "include/aws/core/utils/logging/*.h")
file(GLOB UTILS_PAGINATION_HEADERS "include/aws/core/utils/pagination/*.h")
file(GLOB UTILS_RATE_LIMITER_HEADERS "include/aws/core/utils/ratelimiter/*.h")
file(GLOB UTILS_STREAM_HEADERS "include/aws/core/utils/stream/*.h")
file(GLOB CJSON_HEADERS "include/aws/core/external/cjson/*.h")
file(GLOB TINYXML2_HEADERS "include/aws/core/external/tinyxml2/tinyxml2.h")
file(GLOB SMITHY_HEADERS "include/smithy/*.h")
file(GLOB SMITHY_CLIENT_HEADERS "include/smithy/client/*.h")
file(GLOB SMITHY_CLIENT_IMPL_HEADERS "include/smithy/client/impl/*.h")
file(GLOB SMITHY_CLIENT_COMMON_HEADERS "include/smithy/client/common/*.h")
file(GLOB SMITHY_CLIENT_FEATURES_HEADERS "include/smithy/client/features/*.h")
file(GLOB SMITHY_CLIENT_SERIALIZER_HEADERS "include/smithy/client/serializer/*.h")
file(GLOB SMITHY_TRACING_HEADERS "include/smithy/tracing/*.h")
file(GLOB SMITHY_IDENTITY_HEADERS "include/smithy/identity/*.h")
file(GLOB SMITHY_IDENTITY_AUTH_HEADERS "include/smithy/identity/auth/*.h")
file(GLOB SMITHY_IDENTITY_AUTH_IMPL_HEADERS "include/smithy/identity/auth/impl/*.h")
file(GLOB SMITHY_IDENTITY_AUTH_BUILTIN_HEADERS "include/smithy/identity/auth/built-in/*.h")
file(GLOB SMITHY_IDENTITY_IDENTITY_HEADERS "include/smithy/identity/identity/*.h")
file(GLOB SMITHY_IDENTITY_RESOLVER_HEADERS "include/smithy/identity/resolver/*.h")
file(GLOB SMITHY_IDENTITY_RESOLVER_BUILTIN_HEADERS "include/smithy/identity/resolver/built-in/*.h")
file(GLOB SMITHY_IDENTITY_IDENTITY_IMPL_HEADERS "include/smithy/identity/identity/impl/*.h")
file(GLOB SMITHY_IDENTITY_RESOLVER_IMPL_HEADERS "include/smithy/identity/resolver/impl/*.h")
file(GLOB SMITHY_IDENTITY_SIGNER_HEADERS "include/smithy/identity/signer/*.h")
file(GLOB SMITHY_IDENTITY_SIGNER_BUILTIN_HEADERS "include/smithy/identity/signer/built-in/*.h")
file(GLOB SMITHY_INTERCEPTOR_HEADERS "include/smithy/interceptor/*.h")
file(GLOB SMITHY_INTERCEPTOR_IMPL_HEADERS "include/smithy/interceptor/impl/*.h")

file(GLOB AWS_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/*.cpp")
file(GLOB AWS_TINYXML2_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/external/tinyxml2/*.cpp")
file(GLOB CJSON_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/external/cjson/*.cpp")
file(GLOB AWS_AUTH_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/auth/*.cpp")
file(GLOB AWS_AUTH_SIGNER_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/auth/signer/*.cpp")
file(GLOB AWS_AUTH_SIGNER_PROVIDER_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/auth/signer-provider/*.cpp")
file(GLOB AWS_AUTH_BEARER_TOKEN_PROVIDER_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/auth/bearer-token-provider/*.cpp")
file(GLOB AWS_CLIENT_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/client/*.cpp")
file(GLOB AWS_INTERNAL_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/internal/*.cpp")
file(GLOB AWS_MODEL_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/aws/model/*.cpp")
file(GLOB HTTP_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/http/*.cpp")
file(GLOB HTTP_STANDARD_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/http/standard/*.cpp")
file(GLOB CONFIG_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/config/*.cpp")
file(GLOB CONFIG_DEFAULTS_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/config/defaults/*.cpp")
file(GLOB ENDPOINT_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/endpoint/*.cpp")
file(GLOB ENDPOINT_INTERNAL_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/endpoint/internal/*.cpp")
file(GLOB MONITORING_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/monitoring/*.cpp")
file(GLOB UTILS_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/*.cpp")
file(GLOB UTILS_EVENT_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/event/*.cpp")
file(GLOB UTILS_BASE64_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/base64/*.cpp")
file(GLOB UTILS_CHECKSUM_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/checksum/*.cpp")
file(GLOB UTILS_CRYPTO_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/crypto/*.cpp")
file(GLOB UTILS_JSON_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/json/*.cpp")
file(GLOB UTILS_CBOR_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/cbor/*.cpp")
file(GLOB UTILS_THREADING_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/threading/*.cpp")
file(GLOB UTILS_XML_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/xml/*.cpp")
file(GLOB UTILS_LOGGING_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/logging/*.cpp")
file(GLOB UTILS_MEMORY_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/memory/*.cpp")
file(GLOB UTILS_COMPONENT_REGISTRY_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/component-registry/*.cpp")
file(GLOB UTILS_MEMORY_STL_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/memory/stl/*.cpp")
file(GLOB UTILS_STREAM_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/stream/*.cpp")
file(GLOB UTILS_CRYPTO_FACTORY_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/crypto/factory/*.cpp")
file(GLOB SMITHY_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/smithy/*.cpp")
file(GLOB SMITHY_CLIENT_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/smithy/client/*.cpp")
file(GLOB SMITHY_IDENTITY_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/smithy/identity/*.cpp")
file(GLOB SMITHY_TRACING_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/smithy/tracing/*.cpp")

include(CheckCSourceCompiles)
include(CheckCXXSourceCompiles)
include(CheckCSourceRuns)
include(CheckCXXSourceRuns)


# http client implementations
if(ENABLE_CURL_CLIENT)
    file(GLOB HTTP_CURL_CLIENT_HEADERS "include/aws/core/http/curl/*.h")
    file(GLOB HTTP_CURL_CLIENT_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/http/curl/*.cpp")
    # If using aliased curl we need actual target.
    if(TARGET "${CURL_LIBRARIES}")
        get_property(aliased_target TARGET "${CURL_LIBRARIES}" PROPERTY ALIASED_TARGET)
        if(NOT "${aliased_target}" STREQUAL "")
            set(curl_lib "${aliased_target}")
        else ()
            set(curl_lib "${CURL_LIBRARIES}")
        endif()
    else ()
        set(curl_lib "${CURL_LIBRARIES}")
    endif ()
    set(CMAKE_REQUIRED_LIBRARIES ${curl_lib})
    set(CHECK_CURL_HAS_H2 "
    #include <curl/curl.h>
    int main() {
    CURL* handle = curl_easy_init();
    return curl_easy_setopt(handle, CURLOPT_HTTP_VERSION, CURL_HTTP_VERSION_2_0); }")
    set(CHECK_CURL_HAS_TLS_PROXY "
    #include <curl/curl.h>
    int main() {
    CURL* handle = curl_easy_init();
    return curl_easy_setopt(handle, CURLOPT_PROXY_SSLCERT, \"client.pem\"); }")
    if (CMAKE_CROSSCOMPILING)
        check_c_source_compiles("${CHECK_CURL_HAS_H2}" CURL_HAS_H2)
        check_c_source_compiles("${CHECK_CURL_HAS_TLS_PROXY}" CURL_HAS_TLS_PROXY)
    else()
        check_c_source_runs("${CHECK_CURL_HAS_H2}" CURL_HAS_H2)
        check_c_source_runs("${CHECK_CURL_HAS_TLS_PROXY}" CURL_HAS_TLS_PROXY)
    endif()
elseif(ENABLE_WINDOWS_CLIENT)
    # NOTE: HTTP/2 is not supported when using IXML_HTTP_REQUEST_2
    if(USE_IXML_HTTP_REQUEST_2)
        set(HTTP_WINDOWS_CLIENT_HEADERS "include/aws/core/http/windows/IXmlHttpRequest2HttpClient.h")
        set(HTTP_WINDOWS_CLIENT_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/http/windows/IXmlHttpRequest2HttpClient.cpp")
        if(BYPASS_DEFAULT_PROXY)
            # add winhttp since IXmlHttpRequest2 can't bypass proxy
            list(APPEND HTTP_WINDOWS_CLIENT_HEADERS
                "include/aws/core/http/windows/WinSyncHttpClient.h"
                "include/aws/core/http/windows/WinHttpSyncHttpClient.h"
                "include/aws/core/http/windows/WinConnectionPoolMgr.h"
                "include/aws/core/http/windows/WinHttpConnectionPoolMgr.h")

            list(APPEND HTTP_WINDOWS_CLIENT_SOURCE
                "${CMAKE_CURRENT_SOURCE_DIR}/source/http/windows/WinSyncHttpClient.cpp"
                "${CMAKE_CURRENT_SOURCE_DIR}/source/http/windows/WinHttpSyncHttpClient.cpp"
                "${CMAKE_CURRENT_SOURCE_DIR}/source/http/windows/WinConnectionPoolMgr.cpp"
                "${CMAKE_CURRENT_SOURCE_DIR}/source/http/windows/WinHttpConnectionPoolMgr.cpp")
        endif()
    else()
        file(GLOB HTTP_WINDOWS_CLIENT_HEADERS "include/aws/core/http/windows/Win*.h")
        file(GLOB HTTP_WINDOWS_CLIENT_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/http/windows/Win*.cpp")
    endif()
elseif(USE_CRT_HTTP_CLIENT)
    file(GLOB CRT_HTTP_HEADERS "include/aws/core/http/crt/*.h")
    file(GLOB CRT_HTTP_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/http/crt/*.cpp")
endif()


if (PLATFORM_WINDOWS)
    file(GLOB NET_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/net/windows/*.cpp")
elseif(PLATFORM_LINUX OR PLATFORM_APPLE OR PLATFORM_ANDROID)
    file(GLOB NET_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/net/linux-shared/*.cpp")
else()
    file(GLOB NET_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/net/*.cpp")
endif()

# encryption implementation
if (NOT NO_ENCRYPTION)
    file(GLOB UTILS_CRYPTO_CRT_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/include/aws/core/utils/crypto/crt/*.h")
    file(GLOB UTILS_CRYPTO_CRT_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/utils/crypto/crt/*.cpp")
endif()

if (BUILD_OPTEL)
    file(GLOB OPTEL_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/include/smithy/tracing/impl/opentelemetry/*.h")
    file(GLOB OPTEL_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/smithy/tracing/impl/opentelemetry/*.cpp")
endif ()

file(GLOB AWS_NATIVE_SDK_COMMON_SRC
    ${AWS_TINYXML2_SOURCE}
    ${AWS_AUTH_SOURCE}
    ${AWS_AUTH_SIGNER_SOURCE}
    ${AWS_AUTH_SIGNER_PROVIDER_SOURCE}
    ${AWS_AUTH_BEARER_TOKEN_PROVIDER_SOURCE}
    ${AWS_CLIENT_SOURCE}
    ${HTTP_STANDARD_SOURCE}
    ${HTTP_CLIENT_SOURCE}
    ${CRT_HTTP_SOURCE}
    ${CONFIG_SOURCE}
    ${CONFIG_DEFAULTS_SOURCE}
    ${ENDPOINT_SOURCE}
    ${ENDPOINT_INTERNAL_SOURCE}
    ${UTILS_BASE64_SOURCE}
    ${UTILS_THREADING_SOURCE}
    ${UTILS_RETRY_SOURCE}
    ${UTILS_XML_SOURCE}
    ${UTILS_STREAM_SOURCE}
    ${UTILS_LOGGING_SOURCE}
    ${UTILS_MEMORY_SOURCE}
    ${UTILS_COMPONENT_REGISTRY_SOURCE}
    ${UTILS_MEMORY_STL_SOURCE}
    ${UTILS_CRYPTO_CRT_SOURCE}
    ${SMITHY_SOURCE}
    ${SMITHY_CLIENT_SOURCE}
    ${SMITHY_IDENTITY_SOURCE}
    ${SMITHY_TRACING_SOURCE}
)

file(GLOB AWS_NATIVE_SDK_COMMON_HEADERS
  ${AWS_HEADERS}
  ${AWS_AUTH_HEADERS}
  ${AWS_AUTH_SIGNER_HEADERS}
  ${AWS_AUTH_SIGNER_PROVIDER_HEADERS}
  ${AWS_AUTH_BEARER_TOKEN_PROVIDER_HEADERS}
  ${AWS_CLIENT_HEADERS}
  ${AWS_INTERNAL_HEADERS}
  ${NET_HEADERS}
  ${HTTP_HEADERS}
  ${HTTP_STANDARD_HEADERS}
  ${CONFIG_HEADERS}
  ${CONFIG_DEFAULTS_HEADERS}
  ${ENDPOINT_HEADERS}
  ${ENDPOINT_INTERNAL_HEADERS}
  ${MONITORING_HEADERS}
  ${HTTP_CLIENT_HEADERS}
  ${PLATFORM_HEADERS}
  ${UTILS_HEADERS}
  ${UTILS_EVENT_HEADERS}
  ${UTILS_BASE64_HEADERS}
  ${UTILS_CHECKSUM_HEADERS}
  ${UTILS_CRYPTO_HEADERS}
  ${UTILS_JSON_HEADERS}
  ${UTILS_CBOR_HEADERS}
  ${UTILS_THREADING_HEADERS}
  ${UTILS_RETRY_HEADERS}
  ${UTILS_XML_HEADERS}
  ${UTILS_LOGGING_HEADERS}
  ${UTILS_MEMORY_HEADERS}
  ${UTILS_COMPONENT_REGISTRY_HEADERS}
  ${UTILS_STL_HEADERS}
  ${UTILS_STREAM_HEADERS}
  ${UTILS_PAGINATION_HEADERS}
  ${UTILS_RATE_LIMITER_HEADERS}
  ${CJSON_HEADERS}
  ${TINYXML2_HEADERS}
  ${HTTP_CURL_CLIENT_HEADERS}
  ${HTTP_WINDOWS_CLIENT_HEADERS}
  ${SMITHY_HEADERS}
  ${SMITHY_CLIENT_HEADERS}
  ${SMITHY_CLIENT_IMPL_HEADERS}
  ${SMITHY_CLIENT_COMMON_HEADERS}
  ${SMITHY_CLIENT_FEATURES_HEADERS}
  ${SMITHY_CLIENT_SERIALIZER_HEADERS}
  ${SMITHY_TRACING_HEADERS}
  ${SMITHY_IDENTITY_HEADERS}
  ${SMITHY_IDENTITY_AUTH_HEADERS}
  ${SMITHY_IDENTITY_AUTH_IMPL_HEADERS}
  ${SMITHY_IDENTITY_AUTH_BUILTIN_HEADERS}
  ${SMITHY_IDENTITY_IDENTITY_HEADERS}
  ${SMITHY_IDENTITY_SIGNER_HEADERS}
  ${SMITHY_IDENTITY_IDENTITY_IMPL_HEADERS}
  ${SMITHY_IDENTITY_SIGNER_IMPL_HEADERS}
  ${SMITHY_IDENTITY_SIGNER_BUILTIN_HEADERS}
  ${SMITHY_IDENTITY_RESOLVER_HEADERS}
  ${SMITHY_IDENTITY_RESOLVER_BUILTIN_HEADERS}
  ${OPTEL_HEADERS}
  ${SMITHY_INTERCEPTOR_HEADERS}
  ${SMITHY_INTERCEPTOR_IMPL_HEADERS}
)

# misc platform-specific, not related to features (encryption/http clients)
if(PLATFORM_WINDOWS)

  #add your windows specific impl stuff here.
  file(GLOB PLATFORM_WINDOWS_SOURCE = "${CMAKE_CURRENT_SOURCE_DIR}/source/platform/windows/*.cpp")

  file(GLOB AWS_NATIVE_SDK_WINDOWS_SRC
    ${PLATFORM_WINDOWS_SOURCE}
  )
elseif(PLATFORM_LINUX OR PLATFORM_APPLE)

  #add unix specific impl stuff here.

  file(GLOB PLATFORM_LINUX_SHARED_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/platform/linux-shared/*.cpp")

  file(GLOB AWS_NATIVE_SDK_LINUX_SHARED_SRC
     ${PLATFORM_LINUX_SHARED_SOURCE}
   )
elseif(PLATFORM_ANDROID)
  file(GLOB UTILS_LOGGING_ANDROID_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/include/aws/core/utils/logging/android/*.h")
  file(GLOB PLATFORM_ANDROID_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/source/platform/android/*.cpp")

  file(GLOB AWS_NATIVE_SDK_ANDROID_SRC
     ${PLATFORM_ANDROID_SOURCE}
  )
  file(GLOB AWS_NATIVE_SDK_ANDROID_HEADERS
     ${UTILS_LOGGING_ANDROID_HEADERS}
  )
elseif(PLATFORM_CUSTOM)
  gather_custom_core_source(AWS_NATIVE_SDK_CUSTOM_SRC)
endif()

# TODO: Could have different non unity source lists for different platforms.
# One reason we have this list is to resolve Windows pre-defined type conflicts with those in C++ SDK.
file(GLOB AWS_NATIVE_SDK_NON_UNITY_SRC
    ${AWS_SOURCE}
    ${HTTP_WINDOWS_CLIENT_SOURCE}
    ${HTTP_CURL_CLIENT_SOURCE}
    ${AWS_INTERNAL_SOURCE}
    ${UTILS_CRYPTO_BCRYPT_SOURCE}
    ${AWS_NATIVE_SDK_WINDOWS_SRC}
    ${MONITORING_SOURCE}
    ${UTILS_CRYPTO_FACTORY_SOURCE}
    ${UTILS_JSON_SOURCE}
    ${UTILS_CBOR_SOURCE}
    ${UTILS_EVENT_SOURCE}
    ${UTILS_SOURCE}
    ${NET_SOURCE}
    ${HTTP_SOURCE}
    ${CJSON_SOURCE}
    ${AWS_NATIVE_SDK_CUSTOM_SRC}
    ${UTILS_CHECKSUM_SOURCE}
    ${UTILS_CRYPTO_SOURCE}
    ${OPTEL_SOURCE}
)

file(GLOB AWS_NATIVE_SDK_UNITY_SRC
  ${AWS_NATIVE_SDK_COMMON_SRC}
  ${AWS_NATIVE_SDK_LINUX_SHARED_SRC}
  ${AWS_NATIVE_SDK_ANDROID_SRC}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("core" AWS_NATIVE_SDK_UNITY_SRC)
endif()

file(GLOB AWS_NATIVE_SDK_UNIFIED_HEADERS
  ${AWS_NATIVE_SDK_COMMON_HEADERS}
  ${AWS_NATIVE_SDK_WINDOWS_HEADERS}
  ${AWS_NATIVE_SDK_UNIX_HEADERS}
  ${AWS_NATIVE_SDK_ANDROID_HEADERS}
)

file(GLOB AWS_NATIVE_SDK_SRC
    ${AWS_NATIVE_SDK_UNIFIED_HEADERS}
    ${AWS_NATIVE_SDK_UNITY_SRC}
    ${AWS_NATIVE_SDK_NON_UNITY_SRC}
)

# Visual studio project directory structure
if(MSVC)
    source_group("Header Files\\aws\\core" FILES ${AWS_HEADERS})
    source_group("Header Files\\aws\\core\\auth" FILES ${AWS_AUTH_HEADERS})
    source_group("Header Files\\aws\\core\\auth\\signer" FILES ${AWS_AUTH_SIGNER_HEADERS})
    source_group("Header Files\\aws\\core\\auth\\signer-provider" FILES ${AWS_AUTH_SIGNER_PROVIDER_HEADERS})
    source_group("Header Files\\aws\\core\\auth\\bearer-token-provider" FILES ${AWS_AUTH_BEARER_TOKEN_PROVIDER_HEADERS})
    source_group("Header Files\\aws\\core\\client" FILES ${AWS_CLIENT_HEADERS})
    source_group("Header Files\\aws\\core\\internal" FILES ${AWS_INTERNAL_HEADERS})
    source_group("Header Files\\aws\\core\\net" FILES ${NET_HEADERS})
    source_group("Header Files\\aws\\core\\http" FILES ${HTTP_HEADERS})
    source_group("Header Files\\aws\\core\\http\\standard" FILES ${HTTP_STANDARD_HEADERS})
    source_group("Header Files\\aws\\core\\config" FILES ${CONFIG_HEADERS})
    source_group("Header Files\\aws\\core\\config\\defaults" FILES ${CONFIG_DEFAULTS_HEADERS})
    source_group("Header Files\\aws\\core\\endpoint" FILES ${ENDPOINT_HEADERS})
    source_group("Header Files\\aws\\core\\endpoint\\internal" FILES ${ENDPOINT_INTERNAL_HEADERS})
    source_group("Header Files\\aws\\core\\monitoring" FILES ${MONITORING_HEADERS})
    source_group("Header Files\\aws\\core\\platform" FILES ${PLATFORM_HEADERS})
    source_group("Header Files\\aws\\core\\utils" FILES ${UTILS_HEADERS})
    source_group("Header Files\\aws\\core\\utils\\base64" FILES ${UTILS_BASE64_HEADERS})
    source_group("Header Files\\aws\\core\\utils\\checksum" FILES ${UTILS_CHECKSUM_HEADERS})
    source_group("Header Files\\aws\\core\\utils\\crypto" FILES ${UTILS_CRYPTO_HEADERS})
    source_group("Header Files\\aws\\core\\utils\\crypto\\crt" FILES ${UTILS_CRYPTO_CRT_HEADERS})
    source_group("Header Files\\aws\\core\\utils\\event" FILES ${UTILS_EVENT_HEADERS})
    source_group("Header Files\\aws\\core\\utils\\exceptions" FILES ${UTILS_EXCEPTIONS_HEADERS})
    source_group("Header Files\\aws\\core\\utils\\json" FILES ${UTILS_JSON_HEADERS})
    source_group("Header Files\\aws\\core\\utils\\cbor" FILES ${UTILS_CBOR_HEADERS})
    source_group("Header Files\\aws\\core\\utils\\threading" FILES ${UTILS_THREADING_HEADERS})
    source_group("Header Files\\aws\\core\\utils\\xml" FILES ${UTILS_XML_HEADERS})
    source_group("Header Files\\aws\\core\\utils\\logging" FILES ${UTILS_LOGGING_HEADERS})
    source_group("Header Files\\aws\\core\\utils\\memory" FILES ${UTILS_MEMORY_HEADERS})
    source_group("Header Files\\aws\\core\\utils\\component-registry" FILES ${UTILS_COMPONENT_REGISTRY_HEADERS})
    source_group("Header Files\\aws\\core\\utils\\memory\\stl" FILES ${UTILS_STL_HEADERS})
    source_group("Header Files\\aws\\core\\utils\\stream" FILES ${UTILS_STREAM_HEADERS})
    source_group("Header Files\\aws\\core\\utils\\pagination" FILES ${UTILS_PAGINATION_HEADERS})
    source_group("Header Files\\aws\\core\\utils\\ratelimiter" FILES ${UTILS_RATE_LIMITER_HEADERS})
    source_group("Header Files\\aws\\core\\external\\cjson" FILES ${CJSON_HEADERS})
    source_group("Header Files\\aws\\core\\external\\tinyxml2" FILES ${TINYXML2_HEADERS})
    source_group("Header Files\\smithy" FILES ${SMITHY_HEADERS})
    source_group("Header Files\\smithy\\client" FILES ${SMITHY_CLIENT_HEADERS})
    source_group("Header Files\\smithy\\client" FILES ${SMITHY_CLIENT_IMPL_HEADERS})
    source_group("Header Files\\smithy\\client" FILES ${SMITHY_CLIENT_COMMON_HEADERS})
    source_group("Header Files\\smithy\\client" FILES ${SMITHY_CLIENT_FEATURES_HEADERS})
    source_group("Header Files\\smithy\\client" FILES ${SMITHY_CLIENT_SERIALIZER_HEADERS})
    source_group("Header Files\\smithy\\tracing" FILES ${SMITHY_TRACING_HEADERS})
    source_group("Header Files\\smithy\\identity\\auth" FILES ${SMITHY_IDENTITY_AUTH_HEADERS})
    source_group("Header Files\\smithy\\identity\\auth\\impl" FILES ${SMITHY_IDENTITY_AUTH_IMPL_HEADERS})
    source_group("Header Files\\smithy\\identity\\auth\\built-in" FILES ${SMITHY_IDENTITY_AUTH_BUILTIN_HEADERS})
    source_group("Header Files\\smithy\\identity\\identity" FILES ${SMITHY_IDENTITY_IDENTITY_HEADERS})
    source_group("Header Files\\smithy\\identity\\resolver" FILES ${SMITHY_IDENTITY_RESOLVER_HEADERS})
    source_group("Header Files\\smithy\\identity\\resolver\\built-in" FILES ${SMITHY_IDENTITY_RESOLVER_BUILTIN_HEADERS})
    source_group("Header Files\\smithy\\identity\\identity\\impl" FILES ${SMITHY_IDENTITY_IDENTITY_IMPL_HEADERS})
    source_group("Header Files\\smithy\\identity\\resolver\\impl" FILES ${SMITHY_IDENTITY_RESOLVER_IMPL_HEADERS})
    source_group("Header Files\\smithy\\identity\\signer" FILES ${SMITHY_IDENTITY_SIGNER_HEADERS})
    source_group("Header Files\\smithy\\identity\\signer\\built-in" FILES ${SMITHY_IDENTITY_SIGNER_BUILTIN_HEADERS})
    source_group("Header Files\\smithy\\interceptor" FILES ${SMITHY_INTERCEPTOR_HEADERS})
    source_group("Header Files\\smithy\\interceptor" FILES ${SMITHY_INTERCEPTOR_IMPL_HEADERS})

    # http client conditional headers
    if(ENABLE_CURL_CLIENT)
        source_group("Header Files\\aws\\core\\http\\curl" FILES ${HTTP_CURL_CLIENT_HEADERS})
    elseif(ENABLE_WINDOWS_CLIENT)
        source_group("Header Files\\aws\\core\\http\\windows" FILES ${HTTP_WINDOWS_CLIENT_HEADERS})
    endif()
        source_group("Header Files\\aws\\core\\http\\crt" FILES ${CRT_HTTP_HEADERS})

    if (BUILD_OPTEL)
        source_group("Header Files\\smithy\\tracing\\impl\\opentelemetry" FILES ${OPTEL_HEADERS})
    endif ()

    source_group("Source Files" FILES ${AWS_SOURCE})
    source_group("Source Files\\external\\cjson" FILES ${CJSON_SOURCE})
    source_group("Source Files\\external\\tinyxml2" FILES ${AWS_TINYXML2_SOURCE})
    source_group("Source Files\\auth" FILES ${AWS_AUTH_SOURCE})
    source_group("Source Files\\auth\\signer" FILES ${AWS_AUTH_SIGNER_SOURCE})
    source_group("Source Files\\auth\\signer-provider" FILES ${AWS_AUTH_SIGNER_PROVIDER_SOURCE})
    source_group("Source Files\\auth\\bearer-token-provider" FILES ${AWS_AUTH_BEARER_TOKEN_PROVIDER_SOURCE})
    source_group("Source Files\\client" FILES ${AWS_CLIENT_SOURCE})
    source_group("Source Files\\internal" FILES ${AWS_INTERNAL_SOURCE})
    source_group("Source Files\\net\\windows" FILES ${NET_SOURCE})
    source_group("Source Files\\http" FILES ${HTTP_SOURCE})
    source_group("Source Files\\http\\standard" FILES ${HTTP_STANDARD_SOURCE})
    source_group("Source Files\\config" FILES ${CONFIG_SOURCE})
    source_group("Source Files\\config\\defaults" FILES ${CONFIG_DEFAULTS_SOURCE})
    source_group("Source Files\\endpoint" FILES ${ENDPOINT_SOURCE})
    source_group("Source Files\\endpoint\\internal" FILES ${ENDPOINT_INTERNAL_SOURCE})
    source_group("Source Files\\monitoring" FILES ${MONITORING_SOURCE})
    source_group("Source Files\\platform\\windows" FILES ${PLATFORM_WINDOWS_SOURCE})
    source_group("Source Files\\utils" FILES ${UTILS_SOURCE})
    source_group("Source Files\\utils\\base64" FILES ${UTILS_BASE64_SOURCE})
    source_group("Source Files\\utils\\checksum" FILES ${UTILS_CHECKSUM_SOURCE})
    source_group("Source Files\\utils\\crypto" FILES ${UTILS_CRYPTO_SOURCE})
    source_group("Source Files\\utils\\crypto\\factory" FILES ${UTILS_CRYPTO_FACTORY_SOURCE})
    source_group("Source Files\\utils\\event" FILES ${UTILS_EVENT_SOURCE})
    source_group("Source Files\\utils\\exceptions" FILES ${UTILS_EXCEPTIONS_SOURCE})
    source_group("Source Files\\utils\\json" FILES ${UTILS_JSON_SOURCE})
    source_group("Source Files\\utils\\cbor" FILES ${UTILS_CBOR_SOURCE})
    source_group("Source Files\\utils\\threading" FILES ${UTILS_THREADING_SOURCE})
    source_group("Source Files\\utils\\xml" FILES ${UTILS_XML_SOURCE})
    source_group("Source Files\\utils\\stream" FILES ${UTILS_STREAM_SOURCE})
    source_group("Source Files\\utils\\logging" FILES ${UTILS_LOGGING_SOURCE})
    source_group("Source Files\\utils\\memory" FILES ${UTILS_MEMORY_SOURCE})
    source_group("Source Files\\utils\\component-registry" FILES ${UTILS_COMPONENT_REGISTRY_SOURCE})
    source_group("Source Files\\utils\\memory\\stl" FILES ${UTILS_MEMORY_STL_SOURCE})
    source_group("Source Files\\smithy" FILES ${SMITHY_SOURCE})
    source_group("Source Files\\smithy\\client" FILES ${SMITHY_CLIENT_SOURCE})
    source_group("Source Files\\smithy\\identity" FILES ${SMITHY_IDENTITY_SOURCE})
    source_group("Source Files\\smithy\\tracing" FILES ${SMITHY_TRACING_SOURCE})

    # http client conditional source
    if(ENABLE_CURL_CLIENT)
        source_group("Source Files\\http\\curl" FILES ${HTTP_CURL_CLIENT_SOURCE})
    elseif(ENABLE_WINDOWS_CLIENT)
        source_group("Source Files\\http\\windows" FILES ${HTTP_WINDOWS_CLIENT_SOURCE})
    elseif(USE_CRT_HTTP_CLIENT)
        source_group("Source Files\\http\\crt" FILES ${CRT_HTTP_SOURCE})
    endif()


    # encryption conditional source
    if (NOT NO_ENCRYPTION)
        source_group("Source Files\\utils\\crypto\\crt" FILES ${UTILS_CRYPTO_CRT_SOURCE})
    endif()

    if (BUILD_OPTEL)
        source_group("Source Files\\smithy\\tracing\\impl\\opentelemetry" FILES ${OPTEL_SOURCE})
    endif ()
endif(MSVC)

check_cxx_source_compiles("
        #include <stdlib.h>
        int main() {
            void* ptr = aligned_alloc(24, 64);
            return 0;
        }" AWS_HAS_ALIGNED_ALLOC)

add_library(${PROJECT_NAME} ${AWS_NATIVE_SDK_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_compile_definitions(${PROJECT_NAME} PUBLIC "AWS_SDK_VERSION_MAJOR=${AWSSDK_VERSION_MAJOR}")
target_compile_definitions(${PROJECT_NAME} PUBLIC "AWS_SDK_VERSION_MINOR=${AWSSDK_VERSION_MINOR}")
target_compile_definitions(${PROJECT_NAME} PUBLIC "AWS_SDK_VERSION_PATCH=${AWSSDK_VERSION_PATCH}")

if (WININET_HAS_H2)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "WININET_HAS_H2")
endif()

if (WINHTTP_HAS_H2)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "WINHTTP_HAS_H2")
endif()

if (WINHTTP_HAS_H3)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "WINHTTP_HAS_H3")
endif()

if (CURL_HAS_H2)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "CURL_HAS_H2")
endif()

if (CURL_HAS_TLS_PROXY)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "CURL_HAS_TLS_PROXY")
endif()

if (NO_ENCRYPTION)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "NO_ENCRYPTION")
endif()

if (AWS_HAS_ALIGNED_ALLOC)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_HAS_ALIGNED_ALLOC")
endif()

set(Core_INCLUDES "${CMAKE_CURRENT_SOURCE_DIR}/include/")

if(PLATFORM_CUSTOM)
  if(COMMAND add_custom_core_include_directories)
    add_custom_core_include_directories(CORE_CUSTOM_INCLUDE)
    SET(Core_INCLUDES ${Core_INCLUDES} ${CORE_CUSTOM_INCLUDE})
    target_include_directories(${PROJECT_NAME} PRIVATE "${Core_INCLUDES}")
  endif()
  if(COMMAND add_custom_definitions)
    add_custom_definitions()
  endif()
endif()


if(NOT PLATFORM_CUSTOM)
    target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include/aws/core/platform/refs")
endif()

if(BUILD_CURL)
    target_include_directories(${PROJECT_NAME} PRIVATE "${CURL_INCLUDE_DIR}")
endif()

if(BUILD_OPENSSL)
    target_include_directories(${PROJECT_NAME} PRIVATE "${OPENSSL_INCLUDE_DIR}")
endif()

if (BUILD_OPTEL)
    target_include_directories(${PROJECT_NAME} PRIVATE ${OPENTELEMETRY_CPP_INCLUDE_DIRS})
endif ()

set(PKG_CONFIG_LIB "-l${PROJECT_NAME}")

if (ENABLE_CURL_LOGGING)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "ENABLE_CURL_LOGGING")
endif()

if(PLATFORM_CUSTOM)
  if(COMMAND add_custom_core_libraries)
    add_custom_core_libraries()
  endif()
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

if (EXTERNAL_DEPS_INCLUDE_DIRS)
    foreach(DIR IN LISTS EXTERNAL_DEPS_INCLUDE_DIRS)
        target_include_directories(${PROJECT_NAME} PUBLIC
            $<BUILD_INTERFACE:${DIR}>
            $<INSTALL_INTERFACE:include>)
    endforeach()
endif()

target_link_libraries(${PROJECT_NAME} PRIVATE ${PLATFORM_DEP_LIBS} ${CLIENT_LIBS} ${CRYPTO_LIBS} ${AWS_SDK_ADDITIONAL_LIBRARIES})

aws_use_package(aws-crt-cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC ${DEP_AWS_LIBS})

if (ENABLE_ZLIB_REQUEST_COMPRESSION)
    target_link_libraries(${PROJECT_NAME} PRIVATE ZLIB::ZLIB)
endif()

if (BUILD_OPTEL)
    target_link_libraries(${PROJECT_NAME} PRIVATE ${OPENTELEMETRY_CPP_LIBRARIES})
endif ()

if(USE_WINDOWS_DLL_SEMANTICS)
    target_compile_definitions(${PROJECT_NAME} PUBLIC "USE_WINDOWS_DLL_SEMANTICS")

    if(BUILD_SHARED_LIBS)
        target_compile_definitions(${PROJECT_NAME} PUBLIC "USE_IMPORT_EXPORT=1")
        target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_CORE_EXPORTS=1")
        target_compile_definitions(${PROJECT_NAME} PRIVATE "SMITHY_EXPORTS=1")
    endif()
elseif (BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PUBLIC "USE_IMPORT_EXPORT=1")
    target_compile_definitions(${PROJECT_NAME} PRIVATE "SMITHY_EXPORTS=1")
endif()

set_compiler_flags(${PROJECT_NAME})
set_compiler_warnings(${PROJECT_NAME})

if(SIMPLE_INSTALL)
    install (
        TARGETS ${PROJECT_NAME}
        EXPORT "${PROJECT_NAME}-targets"
        ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}
        LIBRARY DESTINATION ${LIBRARY_DIRECTORY}
        RUNTIME DESTINATION ${BINARY_DIRECTORY}
    )
else()
    if(PLATFORM_CUSTOM)
        install_custom_library(${PROJECT_NAME})
    else()
        install (TARGETS ${PROJECT_NAME} ARCHIVE DESTINATION ${ARCHIVE_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
                                         LIBRARY DESTINATION ${LIBRARY_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME}
                                         RUNTIME DESTINATION ${BINARY_DIRECTORY}/${SDK_INSTALL_BINARY_PREFIX}/${PLATFORM_INSTALL_QUALIFIER}/\${CMAKE_INSTALL_CONFIG_NAME})
    endif()
endif()

if(SIMPLE_INSTALL)
    # These libs are needed by aws-cpp-sdk-core only.
    set(ALL_DEP_LIBS ${AWS_COMMON_RUNTIME_LIBS} ${PLATFORM_DEP_LIBS_ABSTRACT_NAME} ${CLIENT_LIBS_ABSTRACT_NAME} ${CRYPTO_LIBS_ABSTRACT_NAME})
    generate_pkgconfig_link_flags(ALL_DEP_LIBS ALL_DEP_LIBS_LINK_FLAGS)
    set(ALL_DEP_LIBS_LINK_FLAGS "${ALL_DEP_LIBS_LINK_FLAGS}")
    configure_file("${AWS_NATIVE_SDK_ROOT}/toolchains/pkg-config.pc.in" "${PROJECT_NAME}.pc" @ONLY)

    if(BUILD_SHARED_LIBS)
        install(
            FILES "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}.pc"
            DESTINATION ${LIBRARY_DIRECTORY}/pkgconfig)
    endif()
endif()

install (FILES ${AWS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core)
install (FILES ${AWS_AUTH_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/auth)
install (FILES ${AWS_AUTH_SIGNER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/auth/signer)
install (FILES ${AWS_AUTH_SIGNER_PROVIDER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/auth/signer-provider)
install (FILES ${AWS_AUTH_BEARER_TOKEN_PROVIDER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/auth/bearer-token-provider)
install (FILES ${AWS_CLIENT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/client)
install (FILES ${AWS_INTERNAL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/internal)
install (FILES ${NET_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/net)
install (FILES ${HTTP_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/http)
install (FILES ${HTTP_STANDARD_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/http/standard)
install (FILES ${CONFIG_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/config/)
install (FILES ${CONFIG_DEFAULTS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/config/defaults)
install (FILES ${ENDPOINT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/endpoint)
install (FILES ${ENDPOINT_INTERNAL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/endpoint/internal)
install (FILES ${MONITORING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/monitoring)
install (FILES ${PLATFORM_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/platform)
install (FILES ${UTILS_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/utils)
install (FILES ${UTILS_EVENT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/utils/event)
install (FILES ${UTILS_BASE64_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/utils/base64)
install (FILES ${UTILS_CHECKSUM_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/utils/checksum)
install (FILES ${UTILS_CRYPTO_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/utils/crypto)
install (FILES ${UTILS_JSON_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/utils/json)
install (FILES ${UTILS_CBOR_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/utils/cbor)
install (FILES ${UTILS_RETRY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/utils/retry)
install (FILES ${UTILS_XML_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/utils/xml)
install (FILES ${UTILS_LOGGING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/utils/logging)
install (FILES ${UTILS_MEMORY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/utils/memory)
install (FILES ${UTILS_COMPONENT_REGISTRY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/utils/component-registry)
install (FILES ${UTILS_STL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/utils/memory/stl)
install (FILES ${UTILS_PAGINATION_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/utils/pagination)
install (FILES ${UTILS_RATE_LIMITER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/utils/ratelimiter)
install (FILES ${UTILS_STREAM_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/utils/stream)
install (FILES ${UTILS_THREADING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/utils/threading)
install (FILES ${CJSON_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/external/cjson)
install (FILES ${TINYXML2_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/external/tinyxml2)
install (FILES ${SMITHY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/smithy)
install (FILES ${SMITHY_CLIENT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/smithy/client)
install (FILES ${SMITHY_CLIENT_IMPL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/smithy/client/impl)
install (FILES ${SMITHY_CLIENT_COMMON_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/smithy/client/common)
install (FILES ${SMITHY_CLIENT_FEATURES_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/smithy/client/features)
install (FILES ${SMITHY_CLIENT_SERIALIZER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/smithy/client/serializer)
install (FILES ${SMITHY_TRACING_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/smithy/tracing)
install (FILES ${SMITHY_IDENTITY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/smithy/identity)
install (FILES ${SMITHY_IDENTITY_AUTH_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/smithy/identity/auth)
install (FILES ${SMITHY_IDENTITY_AUTH_IMPL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/smithy/identity/auth/impl)
install (FILES ${SMITHY_IDENTITY_AUTH_BUILTIN_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/smithy/identity/auth/built-in)
install (FILES ${SMITHY_IDENTITY_IDENTITY_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/smithy/identity/identity)
install (FILES ${SMITHY_IDENTITY_RESOLVER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/smithy/identity/resolver)
install (FILES ${SMITHY_IDENTITY_RESOLVER_BUILTIN_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/smithy/identity/resolver/built-in)
install (FILES ${SMITHY_IDENTITY_IDENTITY_IMPL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/smithy/identity/identity/impl)
install (FILES ${SMITHY_IDENTITY_RESOLVER_IMPL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/smithy/identity/resolver/impl)
install (FILES ${SMITHY_IDENTITY_SIGNER_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/smithy/identity/signer)
install (FILES ${SMITHY_IDENTITY_SIGNER_BUILTIN_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/smithy/identity/signer/built-in)
install (FILES ${SMITHY_INTERCEPTOR_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/smithy/interceptor)
install (FILES ${SMITHY_INTERCEPTOR_IMPL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/smithy/interceptor)

# android logcat headers
if(PLATFORM_ANDROID)
    install (FILES ${UTILS_LOGGING_ANDROID_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/utils/logging/android)
endif()

if (BUILD_OPTEL)
    install (FILES ${OPTEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/smithy/tracing/impl/opentelemetry)
endif ()

# http client headers
if(ENABLE_CURL_CLIENT)
    install (FILES ${HTTP_CURL_CLIENT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/http/curl)
elseif(ENABLE_WINDOWS_CLIENT)
    install (FILES ${HTTP_WINDOWS_CLIENT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/http/windows)
elseif(USE_CRT_HTTP_CLIENT)
    install (FILES ${CRT_HTTP_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/http/crt)
endif()


# encryption headers
install (FILES ${UTILS_CRYPTO_CRT_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/core/utils/crypto/crt)

do_packaging()

