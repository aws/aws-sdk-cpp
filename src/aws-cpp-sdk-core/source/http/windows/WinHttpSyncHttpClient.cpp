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

#include <Windows.h>
#include <winhttp.h>
#include <sstream>
#include <iostream>
#include <versionhelpers.h>

using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Http::Standard;
using namespace Aws::Utils;
using namespace Aws::Utils::Logging;

DWORD ConvertHttpVersionToWinHttpVersion(const Aws::Http::Version version)
{
    if (version == Version::HTTP_VERSION_NONE)
    {
        /* WinHTTP http version None maps to HTTP1.1, however, libCurl None maps to "let http client decide", sticking to libCurl behavior here (use highest) */
#if defined(WINHTTP_HAS_H3)
        return WINHTTP_PROTOCOL_FLAG_HTTP3;
#elif defined(WINHTTP_HAS_H2)
        return WINHTTP_PROTOCOL_FLAG_HTTP2;
#else
        return 0x0;
#endif
    }
    else if (version == Version::HTTP_VERSION_1_0)
    {
        return 0x0; // HTTP 1.1 can be still used, WinHTTP does not allow disabling 1,1
    }
    else if (version == Version::HTTP_VERSION_1_1)
    {
        return 0x0;
    }
#ifdef WINHTTP_HAS_H2
        else if (version == Version::HTTP_VERSION_2_0 ||
             version == Version::HTTP_VERSION_2TLS)
    {
        return WINHTTP_PROTOCOL_FLAG_HTTP2;
    }
    else if (version == Version::HTTP_VERSION_2_PRIOR_KNOWLEDGE)
    {
        AWS_LOGSTREAM_WARN("WinHttpHttp2", "Unable to set HTTP/2 with Prior Knowledge on WinHTTP, enabling regular HTTP2");
        return WINHTTP_PROTOCOL_FLAG_HTTP2;
    }
#endif
#ifdef WINHTTP_HAS_H3
        else if (version == Version::HTTP_VERSION_3)
    {
        return WINHTTP_PROTOCOL_FLAG_HTTP3;
    }
    else if (version == Version::HTTP_VERSION_3ONLY)
    {
        AWS_LOGSTREAM_WARN("WinHttpHttp2", "Unable to set HTTP3 only on WinHTTP");
        return WINHTTP_PROTOCOL_FLAG_HTTP3;
    }
#endif

#ifdef WINHTTP_HAS_H2
        AWS_LOGSTREAM_WARN("WinHttpHttp2", "Unable to map requested HTTP Version: (raw enum value) "
                        << static_cast<std::underlying_type<Aws::Http::Version>::type>(version) << " defaulting to WINHTTP_PROTOCOL_FLAG_HTTP2");
    return WINHTTP_PROTOCOL_FLAG_HTTP2;
#else
    AWS_LOGSTREAM_WARN("WinHttpHttp2", "Unable to map requested HTTP Version: (raw enum value) "
        << static_cast<std::underlying_type<Aws::Http::Version>::type>(version) << " defaulting to None (aka 1.1 and below)");
    return 0x0;
#endif
}

