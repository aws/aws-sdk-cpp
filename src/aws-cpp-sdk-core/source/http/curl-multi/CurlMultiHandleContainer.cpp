/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/curl-multi/CurlMultiHandleContainer.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <algorithm>

using namespace Aws::Utils::Logging;
using namespace Aws::Http;

static const char* CURL_HANDLE_CONTAINER_TAG = "CurlMultiHandleContainer";


CurlMultiHandleContainer::CurlMultiHandleContainer(unsigned maxSize, long httpRequestTimeout, long connectTimeout, bool enableTcpKeepAlive,
                                        unsigned long tcpKeepAliveIntervalMs, long lowSpeedTime, unsigned long lowSpeedLimit,
                                        Version version) :
                m_maxPoolSize(maxSize), m_httpRequestTimeout(httpRequestTimeout), m_connectTimeout(connectTimeout), m_enableTcpKeepAlive(enableTcpKeepAlive),
                m_tcpKeepAliveIntervalMs(tcpKeepAliveIntervalMs), m_lowSpeedTime(lowSpeedTime), m_lowSpeedLimit(lowSpeedLimit), m_poolSize(0),
                m_version(version)
{
    AWS_LOGSTREAM_INFO(CURL_HANDLE_CONTAINER_TAG, "Initializing CurlMultiHandleContainer with size " << maxSize);

    this->m_curlMultiHandle = curl_multi_init();
    AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "CURLMOPT_MAXCONNECTS = " << m_maxPoolSize);
    curl_multi_setopt(this->m_curlMultiHandle, CURLMOPT_MAXCONNECTS, m_maxPoolSize);
//    this->m_curlShare = curl_share_init();
//    CURLSHcode curlShareCode = curl_share_setopt(this->m_curlShare, CURLSHOPT_SHARE, CURL_LOCK_DATA_COOKIE);
//    curlShareCode = curl_share_setopt(this->m_curlShare, CURLSHOPT_SHARE, CURL_LOCK_DATA_SSL_SESSION);
//    assert(curlShareCode == CURLSHE_OK);
//    AWS_LOGSTREAM_INFO(CURL_HANDLE_CONTAINER_TAG, "Enabled CURLSHOPT_SHARE CURL_LOCK_DATA_SSL_SESSION");
}

CurlMultiHandleContainer::~CurlMultiHandleContainer()
{
    AWS_LOGSTREAM_INFO(CURL_HANDLE_CONTAINER_TAG, "Cleaning up CurlMultiHandleContainer.");
    for (CURL* handle : m_handleContainer.ShutdownAndWait(m_poolSize))
    {
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Cleaning up " << handle);
        curl_easy_cleanup(handle);
    }

    curl_multi_cleanup(m_curlMultiHandle);
    m_curlMultiHandle = nullptr;
//    curl_share_cleanup(m_curlShare);
//    m_curlShare = nullptr;
}

CURL* CurlMultiHandleContainer::AcquireCurlHandle()
{
    AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Attempting to acquire curl easy handle.");

    if(!m_handleContainer.HasResourcesAvailable())
    {
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "No current connections available in pool. Attempting to create new connections.");
        CheckAndGrowPool();
    }

    CURL* handle = m_handleContainer.Acquire();
    AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Connection has been released. Continuing.");
    AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Returning connection handle " << handle);
    return handle;
}

void CurlMultiHandleContainer::ReleaseCurlHandle(CURL* handle)
{
    if (handle)
    {
#if LIBCURL_VERSION_NUM >= 0x074D00 // 7.77.0
        curl_easy_setopt(handle, CURLOPT_COOKIEFILE, NULL); // workaround a mem leak on curl
#endif
        curl_easy_reset(handle);
        SetDefaultOptionsOnHandle(handle);
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Releasing curl handle " << handle);
        m_handleContainer.Release(handle);
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Notified waiting threads.");
    }
}

void CurlMultiHandleContainer::DestroyCurlHandle(CURL* handle)
{
    if (!handle)
    {
        return;
    }

    curl_easy_cleanup(handle);
    AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Destroy curl handle: " << handle);
    {
        std::lock_guard<std::mutex> locker(m_containerLock);
        // Other threads could be blocked and waiting on m_handleContainer.Acquire()
        // If the handle is not released back to the pool, it could create a deadlock
        // Create a new handle and release that into the pool
        handle = CreateCurlHandleInPool();
    }
    if (handle)
    {
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Created replacement handle and released to pool: " << handle);
    }
}


