/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/curl-multi/CurlMultiHttpClient.h>
#include <aws/core/http/curl-multi/CurlEasyHandleContext.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/ratelimiter/RateLimiterInterface.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/crypto/Hash.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/monitoring/HttpClientMetrics.h>
#include <cassert>
#include <algorithm>


using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Http::Standard;
using namespace Aws::Utils;
using namespace Aws::Utils::Logging;
using namespace Aws::Monitoring;

#ifdef AWS_CUSTOM_MEMORY_MANAGEMENT

static const char* MemTag = "libcurl";
static size_t offset = sizeof(size_t);

static void* malloc_callback(size_t size)
{
    char* newMem = reinterpret_cast<char*>(Aws::Malloc(MemTag, size + offset));
    std::size_t* pointerToSize = reinterpret_cast<std::size_t*>(newMem);
    *pointerToSize = size;
    return reinterpret_cast<void*>(newMem + offset);
}

static void free_callback(void* ptr)
{
    if(ptr)
    {
        char* shiftedMemory = reinterpret_cast<char*>(ptr);
        Aws::Free(shiftedMemory - offset);
    }
}

static void* realloc_callback(void* ptr, size_t size)
{
    if(!ptr)
    {
        return malloc_callback(size);
    }


    if(!size && ptr)
    {
        free_callback(ptr);
        return nullptr;
    }

    char* originalLenCharPtr = reinterpret_cast<char*>(ptr) - offset;
    size_t originalLen = *reinterpret_cast<size_t*>(originalLenCharPtr);

    char* rawMemory = reinterpret_cast<char*>(Aws::Malloc(MemTag, size + offset));
    if(rawMemory)
    {
        std::size_t* pointerToSize = reinterpret_cast<std::size_t*>(rawMemory);
        *pointerToSize = size;

        size_t copyLength = (std::min)(originalLen, size);
#ifdef _MSC_VER
        memcpy_s(rawMemory + offset, size, ptr, copyLength);
#else
        memcpy(rawMemory + offset, ptr, copyLength);
#endif
        free_callback(ptr);
        return reinterpret_cast<void*>(rawMemory + offset);
    }
    else
    {
        return ptr;
    }

}

static void* calloc_callback(size_t nmemb, size_t size)
{
    size_t dataSize = nmemb * size;
    char* newMem = reinterpret_cast<char*>(Aws::Malloc(MemTag, dataSize + offset));
    std::size_t* pointerToSize = reinterpret_cast<std::size_t*>(newMem);
    *pointerToSize = dataSize;
#ifdef _MSC_VER
    memset_s(newMem + offset, dataSize, 0, dataSize);
#else
    memset(newMem + offset, 0, dataSize);
#endif

    return reinterpret_cast<void*>(newMem + offset);
}

static char* strdup_callback(const char* str)
{
    size_t len = strlen(str) + 1;
    size_t newLen = len + offset;
    char* newMem = reinterpret_cast<char*>(Aws::Malloc(MemTag, newLen));

    if(newMem)
    {
        std::size_t* pointerToSize = reinterpret_cast<std::size_t*>(newMem);
        *pointerToSize = len;
#ifdef _MSC_VER
        memcpy_s(newMem + offset, len, str, len);
#else
        memcpy(newMem + offset, str, len);
#endif
        return newMem + offset;
    }
    return nullptr;
}

#endif

static const char* CURL_HTTP_CLIENT_TAG = "CurlMultiHttpClient";

static int64_t GetContentLengthFromHeader(CURL* connectionHandle,
                                          bool& hasContentLength) {
#if LIBCURL_VERSION_NUM >= 0x073700  // 7.55.0
  curl_off_t contentLength = {};
  CURLcode res = curl_easy_getinfo(
      connectionHandle, CURLINFO_CONTENT_LENGTH_DOWNLOAD_T, &contentLength);
#else
  double contentLength = {};
  CURLcode res = curl_easy_getinfo(
      connectionHandle, CURLINFO_CONTENT_LENGTH_DOWNLOAD, &contentLength);
#endif
  hasContentLength = (res == CURLE_OK) && (contentLength != -1);
  return hasContentLength ? static_cast<int64_t>(contentLength) : -1;
}

