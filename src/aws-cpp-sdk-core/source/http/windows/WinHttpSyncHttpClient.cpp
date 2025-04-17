/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/windows/WinHttpSyncHttpClient.h>

#include <aws/core/http/HttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/http/windows/WinHttpConnectionPoolMgr.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/ratelimiter/RateLimiterInterface.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <winsock2.h>
#include <winhttp.h>
#include <mstcpip.h> // for tcp_keepalive
#include <sstream>
#include <iostream>
#include <versionhelpers.h>

using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Http::Standard;
using namespace Aws::Utils;
using namespace Aws::Utils::Logging;

#ifndef WINHTTP_OPTION_ENABLE_HTTP_PROTOCOL
    /*
    * Note: this option was introduced in Windows 10, version 1607. Define it if
    * it does not exist and let option setting for H2/H3 fail if its not supported.
    */
    static const DWORD WINHTTP_OPTION_ENABLE_HTTP_PROTOCOL = 133;
#endif
#ifndef WINHTTP_OPTION_HTTP_PROTOCOL_USED
    static const DWORD WINHTTP_OPTION_HTTP_PROTOCOL_USED = 134;
#endif
#ifndef WINHTTP_PROTOCOL_FLAG_HTTP2
    static const DWORD WINHTTP_PROTOCOL_FLAG_HTTP2 = 0x1;
#endif
#ifndef WINHTTP_PROTOCOL_FLAG_HTTP3
    static const DWORD WINHTTP_PROTOCOL_FLAG_HTTP3 = 0x2;
#endif

const std::initializer_list<DWORD>& GetWinHttpVersionsToTry(const Aws::Http::Version version)
{
    // Using statically declared initializer_lists because we cannot return them by value.
    // All options include HTTP 1.1, which is always enabled in WinHTTP.
    static std::initializer_list<DWORD> noPreference = {};
    static std::initializer_list<DWORD> http2 = { WINHTTP_PROTOCOL_FLAG_HTTP2 };
    static std::initializer_list<DWORD> http3 = { WINHTTP_PROTOCOL_FLAG_HTTP3 };
    static std::initializer_list<DWORD> http2Or3 = { WINHTTP_PROTOCOL_FLAG_HTTP3 | WINHTTP_PROTOCOL_FLAG_HTTP2, WINHTTP_PROTOCOL_FLAG_HTTP2 };
    if (version == Version::HTTP_VERSION_NONE)
    {
        /* WinHTTP http version None maps to HTTP1.1, however, libCurl None maps to "let http client decide", sticking to libCurl behavior here (use highest) */
        return http2Or3;
    }
    else if (version == Version::HTTP_VERSION_1_0)
    {
        return noPreference; // HTTP 1.1 can be still used, WinHTTP does not allow disabling 1,1
    }
    else if (version == Version::HTTP_VERSION_1_1)
    {
        return noPreference;
    }
    else if (version == Version::HTTP_VERSION_2_0 || version == Version::HTTP_VERSION_2TLS)
    {
        return http2;
    }
    else if (version == Version::HTTP_VERSION_2_PRIOR_KNOWLEDGE)
    {
        AWS_LOGSTREAM_WARN("WinHttpHttp2", "Unable to set HTTP/2 with Prior Knowledge on WinHTTP, enabling regular HTTP2");
        return http2;
    }
    else if (version == Version::HTTP_VERSION_3)
    {
      return http2Or3;
    }
    else if (version == Version::HTTP_VERSION_3ONLY)
    {
      AWS_LOGSTREAM_WARN("WinHttpHttp2", "Unable to set HTTP3 only on WinHTTP");
      return http3;
    }
    AWS_LOGSTREAM_WARN("WinHttpHttp2", "Unable to map requested HTTP Version: (raw enum value) "
                        << static_cast<std::underlying_type<Aws::Http::Version>::type>(version) << " defaulting to WINHTTP_PROTOCOL_FLAG_HTTP2");
    return http2;
}