CURL* CurlMultiHandleContainer::CreateCurlHandleInPool()
{
    CURL* curlHandle = curl_easy_init();

    if (curlHandle)
    {
        SetDefaultOptionsOnHandle(curlHandle);
        m_handleContainer.Release(curlHandle);
    }
    else
    {
        AWS_LOGSTREAM_ERROR(CURL_HANDLE_CONTAINER_TAG, "curl_easy_init failed to allocate.");
    }
    return curlHandle;
}

bool CurlMultiHandleContainer::CheckAndGrowPool()
{
    std::lock_guard<std::mutex> locker(m_containerLock);
    if (m_poolSize < m_maxPoolSize)
    {
        unsigned multiplier = m_poolSize > 0 ? m_poolSize : 1;
        unsigned amountToAdd = (std::min)(multiplier * 2, m_maxPoolSize - m_poolSize);
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "attempting to grow pool size by " << amountToAdd);

        unsigned actuallyAdded = 0;
        for (unsigned i = 0; i < amountToAdd; ++i)
        {
            CURL* curlHandle = CreateCurlHandleInPool();

            if (curlHandle)
            {
                ++actuallyAdded;
            }
            else
            {
                break;
            }
        }

        AWS_LOGSTREAM_INFO(CURL_HANDLE_CONTAINER_TAG, "Pool grown by " << actuallyAdded);
        m_poolSize += actuallyAdded;

        return actuallyAdded > 0;
    }

    AWS_LOGSTREAM_INFO(CURL_HANDLE_CONTAINER_TAG, "Pool cannot be grown any further, already at max size.");

    return false;
}

void CurlMultiHandleContainer::SetDefaultOptionsOnHandle(CURL* handle)
{
    //for timeouts to work in a multi-threaded context,
    //always turn signals off. This also forces dns queries to
    //not be included in the timeout calculations.
    curl_easy_setopt(handle, CURLOPT_NOSIGNAL, 1L);
    curl_easy_setopt(handle, CURLOPT_TIMEOUT_MS, m_httpRequestTimeout);
    curl_easy_setopt(handle, CURLOPT_CONNECTTIMEOUT_MS, m_connectTimeout);
    curl_easy_setopt(handle, CURLOPT_LOW_SPEED_LIMIT, m_lowSpeedLimit);
    curl_easy_setopt(handle, CURLOPT_LOW_SPEED_TIME, m_lowSpeedTime < 1000 ? (m_lowSpeedTime == 0 ? 0 : 1) : m_lowSpeedTime / 1000);
    curl_easy_setopt(handle, CURLOPT_TCP_KEEPALIVE, m_enableTcpKeepAlive ? 1L : 0L);
    curl_easy_setopt(handle, CURLOPT_TCP_KEEPINTVL, m_tcpKeepAliveIntervalMs / 1000);
    curl_easy_setopt(handle, CURLOPT_TCP_KEEPIDLE, m_tcpKeepAliveIntervalMs / 1000);
    curl_easy_setopt(handle, CURLOPT_HTTP_VERSION, ConvertHttpVersion(m_version));
}

long CurlMultiHandleContainer::ConvertHttpVersion(Version version) {
    if (version == Version::HTTP_VERSION_NONE)
    {
        return CURL_HTTP_VERSION_NONE;
    }
    else if (version == Version::HTTP_VERSION_1_0)
    {
        return CURL_HTTP_VERSION_1_0;
    }
    else if (version == Version::HTTP_VERSION_1_1)
    {
        return CURL_HTTP_VERSION_1_1;
    }
#if LIBCURL_VERSION_NUM >= 0x072100 // 7.33.0
    else if (version == Version::HTTP_VERSION_2_0)
    {
        return CURL_HTTP_VERSION_2_0;
    }
#endif
#if LIBCURL_VERSION_NUM >= 0x072F00 // 7.47.0
    else if (version == Version::HTTP_VERSION_2TLS)
    {
        return CURL_HTTP_VERSION_2TLS;
    }
#endif
#if LIBCURL_VERSION_NUM >= 0x073100 // 7.49.0
    else if (version == Version::HTTP_VERSION_2_PRIOR_KNOWLEDGE)
    {
        return CURL_HTTP_VERSION_2_PRIOR_KNOWLEDGE;
    }
#endif
#if LIBCURL_VERSION_NUM >= 0x074200 // 7.66.0
    else if (version == Version::HTTP_VERSION_3)
    {
        return CURL_HTTP_VERSION_3;
    }
#endif
#if LIBCURL_VERSION_NUM >= 0x075800 // 7.88.0
    else if (version == Version::HTTP_VERSION_3ONLY)
    {
        return CURL_HTTP_VERSION_3ONLY;
    }
#endif
#if LIBCURL_VERSION_NUM >= 0x073E00 // 7.62.0
    return CURL_HTTP_VERSION_2TLS;
#else
    return CURL_HTTP_VERSION_1_1;
#endif
}
