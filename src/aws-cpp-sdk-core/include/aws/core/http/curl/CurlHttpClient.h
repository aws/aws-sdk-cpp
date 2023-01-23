/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/curl/CurlHandleContainer.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <atomic>

namespace Aws
{
namespace Http
{
namespace Standard
{
    class StandardHttpResponse;
}

//Curl implementation of an http client. Right now it is only synchronous.
class AWS_CORE_API CurlHttpClient: public HttpClient
{
public:

    using Base = HttpClient;

    //Creates client, initializes curl handle if it hasn't been created already.
    CurlHttpClient(const Aws::Client::ClientConfiguration& clientConfig);

    //Makes request and receives response synchronously
    std::shared_ptr<HttpResponse> MakeRequest(const std::shared_ptr<HttpRequest>& request,
        Aws::Utils::RateLimits::RateLimiterInterface* readLimiter = nullptr,
        Aws::Utils::RateLimits::RateLimiterInterface* writeLimiter = nullptr) const override;

    static void InitGlobalState();
    static void CleanupGlobalState();

protected:
    /**
     * Override any configuration on CURL handle for each request before sending.
     * The usage is to have a subclass of CurlHttpClient and have your own implementation of this function to configure whatever you want on CURL handle.
     */
    virtual void OverrideOptionsOnConnectionHandle(CURL*) const {}

private:
    mutable CurlHandleContainer m_curlHandleContainer;
    bool m_isUsingProxy;
    Aws::String m_proxyUserName;
    Aws::String m_proxyPassword;
    Aws::String m_proxyScheme;
    Aws::String m_proxyHost;
    Aws::String m_proxySSLCertPath;
    Aws::String m_proxySSLCertType;
    Aws::String m_proxySSLKeyPath;
    Aws::String m_proxySSLKeyType;
    Aws::String m_proxyKeyPasswd;
    unsigned m_proxyPort;
    Aws::String m_nonProxyHosts;
    bool m_verifySSL;
    Aws::String m_caPath;
    Aws::String m_caFile;
    bool m_disableExpectHeader;
    bool m_allowRedirects;
    static std::atomic<bool> isInit;
};

using PlatformHttpClient = CurlHttpClient;

} // namespace Http
} // namespace Aws