void AzWinHttpLogLastError(const char* FuncName)
{
#define AZ_WINHTTP_ERROR(win_http_error) \
    {win_http_error, #win_http_error}
#define AZ_WINHTTP_ERROR_FALLBACK(win_http_error, value) \
    {value, #win_http_error}

    static const std::pair<DWORD, const char*> WIN_HTTP_ERRORS[] = {
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_OUT_OF_HANDLES),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_TIMEOUT),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_INTERNAL_ERROR),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_INVALID_URL),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_UNRECOGNIZED_SCHEME),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_NAME_NOT_RESOLVED),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_INVALID_OPTION),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_OPTION_NOT_SETTABLE),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_SHUTDOWN),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_LOGIN_FAILURE),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_OPERATION_CANCELLED),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_INCORRECT_HANDLE_TYPE),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_INCORRECT_HANDLE_STATE),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_CANNOT_CONNECT),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_CONNECTION_ERROR),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_RESEND_REQUEST),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_CLIENT_AUTH_CERT_NEEDED),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_CANNOT_CALL_BEFORE_OPEN),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_CANNOT_CALL_BEFORE_SEND),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_CANNOT_CALL_AFTER_SEND),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_CANNOT_CALL_AFTER_OPEN),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_HEADER_NOT_FOUND),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_INVALID_SERVER_RESPONSE),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_INVALID_HEADER),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_INVALID_QUERY_REQUEST),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_HEADER_ALREADY_EXISTS),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_REDIRECT_FAILED),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_AUTO_PROXY_SERVICE_ERROR),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_BAD_AUTO_PROXY_SCRIPT),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_UNABLE_TO_DOWNLOAD_SCRIPT),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_UNHANDLED_SCRIPT_TYPE),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_SCRIPT_EXECUTION_ERROR),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_NOT_INITIALIZED),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_SECURE_FAILURE),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_SECURE_CERT_DATE_INVALID),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_SECURE_CERT_CN_INVALID),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_SECURE_INVALID_CA),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_SECURE_CERT_REV_FAILED),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_SECURE_CHANNEL_ERROR),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_SECURE_INVALID_CERT),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_SECURE_CERT_REVOKED),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_SECURE_CERT_WRONG_USAGE),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_AUTODETECTION_FAILED),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_HEADER_COUNT_EXCEEDED),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_HEADER_SIZE_OVERFLOW),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_CHUNKED_ENCODING_HEADER_SIZE_OVERFLOW),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_RESPONSE_DRAIN_OVERFLOW),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_CLIENT_CERT_NO_PRIVATE_KEY),
            AZ_WINHTTP_ERROR(ERROR_WINHTTP_CLIENT_CERT_NO_ACCESS_PRIVATE_KEY),
            AZ_WINHTTP_ERROR_FALLBACK(ERROR_WINHTTP_CLIENT_AUTH_CERT_NEEDED_PROXY, (WINHTTP_ERROR_BASE + 187)),
            AZ_WINHTTP_ERROR_FALLBACK(ERROR_WINHTTP_SECURE_FAILURE_PROXY, (WINHTTP_ERROR_BASE + 188)),
            AZ_WINHTTP_ERROR_FALLBACK(ERROR_WINHTTP_RESERVED_189, (WINHTTP_ERROR_BASE + 189)),
            AZ_WINHTTP_ERROR_FALLBACK(ERROR_WINHTTP_HTTP_PROTOCOL_MISMATCH, (WINHTTP_ERROR_BASE + 190)),
            AZ_WINHTTP_ERROR_FALLBACK(ERROR_WINHTTP_GLOBAL_CALLBACK_FAILED, (WINHTTP_ERROR_BASE + 191)),
            AZ_WINHTTP_ERROR_FALLBACK(ERROR_WINHTTP_FEATURE_DISABLED, (WINHTTP_ERROR_BASE + 192)),
            AZ_WINHTTP_ERROR(ERROR_INVALID_PARAMETER),
            AZ_WINHTTP_ERROR(ERROR_NOT_ENOUGH_MEMORY)
    };
#undef AZ_WINHTTP_ERROR
#undef AZ_WINHTTP_ERROR_FALLBACK

    static const size_t WIN_HTTP_ERRORS_SZ = sizeof(WIN_HTTP_ERRORS) / sizeof(WIN_HTTP_ERRORS[0]);

    const auto lastError = GetLastError();
    size_t errorIdx = 0;
    for(; errorIdx < WIN_HTTP_ERRORS_SZ; ++errorIdx)
    {
        if(WIN_HTTP_ERRORS[errorIdx].first == lastError)
        {
            AWS_LOGSTREAM_ERROR("WinHttp", "Failed to " << FuncName << " with an error code: " << WIN_HTTP_ERRORS[errorIdx].second);
            break;
        }
    }
    if (errorIdx == WIN_HTTP_ERRORS_SZ)
    {
        AWS_LOGSTREAM_ERROR("WinHttp", "Failed to " << FuncName << " with an unknown error code: " << lastError);
    }
}

template<typename WinHttpFunc, typename... Args>
bool AzCallWinHttp(const char* FuncName, WinHttpFunc func, Args &&... args)
{
    bool success = func(std::forward<Args>(args)...);
    if (!success)
    {
        AzWinHttpLogLastError(FuncName);
    }
    return success;
}

static void WinHttpSetHttpVersion(void* handle, const Aws::Http::Version version)
{
    for (DWORD winHttpVersion : GetWinHttpVersionsToTry(version))
    {
        if (AzCallWinHttp("WinHttpSetOption", WinHttpSetOption, handle, WINHTTP_OPTION_ENABLE_HTTP_PROTOCOL, &winHttpVersion, (DWORD)sizeof(winHttpVersion)))
        {
            break;
        }
        {
            AWS_LOGSTREAM_ERROR("WinHttpHttp2", "Failed to set WINHTTP_OPTION_ENABLE_HTTP_PROTOCOL to " << winHttpVersion << " on WinHttp handle: " << handle);
        }
    }
}

