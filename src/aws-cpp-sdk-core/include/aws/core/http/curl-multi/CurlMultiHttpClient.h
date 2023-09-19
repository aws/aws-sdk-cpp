/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/curl-multi/CurlMultiHandleContainer.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSQueue.h>
#include <atomic>
#include <thread>
#include <queue>

namespace Aws
{
namespace Http
{
namespace Curl
{
    struct CurlEasyHandleContext;
}
namespace Standard
{
    class StandardHttpResponse;
}

//Curl implementation of an http client. Right now it is only synchronous.
class AWS_CORE_API CurlMultiHttpClient: public HttpClient
{
public:
    struct CurlMultiHttpClientConfig
    {
        struct ProxyConfig
        {
            bool isEnabled = false;
            Aws::String userName;
            Aws::String password;
            Aws::String scheme;
            Aws::String host;
            Aws::String sslCertPath;
            Aws::String sslCertType;
            Aws::String sslKeyPath;
            Aws::String sslKeyType;
            Aws::String keyPasswd;
            unsigned port = 0;
            Aws::String nonProxyHosts;
        };

        struct SslConfig
        {
            bool verifySSL = true;
            Aws::String caPath;
            Aws::String caFile;
        };

        ProxyConfig proxyConfig;
        SslConfig sslConfig;

        bool disableExpectHeader = false;
        bool allowRedirects = false;
    };
    using Base = HttpClient;

    //Creates client, initializes curl handle if it hasn't been created already.
    CurlMultiHttpClient(const Aws::Client::ClientConfiguration& clientConfig);
    virtual ~CurlMultiHttpClient();

    //Makes request and receives response synchronously
    std::shared_ptr<HttpResponse> MakeRequest(const std::shared_ptr<HttpRequest>& request,
        Aws::Utils::RateLimits::RateLimiterInterface* readLimiter = nullptr,
        Aws::Utils::RateLimits::RateLimiterInterface* writeLimiter = nullptr) const override;

    static void InitGlobalState();
    static void CleanupGlobalState();

protected:
    /**
     * Override any configuration on CURL handle for each request before sending.
     * The usage is to have a subclass of CurlMultiHttpClient and have your own implementation of this function to configure whatever you want on CURL handle.
     */
    virtual void OverrideOptionsOnConnectionHandle(CURL*) const {}

private:
    void SubmitTask(Curl::CurlEasyHandleContext* pEasyHandleCtx) const;

    static std::shared_ptr<HttpResponse> HandleCurlResponse(Curl::CurlEasyHandleContext* pEasyHandleCtx);
    static void CurlMultiPerformThread(CurlMultiHttpClient* pClient);

    std::thread m_multiHandleThread;
    std::atomic<bool> m_isRunning;
    mutable std::mutex m_signalMutex;
    mutable std::condition_variable m_signalRunning;

    // mutable std::mutex m_tasksMutex;
    mutable std::atomic<size_t> m_tasksQueued;
    mutable std::mutex m_tasksMutex;
    mutable Aws::UnorderedMap<CURL*, std::shared_ptr<Curl::CurlEasyHandleContext>> m_tasks;

    CurlMultiHttpClientConfig m_config;

    mutable Curl::CurlMultiHandleContainer m_curlMultiHandleContainer;

    static std::atomic<bool> isGlobalStateInit;
    std::shared_ptr<smithy::components::tracing::TelemetryProvider> m_telemetryProvider;
};

} // namespace Http
} // namespace Aws