void SetOptCodeForHttpMethod(CURL* const requestHandle, Aws::Http::HttpRequest const * const request)
{
    assert(requestHandle && request);
    switch (request->GetMethod())
    {
        case HttpMethod::HTTP_GET:
            curl_easy_setopt(requestHandle, CURLOPT_HTTPGET, 1L);
            break;
        case HttpMethod::HTTP_POST:
            if (request->HasHeader(Aws::Http::CONTENT_LENGTH_HEADER) && request->GetHeaderValue(Aws::Http::CONTENT_LENGTH_HEADER) == "0")
            {
                curl_easy_setopt(requestHandle, CURLOPT_CUSTOMREQUEST, "POST");
            }
            else
            {
                curl_easy_setopt(requestHandle, CURLOPT_POST, 1L);
            }
            break;
        case HttpMethod::HTTP_PUT:
            if ((!request->HasHeader(Aws::Http::CONTENT_LENGTH_HEADER) || request->GetHeaderValue(Aws::Http::CONTENT_LENGTH_HEADER) == "0") &&
                 !request->HasHeader(Aws::Http::TRANSFER_ENCODING_HEADER))
            {
                curl_easy_setopt(requestHandle, CURLOPT_CUSTOMREQUEST, "PUT");
            }
            else
            {
#if LIBCURL_VERSION_NUM >= 0x070c01 // 7.12.1
                curl_easy_setopt(requestHandle, CURLOPT_UPLOAD, 1L);
#else
                curl_easy_setopt(requestHandle, CURLOPT_PUT, 1L);
#endif
            }
            break;
        case HttpMethod::HTTP_HEAD:
            curl_easy_setopt(requestHandle, CURLOPT_HTTPGET, 1L);
            curl_easy_setopt(requestHandle, CURLOPT_NOBODY, 1L);
            break;
        case HttpMethod::HTTP_PATCH:
            if ((!request->HasHeader(Aws::Http::CONTENT_LENGTH_HEADER)|| request->GetHeaderValue(Aws::Http::CONTENT_LENGTH_HEADER) == "0") &&
                 !request->HasHeader(Aws::Http::TRANSFER_ENCODING_HEADER))
            {
                curl_easy_setopt(requestHandle, CURLOPT_CUSTOMREQUEST, "PATCH");
            }
            else
            {
                curl_easy_setopt(requestHandle, CURLOPT_POST, 1L);
                curl_easy_setopt(requestHandle, CURLOPT_CUSTOMREQUEST, "PATCH");
            }

            break;
        case HttpMethod::HTTP_DELETE:
            curl_easy_setopt(requestHandle, CURLOPT_CUSTOMREQUEST, "DELETE");
            break;
        default:
            assert(0);
            curl_easy_setopt(requestHandle, CURLOPT_CUSTOMREQUEST, "GET");
            break;
    }
}


std::atomic<bool> CurlMultiHttpClient::isGlobalStateInit(false);

void CurlMultiHttpClient::InitGlobalState()
{
    if (!isGlobalStateInit)
    {
        auto curlVersionData = curl_version_info(CURLVERSION_NOW);
        AWS_LOGSTREAM_INFO(CURL_HTTP_CLIENT_TAG, "Initializing Curl library with version: " << curlVersionData->version
            << ", ssl version: " << curlVersionData->ssl_version);
        isGlobalStateInit = true;
#ifdef AWS_CUSTOM_MEMORY_MANAGEMENT
        curl_global_init_mem(CURL_GLOBAL_ALL, &malloc_callback, &free_callback, &realloc_callback, &strdup_callback, &calloc_callback);
#else
        curl_global_init(CURL_GLOBAL_ALL);
#endif
    }
}


void CurlMultiHttpClient::CleanupGlobalState()
{
    curl_global_cleanup();
}

Aws::String CurlMultiInfoTypeToString(curl_infotype type)
{
    switch(type)
    {
        case CURLINFO_TEXT:
            return "Text";

        case CURLINFO_HEADER_IN:
            return "HeaderIn";

        case CURLINFO_HEADER_OUT:
            return "HeaderOut";

        case CURLINFO_DATA_IN:
            return "DataIn";

        case CURLINFO_DATA_OUT:
            return "DataOut";

        case CURLINFO_SSL_DATA_IN:
            return "SSLDataIn";

        case CURLINFO_SSL_DATA_OUT:
            return "SSLDataOut";

        default:
            return "Unknown";
    }
}