static void GetDataErrorBuffer(char* moreDataBuffer,
                               size_t moreDataBufferSize,
                               DWORD_PTR dwResult,
                               DWORD dwError)
{
    int ignoreError = 0;
    char resultBuffer[128] = "";
    char errorBuffer[128] = "";
    char descriptionBuffer[256] = "";

#if _WIN64
    _snprintf_s(resultBuffer,  _TRUNCATE, "dwResult is %lld.", dwResult);
#elif _WIN32
    _snprintf_s(resultBuffer,  _TRUNCATE, "dwResult is %ld.", dwResult);
#endif

    switch (dwResult)
    {
        case API_RECEIVE_RESPONSE:
            _snprintf_s(descriptionBuffer,  _TRUNCATE, "The error occurred during a call to WinHttpReceiveResponse.");
            break;

        case API_QUERY_DATA_AVAILABLE:
            _snprintf_s(descriptionBuffer,  _TRUNCATE, "The error occurred during a call to WinHttpQueryDataAvailable.");
            break;

        case API_READ_DATA:
            _snprintf_s(descriptionBuffer,  _TRUNCATE, "The error occurred during a call to WinHttpReadData.");
            break;

        case API_WRITE_DATA:
            _snprintf_s(descriptionBuffer,  _TRUNCATE, "The error occurred during a call to WinHttpWriteData");
            break;

        case API_SEND_REQUEST:
            _snprintf_s(descriptionBuffer,  _TRUNCATE, "The error occurred during a call to WinHttpSendRequest.");
            break;

        case API_GET_PROXY_FOR_URL:
            _snprintf_s(descriptionBuffer,  _TRUNCATE, "The error occurred during a call to ... API_GET_PROXY_FOR_URL.");
            ignoreError = 1;
            break;
        default:
            ignoreError = 1;
            break;
    }
    if (!ignoreError)
        _snprintf_s(errorBuffer,  _TRUNCATE, "error code is %d", dwError);
    else
        _snprintf_s(errorBuffer,  _TRUNCATE, "error code (shall be ignored?) is %d", dwError);
    _snprintf_s(moreDataBuffer,  moreDataBufferSize, _TRUNCATE, "%s%s%s", resultBuffer, descriptionBuffer, errorBuffer);
}

static void GetDataErrorForTlsError(DWORD dwFlags,
                                    char* moreDataBuffer,
                                    size_t moreDataBufferSize)
{
    char flagsBuffer[128] = "";
    char detailedBuffer[512] = "";
    _snprintf_s(flagsBuffer,  _TRUNCATE, "TLS error occurred. dwFlags is %d.", dwFlags);
    if (dwFlags & WINHTTP_CALLBACK_STATUS_FLAG_CERT_REV_FAILED)
        _snprintf_s(detailedBuffer,  _TRUNCATE, "Certification revocation checking has been enabled, but the revocation check failed to verify whether a certificate has been revoked. The server used to check for revocation might be unreachable.");
    if (dwFlags & WINHTTP_CALLBACK_STATUS_FLAG_INVALID_CERT)
        _snprintf_s(detailedBuffer,  _TRUNCATE, "SSL certificate is invalid.");
    if (dwFlags & WINHTTP_CALLBACK_STATUS_FLAG_CERT_REVOKED)
        _snprintf_s(detailedBuffer,  _TRUNCATE, "SSL certificate was revoked.");
    if (dwFlags & WINHTTP_CALLBACK_STATUS_FLAG_INVALID_CA)
        _snprintf_s(detailedBuffer,  _TRUNCATE, "The function is unfamiliar with the Certificate Authority that generated the server's certificate.");
    if (dwFlags & WINHTTP_CALLBACK_STATUS_FLAG_CERT_CN_INVALID)
        _snprintf_s(detailedBuffer,  _TRUNCATE, "SSL certificate common name (host name field) is incorrect, for example, if you entered www.microsoft.com and the common name on the certificate says www.msn.com.");
    if (dwFlags & WINHTTP_CALLBACK_STATUS_FLAG_CERT_DATE_INVALID)
        _snprintf_s(detailedBuffer,  _TRUNCATE, "SSL certificate date that was received from the server is bad. The certificate is expired.");
    if (dwFlags & WINHTTP_CALLBACK_STATUS_FLAG_CERT_WRONG_USAGE)
        _snprintf_s(detailedBuffer,  _TRUNCATE, "WINHTTP_CALLBACK_STATUS_FLAG_CERT_WRONG_USAGE");
    if (dwFlags & WINHTTP_CALLBACK_STATUS_FLAG_SECURITY_CHANNEL_ERROR)
        _snprintf_s(detailedBuffer,  _TRUNCATE, "The application experienced an internal error loading the SSL libraries.");
    _snprintf_s(moreDataBuffer, moreDataBufferSize, _TRUNCATE, "%s%s", flagsBuffer, detailedBuffer);
}


