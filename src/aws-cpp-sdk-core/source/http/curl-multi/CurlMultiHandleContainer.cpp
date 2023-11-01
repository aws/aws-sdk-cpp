/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/curl-multi/CurlMultiHandleContainer.h>
#include <aws/core/http/curl-multi/CurlEasyHandleContext.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <algorithm>

namespace Aws
{
namespace Http
{
namespace Curl
{

static const char* CURL_HANDLE_CONTAINER_TAG = "CurlMultiHandleContainer";


CurlMultiHandleContainer::CurlMultiHandleContainer(unsigned maxSize,
                                                   long httpRequestTimeout,
                                                   long connectTimeout,
                                                   bool enableTcpKeepAlive,
                                                   unsigned long tcpKeepAliveIntervalMs,
                                                   long lowSpeedTime,
                                                   unsigned long lowSpeedLimit,
                                                   Version version) :
                m_maxPoolSize(maxSize), m_httpRequestTimeout(httpRequestTimeout), m_connectTimeout(connectTimeout), m_enableTcpKeepAlive(enableTcpKeepAlive),
                m_tcpKeepAliveIntervalMs(tcpKeepAliveIntervalMs), m_lowSpeedTime(lowSpeedTime), m_lowSpeedLimit(lowSpeedLimit), m_poolSize(0),
                m_version(version)
{
    AWS_LOGSTREAM_INFO(CURL_HANDLE_CONTAINER_TAG, "Initializing CurlMultiHandleContainer with size " << maxSize);

    m_curlMultiHandle = curl_multi_init();
    assert(m_curlMultiHandle);
    if(!m_curlMultiHandle)
    {
        AWS_LOGSTREAM_ERROR(CURL_HANDLE_CONTAINER_TAG, "curl_multi_init failed.");
        return;
    }
    curl_multi_setopt(m_curlMultiHandle, CURLMOPT_MAXCONNECTS, m_maxPoolSize);
    AWS_LOGSTREAM_INFO(CURL_HANDLE_CONTAINER_TAG, "Initialized curl multi handle " << m_curlMultiHandle);
}

CurlMultiHandleContainer::~CurlMultiHandleContainer()
{
    AWS_LOGSTREAM_INFO(CURL_HANDLE_CONTAINER_TAG, "Cleaning up CurlMultiHandleContainer.");
    for (CurlEasyHandleContext* easyHandleContext : m_handleContainer.ShutdownAndWait(m_poolSize))
    {
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Cleaning up " << easyHandleContext->m_curlEasyHandle);
        assert(easyHandleContext->m_curlEasyHandle);
        curl_easy_cleanup(easyHandleContext->m_curlEasyHandle);

        Aws::Delete(easyHandleContext);
    }

    if(m_curlMultiHandle)
    {
        AWS_LOGSTREAM_INFO(CURL_HANDLE_CONTAINER_TAG, "Cleaning up curl multi handdle" << m_curlMultiHandle);
        curl_multi_cleanup(m_curlMultiHandle);
        m_curlMultiHandle = nullptr;
    }
}

CurlEasyHandleContext* CurlMultiHandleContainer::TryAcquireCurlHandle()
{
    AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Attempting to acquire curl easy handle.");

    if(!m_handleContainer.HasResourcesAvailable())
    {
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "No current connections available in pool. Attempting to create new connections.");
        CheckAndGrowPool();
    }

    CurlEasyHandleContext* handle = nullptr;
    if(m_handleContainer.TryAcquire(handle))
    {
      AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Returning connection handle " << handle);
    } else {
      AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "No connection handle available");
    }

    return handle;
}

CurlEasyHandleContext* CurlMultiHandleContainer::AcquireCurlHandle()
{
    AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Attempting to acquire curl easy handle.");

    if(!m_handleContainer.HasResourcesAvailable())
    {
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "No current connections available in pool. Attempting to create new connections.");
        CheckAndGrowPool();
    }