int CurlMultiDebugCallback(CURL *handle, curl_infotype type, char *data, size_t size, void *userptr)
{
    AWS_UNREFERENCED_PARAM(handle);
    AWS_UNREFERENCED_PARAM(userptr);

    if(type == CURLINFO_SSL_DATA_IN || type == CURLINFO_SSL_DATA_OUT)
    {
        AWS_LOGSTREAM_DEBUG("CURL", "(" << CurlMultiInfoTypeToString(type) << ") " << size << "bytes");
    }
    else
    {
        Aws::String debugString(data, size);
        AWS_LOGSTREAM_DEBUG("CURL", "(" << CurlMultiInfoTypeToString(type) << ") " << debugString);
    }

    return 0;
}

void CurlMultiHttpClient::CurlMultiPerformThread(CurlMultiHttpClient* pClient)
{
    assert(pClient && pClient->m_curlMultiHandleContainer.AccessCurlMultiHandle());
    CURLM *multi_handle = pClient->m_curlMultiHandleContainer.AccessCurlMultiHandle();

    int stillRunning = 0;
    while(pClient->m_isRunning)
    {
        // wait for new task signal
        {
            std::unique_lock<std::mutex> lockGuard(pClient->m_signalMutex);
            pClient->m_signalRunning.wait(lockGuard,
                                          [pClient, &stillRunning]
                                          {
                                            // return true to unlock
                                            if(!pClient->m_isRunning.load())
                                              return true;

                                            return pClient->m_tasksQueued || stillRunning;
                                          });
        }
        if(!pClient->m_isRunning.load())
        {
          break;
        }

        pClient->m_tasksQueued = 0;

        CURLMcode mc = curl_multi_perform(multi_handle, &stillRunning);
        int msgQueue = 0;
        do {

          struct CURLMsg* message = curl_multi_info_read(multi_handle, &msgQueue);
          if(message)
          {
            if(message->msg == CURLMSG_DONE)
            {
              CURL* easyHandle = message->easy_handle;
              assert(easyHandle);
              Curl::CurlEasyHandleContext* pEasyHandleCtx = nullptr;
              curl_easy_getinfo(easyHandle, CURLINFO_PRIVATE, &pEasyHandleCtx);
              assert(pEasyHandleCtx);

              pEasyHandleCtx->curlResult = message->data.result;
              pEasyHandleCtx->m_onCurlDoneFn();
            } else {
              assert(!"Todo");
            }
          }
        } while(msgQueue > 0);

        if(!mc && stillRunning)
          /* wait for activity, timeout or "nothing" */
          mc = curl_multi_poll(multi_handle, NULL, 0, 1000, NULL);

        if(mc) {
            fprintf(stderr, "curl_multi_poll() failed, code %d.\n", (int)mc);
            break;
        }
    };
}

CurlMultiHttpClient::CurlMultiHttpClient(const ClientConfiguration& clientConfig) :
    Base(),
    m_curlMultiHandleContainer(clientConfig.maxConnections, clientConfig.httpRequestTimeoutMs, clientConfig.connectTimeoutMs, clientConfig.enableTcpKeepAlive,
                               clientConfig.tcpKeepAliveIntervalMs, clientConfig.requestTimeoutMs, clientConfig.lowSpeedLimit, clientConfig.version),
    m_telemetryProvider(clientConfig.telemetryProvider)
{
    m_config.proxyConfig.isEnabled = !clientConfig.proxyHost.empty();
    m_config.proxyConfig.userName = clientConfig.proxyUserName;
    m_config.proxyConfig.password = clientConfig.proxyPassword;
    m_config.proxyConfig.scheme = SchemeMapper::ToString(clientConfig.proxyScheme);
    m_config.proxyConfig.host = clientConfig.proxyHost;
    m_config.proxyConfig.sslCertPath = clientConfig.proxySSLCertPath;
    m_config.proxyConfig.sslCertType = clientConfig.proxySSLCertType;
    m_config.proxyConfig.sslKeyPath = clientConfig.proxySSLKeyPath;
    m_config.proxyConfig.sslKeyType = clientConfig.proxySSLKeyType;
    m_config.proxyConfig.keyPasswd = clientConfig.proxySSLKeyPassword;
    m_config.proxyConfig.port = clientConfig.proxyPort;
    m_config.sslConfig.verifySSL = clientConfig.verifySSL;
    m_config.sslConfig.caPath = clientConfig.caPath;
    m_config.sslConfig.caFile = clientConfig.caFile;
    m_config.disableExpectHeader = clientConfig.disableExpectHeader;

    if (clientConfig.followRedirects == FollowRedirectsPolicy::NEVER ||
       (clientConfig.followRedirects == FollowRedirectsPolicy::DEFAULT && clientConfig.region == Aws::Region::AWS_GLOBAL))
    {
        m_config.allowRedirects = false;
    }
    else
    {
        m_config.allowRedirects = true;
    }
    if(clientConfig.nonProxyHosts.GetLength() > 0)
    {
        Aws::StringStream ss;
        ss << clientConfig.nonProxyHosts.GetItem(0);
        for (auto i=1u; i < clientConfig.nonProxyHosts.GetLength(); i++)
        {
            ss << "," << clientConfig.nonProxyHosts.GetItem(i);
        }
        m_config.proxyConfig.nonProxyHosts = ss.str();
    }

    // LAUNCH
    m_isRunning = true;
    m_tasksQueued = 0;
    m_multiHandleThread = std::thread(CurlMultiPerformThread, this);
}

