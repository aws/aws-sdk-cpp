/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <limits>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AWSErrorMarshaller.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/client/DefaultRetryStrategy.h>
#include <aws/core/AmazonWebServiceRequest.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/Outcome.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <aws/core/client/AWSErrorMarshaller.h>


namespace Aws
{
    namespace Client
    {
        class RetryQuotaContainer;
    }
} 

class AmazonWebServiceRequestMock : public Aws::AmazonWebServiceRequest
{
public:
    AmazonWebServiceRequestMock() : m_shouldComputeMd5(false) { }
    std::shared_ptr<Aws::IOStream> GetBody() const override { return m_body; }
    void SetBody(const std::shared_ptr<Aws::IOStream>& body) { m_body = body; }
    Aws::Http::HeaderValueCollection GetHeaders() const override { return m_headers; }
    void SetHeaders(const Aws::Http::HeaderValueCollection& value) { m_headers = value; }
    bool ShouldComputeContentMd5() const override { return m_shouldComputeMd5; }
    void SetComputeContentMd5(bool value) { m_shouldComputeMd5 = value; }
    virtual const char* GetServiceRequestName() const override { return "AmazonWebServiceRequestMock"; }
    virtual bool HasEmbeddedError(Aws::IOStream& body, const Aws::Http::HeaderValueCollection& header) const override {
        (void) header;
        
        auto readPointer = body.tellg();

        std::stringstream ss;
        ss << body.rdbuf();

        body.seekg(readPointer);

        auto bodyString = ss.str();
        return bodyString.find("TestErrorInBodyOfResponse") != std::string::npos;
    }

private:
    std::shared_ptr<Aws::IOStream> m_body;
    Aws::Http::HeaderValueCollection m_headers;
    bool m_shouldComputeMd5;
};

class CountedRetryStrategy : public Aws::Client::DefaultRetryStrategy
{
public:
    CountedRetryStrategy()
        : Aws::Client::DefaultRetryStrategy(),
          m_attemptedRetries(0)
      {}
    CountedRetryStrategy(long maxRetires)
        : Aws::Client::DefaultRetryStrategy(maxRetires < 0 ? (std::numeric_limits<long>::max)() : maxRetires),
          m_attemptedRetries(0)
      {}

    bool ShouldRetry(const Aws::Client::AWSError<Aws::Client::CoreErrors>& error, long attemptedRetries) const override
    {
        if (attemptedRetries >= m_maxRetries)
        {
            return false;
        }
        if(Aws::Client::DefaultRetryStrategy::ShouldRetry(error, attemptedRetries))
        {
            m_attemptedRetries = attemptedRetries + 1;
            return true;
        }
        return false;
    }
    long GetAttemptedRetriesCount() { return m_attemptedRetries; }
    void ResetAttemptedRetriesCount() { m_attemptedRetries = 0; }
private:
    mutable long m_attemptedRetries;
};

class MockAWSErrorMarshaller : public Aws::Client::AWSErrorMarshaller
{
    using Aws::Client::AWSErrorMarshaller::Marshall;
public:
    Aws::Client::AWSError<Aws::Client::CoreErrors> Marshall(const Aws::Http::HttpResponse&) const override
    {
        return Aws::Client::AWSError<Aws::Client::CoreErrors>();
    }
};

class MockAWSClient : Aws::Client::AWSClient
{
public:

     MockAWSClient(const Aws::Client::ClientConfiguration& config, 
                  const std::shared_ptr<Aws::Client::AWSErrorMarshaller>& errorMarshaller
    ) : AWSClient(  config,
                    Aws::MakeShared<Aws::Client::AWSAuthV4Signer>("MockAWSClient",
                    Aws::MakeShared<Aws::Auth::SimpleAWSCredentialsProvider>("MockAWSClient", GetMockAccessKey(),
                    GetMockSecretAccessKey()), "service", config.region.empty() ? Aws::Region::US_EAST_1 : config.region),
                    errorMarshaller
                ),
                m_countedRetryStrategy(std::static_pointer_cast<CountedRetryStrategy>(config.retryStrategy)) { }


    MockAWSClient(const Aws::Client::ClientConfiguration& config) : MockAWSClient(config, 
                                                                            Aws::MakeShared<MockAWSErrorMarshaller>("MockAWSClient")){}
    

    Aws::Client::HttpResponseOutcome MakeRequest(const Aws::AmazonWebServiceRequest& request)
    {
        return MakeRequest("domain.com/something", request);
    }

    Aws::Client::HttpResponseOutcome MakeRequest(const Aws::Http::URI& uri, const Aws::AmazonWebServiceRequest& request)
    {
        m_countedRetryStrategy->ResetAttemptedRetriesCount();
        const auto method = Aws::Http::HttpMethod::HTTP_GET;
        Aws::Client::HttpResponseOutcome httpOutcome(Aws::Client::AWSClient::AttemptExhaustively(uri, request, method, Aws::Auth::SIGV4_SIGNER));
        return httpOutcome;
    }

    inline static const char* GetMockAccessKey() { return "AKIDEXAMPLE"; }
    inline static const char* GetMockSecretAccessKey() { return "wJalrXUtnFEMI/K7MDENG+bPxRfiCYEXAMPLEKEY"; }

    long GetRequestAttemptedRetries()
    {
        return m_countedRetryStrategy->GetAttemptedRetriesCount();
    }

