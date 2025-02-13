/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/auth/AuthSchemeOption.h>
#include <smithy/identity/identity/AwsIdentity.h>
#include <smithy/tracing/TelemetryProvider.h>
#include <smithy/interceptor/Interceptor.h>
#include <smithy/client/features/ChecksumInterceptor.h>
#include <smithy/client/features/UserAgentInterceptor.h>

#include <aws/crt/Variant.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/FutureOutcome.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/client/AWSErrorMarshaller.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <utility>

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
        class HttpClient;
    }

    namespace Client
    {
        class AWSErrorMarshaller;
        class RetryStrategy;
    }

    namespace Utils
    {
        namespace Threading
        {
            class Executor;
        }
    }

    class AmazonWebServiceRequest;
}

namespace Aws
{
    namespace Endpoint
    {
        class AWSEndpoint;
    }
}

namespace smithy {
namespace client
{
    class AwsSmithyClientAsyncRequestContext;
    /* Non-template base client class that contains main Aws Client Request pipeline logic */
    class SMITHY_API AwsSmithyClientBase
    {
    public:
        using HttpRequest = Aws::Http::HttpRequest;
        using HttpResponse = Aws::Http::HttpResponse;
        using CoreErrors = Aws::Client::CoreErrors;
        using AWSError = Aws::Client::AWSError<CoreErrors>;
        using ClientError = AWSError;
        using SigningError = AWSError;
        using SigningOutcome = Aws::Utils::FutureOutcome<std::shared_ptr<Aws::Http::HttpRequest>, SigningError>;
        using EndpointUpdateCallback = std::function<void(Aws::Endpoint::AWSEndpoint&)>;
        using HttpResponseOutcome = Aws::Utils::Outcome<std::shared_ptr<Aws::Http::HttpResponse>, AWSError>;
        using ResponseHandlerFunc = std::function<void(HttpResponseOutcome&&)>;
        using SelectAuthSchemeOptionOutcome = Aws::Utils::Outcome<AuthSchemeOption, AWSError>;
        using ResolveEndpointOutcome = Aws::Utils::Outcome<Aws::Endpoint::AWSEndpoint, AWSError>;
        using StreamOutcome = Aws::Utils::Outcome<Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>, AWSError >;

        AwsSmithyClientBase(Aws::UniquePtr<Aws::Client::ClientConfiguration>&& clientConfig,
                            Aws::String serviceName,
                            Aws::String serviceUserAgentName,
                            std::shared_ptr<Aws::Http::HttpClient> httpClient,
                            std::shared_ptr<Aws::Client::AWSErrorMarshaller> errorMarshaller) :
          m_clientConfig(std::move(clientConfig)),
          m_serviceName(std::move(serviceName)),
          m_serviceUserAgentName(std::move(serviceUserAgentName)),
          m_httpClient(std::move(httpClient)),
          m_errorMarshaller(std::move(errorMarshaller)),
          m_interceptors{Aws::MakeShared<ChecksumInterceptor>("AwsSmithyClientBase", *m_clientConfig)}
        {
            baseInit();
        }

        AwsSmithyClientBase(const AwsSmithyClientBase& other,
                            Aws::UniquePtr<Aws::Client::ClientConfiguration>&& clientConfig,
                            Aws::String serviceName,
                            Aws::String serviceUserAgentName,
                            std::shared_ptr<Aws::Http::HttpClient> httpClient,
                            std::shared_ptr<Aws::Client::AWSErrorMarshaller> errorMarshaller) :
          m_clientConfig(std::move(clientConfig)),
          m_serviceName(std::move(serviceName)),
          m_serviceUserAgentName(std::move(serviceUserAgentName)),
          m_httpClient(std::move(httpClient)),
          m_errorMarshaller(std::move(errorMarshaller)),
          m_interceptors{Aws::MakeShared<ChecksumInterceptor>("AwsSmithyClientBase", *m_clientConfig)}
        {
          AWS_UNREFERENCED_PARAM(other);
          baseCopyInit();
        }

        AwsSmithyClientBase(AwsSmithyClientBase& target) = delete;
        AwsSmithyClientBase& operator=(AwsSmithyClientBase& target) = delete;
        AwsSmithyClientBase(AwsSmithyClientBase&& target) = default;
        AwsSmithyClientBase& operator=(AwsSmithyClientBase&& target) = default;

        virtual ~AwsSmithyClientBase() = default;