CurlMultiHttpClient::~CurlMultiHttpClient()
{
  m_isRunning.store(false);
  {
    std::unique_lock<std::mutex> lockGuard(m_signalMutex);
    m_signalRunning.notify_all();
  }
  m_multiHandleThread.join();

  curl_multi_cleanup(m_curlMultiHandleContainer.AccessCurlMultiHandle());
}

struct curl_slist* PrepareHeaders(const HttpRequest* request, const bool disableExpectHeader)
{
    assert(request);
    struct curl_slist* headers = NULL;

    Aws::StringStream headerStream;
    HeaderValueCollection requestHeaders = request->GetHeaders();

    AWS_LOGSTREAM_TRACE(CURL_HTTP_CLIENT_TAG, "Including headers:");
    for (auto& requestHeader : requestHeaders)
    {
        headerStream.str("");
        headerStream << requestHeader.first << ": " << requestHeader.second;
        Aws::String headerString = headerStream.str();
        AWS_LOGSTREAM_TRACE(CURL_HTTP_CLIENT_TAG, headerString);
        headers = curl_slist_append(headers, headerString.c_str());
    }

    if (!request->HasHeader(Aws::Http::TRANSFER_ENCODING_HEADER))
    {
        headers = curl_slist_append(headers, "transfer-encoding:");
    }

    if (!request->HasHeader(Aws::Http::CONTENT_LENGTH_HEADER))
    {
        headers = curl_slist_append(headers, "content-length:");
    }

    if (!request->HasHeader(Aws::Http::CONTENT_TYPE_HEADER))
    {
        headers = curl_slist_append(headers, "content-type:");
    }

    // Discard Expect header so as to avoid using multiple payloads to send a http request (header + body)
    if (disableExpectHeader)
    {
        headers = curl_slist_append(headers, "Expect:");
    }

    return headers;
}