static void CALLBACK WinHttpSyncLogCallback(HINTERNET hInternet,
                                   DWORD_PTR context,
                                   DWORD dwInternetStatus,
                                   LPVOID statusInformation,
                                   DWORD dwStatusInformationLength)
{
    AWS_UNREFERENCED_PARAM(context);
    AWS_UNREFERENCED_PARAM(hInternet);

    typedef enum
    {
        MORE_DATA_NULL,
        MORE_DATA_STRING,
        MORE_DATA_DWORD,
        MORE_DATA_HINTERNET,
        MORE_DATA_BUFFER,//shall use dwStatusInformationLength
        MORE_DATA_ERROR,
        MORE_DATA_ERROR_TLS,
    }DATA_FLAGS;
    struct STATUS_DATA
    {
        DWORD status;
        const char* statusString;
        DATA_FLAGS moreDataFlag;
        const char* moreDataFormat;
    } KNOWN_STATUSES[] = {
            { WINHTTP_CALLBACK_STATUS_CLOSING_CONNECTION, "Closing the connection to the server.", MORE_DATA_NULL, "" },
            { WINHTTP_CALLBACK_STATUS_CONNECTED_TO_SERVER, "Successfully connected to the server.", MORE_DATA_STRING, "IP address is %S" },
            { WINHTTP_CALLBACK_STATUS_CONNECTING_TO_SERVER, "Connecting to the server.", MORE_DATA_STRING, "IP address is %S" },
            { WINHTTP_CALLBACK_STATUS_CONNECTION_CLOSED, "Successfully closed the connection to the server", MORE_DATA_NULL, "" },
            { WINHTTP_CALLBACK_STATUS_DATA_AVAILABLE, "Data is available to be retrieved with WinHttpReadData.", MORE_DATA_DWORD, "Data size is %d" },
            { WINHTTP_CALLBACK_STATUS_HANDLE_CREATED, "An HINTERNET handle has been created.", MORE_DATA_HINTERNET, "" },
            { WINHTTP_CALLBACK_STATUS_HANDLE_CLOSING, "An HINTERNET handle has been terminated.", MORE_DATA_HINTERNET, "" },
            { WINHTTP_CALLBACK_STATUS_HEADERS_AVAILABLE, "The response header has been received and is available with WinHttpQueryHeaders.", MORE_DATA_NULL, "" },
            { WINHTTP_CALLBACK_STATUS_INTERMEDIATE_RESPONSE, "Received an intermediate (100 level) status code message from the server.", MORE_DATA_DWORD, "http status is %d" },
            { WINHTTP_CALLBACK_STATUS_NAME_RESOLVED, "Successfully found the IP address of the server.", MORE_DATA_STRING, "Name resolved is %S" },
            { WINHTTP_CALLBACK_STATUS_READ_COMPLETE, "Data was successfully read from the server.", MORE_DATA_BUFFER, "Buffer size read is %d" },
            { WINHTTP_CALLBACK_STATUS_RECEIVING_RESPONSE, "Waiting for the server to respond to a request.", MORE_DATA_NULL, "" },
            { WINHTTP_CALLBACK_STATUS_REDIRECT, "An HTTP request is about to automatically redirect the request.", MORE_DATA_STRING, "Redirect target is %S" },
            { WINHTTP_CALLBACK_STATUS_REQUEST_ERROR, "An error occurred while sending an HTTP request.", MORE_DATA_ERROR, "An error occurred ... to be formatted ..." },
            { WINHTTP_CALLBACK_STATUS_REQUEST_SENT, "Successfully sent the information request to the server.", MORE_DATA_DWORD, "Sent %d bytes" },
            { WINHTTP_CALLBACK_STATUS_RESOLVING_NAME, "Looking up the IP address of a server name.", MORE_DATA_STRING, "Trying to resolve '%S'" },
            { WINHTTP_CALLBACK_STATUS_RESPONSE_RECEIVED, "Successfully received a response from the server.", MORE_DATA_DWORD, "Received %d bytes" },
            { WINHTTP_CALLBACK_STATUS_SECURE_FAILURE, "One or more errors were encountered while retrieving a Secure Sockets Layer (SSL) certificate from the server.", MORE_DATA_ERROR_TLS, "TO BE CHECKED" },
            { WINHTTP_CALLBACK_STATUS_SENDING_REQUEST, "Sending the information request to the server.", MORE_DATA_NULL, "" },
            { WINHTTP_CALLBACK_STATUS_SENDREQUEST_COMPLETE, "The request completed successfully.", MORE_DATA_NULL, "" },
            { WINHTTP_CALLBACK_STATUS_WRITE_COMPLETE, "Data was successfully written to the server.", MORE_DATA_DWORD, "Written %d bytes" },
            { WINHTTP_CALLBACK_STATUS_CLOSE_COMPLETE, "The connection was successfully closed via a call to WinHttpWebSocketClose.", MORE_DATA_NULL, "" },
            { WINHTTP_CALLBACK_STATUS_SHUTDOWN_COMPLETE, "The connection was successfully shut down via a call to WinHttpWebSocketShutdown.", MORE_DATA_NULL, "" }
    };

    bool found = false;
    int i;
    for (i = 0; i < sizeof(KNOWN_STATUSES) / sizeof(KNOWN_STATUSES[0]) && !found; i++)
    {
        if (dwInternetStatus == KNOWN_STATUSES[i].status)
        {
            struct STATUS_DATA* data = &(KNOWN_STATUSES[i]);
            DWORD_PTR dwResult = 0;
            DWORD dwError = 0;
            DWORD tlsErrorFlags = 0;

            static const size_t MORE_DATA_BUFFER_SZ = 1024;
            char moreDataBuffer[MORE_DATA_BUFFER_SZ] = "";
            switch (data->moreDataFlag)
            {
                case MORE_DATA_NULL:
                    break;
                case MORE_DATA_STRING:
                    _snprintf_s(moreDataBuffer,  _TRUNCATE, data->moreDataFormat, (wchar_t*)statusInformation);
                    break;
                case MORE_DATA_DWORD:
                    _snprintf_s(moreDataBuffer,  _TRUNCATE, data->moreDataFormat, *((DWORD*)statusInformation));
                    break;
                case MORE_DATA_HINTERNET:
                    break;
                case MORE_DATA_BUFFER:
                    _snprintf_s(moreDataBuffer,  _TRUNCATE, data->moreDataFormat, dwStatusInformationLength);
                    break;
                case MORE_DATA_ERROR:
                    dwResult = ((WINHTTP_ASYNC_RESULT*)statusInformation)->dwResult;
                    dwError = ((WINHTTP_ASYNC_RESULT*)statusInformation)->dwError;
                    GetDataErrorBuffer(moreDataBuffer,
                                       MORE_DATA_BUFFER_SZ,
                                       dwResult,
                                       dwError);
                    break;
                case MORE_DATA_ERROR_TLS:
                    tlsErrorFlags = *(DWORD*)statusInformation;
                    GetDataErrorForTlsError(tlsErrorFlags, moreDataBuffer, MORE_DATA_BUFFER_SZ);
                    break;
                default:
                    _snprintf_s(moreDataBuffer,
                            _TRUNCATE,
                             "unknown more data flag %d",
                             data->moreDataFlag);
                    break;
            }//switch more data
            if (moreDataBuffer[0])
            {
                AWS_LOGSTREAM_TRACE("WinHttp", data->statusString << " " << moreDataBuffer);
            }
            else
            {
                AWS_LOGSTREAM_TRACE("WinHttp", data->statusString);
            }
            found = true;
        }//found handler
    }
    if (!found)
    {
        AWS_LOGSTREAM_DEBUG("WinHttp", "got unrecognized internet status " << dwInternetStatus);
    }
}

