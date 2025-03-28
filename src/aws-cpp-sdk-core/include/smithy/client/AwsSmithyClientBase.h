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
#include <aws/core/NoResult.h>
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
        using AWSCoreError = Aws::Client::AWSError<CoreErrors>;
        using ClientError = AWSCoreError;
        using SigningError = AWSCoreError;
        using SigningOutcome = Aws::Utils::FutureOutcome<std::shared_ptr<Aws::Http::HttpRequest>, SigningError>;
        using EndpointUpdateCallback = std::function<void(Aws::Endpoint::AWSEndpoint&)>;
        using HttpResponseOutcome = Aws::Utils::Outcome<std::shared_ptr<Aws::Http::HttpResponse>, AWSCoreError>;
        using ResponseHandlerFunc = std::function<void(HttpResponseOutcome&&)>;
        using SelectAuthSchemeOptionOutcome = Aws::Utils::Outcome<AuthSchemeOption, AWSCoreError>;
        using ResolveEndpointOutcome = Aws::Utils::Outcome<Aws::Endpoint::AWSEndpoint, AWSCoreError>;
        using StreamOutcome = Aws::Utils::Outcome<Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>, AWSCoreError >;
        using IdentityOutcome = Aws::Utils::Outcome<std::shared_ptr<smithy::AwsIdentity>, AWSCoreError>;
        using GetContextEndpointParametersOutcome = Aws::Utils::Outcome<Aws::Vector<Aws::Endpoint::EndpointParameter>, AWSCoreError>;

        /* primary constructor */
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

        /* copy constructor substitute */
        AwsSmithyClientBase(const AwsSmithyClientBase& other,
                            Aws::UniquePtr<Aws::Client::ClientConfiguration>&& clientConfig,
                            std::shared_ptr<Aws::Http::HttpClient> httpClient,
                            std::shared_ptr<Aws::Client::AWSErrorMarshaller> errorMarshaller) :
                            m_clientConfig(std::move(clientConfig))
        {
          // this c-tor needs httpClient and errorMarshaller passed explicitly because this base class stores them
          // by their parent pointer classes
          // and base client class has no idea how to re-create or copy them, and "lombok toBuilder" is not a thing in cpp.
          baseCopyAssign(other, std::move(httpClient), std::move(errorMarshaller));
        }

        /* move constructor substitute */
        AwsSmithyClientBase(AwsSmithyClientBase&& other,
                            Aws::UniquePtr<Aws::Client::ClientConfiguration>&& clientConfig) :
          m_clientConfig(std::move(clientConfig))
        {
          baseMoveAssign(std::move(other));
        }

        AwsSmithyClientBase(AwsSmithyClientBase& target) = delete;
        AwsSmithyClientBase& operator=(AwsSmithyClientBase& target) = delete;
        AwsSmithyClientBase(AwsSmithyClientBase&& target) = delete;
        AwsSmithyClientBase& operator=(AwsSmithyClientBase&& target) = delete;

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
        
        //for backwards compatibility
        const std::shared_ptr<Aws::Client::AWSErrorMarshaller>& GetErrorMarshaller() const
        {
            return m_errorMarshaller;
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
         * A helper utility to re-initialize on copy assignment
         */
        void baseCopyAssign(const AwsSmithyClientBase& other,
                            std::shared_ptr<Aws::Http::HttpClient> httpClient,
                            std::shared_ptr<Aws::Client::AWSErrorMarshaller> errorMarshaller);

        /**
         * A helper utility to move assign base client
         */
        void baseMoveAssign(AwsSmithyClientBase&& other);

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
        virtual SigningOutcome SignHttpRequest(std::shared_ptr<HttpRequest> httpRequest, const AwsSmithyClientAsyncRequestContext& ctx) const = 0;
        virtual bool AdjustClockSkew(HttpResponseOutcome& outcome, const AuthSchemeOption& authSchemeOption) const = 0;
        virtual IdentityOutcome ResolveIdentity(const AwsSmithyClientAsyncRequestContext& ctx) const = 0;
        virtual GetContextEndpointParametersOutcome GetContextEndpointParameters(const AwsSmithyClientAsyncRequestContext& ctx) const = 0;
        AwsSmithyClientBase::ResolveEndpointOutcome ResolveEndpointFromRequest(
            Aws::AmazonWebServiceRequest const * const request,
            const char* requestName,
            EndpointUpdateCallback&& endpointCallback) const;

        /* AwsSmithyClientT class binds its config reference to this pointer, so don't remove const and don't re-allocate it.
         * This is done to avoid duplication of config object between this base and actual service template classes.
         */
        const Aws::UniquePtr<Aws::Client::ClientConfiguration> m_clientConfig;
        Aws::String m_serviceName;
        Aws::String m_serviceUserAgentName;

        std::shared_ptr<Aws::Http::HttpClient> m_httpClient;
        std::shared_ptr<Aws::Client::AWSErrorMarshaller> m_errorMarshaller;
        Aws::Vector<std::shared_ptr<smithy::interceptor::Interceptor>> m_interceptors{};
        std::shared_ptr<smithy::client::UserAgentInterceptor> m_userAgentInterceptor;
    private:
        void UpdateAuthSchemeFromEndpoint(const Aws::Endpoint::AWSEndpoint& endpoint, AuthSchemeOption& authscheme) const;

        bool ResolveIdentityAuth(
            std::shared_ptr<AwsSmithyClientAsyncRequestContext>& pRequestCtx,
            ResponseHandlerFunc&& responseHandler,
            EndpointUpdateCallback&& endpointCallback
        ) const;

    };
} // namespace client
} // namespace smithy