void ConfigureEasyHandle(
    CurlMultiHttpClient const * const pClient,
    const Aws::Http::CurlMultiHttpClient::CurlMultiHttpClientConfig& config,
    std::function<void()> onDoneFn,
    Curl::CurlEasyHandleContext* const easyHandleContext,
    Aws::Http::HttpRequest* const request,
    const std::shared_ptr<HttpResponse> response,
    Aws::Utils::RateLimits::RateLimiterInterface* readLimiter,
    Aws::Utils::RateLimits::RateLimiterInterface* writeLimiter)
{
    assert(easyHandleContext && request && response);
    assert(easyHandleContext->m_curlEasyHandle);
    struct curl_slist* headers = PrepareHeaders(request, config.disableExpectHeader);
    if (headers)
    {
        curl_easy_setopt(easyHandleContext->m_curlEasyHandle, CURLOPT_HTTPHEADER, headers);
        easyHandleContext->m_curlHandleHeaders = headers;
    }

    easyHandleContext->writeContext.m_request = request;
    easyHandleContext->writeContext.m_response = response;
    easyHandleContext->writeContext.m_rateLimiter = readLimiter; // not a typo, the same in a legacy wrapper
    easyHandleContext->readContext.m_request = request;
    easyHandleContext->readContext.m_rateLimiter = writeLimiter; // not a typo, the same in a legacy wrapper
    easyHandleContext->curlResult = CURLE_FAILED_INIT;
    easyHandleContext->m_onCurlDoneFn = onDoneFn;
    easyHandleContext->m_client = pClient;

    CURL* connectionHandle = easyHandleContext->m_curlEasyHandle;
    SetOptCodeForHttpMethod(connectionHandle, request);

    const URI& uri = request->GetUri();
    Aws::String url = uri.GetURIString();
    AWS_LOGSTREAM_TRACE(CURL_HTTP_CLIENT_TAG, "Making request to " << url);
    curl_easy_setopt(connectionHandle, CURLOPT_URL, url.c_str());

    //we only want to override the default path if someone has explicitly told us to.
    if(!config.sslConfig.caPath.empty())
    {
        curl_easy_setopt(connectionHandle, CURLOPT_CAPATH, config.sslConfig.caPath.c_str());
    }
    if(!config.sslConfig.caFile.empty())
    {
        curl_easy_setopt(connectionHandle, CURLOPT_CAINFO, config.sslConfig.caFile.c_str());
    }

    // enable the cookie engine without reading any initial cookies.
    curl_easy_setopt(connectionHandle, CURLOPT_COOKIEFILE, "");

// only set by android test builds because the emulator is missing a cert needed for aws services
#ifdef TEST_CERT_PATH
curl_easy_setopt(connectionHandle, CURLOPT_CAPATH, TEST_CERT_PATH);
#endif // TEST_CERT_PATH

    if (config.sslConfig.verifySSL)
    {
        curl_easy_setopt(connectionHandle, CURLOPT_SSL_VERIFYPEER, 1L);
        curl_easy_setopt(connectionHandle, CURLOPT_SSL_VERIFYHOST, 2L);

#if defined(ENFORCE_TLS_V1_3) && LIBCURL_VERSION_NUM >= 0x073400 // 7.52.0
        curl_easy_setopt(connectionHandle, CURLOPT_SSLVERSION, CURL_SSLVERSION_TLSv1_3);
#elif defined(ENFORCE_TLS_V1_2) && LIBCURL_VERSION_NUM >= 0x072200 // 7.34.0
        curl_easy_setopt(connectionHandle, CURLOPT_SSLVERSION, CURL_SSLVERSION_TLSv1_2);
#else
        curl_easy_setopt(connectionHandle, CURLOPT_SSLVERSION, CURL_SSLVERSION_TLSv1);
#endif
    }
    else
    {
        curl_easy_setopt(connectionHandle, CURLOPT_SSL_VERIFYPEER, 0L);
        curl_easy_setopt(connectionHandle, CURLOPT_SSL_VERIFYHOST, 0L);
    }

    if (config.allowRedirects)
    {
        curl_easy_setopt(connectionHandle, CURLOPT_FOLLOWLOCATION, 1L);
    }
    else
    {
        curl_easy_setopt(connectionHandle, CURLOPT_FOLLOWLOCATION, 0L);
    }

#ifdef ENABLE_CURL_LOGGING
    curl_easy_setopt(connectionHandle, CURLOPT_VERBOSE, 1);
    curl_easy_setopt(connectionHandle, CURLOPT_DEBUGFUNCTION, CurlMultiDebugCallback);
#endif
    if (config.proxyConfig.isEnabled)
    {
        Aws::StringStream ss;
        ss << config.proxyConfig.scheme << "://" << config.proxyConfig.host;
        curl_easy_setopt(connectionHandle, CURLOPT_PROXY, ss.str().c_str());
        curl_easy_setopt(connectionHandle, CURLOPT_PROXYPORT, (long) config.proxyConfig.port);
        if (!config.proxyConfig.userName.empty() || !config.proxyConfig.password.empty())
        {
            curl_easy_setopt(connectionHandle, CURLOPT_PROXYUSERNAME, config.proxyConfig.userName.c_str());
            curl_easy_setopt(connectionHandle, CURLOPT_PROXYPASSWORD, config.proxyConfig.password.c_str());
        }
        curl_easy_setopt(connectionHandle, CURLOPT_NOPROXY, config.proxyConfig.nonProxyHosts.c_str());
#ifdef CURL_HAS_TLS_PROXY
        if (!config.proxyConfig.sslCertPath.empty())
        {
            curl_easy_setopt(connectionHandle, CURLOPT_PROXY_SSLCERT, config.proxyConfig.sslCertPath.c_str());
            if (!config.proxyConfig.sslCertType.empty())
            {
                curl_easy_setopt(connectionHandle, CURLOPT_PROXY_SSLCERTTYPE, config.proxyConfig.sslCertType.c_str());
            }
        }
        if (!config.proxyConfig.sslKeyPath.empty())
        {
            curl_easy_setopt(connectionHandle, CURLOPT_PROXY_SSLKEY, config.proxyConfig.sslKeyPath.c_str());
            if (!config.proxyConfig.sslKeyType.empty())
            {
                curl_easy_setopt(connectionHandle, CURLOPT_PROXY_SSLKEYTYPE, config.proxyConfig.sslKeyType.c_str());
            }
            if (!config.proxyConfig.keyPasswd.empty())
            {
                curl_easy_setopt(connectionHandle, CURLOPT_PROXY_KEYPASSWD, config.proxyConfig.keyPasswd.c_str());
            }
        }
#endif //CURL_HAS_TLS_PROXY
    }
    else
    {
        curl_easy_setopt(connectionHandle, CURLOPT_PROXY, "");
    }

    if (request->GetContentBody())
    {
        easyHandleContext->writeContext.m_HasBody = true;
//        curl_easy_setopt(connectionHandle, CURLOPT_READFUNCTION, ReadBodyFunc);
//        curl_easy_setopt(connectionHandle, CURLOPT_READDATA, &handleContext.readContext);
//        curl_easy_setopt(connectionHandle, CURLOPT_SEEKFUNCTION, SeekBody);
//        curl_easy_setopt(connectionHandle, CURLOPT_SEEKDATA, &handleContext.readContext);
        if (request->IsEventStreamRequest() && !response->HasHeader(Aws::Http::X_AMZN_ERROR_TYPE))
        {
            curl_easy_setopt(connectionHandle, CURLOPT_READFUNCTION, Curl::CurlEasyHandleContext::ReadBodyStreaming);
            curl_easy_setopt(connectionHandle, CURLOPT_NOPROGRESS, 0L);
#if LIBCURL_VERSION_NUM >= 0x072000 // 7.32.0
            curl_easy_setopt(connectionHandle, CURLOPT_XFERINFOFUNCTION, Curl::CurlEasyHandleContext::CurlProgressCallback);
            curl_easy_setopt(connectionHandle, CURLOPT_XFERINFODATA, easyHandleContext);
#else
            curl_easy_setopt(connectionHandle, CURLOPT_PROGRESSFUNCTION, Curl::CurlEasyHandleContext::CurlProgressCallback);
            curl_easy_setopt(connectionHandle, CURLOPT_PROGRESSDATA, easyHandleContext);
#endif
        }
    }
}

