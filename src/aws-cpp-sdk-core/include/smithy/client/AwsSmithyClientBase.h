/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/identity/AwsIdentity.h>

#include <aws/crt/Variant.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/http/HttpResponse.h>

#include "aws/core/client/ClientConfiguration.h"
#include "aws/core/endpoint/EndpointParameter.h"
#include "aws/core/utils/FutureOutcome.h"
#include "smithy/identity/auth/AuthOption.h"
#include "smithy/tracing/TelemetryProvider.h"

namespace Aws
{
    namespace Utils::RateLimits
    {
        class RateLimiterInterface;
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

    namespace Utils::Threading
    {
        class Executor;
    }

    class AmazonWebServiceRequest;
}

namespace Aws::Endpoint
{
    class AWSEndpoint;
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
        using ClientError = Aws::Client::AWSError<CoreErrors>;
        using SigningError = Aws::Client::AWSError<CoreErrors>;
        using SigningOutcome = Aws::Utils::FutureOutcome<std::shared_ptr<Aws::Http::HttpRequest>, SigningError>;
        using EndpointUpdateCallback = std::function<void(Aws::Endpoint::AWSEndpoint&)>;
        using HttpResponseOutcome = Aws::Utils::Outcome<std::shared_ptr<Aws::Http::HttpResponse>, Aws::Client::AWSError<Aws::Client::CoreErrors>>;

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
                              std::function<void(HttpResponseOutcome)> responseHandler,
                              std::shared_ptr<Aws::Utils::Threading::Executor> pExecutor) const;

        HttpResponseOutcome MakeRequestSync(Aws::AmazonWebServiceRequest const * const request,
                                            const char* requestName,
                                            EndpointUpdateCallback&& endpointCallback,
                                            Aws::Http::HttpMethod method) const;

    protected:
        /**
         * Transforms the AmazonWebServicesResult object into an HttpRequest.
         */
        std::shared_ptr<Aws::Http::HttpRequest> AwsSmithyClientBase::BuildHttpRequest(const std::shared_ptr<AwsSmithyClientAsyncRequestContext>& pRequestCtx, const Aws::Http::URI& uri, Aws::Http::HttpMethod method) const;


        virtual void AttemptOneRequestAsync(std::shared_ptr<AwsSmithyClientAsyncRequestContext> pRequestCtx) const;

        virtual void HandleAsyncReply(std::shared_ptr<AwsSmithyClientAsyncRequestContext> pRequestCtx,
                                      std::shared_ptr<Aws::Http::HttpResponse> httpResponse) const;

        inline virtual const char* GetServiceClientName() const { return m_serviceName.c_str(); }

        virtual Aws::Endpoint::AWSEndpoint ResolveEndpoint(const Aws::Endpoint::EndpointParameters& endpointParameters, EndpointUpdateCallback&& epCallback) const = 0;
        virtual AuthOption SelectAuthOption(const AwsSmithyClientAsyncRequestContext& ctx) const = 0;
        virtual SigningOutcome SignRequest(const HttpRequest& HTTPRequest, const AuthOption& targetAuthOption) const = 0;
        virtual bool AdjustClockSkew(HttpResponseOutcome& outcome, const AuthOption& authOption) const = 0;

        /**
         * Abstract.  Subclassing clients should override this to tell the client how to marshall error payloads
         */
        virtual ClientError BuildAWSError(const std::shared_ptr<HttpResponse>& response) const = 0;

    protected:
        Aws::Client::ClientConfiguration& m_clientConfig;
        Aws::String m_serviceName;
        Aws::String m_userAgent;

        std::shared_ptr<Aws::Http::HttpClient> m_httpClient;
        std::shared_ptr<Aws::Client::AWSErrorMarshaller> m_errorMarshaller;
    };
} // namespace client
} // namespace smithy
