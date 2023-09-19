/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/ResourceManager.h>
#include <aws/core/http/Version.h>

#include <utility>
#include <curl/curl.h>

namespace Aws
{
namespace Utils
{
namespace RateLimits
{
    class RateLimiterInterface;
}
}

namespace Http
{
    class CurlMultiHttpClient;
    class HttpRequest;
    class HttpResponse;

    namespace Curl
    {
        enum class ExecutionPolicy
        {
            BLOCKING,
            ASYNC
        };

        /* A composition wrapper on curl easy handle to have curl handle and SDK context together*/
        struct CurlEasyHandleContext final
        {
            struct WriteContext final
            {
                WriteContext() = default;

                bool m_HasBody = false;
                HttpRequest *m_request = nullptr;
                std::shared_ptr<HttpResponse> m_response;
                Aws::Utils::RateLimits::RateLimiterInterface *m_rateLimiter = nullptr;
                int64_t m_numBytesResponseReceived = 0;
            };

            struct ReadContext final
            {
                ReadContext() = default;

                Aws::Utils::RateLimits::RateLimiterInterface *m_rateLimiter = nullptr;
                HttpRequest *m_request = nullptr;
                bool m_chunkEnd = false;
            };

            CurlEasyHandleContext() = default;

            /* Curl side */
            CURL* m_curlEasyHandle = nullptr;
            // headers set on curl handle, to be cleaned up by SDK after the execution
            curl_slist* m_curlHandleHeaders = nullptr;

            /* SDK side */
            const CurlMultiHttpClient* m_client = nullptr;
            ExecutionPolicy m_execPolicy;
            std::function<void()> m_onCurlDoneFn;
            Aws::Utils::DateTime startTransmissionTime;

            /* Curl calls the SDK back */
            WriteContext writeContext;
            ReadContext readContext;

            /* SDK polls the curl result */
            CURLcode curlResult;
            // ptr acquired by curl_multi_info_read, free-ed by curl in easy handle cleanup, do not free in SDK
            CURLMsg* curlResultMsg = nullptr;

            /* callbacks set on easy handle */
            static size_t WriteData(char* ptr, size_t size, size_t nmemb, void* userdata);
            static size_t WriteHeader(char* ptr, size_t size, size_t nmemb, void* userdata);
            static size_t ReadBody(char* ptr, size_t size, size_t nmemb, void* userdata, bool isStreaming);
            static size_t ReadBodyStreaming(char* ptr, size_t size, size_t nmemb, void* userdata);
            static size_t ReadBodyFunc(char* ptr, size_t size, size_t nmemb, void* userdata);
            static size_t SeekBody(void* userdata, curl_off_t offset, int origin);
#if LIBCURL_VERSION_NUM >= 0x072000 // 7.32.0
            static int CurlProgressCallback(void *userdata, curl_off_t, curl_off_t, curl_off_t, curl_off_t);
#else
            static int CurlProgressCallback(void *userdata, double, double, double, double);
#endif
        };
    } // namespace Curl
} // namespace Http
} // namespace Aws