std::shared_ptr<HttpResponse> CurlMultiHttpClient::HandleCurlResponse(Curl::CurlEasyHandleContext* pEasyHandleCtx)
{
    const CURLcode curlResponseCode = pEasyHandleCtx->curlResult;
    Aws::Http::HttpRequest * const request = pEasyHandleCtx->writeContext.m_request;
    Aws::Http::HttpResponse * const response = pEasyHandleCtx->writeContext.m_response.get();
    CurlMultiHttpClient const * const client = pEasyHandleCtx->m_client;
    CURL* const connectionHandle = pEasyHandleCtx->m_curlEasyHandle;

    assert(request && response && client && connectionHandle);

    bool shouldContinueRequest = client->ContinueRequest(*request);
    if (curlResponseCode != CURLE_OK && shouldContinueRequest)
    {
        response->SetClientErrorType(CoreErrors::NETWORK_CONNECTION);
        Aws::StringStream ss;
        ss << "curlCode: " << curlResponseCode << ", " << curl_easy_strerror(curlResponseCode);
        response->SetClientErrorMessage(ss.str());
        AWS_LOGSTREAM_ERROR(CURL_HTTP_CLIENT_TAG, "Curl returned error code " << curlResponseCode
                << " - " << curl_easy_strerror(curlResponseCode));
    }
    else if(!shouldContinueRequest)
    {
        response->SetClientErrorType(CoreErrors::USER_CANCELLED);
        response->SetClientErrorMessage("Request cancelled by user's continuation handler");
    }
    else
    {
        long responseCode;
        curl_easy_getinfo(connectionHandle, CURLINFO_RESPONSE_CODE, &responseCode);
        response->SetResponseCode(static_cast<HttpResponseCode>(responseCode));
        AWS_LOGSTREAM_DEBUG(CURL_HTTP_CLIENT_TAG, "Returned http response code " << responseCode);

        char* contentType = nullptr;
        curl_easy_getinfo(connectionHandle, CURLINFO_CONTENT_TYPE, &contentType);
        if (contentType)
        {
            response->SetContentType(contentType);
            AWS_LOGSTREAM_DEBUG(CURL_HTTP_CLIENT_TAG, "Returned content type " << contentType);
        }

        bool hasContentLength = false;
        int64_t contentLength =
            GetContentLengthFromHeader(connectionHandle, hasContentLength);

        if (request->GetMethod() != HttpMethod::HTTP_HEAD &&
            client->IsRequestProcessingEnabled() &&
            hasContentLength)
        {
            int64_t numBytesResponseReceived = pEasyHandleCtx->writeContext.m_numBytesResponseReceived;
            AWS_LOGSTREAM_TRACE(CURL_HTTP_CLIENT_TAG, "Response content-length header: " << contentLength);
            AWS_LOGSTREAM_TRACE(CURL_HTTP_CLIENT_TAG, "Response body length: " << numBytesResponseReceived);
            if (contentLength != numBytesResponseReceived)
            {
                response->SetClientErrorType(CoreErrors::NETWORK_CONNECTION);
                response->SetClientErrorMessage("Response body length doesn't match the content-length header.");
                AWS_LOGSTREAM_ERROR(CURL_HTTP_CLIENT_TAG, "Response body length doesn't match the content-length header.");
            }
        }

        AWS_LOGSTREAM_DEBUG(CURL_HTTP_CLIENT_TAG, "Releasing curl handle " << connectionHandle);
    }

    double timep = 0.0;
    CURLcode ret = curl_easy_getinfo(connectionHandle, CURLINFO_NAMELOOKUP_TIME, &timep); // DNS Resolve Latency, seconds.
    if (ret == CURLE_OK)
    {
        request->AddRequestMetric(GetHttpClientMetricNameByType(HttpClientMetricsType::DnsLatency), static_cast<int64_t>(timep * 1000));// to milliseconds
    }

    ret = curl_easy_getinfo(connectionHandle, CURLINFO_STARTTRANSFER_TIME, &timep); // Connect Latency
    if (ret == CURLE_OK)
    {
        request->AddRequestMetric(GetHttpClientMetricNameByType(HttpClientMetricsType::ConnectLatency), static_cast<int64_t>(timep * 1000));
    }

    ret = curl_easy_getinfo(connectionHandle, CURLINFO_APPCONNECT_TIME, &timep); // Ssl Latency
    if (ret == CURLE_OK)
    {
        request->AddRequestMetric(GetHttpClientMetricNameByType(HttpClientMetricsType::SslLatency), static_cast<int64_t>(timep * 1000));
    }

    curl_off_t speed;
#if LIBCURL_VERSION_NUM >= 0x073700 // 7.55.0
    ret = curl_easy_getinfo(connectionHandle, CURLINFO_SPEED_DOWNLOAD_T, &speed); // throughput
#else
    ret = curl_easy_getinfo(connectionHandle, CURLINFO_SPEED_DOWNLOAD, &speed); // throughput
#endif
    if (ret == CURLE_OK)
    {
        request->AddRequestMetric(GetHttpClientMetricNameByType(HttpClientMetricsType::Throughput), static_cast<int64_t>(speed));
    }

    const char* ip = nullptr;
    auto curlGetInfoResult = curl_easy_getinfo(connectionHandle, CURLINFO_PRIMARY_IP, &ip); // Get the IP address of the remote endpoint
    if (curlGetInfoResult == CURLE_OK && ip)
    {
        request->SetResolvedRemoteHost(ip);
    }
    //go ahead and flush the response body stream
    response->GetResponseBody().flush();
    if (response->GetResponseBody().fail()) {
        const auto& ref = response->GetResponseBody();
        Aws::StringStream ss;
        ss << "Failed to flush response stream (eof: " << ref.eof() << ", bad: " << ref.bad() << ")";
        response->SetClientErrorType(CoreErrors::INTERNAL_FAILURE);
        response->SetClientErrorMessage(ss.str());
        AWS_LOGSTREAM_ERROR(CURL_HTTP_CLIENT_TAG, ss.str());
    }
    request->AddRequestMetric(GetHttpClientMetricNameByType(HttpClientMetricsType::RequestLatency),
                              (DateTime::Now() - pEasyHandleCtx->startTransmissionTime).count());

    if (pEasyHandleCtx->m_curlHandleHeaders)
    {
        curl_slist_free_all(pEasyHandleCtx->m_curlHandleHeaders);
        pEasyHandleCtx->m_curlHandleHeaders = nullptr;
    }

    curl_multi_remove_handle(client->m_curlMultiHandleContainer.AccessCurlMultiHandle(), connectionHandle);

    std::shared_ptr<HttpResponse> res = std::move(pEasyHandleCtx->writeContext.m_response);
    pEasyHandleCtx->writeContext.m_response.reset();

    if (curlResponseCode != CURLE_OK)
    {
        client->m_curlMultiHandleContainer.DestroyCurlHandle(pEasyHandleCtx);
    }
    else
    {
        client->m_curlMultiHandleContainer.ReleaseCurlHandle(pEasyHandleCtx);
    }

    return res;
}