        void MakeRequestAsync(Aws::AmazonWebServiceRequest const * const request,
                              const char* requestName,
                              Aws::Http::HttpMethod method,
                              EndpointUpdateCallback&& endpointCallback,
                              ResponseHandlerFunc&& responseHandler,
                              std::shared_ptr<Aws::Utils::Threading::Executor> pExecutor) const;

        HttpResponseOutcome MakeRequestSync(Aws::AmazonWebServiceRequest const * const request,
                                            const char* requestName,
                                            Aws::Http::HttpMethod method,
                                            EndpointUpdateCallback&& endpointCallback) const;

        StreamOutcome MakeRequestWithUnparsedResponse(Aws::AmazonWebServiceRequest const * const request,
                                const char* requestName,
                                Aws::Http::HttpMethod method,
                                EndpointUpdateCallback&& endpointCallback
                                ) const;
        void AppendToUserAgent(const Aws::String& valueToAppend);

    protected:
        void deepCopy(Aws::UniquePtr<Aws::Client::ClientConfiguration>&& clientConfig,
          const Aws::String& serviceName,
          std::shared_ptr<Aws::Http::HttpClient> httpClient,
          std::shared_ptr<Aws::Client::AWSErrorMarshaller> errorMarshaller)
        {
          m_clientConfig = std::move(clientConfig);
          m_serviceName = serviceName;
          m_httpClient = std::move(httpClient);
          m_errorMarshaller = std::move(errorMarshaller);
          m_interceptors = Aws::Vector<std::shared_ptr<interceptor::Interceptor>>{Aws::MakeShared<ChecksumInterceptor>("AwsSmithyClientBase")};
          baseCopyInit();
        }

        /**
         * Initialize client configuration with their factory method, unless the user has explicitly set the
         * configuration, and it is to be shallow copied between different clients, in which case, delete the
         * factory method.
         */
        void baseInit();

        /**
         * Initialize client configuration on copy, if there is a factory use it, otherwise use the already present
         * shared configuration.
         */
        void baseCopyInit();

        /**
         * Transforms the AmazonWebServicesResult object into an HttpRequest.
         */
        std::shared_ptr<Aws::Http::HttpRequest> BuildHttpRequest(const std::shared_ptr<AwsSmithyClientAsyncRequestContext>& pRequestCtx, const Aws::Http::URI& uri, Aws::Http::HttpMethod method) const;


        virtual void AttemptOneRequestAsync(std::shared_ptr<AwsSmithyClientAsyncRequestContext> pRequestCtx) const;

        virtual void HandleAsyncReply(std::shared_ptr<AwsSmithyClientAsyncRequestContext> pRequestCtx,
                                      std::shared_ptr<Aws::Http::HttpResponse> httpResponse) const;

        inline virtual const char* GetServiceClientName() const { return m_serviceName.c_str(); }
        inline virtual const std::shared_ptr<Aws::Http::HttpClient>& GetHttpClient() { return m_httpClient; }
        virtual void DisableRequestProcessing();
        virtual void EnableRequestProcessing();

        virtual ResolveEndpointOutcome ResolveEndpoint(const Aws::Endpoint::EndpointParameters& endpointParameters, EndpointUpdateCallback&& epCallback) const = 0;
        virtual SelectAuthSchemeOptionOutcome SelectAuthSchemeOption(const AwsSmithyClientAsyncRequestContext& ctx) const = 0;
        virtual SigningOutcome SignHttpRequest(std::shared_ptr<HttpRequest> httpRequest, const AuthSchemeOption& targetAuthSchemeOption) const = 0;
        virtual bool AdjustClockSkew(HttpResponseOutcome& outcome, const AuthSchemeOption& authSchemeOption) const = 0;

        std::shared_ptr<Aws::Client::ClientConfiguration> m_clientConfig;
        Aws::String m_serviceName;
        Aws::String m_serviceUserAgentName;

        std::shared_ptr<Aws::Http::HttpClient> m_httpClient;
        std::shared_ptr<Aws::Client::AWSErrorMarshaller> m_errorMarshaller;
        Aws::Vector<std::shared_ptr<smithy::interceptor::Interceptor>> m_interceptors{};
        std::shared_ptr<smithy::client::UserAgentInterceptor> m_userAgentInterceptor;
    private:
        void UpdateAuthSchemeFromEndpoint(const Aws::Endpoint::AWSEndpoint& endpoint, AuthSchemeOption& authscheme) const;
    };
} // namespace client
} // namespace smithy