WinHttpSyncHttpClient::WinHttpSyncHttpClient(const ClientConfiguration& config) :
    Base(),
    m_usingProxy(!config.proxyHost.empty()),
    m_verifySSL(config.verifySSL),
    m_version(config.version),
    m_useAnonymousAuth(config.winHTTPOptions.useAnonymousAuth)
{
    m_enableHttpClientTrace = config.enableHttpClientTrace;

    AWS_LOGSTREAM_INFO(GetLogTag(), "Creating http client with user agent " << config.userAgent << " with max connections " << config.maxConnections
        << " request timeout " << config.requestTimeoutMs << ",and connect timeout " << config.connectTimeoutMs);

    DWORD winhttpFlags = config.allowSystemProxy ? WINHTTP_ACCESS_TYPE_DEFAULT_PROXY : WINHTTP_ACCESS_TYPE_NO_PROXY;
#if defined(WINHTTP_ACCESS_TYPE_AUTOMATIC_PROXY)
    if (config.allowSystemProxy && IsWindows8Point1OrGreater()) {
        winhttpFlags = WINHTTP_ACCESS_TYPE_AUTOMATIC_PROXY;
    }
#endif

    const char* proxyHosts = nullptr;
    Aws::String strProxyHosts;

    if (config.followRedirects == FollowRedirectsPolicy::NEVER ||
       (config.followRedirects == FollowRedirectsPolicy::DEFAULT && config.region == Aws::Region::AWS_GLOBAL))
    {
        m_allowRedirects = false;
    }
    else
    {
        m_allowRedirects = true;
    }

    //setup initial proxy config.

    Aws::WString proxyString;

    if (m_usingProxy)
    {
        const char* const proxySchemeString = Aws::Http::SchemeMapper::ToString(config.proxyScheme);
        AWS_LOGSTREAM_INFO(GetLogTag(), "Http Client is using a proxy. Setting up proxy with settings scheme " << proxySchemeString
             << ", host " << config.proxyHost << ", port " << config.proxyPort << ", username " << config.proxyUserName);

        winhttpFlags = WINHTTP_ACCESS_TYPE_NAMED_PROXY;
        Aws::StringStream ss;
        const char* schemeString = Aws::Http::SchemeMapper::ToString(config.scheme);
        ss << StringUtils::ToUpper(schemeString) << "=" << proxySchemeString << "://" << config.proxyHost << ":" << config.proxyPort;
        strProxyHosts.assign(ss.str());
        proxyHosts = strProxyHosts.c_str();

        proxyString = StringUtils::ToWString(proxyHosts);
        AWS_LOGSTREAM_DEBUG(GetLogTag(), "Adding proxy host string to winhttp " << proxyHosts);

        m_proxyUserName = StringUtils::ToWString(config.proxyUserName.c_str());
        m_proxyPassword = StringUtils::ToWString(config.proxyPassword.c_str());
    }

    Aws::WString openString = StringUtils::ToWString(config.userAgent.c_str());
    // WinhttpOpen will create a session handle
    HINTERNET hHttpSession = WinHttpOpen(openString.c_str(), winhttpFlags, proxyString.c_str(), nullptr, 0);
    if (!hHttpSession)
    {
        AWS_LOGSTREAM_FATAL(GetLogTag(), "Failed to open WinHttp session, last error: " << GetLastError());
    }

    if (m_enableHttpClientTrace)
    {
        AWS_LOGSTREAM_DEBUG(GetLogTag(), "Enabling WinHttp traces");
        WinHttpSetStatusCallback(hHttpSession, WinHttpSyncLogCallback, WINHTTP_CALLBACK_FLAG_ALL_NOTIFICATIONS, (DWORD_PTR)NULL);
    }

    SetOpenHandle(hHttpSession);

    AzCallWinHttp("WinHttpSetTimeouts", WinHttpSetTimeouts,
                   GetOpenHandle(), config.connectTimeoutMs, config.connectTimeoutMs, -1, config.requestTimeoutMs);
    WinHttpSetHttpVersion(GetOpenHandle(), m_version);
    if (m_verifySSL)
    {
        //disable insecure tls protocols, otherwise you might as well turn ssl verification off.
#if defined(ENFORCE_TLS_V1_3) && defined(WINHTTP_FLAG_SECURE_PROTOCOL_TLS1_3)
        DWORD flags = WINHTTP_FLAG_SECURE_PROTOCOL_TLS1_3;
#elif defined(ENFORCE_TLS_V1_2) && defined(WINHTTP_FLAG_SECURE_PROTOCOL_TLS1_3)
        DWORD flags = WINHTTP_FLAG_SECURE_PROTOCOL_TLS1_2 |
                      WINHTTP_FLAG_SECURE_PROTOCOL_TLS1_3;
#elif defined(ENFORCE_TLS_V1_2) && !defined(WINHTTP_FLAG_SECURE_PROTOCOL_TLS1_3)
        DWORD flags = WINHTTP_FLAG_SECURE_PROTOCOL_TLS1_2;
#elif defined(WINHTTP_FLAG_SECURE_PROTOCOL_TLS1_3)
        DWORD flags = WINHTTP_FLAG_SECURE_PROTOCOL_TLS1 |
                      WINHTTP_FLAG_SECURE_PROTOCOL_TLS1_1 |
                      WINHTTP_FLAG_SECURE_PROTOCOL_TLS1_2 |
                      WINHTTP_FLAG_SECURE_PROTOCOL_TLS1_3;
#else
        DWORD flags = WINHTTP_FLAG_SECURE_PROTOCOL_TLS1 |
                      WINHTTP_FLAG_SECURE_PROTOCOL_TLS1_1 |
                      WINHTTP_FLAG_SECURE_PROTOCOL_TLS1_2;
#endif

        if (!AzCallWinHttp("WinHttpSetOption", WinHttpSetOption, GetOpenHandle(), WINHTTP_OPTION_SECURE_PROTOCOLS, &flags, (DWORD) sizeof(flags)))
        {
            AWS_LOGSTREAM_FATAL(GetLogTag(), "Failed setting secure crypto protocols with error code: " << GetLastError());
        }
    }

    if (config.enableTcpKeepAlive)
    {
        tcp_keepalive keepAlive = {};
        /* If the onoff member is set to a nonzero value, TCP keep-alive is enabled and the other members in the structure are used. */
        keepAlive.onoff = 1;
        // Default 3000 and 30000 ms according to our ClientConfig doc
        keepAlive.keepalivetime = config.requestTimeoutMs ? config.requestTimeoutMs : 3000;
        keepAlive.keepaliveinterval = config.tcpKeepAliveIntervalMs ? config.tcpKeepAliveIntervalMs : 30000;

#if !defined(WINHTTP_OPTION_TCP_KEEPALIVE)
#define WINHTTP_OPTION_TCP_KEEPALIVE    152
#endif
        if (!AzCallWinHttp("WinHttpSetOption", WinHttpSetOption, hHttpSession, WINHTTP_OPTION_TCP_KEEPALIVE, &keepAlive, (DWORD) sizeof(keepAlive)))
        {
            AWS_LOGSTREAM_WARN(GetLogTag(), "Failed setting TCP keep-alive config on WinHttpSession");
        }
    }

    AWS_LOGSTREAM_DEBUG(GetLogTag(), "API handle " << GetOpenHandle());
    SetConnectionPoolManager(Aws::New<WinHttpConnectionPoolMgr>(GetLogTag(),
        GetOpenHandle(), config.maxConnections, config.requestTimeoutMs, config.connectTimeoutMs, config.enableTcpKeepAlive, config.tcpKeepAliveIntervalMs));
}


