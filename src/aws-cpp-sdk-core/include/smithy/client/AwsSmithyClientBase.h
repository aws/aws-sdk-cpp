/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/auth/AuthSchemeOption.h>
#include <smithy/identity/identity/AwsIdentity.h>
#include <smithy/tracing/TelemetryProvider.h>

#include <aws/crt/Variant.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/FutureOutcome.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/Outcome.h>

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
    class AwsSmithyClientBase
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

        AwsSmithyClientBase(Aws::Client::ClientConfiguration& clientConfig,
                            Aws::String serviceName,
                            std::shared_ptr<Aws::Http::HttpClient> httpClient,
                            std::shared_ptr<Aws::Client::AWSErrorMarshaller> errorMarshaller) :
          m_clientConfig(clientConfig),
          m_serviceName(std::move(serviceName)),
          m_userAgent(Aws::Client::ComputeUserAgentString(&clientConfig)),
          m_httpClient(std::move(httpClient)),
          m_errorMarshaller(std::move(errorMarshaller))
        {}

        AwsSmithyClientBase(const AwsSmithyClientBase&) = delete;
        AwsSmithyClientBase(AwsSmithyClientBase&&) = delete;
        AwsSmithyClientBase& operator=(const AwsSmithyClientBase&) = delete;
        AwsSmithyClientBase& operator=(AwsSmithyClientBase&&) = delete;

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

    protected:
        /**
         * Transforms the AmazonWebServicesResult object into an HttpRequest.
         */
        std::shared_ptr<Aws::Http::HttpRequest> BuildHttpRequest(const std::shared_ptr<AwsSmithyClientAsyncRequestContext>& pRequestCtx, const Aws::Http::URI& uri, Aws::Http::HttpMethod method) const;


        virtual void AttemptOneRequestAsync(std::shared_ptr<AwsSmithyClientAsyncRequestContext> pRequestCtx) const;

        virtual void HandleAsyncReply(std::shared_ptr<AwsSmithyClientAsyncRequestContext> pRequestCtx,
                                      std::shared_ptr<Aws::Http::HttpResponse> httpResponse) const;

        inline virtual const char* GetServiceClientName() const { return m_serviceName.c_str(); }

        virtual ResolveEndpointOutcome ResolveEndpoint(const Aws::Endpoint::EndpointParameters& endpointParameters, EndpointUpdateCallback&& epCallback) const = 0;
        virtual SelectAuthSchemeOptionOutcome SelectAuthSchemeOption(const AwsSmithyClientAsyncRequestContext& ctx) const = 0;
        virtual SigningOutcome SignRequest(std::shared_ptr<HttpRequest> httpRequest, const AuthSchemeOption& targetAuthSchemeOption) const = 0;
        virtual bool AdjustClockSkew(HttpResponseOutcome& outcome, const AuthSchemeOption& authSchemeOption) const = 0;

    protected:
        Aws::Client::ClientConfiguration& m_clientConfig;
        Aws::String m_serviceName;
        Aws::String m_userAgent;

        std::shared_ptr<Aws::Http::HttpClient> m_httpClient;
        std::shared_ptr<Aws::Client::AWSErrorMarshaller> m_errorMarshaller;
    };
} // namespace client
} // namespace smithy
