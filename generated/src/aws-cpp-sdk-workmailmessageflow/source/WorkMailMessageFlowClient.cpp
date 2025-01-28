/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>


#include <aws/workmailmessageflow/WorkMailMessageFlowClient.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowErrorMarshaller.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowEndpointProvider.h>
#include <aws/workmailmessageflow/model/GetRawMessageContentRequest.h>
#include <aws/workmailmessageflow/model/PutRawMessageContentRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WorkMailMessageFlow;
using namespace Aws::WorkMailMessageFlow::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace WorkMailMessageFlow
  {
    const char ALLOCATION_TAG[] = "WorkMailMessageFlowClient";
    const char SERVICE_NAME[] = "workmailmessageflow";
  }
}
const char* WorkMailMessageFlowClient::GetServiceName() {return SERVICE_NAME;}
const char* WorkMailMessageFlowClient::GetAllocationTag() {return ALLOCATION_TAG;}

WorkMailMessageFlowClient::WorkMailMessageFlowClient(const WorkMailMessageFlow::WorkMailMessageFlowClientConfiguration& clientConfiguration,
                           std::shared_ptr<WorkMailMessageFlowEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "WorkMailMessageFlow",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<WorkMailMessageFlowErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<WorkMailMessageFlowEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

WorkMailMessageFlowClient::WorkMailMessageFlowClient(const AWSCredentials& credentials,
                           std::shared_ptr<WorkMailMessageFlowEndpointProviderBase> endpointProvider,
                           const WorkMailMessageFlow::WorkMailMessageFlowClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "WorkMailMessageFlow",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<WorkMailMessageFlowErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<WorkMailMessageFlowEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

WorkMailMessageFlowClient::WorkMailMessageFlowClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<WorkMailMessageFlowEndpointProviderBase> endpointProvider,
                           const WorkMailMessageFlow::WorkMailMessageFlowClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "WorkMailMessageFlow",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<WorkMailMessageFlowErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<WorkMailMessageFlowEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
WorkMailMessageFlowClient::WorkMailMessageFlowClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "WorkMailMessageFlow",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<WorkMailMessageFlowErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<WorkMailMessageFlowEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

WorkMailMessageFlowClient::WorkMailMessageFlowClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "WorkMailMessageFlow",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<WorkMailMessageFlowErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<WorkMailMessageFlowEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

WorkMailMessageFlowClient::WorkMailMessageFlowClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "WorkMailMessageFlow",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<WorkMailMessageFlowErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<WorkMailMessageFlowEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

WorkMailMessageFlowClient::~WorkMailMessageFlowClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<WorkMailMessageFlowEndpointProviderBase>& WorkMailMessageFlowClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void WorkMailMessageFlowClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
GetRawMessageContentOutcome WorkMailMessageFlowClient::GetRawMessageContent(const GetRawMessageContentRequest& request) const
{
  AWS_OPERATION_GUARD(GetRawMessageContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRawMessageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MessageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRawMessageContent", "Required field: MessageId, is not set");
    return GetRawMessageContentOutcome(Aws::Client::AWSError<WorkMailMessageFlowErrors>(WorkMailMessageFlowErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetRawMessageContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRawMessageContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRawMessageContent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRawMessageContentOutcome>(
    [&]()-> GetRawMessageContentOutcome {
      return GetRawMessageContentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/messages/");
      resolvedEndpoint.AddPathSegment(request.GetMessageId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutRawMessageContentOutcome WorkMailMessageFlowClient::PutRawMessageContent(const PutRawMessageContentRequest& request) const
{
  AWS_OPERATION_GUARD(PutRawMessageContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRawMessageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MessageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutRawMessageContent", "Required field: MessageId, is not set");
    return PutRawMessageContentOutcome(Aws::Client::AWSError<WorkMailMessageFlowErrors>(WorkMailMessageFlowErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutRawMessageContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutRawMessageContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutRawMessageContent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutRawMessageContentOutcome>(
    [&]()-> PutRawMessageContentOutcome {
      return PutRawMessageContentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/messages/");
      resolvedEndpoint.AddPathSegment(request.GetMessageId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