WinHttpSyncHttpClient::~WinHttpSyncHttpClient()
{
    WinHttpCloseHandle(GetOpenHandle());
    SetOpenHandle(nullptr);  // the handle is already closed, annul it to avoid double-closing the handle (in the base class' destructor)
}

void* WinHttpSyncHttpClient::OpenRequest(const std::shared_ptr<HttpRequest>& request, void* connection, const Aws::StringStream& ss) const
{
    LPCWSTR accept[2] = { nullptr, nullptr };

    DWORD requestFlags{0};
    if (request->GetUri().GetScheme() == Scheme::HTTPS) {
        requestFlags |= WINHTTP_FLAG_SECURE;
    }
    if (m_usingProxy) {
        // Avoid force adding "Cache-Control: no-cache" header.
        requestFlags |= WINHTTP_FLAG_REFRESH;
    }

    Aws::WString acceptHeader(L"*/*");

    if (request->HasHeader(Aws::Http::ACCEPT_HEADER))
    {
        acceptHeader = Aws::Utils::StringUtils::ToWString(request->GetHeaderValue(Aws::Http::ACCEPT_HEADER).c_str());
    }

    accept[0] = acceptHeader.c_str();

    Aws::WString wss = StringUtils::ToWString(ss.str().c_str());

    // WinHttpOpenRequest uses a connection handle to create a request handle
    HINTERNET hHttpRequest = WinHttpOpenRequest(connection, StringUtils::ToWString(HttpMethodMapper::GetNameForHttpMethod(request->GetMethod())).c_str(),
        wss.c_str(), nullptr, nullptr, accept, requestFlags);

    //add proxy auth credentials to everything using this handle.
    if (m_usingProxy)
    {
        if (!m_proxyUserName.empty() && !AzCallWinHttp("WinHttpSetOption", WinHttpSetOption, hHttpRequest, WINHTTP_OPTION_PROXY_USERNAME, (LPVOID)m_proxyUserName.c_str(), (DWORD)m_proxyUserName.length()))
        {
            AWS_LOGSTREAM_FATAL(GetLogTag(), "Failed setting username for proxy with error code: " << GetLastError());
        }
        if (!m_proxyPassword.empty() && !AzCallWinHttp("WinHttpSetOption", WinHttpSetOption, hHttpRequest, WINHTTP_OPTION_PROXY_PASSWORD, (LPVOID)m_proxyPassword.c_str(), (DWORD)m_proxyPassword.length()))
        {
            AWS_LOGSTREAM_FATAL(GetLogTag(), "Failed setting password for proxy with error code: " << GetLastError());
        }
    }

    if (!m_verifySSL) // Turning ssl unknown ca verification off
    {
        DWORD flags = SECURITY_FLAG_IGNORE_UNKNOWN_CA |
            SECURITY_FLAG_IGNORE_CERT_CN_INVALID |
            SECURITY_FLAG_IGNORE_CERT_DATE_INVALID |
            SECURITY_FLAG_IGNORE_CERT_WRONG_USAGE;
        if (!AzCallWinHttp("WinHttpSetOption", WinHttpSetOption, hHttpRequest, WINHTTP_OPTION_SECURITY_FLAGS, &flags, (DWORD) sizeof(flags)))
        {
            AWS_LOGSTREAM_FATAL(GetLogTag(), "Failed to turn ssl cert ca verification off.");
        }

        if (m_useAnonymousAuth)
        {
            if (!WinHttpSetOption(hHttpRequest, WINHTTP_OPTION_CLIENT_CERT_CONTEXT, WINHTTP_NO_CLIENT_CERT_CONTEXT, 0))
            {
                AWS_LOGSTREAM_FATAL(GetLogTag(), "Failed to set anonymous auth on.");
            }
        }
    }

    if (!GetConnectionPoolManager()->GetEnableTcpKeepAlive())
    {
        DWORD keepAliveDisable = WINHTTP_DISABLE_KEEP_ALIVE;
        AzCallWinHttp("WinHttpSetOption:WINHTTP_DISABLE_KEEP_ALIVE", WinHttpSetOption,
                      hHttpRequest, WINHTTP_OPTION_DISABLE_FEATURE, &keepAliveDisable, (DWORD) sizeof(keepAliveDisable));
    }

    //DISABLE_FEATURE settings need to be made after OpenRequest but before SendRequest
    if (!m_allowRedirects)
    {
        requestFlags = WINHTTP_DISABLE_REDIRECTS;

        if (!AzCallWinHttp("WinHttpSetOption", WinHttpSetOption, hHttpRequest, WINHTTP_OPTION_DISABLE_FEATURE, &requestFlags, (DWORD) sizeof(requestFlags)))
        {
            AWS_LOGSTREAM_FATAL(GetLogTag(), "Failed to turn off redirects!");
        }
    }

    WinHttpSetHttpVersion(hHttpRequest, m_version);
    return hHttpRequest;
}