void CurlMultiHttpClient::SubmitTask(Curl::CurlEasyHandleContext* pEasyHandleCtx) const
{
    assert(pEasyHandleCtx);
    AWS_UNREFERENCED_PARAM(pEasyHandleCtx);
    {
      std::unique_lock<std::mutex> lock(m_tasksMutex);
      m_tasksQueued++;
    }
    {
      std::unique_lock<std::mutex> lockGuard(m_signalMutex);
      m_signalRunning.notify_one();
      curl_multi_wakeup(m_curlMultiHandleContainer.AccessCurlMultiHandle());
    }
}

// Blocking
std::shared_ptr<HttpResponse> CurlMultiHttpClient::MakeRequest(const std::shared_ptr<HttpRequest>& request,
    Aws::Utils::RateLimits::RateLimiterInterface* readLimiter,
    Aws::Utils::RateLimits::RateLimiterInterface* writeLimiter) const
{
    std::shared_ptr<HttpResponse> response = Aws::MakeShared<StandardHttpResponse>(CURL_HTTP_CLIENT_TAG, request);
    if(!response)
    {
        AWS_LOGSTREAM_ERROR(CURL_HTTP_CLIENT_TAG, "Failed to allocate shared_ptr<HttpResponse>");
        return response;
    }

    Curl::CurlEasyHandleContext* easyHandleContext = m_curlMultiHandleContainer.AcquireCurlHandle();
    if(!easyHandleContext)
    {
        response->SetClientErrorType(CoreErrors::NETWORK_CONNECTION);
        response->SetClientErrorMessage("Failed to Acquire curl handle");
        AWS_LOGSTREAM_ERROR(CURL_HTTP_CLIENT_TAG, "Failed to Acquire curl handle");
        return response;
    }

    AWS_LOGSTREAM_DEBUG(CURL_HTTP_CLIENT_TAG, "Obtained connection handle " << easyHandleContext);

    std::mutex taskMutex;
    std::condition_variable signal;
    bool completed = false;
    auto onDone = [&signal, &taskMutex, &completed]()
      {
        std::unique_lock<std::mutex> lockGuard(taskMutex);
        completed = true;
        signal.notify_one();
      };

    ConfigureEasyHandle(this, m_config, onDone, easyHandleContext, request.get(), response, readLimiter, writeLimiter);
    OverrideOptionsOnConnectionHandle(easyHandleContext->m_curlEasyHandle);

    easyHandleContext->startTransmissionTime = Aws::Utils::DateTime::Now();

    CURLMcode curlMultiResponseCode = curl_multi_add_handle(m_curlMultiHandleContainer.AccessCurlMultiHandle(),
                                                            easyHandleContext->m_curlEasyHandle);
    if (CURLM_OK != curlMultiResponseCode)
    {
        response->SetClientErrorType(CoreErrors::NETWORK_CONNECTION);
        response->SetClientErrorMessage("Failed to add curl_easy_handle to curl_multi_handle.");
        AWS_LOGSTREAM_ERROR(CURL_HTTP_CLIENT_TAG, "Failed to add curl_easy_handle to curl_multi_handle.");
        return response;
    }

    SubmitTask(easyHandleContext);

    // Task submitted, wait for it's completion
    std::unique_lock<std::mutex> lockGuard(taskMutex);
    signal.wait(lockGuard,
                [this, &completed]
                {
                  return !this->m_isRunning.load() || completed;
                });

    // This is a blocking mode, handle response within the submitter thread
    return HandleCurlResponse(easyHandleContext);
}