    inline const char* GetServiceClientName() const override { return "MockAWSClient"; }

protected:
    std::shared_ptr<CountedRetryStrategy> m_countedRetryStrategy;
    Aws::Client::AWSError<Aws::Client::CoreErrors> BuildAWSError(const std::shared_ptr<Aws::Http::HttpResponse>& response) const override
    {
        if (response->GetResponseCode() == Aws::Http::HttpResponseCode::OK)
        {
            return { Aws::Client::CoreErrors::SLOW_DOWN, "TestErrorInBodyOfResponse", "TestErrorInBodyOfResponse", false };
        }
        Aws::Client::AWSError<Aws::Client::CoreErrors> error;
        if (response->HasClientError())
        {
            bool retryable = response->GetClientErrorType() == Aws::Client::CoreErrors::NETWORK_CONNECTION ? true : false;
            error = Aws::Client::AWSError<Aws::Client::CoreErrors>(response->GetClientErrorType(), "", response->GetClientErrorMessage(), retryable);
            return error;
        }
        error = Aws::Client::AWSError<Aws::Client::CoreErrors>(Aws::Client::CoreErrors::INVALID_ACTION, false);
        error.SetResponseHeaders(response->GetHeaders());
        error.SetResponseCode(response->GetResponseCode());
        error.SetRemoteHostIpAddress(response->GetOriginatingRequest().GetResolvedRemoteHost());
        return error;
    }
};

class CountedStandardRetryStrategy : public Aws::Client::StandardRetryStrategy
{
public:
    CountedStandardRetryStrategy(std::shared_ptr<Aws::Client::RetryQuotaContainer> retryQuotaContainer, long maxAttempts = 3) : Aws::Client::StandardRetryStrategy(retryQuotaContainer, maxAttempts), m_attemptedRetries(0) {}
    CountedStandardRetryStrategy(long maxAttempts = 3) : Aws::Client::StandardRetryStrategy(maxAttempts), m_attemptedRetries(0) {}

    bool ShouldRetry(const Aws::Client::AWSError<Aws::Client::CoreErrors>& error, long attemptedRetries) const override
    {
        if (Aws::Client::StandardRetryStrategy::ShouldRetry(error, attemptedRetries))
        {
            m_attemptedRetries ++;
            return true;
        }
        return false;
    }
    const std::shared_ptr<Aws::Client::RetryQuotaContainer>& GetRetryQuotaContainer() const
    {
       return m_retryQuotaContainer;
    }
    long GetRequestAttemptedRetries() { return m_attemptedRetries; }
    void ResetAttemptedRetriesCount() { m_attemptedRetries = 0; }
private:
    mutable long m_attemptedRetries;
};

class MockAWSClientWithStandardRetryStrategy : Aws::Client::AWSClient
{
public:
    MockAWSClientWithStandardRetryStrategy(const Aws::Client::ClientConfiguration& config) : Aws::Client::AWSClient(config,
            Aws::MakeShared<Aws::Client::AWSAuthV4Signer>("MockAWSClientWithStandardRetryStrategy",
                Aws::MakeShared<Aws::Auth::SimpleAWSCredentialsProvider>("MockAWSClientWithStandardRetryStrategy", GetMockAccessKey(),
                    GetMockSecretAccessKey()), "service", config.region.empty() ? Aws::Region::US_EAST_1 : config.region),
            Aws::MakeShared<MockAWSErrorMarshaller>("MockAWSClientWithStandardRetryStrategy")),
        m_countedRetryStrategy(std::static_pointer_cast<CountedStandardRetryStrategy>(config.retryStrategy)) { }

    Aws::Client::HttpResponseOutcome MakeRequest(const Aws::AmazonWebServiceRequest& request)
    {
        m_countedRetryStrategy->ResetAttemptedRetriesCount();
        const Aws::Http::URI uri("domain.com/something");
        const auto method = Aws::Http::HttpMethod::HTTP_GET;
        Aws::Client::HttpResponseOutcome httpOutcome(Aws::Client::AWSClient::AttemptExhaustively(uri, request, method, Aws::Auth::SIGV4_SIGNER));
        return httpOutcome;
    }

    inline static const char* GetMockAccessKey() { return "AKIDEXAMPLE"; }
    inline static const char* GetMockSecretAccessKey() { return "wJalrXUtnFEMI/K7MDENG+bPxRfiCYEXAMPLEKEY"; }

    const std::shared_ptr<Aws::Client::RetryQuotaContainer>& GetRetryQuotaContainer() const
    {
        return m_countedRetryStrategy->GetRetryQuotaContainer();
    }

    long GetRequestAttemptedRetries()
    {
        return m_countedRetryStrategy->GetRequestAttemptedRetries();
    }

    inline const char* GetServiceClientName() const override { return "MockAWSClientWithStandardRetryStrategy"; }

protected:
    std::shared_ptr<CountedStandardRetryStrategy> m_countedRetryStrategy;
    Aws::Client::AWSError<Aws::Client::CoreErrors> BuildAWSError(const std::shared_ptr<Aws::Http::HttpResponse>& response) const override
    {
        if (response->HasClientError())
        {
            auto err = Aws::Client::AWSError<Aws::Client::CoreErrors>(response->GetClientErrorType(), "", response->GetClientErrorMessage(), true);
            err.SetResponseCode(Aws::Http::HttpResponseCode::INTERNAL_SERVER_ERROR);
            return err;
        }
        auto err = Aws::Client::AWSError<Aws::Client::CoreErrors>(Aws::Client::CoreErrors::INVALID_ACTION, false);
        err.SetResponseHeaders(response->GetHeaders());
        err.SetResponseCode(response->GetResponseCode());
        return err;
    }
};