void WinHttpSyncHttpClient::DoAddHeaders(void* hHttpRequest, Aws::String& headerStr) const
{

    Aws::WString wHeaderString = StringUtils::ToWString(headerStr.c_str());

    if (!AzCallWinHttp("WinHttpAddRequestHeaders", WinHttpAddRequestHeaders,
                       hHttpRequest, wHeaderString.c_str(), (DWORD)wHeaderString.length(), WINHTTP_ADDREQ_FLAG_REPLACE | WINHTTP_ADDREQ_FLAG_ADD))
    {
        AWS_LOGSTREAM_ERROR(GetLogTag(), "Failed to add HTTP request headers: " << headerStr << ", with error code: " << GetLastError());
    }
}

uint64_t WinHttpSyncHttpClient::DoWriteData(void* hHttpRequest, char* streamBuffer, uint64_t bytesRead, bool isChunked) const
{
    DWORD bytesWritten = 0;
    uint64_t totalBytesWritten = 0;
    const char CRLF[] = "\r\n";

    if (isChunked)
    {
        Aws::String chunkSizeHexString = StringUtils::ToHexString(bytesRead) + CRLF;

        if (!AzCallWinHttp("WinHttpWriteData", WinHttpWriteData, hHttpRequest, chunkSizeHexString.c_str(), (DWORD)chunkSizeHexString.size(), &bytesWritten))
        {
            return totalBytesWritten;
        }
        totalBytesWritten += bytesWritten;
        if (!AzCallWinHttp("WinHttpWriteData", WinHttpWriteData, hHttpRequest, streamBuffer, (DWORD)bytesRead, &bytesWritten))
        {
            return totalBytesWritten;
        }
        totalBytesWritten += bytesWritten;
        if (!AzCallWinHttp("WinHttpWriteData", WinHttpWriteData, hHttpRequest, CRLF, (DWORD)(sizeof(CRLF) - 1), &bytesWritten))
        {
            return totalBytesWritten;
        }
        totalBytesWritten += bytesWritten;
    }
    else
    {
        if (!AzCallWinHttp("WinHttpWriteData", WinHttpWriteData, hHttpRequest, streamBuffer, (DWORD)bytesRead, &bytesWritten))
        {
            return totalBytesWritten;
        }
        totalBytesWritten += bytesWritten;
    }

    return totalBytesWritten;
}