    CurlEasyHandleContext* handle = m_handleContainer.Acquire();
    AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Connection has been released. Continuing.");
    AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Returning connection handle " << handle);
    return handle;
}

void CurlMultiHandleContainer::ReleaseCurlHandle(CurlEasyHandleContext* handleCtx)
{
    CURL* handle = handleCtx ? handleCtx->m_curlEasyHandle : nullptr;
    if (handle)
    {
#if LIBCURL_VERSION_NUM >= 0x074D00 // 7.77.0
        curl_easy_setopt(handle, CURLOPT_COOKIEFILE, NULL); // workaround a mem leak on curl
#endif
        curl_easy_reset(handle);
        SetDefaultOptionsOnHandle(*handleCtx);
        curl_easy_setopt(handle, CURLOPT_PRIVATE, handleCtx);
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Releasing curl handle " << handle);
        m_handleContainer.Release(handleCtx);
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Notified waiting threads.");
    }
}

void CurlMultiHandleContainer::DestroyCurlHandle(CurlEasyHandleContext* handleCtx)
{
    if(handleCtx && handleCtx->m_curlEasyHandle)
    {
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Destroy curl handle: " << handleCtx->m_curlEasyHandle);
        curl_easy_cleanup(handleCtx->m_curlEasyHandle);
        handleCtx->m_curlEasyHandle = nullptr;
        Aws::Delete(handleCtx);
        handleCtx = nullptr;
    }

    {
        std::lock_guard<std::mutex> locker(m_containerLock);
        // Other threads could be blocked and waiting on m_handleContainer.Acquire()
        // If the handle is not released back to the pool, it could create a deadlock
        // Create a new handle and release that into the pool
        handleCtx = CreateCurlHandleInPool();
    }
    if (handleCtx)
    {
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Created replacement handle and released to pool: " << handleCtx->m_curlEasyHandle);
    }
}

CurlEasyHandleContext* CurlMultiHandleContainer::ResetCurlHandle(CurlEasyHandleContext* handleCtx, const CURLcode code)
{
  if (code != CURLE_OK)
  {
    if(handleCtx && handleCtx->m_curlEasyHandle)
    {
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Destroy curl handle: " << handleCtx->m_curlEasyHandle);
        curl_easy_cleanup(handleCtx->m_curlEasyHandle);
        handleCtx->m_curlEasyHandle = nullptr;
        Aws::Delete(handleCtx);
        handleCtx = nullptr;
    }

    {
        std::lock_guard<std::mutex> locker(m_containerLock);
        handleCtx = CreateCurlHandleInPool(false);
    }
    if (handleCtx)
    {
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Created replacement handle: " << handleCtx->m_curlEasyHandle);
    }
  }
  else
  {
    CURL* handle = handleCtx ? handleCtx->m_curlEasyHandle : nullptr;
    if (handle)
    {
#if LIBCURL_VERSION_NUM >= 0x074D00 // 7.77.0
        curl_easy_setopt(handle, CURLOPT_COOKIEFILE, NULL); // workaround a mem leak on curl
#endif
        curl_easy_reset(handle);
        SetDefaultOptionsOnHandle(*handleCtx);
        curl_easy_setopt(handle, CURLOPT_PRIVATE, handleCtx);
    }
  }
  return handleCtx;
}

