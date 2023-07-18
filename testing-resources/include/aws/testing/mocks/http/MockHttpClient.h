/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <assert.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/URI.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSQueue.h>

static const char MockHttpAllocationTag[] = "MockHttp";

class MockHttpClient : public Aws::Http::HttpClient
{
public:
    std::shared_ptr<Aws::Http::HttpResponse> MakeRequest(const std::shared_ptr<Aws::Http::HttpRequest>& request,
                                                         Aws::Utils::RateLimits::RateLimiterInterface* readLimiter = nullptr,
                                                         Aws::Utils::RateLimits::RateLimiterInterface* writeLimiter = nullptr) const override
    {
        AWS_UNREFERENCED_PARAM(readLimiter);
        AWS_UNREFERENCED_PARAM(writeLimiter);

        request->SetResolvedRemoteHost("127.0.0.1");
        //note that the mock client factory logically enforces type safety here.
        m_requestsMade.push_back(static_cast<const Aws::Http::Standard::StandardHttpRequest&>(*request));

        if (m_responsesToUse.size() > 0)
        {
            std::shared_ptr<Aws::Http::HttpResponse> responseToUse = m_responsesToUse.front();
            m_responsesToUse.pop();
            if (responseToUse)
            {
                responseToUse->SetOriginatingRequest(request);
            }
            return responseToUse;
        }
        return Aws::MakeShared<Aws::Http::Standard::StandardHttpResponse>(MockHttpAllocationTag, request);
    }

    const Aws::Http::Standard::StandardHttpRequest& GetMostRecentHttpRequest() const
    {
        assert(!m_requestsMade.empty());
        return m_requestsMade.back();
    }
    const Aws::Vector<Aws::Http::Standard::StandardHttpRequest>& GetAllRequestsMade() const { return m_requestsMade; }

    //these will be cleaned up by the aws client, so if you are testing an aws client, don't worry about freeing the memory
    //when you are finished.
    void AddResponseToReturn(const std::shared_ptr<Aws::Http::HttpResponse>& response) { m_responsesToUse.push(response); }

    void Reset()
    {
        m_requestsMade.clear();
        Aws::Queue<std::shared_ptr<Aws::Http::HttpResponse> > empty;
        std::swap(m_responsesToUse, empty);
    }

private:
    mutable Aws::Vector<Aws::Http::Standard::StandardHttpRequest> m_requestsMade;
    mutable Aws::Queue< std::shared_ptr<Aws::Http::HttpResponse> > m_responsesToUse;
};

class MockHttpClientFactory : public Aws::Http::HttpClientFactory
{
public:
    virtual std::shared_ptr<Aws::Http::HttpClient> CreateHttpClient(const Aws::Client::ClientConfiguration& clientConfiguration) const override
    {
        AWS_UNREFERENCED_PARAM(clientConfiguration);
        return m_clientToUse;
    }

    virtual std::shared_ptr<Aws::Http::HttpRequest> CreateHttpRequest(const Aws::String& uri, Aws::Http::HttpMethod method, const Aws::IOStreamFactory& streamFactory) const override
    {
        auto request = Aws::MakeShared<Aws::Http::Standard::StandardHttpRequest>(MockHttpAllocationTag, uri, method);
        request->SetResponseStreamFactory(streamFactory);

        return request;
    }

    virtual std::shared_ptr<Aws::Http::HttpRequest> CreateHttpRequest(const Aws::Http::URI& uri, Aws::Http::HttpMethod method, const Aws::IOStreamFactory& streamFactory) const override
    {
        auto request = Aws::MakeShared<Aws::Http::Standard::StandardHttpRequest>(MockHttpAllocationTag, uri, method);
        request->SetResponseStreamFactory(streamFactory);

        return request;
    }

    inline MockHttpClient& GetClient() const { return *m_clientToUse; }
    //Do not clean the client up when you are finished. The aws clients all delete their http client
    //upon finishing.
    inline void SetClient(const std::shared_ptr<MockHttpClient>& client) { m_clientToUse = client; }

private:
    std::shared_ptr<MockHttpClient> m_clientToUse;
};