static void WinHttpSetHttpVersion(void* handle, const Aws::Http::Version version)
{
    DWORD winHttpVersion = ConvertHttpVersionToWinHttpVersion(version);
    if (winHttpVersion == 0x0)
    {
        return;
    }
    if (!WinHttpSetOption(handle, WINHTTP_OPTION_ENABLE_HTTP_PROTOCOL, &winHttpVersion, sizeof(winHttpVersion)))
    {
        AWS_LOGSTREAM_ERROR("WinHttpHttp2", "Failed to set WINHTTP_OPTION_ENABLE_HTTP_PROTOCOL to " << winHttpVersion << " on WinHttp handle: " << handle);
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
    m_version(config.version)
{
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

    if (config.enableHttpClientTrace)
    {
        AWS_LOGSTREAM_DEBUG(GetLogTag(), "Enabling WinHttp traces");
        WinHttpSetStatusCallback(hHttpSession, WinHttpSyncLogCallback, WINHTTP_CALLBACK_FLAG_ALL_NOTIFICATIONS, (DWORD_PTR)NULL);
    }

    SetOpenHandle(hHttpSession);

    if (!WinHttpSetTimeouts(GetOpenHandle(), config.connectTimeoutMs, config.connectTimeoutMs, -1, config.requestTimeoutMs))
    {
        AWS_LOGSTREAM_WARN(GetLogTag(), "Error setting timeouts " << GetLastError());
    }
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

        if (!WinHttpSetOption(GetOpenHandle(), WINHTTP_OPTION_SECURE_PROTOCOLS, &flags, sizeof(flags)))
        {
            AWS_LOGSTREAM_FATAL(GetLogTag(), "Failed setting secure crypto protocols with error code: " << GetLastError());
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

    DWORD requestFlags = WINHTTP_FLAG_REFRESH |
        (request->GetUri().GetScheme() == Scheme::HTTPS && m_verifySSL ? WINHTTP_FLAG_SECURE : 0);

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
        if (!m_proxyUserName.empty() && !WinHttpSetOption(hHttpRequest, WINHTTP_OPTION_PROXY_USERNAME, (LPVOID)m_proxyUserName.c_str(), (DWORD)m_proxyUserName.length()))
            AWS_LOGSTREAM_FATAL(GetLogTag(), "Failed setting username for proxy with error code: " << GetLastError());
        if (!m_proxyPassword.empty() && !WinHttpSetOption(hHttpRequest, WINHTTP_OPTION_PROXY_PASSWORD, (LPVOID)m_proxyPassword.c_str(), (DWORD)m_proxyPassword.length()))
            AWS_LOGSTREAM_FATAL(GetLogTag(), "Failed setting password for proxy with error code: " << GetLastError());
    }

    if (!m_verifySSL) // Turning ssl unknown ca verification off
    {
        DWORD flags = SECURITY_FLAG_IGNORE_UNKNOWN_CA | SECURITY_FLAG_IGNORE_CERT_CN_INVALID;
        if (!WinHttpSetOption(hHttpRequest, WINHTTP_OPTION_SECURITY_FLAGS, &flags, sizeof(flags)))
            AWS_LOGSTREAM_FATAL(GetLogTag(), "Failed to turn ssl cert ca verification off.");
    }

    // WinHTTP doesn't have the option to turn off keep-alive, so we will only set the value if keep-alive is turned on.
    // see https://docs.microsoft.com/en-us/windows/desktop/winhttp/option-flags for more information on default values.
    if (GetConnectionPoolManager()->GetEnableTcpKeepAlive())
    {
        DWORD keepAliveIntervalMs = GetConnectionPoolManager()->GetTcpKeepAliveInterval();
        if (!WinHttpSetOption(hHttpRequest, WINHTTP_OPTION_WEB_SOCKET_KEEPALIVE_INTERVAL, &keepAliveIntervalMs, sizeof(keepAliveIntervalMs)))
        {
            AWS_LOGSTREAM_WARN(GetLogTag(), "Failed setting TCP keep-alive interval with error code: " << GetLastError());
        }
    }

    //DISABLE_FEATURE settings need to be made after OpenRequest but before SendRequest
    if (!m_allowRedirects)
    {
        requestFlags = WINHTTP_DISABLE_REDIRECTS;

        if (!WinHttpSetOption(hHttpRequest, WINHTTP_OPTION_DISABLE_FEATURE, &requestFlags, sizeof(requestFlags)))
            AWS_LOGSTREAM_FATAL(GetLogTag(), "Failed to turn off redirects!");
    }

    WinHttpSetHttpVersion(hHttpRequest, m_version);
    return hHttpRequest;
}

void WinHttpSyncHttpClient::DoAddHeaders(void* hHttpRequest, Aws::String& headerStr) const
{

    Aws::WString wHeaderString = StringUtils::ToWString(headerStr.c_str());

    if (!WinHttpAddRequestHeaders(hHttpRequest, wHeaderString.c_str(), (DWORD)wHeaderString.length(), WINHTTP_ADDREQ_FLAG_REPLACE | WINHTTP_ADDREQ_FLAG_ADD))
        AWS_LOGSTREAM_ERROR(GetLogTag(), "Failed to add HTTP request headers: " << headerStr << ", with error code: " << GetLastError());
}

uint64_t WinHttpSyncHttpClient::DoWriteData(void* hHttpRequest, char* streamBuffer, uint64_t bytesRead, bool isChunked) const
{
    DWORD bytesWritten = 0;
    uint64_t totalBytesWritten = 0;
    const char CRLF[] = "\r\n";

    if (isChunked)
    {
        Aws::String chunkSizeHexString = StringUtils::ToHexString(bytesRead) + CRLF;

        if (!WinHttpWriteData(hHttpRequest, chunkSizeHexString.c_str(), (DWORD)chunkSizeHexString.size(), &bytesWritten))
        {
            return totalBytesWritten;
        }
        totalBytesWritten += bytesWritten;
        if (!WinHttpWriteData(hHttpRequest, streamBuffer, (DWORD)bytesRead, &bytesWritten))
        {
            return totalBytesWritten;
        }
        totalBytesWritten += bytesWritten;
        if (!WinHttpWriteData(hHttpRequest, CRLF, (DWORD)(sizeof(CRLF) - 1), &bytesWritten))
        {
            return totalBytesWritten;
        }
        totalBytesWritten += bytesWritten;
    }
    else
    {
        if (!WinHttpWriteData(hHttpRequest, streamBuffer, (DWORD)bytesRead, &bytesWritten))
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
    if (!WinHttpWriteData(hHttpRequest, trailingCRLF, (DWORD)(sizeof(trailingCRLF) - 1), &bytesWritten))
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
    if (contentTypeStr[0] != NULL)
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
    return (WinHttpSendRequest(hHttpRequest, NULL, NULL, 0, 0, 0, NULL) != 0);
}

bool WinHttpSyncHttpClient::DoReadData(void* hHttpRequest, char* body, uint64_t size, uint64_t& read) const
{
    return (WinHttpReadData(hHttpRequest, body, (DWORD)size, (LPDWORD)&read) != 0);
}

void* WinHttpSyncHttpClient::GetClientModule() const
{
    return GetModuleHandle(TEXT("winhttp.dll"));
}