uint64_t WinHttpSyncHttpClient::FinalizeWriteData(void* hHttpRequest) const
{
    DWORD bytesWritten = 0;
    const char trailingCRLF[] = "0\r\n\r\n";
    if (!AzCallWinHttp("WinHttpWriteData", WinHttpWriteData, hHttpRequest, trailingCRLF, (DWORD)(sizeof(trailingCRLF) - 1), &bytesWritten))
    {
        return 0;
    }

    return bytesWritten;
}

bool WinHttpSyncHttpClient::DoReceiveResponse(void* httpRequest) const
{
    return (WinHttpReceiveResponse(httpRequest, nullptr) != 0);
}

bool WinHttpSyncHttpClient::DoQueryHeaders(void* hHttpRequest, std::shared_ptr<HttpResponse>& response, Aws::StringStream& ss, uint64_t& read) const
{
    wchar_t dwStatusCode[256];
    DWORD dwSize = sizeof(dwStatusCode);
    wmemset(dwStatusCode, 0, static_cast<size_t>(dwSize/sizeof(wchar_t)));

    WinHttpQueryHeaders(hHttpRequest, WINHTTP_QUERY_STATUS_CODE, nullptr, &dwStatusCode, &dwSize, 0);
    int responseCode = _wtoi(dwStatusCode);
    response->SetResponseCode((HttpResponseCode)responseCode);
    AWS_LOGSTREAM_DEBUG(GetLogTag(), "Received response code " << responseCode);

    wchar_t contentTypeStr[1024];
    dwSize = sizeof(contentTypeStr);
    wmemset(contentTypeStr, 0, static_cast<size_t>(dwSize / sizeof(wchar_t)));

    WinHttpQueryHeaders(hHttpRequest, WINHTTP_QUERY_CONTENT_TYPE, nullptr, &contentTypeStr, &dwSize, 0);
    if (contentTypeStr[0])
    {
        Aws::String contentStr = StringUtils::FromWString(contentTypeStr);
        response->SetContentType(contentStr);
        AWS_LOGSTREAM_DEBUG(GetLogTag(), "Received content type " << contentStr);
    }

    BOOL queryResult = false;
    AWS_LOGSTREAM_DEBUG(GetLogTag(), "Received headers:");
    WinHttpQueryHeaders(hHttpRequest, WINHTTP_QUERY_RAW_HEADERS_CRLF, WINHTTP_HEADER_NAME_BY_INDEX, nullptr, &dwSize, WINHTTP_NO_HEADER_INDEX);

    //I know it's ugly, but this is how MSFT says to do it so....
    if (GetLastError() == ERROR_INSUFFICIENT_BUFFER)
    {
        Utils::Array<wchar_t> headerRawString(dwSize / sizeof(wchar_t));

        queryResult = WinHttpQueryHeaders(hHttpRequest, WINHTTP_QUERY_RAW_HEADERS_CRLF, WINHTTP_HEADER_NAME_BY_INDEX, headerRawString.GetUnderlyingData(), &dwSize, WINHTTP_NO_HEADER_INDEX);
        if (queryResult)
        {
            Aws::String headers(StringUtils::FromWString(headerRawString.GetUnderlyingData()));
            AWS_LOGSTREAM_DEBUG(GetLogTag(), headers);
            ss << std::move(headers);
            read = dwSize;
        }
    }

    return queryResult == TRUE;
}

bool WinHttpSyncHttpClient::DoSendRequest(void* hHttpRequest) const
{
    bool success = WinHttpSendRequest(hHttpRequest, NULL, 0, NULL, 0, 0, 0) != 0;
    if (!success)
    {
        AzWinHttpLogLastError("WinHttpSendRequest");
    }
    return success;
}

bool WinHttpSyncHttpClient::DoQueryDataAvailable(void* hHttpRequest, uint64_t& available) const
{
    return (WinHttpQueryDataAvailable(hHttpRequest, (LPDWORD)&available) != 0);
}

bool WinHttpSyncHttpClient::DoReadData(void* hHttpRequest, char* body, uint64_t size, uint64_t& read) const
{
    return (WinHttpReadData(hHttpRequest, body, (DWORD)size, (LPDWORD)&read) != 0);
}

const char* WinHttpSyncHttpClient::GetActualHttpVersionUsed(void* hHttpRequest) const
{
    DWORD httpVersion = 0xFFF;
    DWORD ioLen = sizeof(httpVersion);
    AzCallWinHttp("WinHttpSetOption", WinHttpQueryOption, hHttpRequest, WINHTTP_OPTION_HTTP_PROTOCOL_USED, &httpVersion, &ioLen);

    switch (httpVersion)
    {
        case 0x0:
            return "1.1 or 1.0";
        case 0x1:
            return "2.0";
        case 0x2:
            return "3.0";
        default:
            break;
    }
    return "Unknown";
}

void* WinHttpSyncHttpClient::GetClientModule() const
{
    return GetModuleHandle(TEXT("winhttp.dll"));
}