CurlEasyHandleContext* CurlMultiHandleContainer::CreateCurlHandleInPool(bool release /* = true */)
{
    CurlEasyHandleContext* handleCtx = Aws::New<CurlEasyHandleContext>(CURL_HANDLE_CONTAINER_TAG);
    if(!handleCtx)
    {
      assert(handleCtx);
      AWS_LOGSTREAM_ERROR(CURL_HANDLE_CONTAINER_TAG, "curl_easy_init failed to allocate.");
      return nullptr;
    }

    handleCtx->m_curlEasyHandle = curl_easy_init();

    if (handleCtx->m_curlEasyHandle)
    {
        SetDefaultOptionsOnHandle(*handleCtx);
        curl_easy_setopt(handleCtx->m_curlEasyHandle, CURLOPT_PRIVATE, handleCtx);
        if (release) {
          m_handleContainer.Release(handleCtx);
        }
    }
    else
    {
        AWS_LOGSTREAM_ERROR(CURL_HANDLE_CONTAINER_TAG, "curl_easy_init failed to allocate.");
    }
    return handleCtx;
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

void CurlMultiHandleContainer::SetDefaultOptionsOnHandle(CurlEasyHandleContext& handleCtx)
{
    CURL* handle = handleCtx.m_curlEasyHandle;
    assert(handle);
    if(handle) {
      handleCtx.writeContext.m_HasBody = false;
      handleCtx.writeContext.m_request = nullptr;
      handleCtx.writeContext.m_rateLimiter = nullptr;
      handleCtx.writeContext.m_numBytesResponseReceived = 0;

      handleCtx.readContext.m_rateLimiter = 0;
      handleCtx.readContext.m_request = 0;
      handleCtx.readContext.m_chunkEnd = false;
      if (handleCtx.m_curlHandleHeaders)
      {
        curl_slist_free_all(handleCtx.m_curlHandleHeaders);
        handleCtx.m_curlHandleHeaders = nullptr;
      }
      handleCtx.curlResult = CURLE_FAILED_INIT;
      handleCtx.curlResultMsg = nullptr;

      //for timeouts to work in a multi-threaded context,
      //always turn signals off. This also forces dns queries to
      //not be included in the timeout calculations.
      curl_easy_setopt(handle, CURLOPT_NOSIGNAL, 1L);
      curl_easy_setopt(handle, CURLOPT_TIMEOUT_MS, m_httpRequestTimeout);
      curl_easy_setopt(handle, CURLOPT_CONNECTTIMEOUT_MS, m_connectTimeout);
      curl_easy_setopt(handle, CURLOPT_LOW_SPEED_LIMIT, m_lowSpeedLimit);
      curl_easy_setopt(handle, CURLOPT_LOW_SPEED_TIME,
                       m_lowSpeedTime < 1000 ? (m_lowSpeedTime == 0 ? 0 : 1) : m_lowSpeedTime / 1000);
      curl_easy_setopt(handle, CURLOPT_TCP_KEEPALIVE, m_enableTcpKeepAlive ? 1L : 0L);
      curl_easy_setopt(handle, CURLOPT_TCP_KEEPINTVL, m_tcpKeepAliveIntervalMs / 1000);
      curl_easy_setopt(handle, CURLOPT_TCP_KEEPIDLE, m_tcpKeepAliveIntervalMs / 1000);
      curl_easy_setopt(handle, CURLOPT_HTTP_VERSION, ConvertHttpVersion(m_version));

      // Set callbacks and their context
      // Curl to SDK write
      curl_easy_setopt(handle, CURLOPT_WRITEFUNCTION, CurlEasyHandleContext::WriteData);
      curl_easy_setopt(handle, CURLOPT_WRITEDATA, &handleCtx);
      curl_easy_setopt(handle, CURLOPT_HEADERFUNCTION, CurlEasyHandleContext::WriteHeader);
      curl_easy_setopt(handle, CURLOPT_HEADERDATA, &handleCtx);
      // SDK to Curl default (non streaming) read
      curl_easy_setopt(handle, CURLOPT_READFUNCTION, CurlEasyHandleContext::ReadBodyFunc);
      curl_easy_setopt(handle, CURLOPT_READDATA, &handleCtx);
      curl_easy_setopt(handle, CURLOPT_SEEKFUNCTION, CurlEasyHandleContext::SeekBody);
      curl_easy_setopt(handle, CURLOPT_SEEKDATA, &handleCtx);

      // enable the cookie engine without reading any initial cookies.
      curl_easy_setopt(handle, CURLOPT_COOKIEFILE, "");
    }
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

} // namespace Curl
} // namespace Http
} // namespace Aws