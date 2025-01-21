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

#include <aws/core/utils/event/EventStream.h>

#include <aws/sagemaker-runtime/SageMakerRuntimeClient.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeErrorMarshaller.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeEndpointProvider.h>
#include <aws/sagemaker-runtime/model/InvokeEndpointRequest.h>
#include <aws/sagemaker-runtime/model/InvokeEndpointAsyncRequest.h>
#include <aws/sagemaker-runtime/model/InvokeEndpointWithResponseStreamRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SageMakerRuntime;
using namespace Aws::SageMakerRuntime::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace SageMakerRuntime
  {
    const char ALLOCATION_TAG[] = "SageMakerRuntimeClient";
    const char SERVICE_NAME[] = "sagemaker";
  }
}
const char* SageMakerRuntimeClient::GetServiceName() {return SERVICE_NAME;}
const char* SageMakerRuntimeClient::GetAllocationTag() {return ALLOCATION_TAG;}

SageMakerRuntimeClient::SageMakerRuntimeClient(const SageMakerRuntime::SageMakerRuntimeClientConfiguration& clientConfiguration,
                           std::shared_ptr<SageMakerRuntimeEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "SageMaker Runtime",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<SageMakerRuntimeErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<SageMakerRuntimeEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

SageMakerRuntimeClient::SageMakerRuntimeClient(const AWSCredentials& credentials,
                           std::shared_ptr<SageMakerRuntimeEndpointProviderBase> endpointProvider,
                           const SageMakerRuntime::SageMakerRuntimeClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "SageMaker Runtime",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<SageMakerRuntimeErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<SageMakerRuntimeEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

SageMakerRuntimeClient::SageMakerRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<SageMakerRuntimeEndpointProviderBase> endpointProvider,
                           const SageMakerRuntime::SageMakerRuntimeClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "SageMaker Runtime",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<SageMakerRuntimeErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<SageMakerRuntimeEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
SageMakerRuntimeClient::SageMakerRuntimeClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "SageMaker Runtime",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<SageMakerRuntimeErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<SageMakerRuntimeEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

SageMakerRuntimeClient::SageMakerRuntimeClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "SageMaker Runtime",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<SageMakerRuntimeErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<SageMakerRuntimeEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

SageMakerRuntimeClient::SageMakerRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "SageMaker Runtime",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<SageMakerRuntimeErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<SageMakerRuntimeEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

SageMakerRuntimeClient::~SageMakerRuntimeClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<SageMakerRuntimeEndpointProviderBase>& SageMakerRuntimeClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SageMakerRuntimeClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
InvokeEndpointOutcome SageMakerRuntimeClient::InvokeEndpoint(const InvokeEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(InvokeEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EndpointNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeEndpoint", "Required field: EndpointName, is not set");
    return InvokeEndpointOutcome(Aws::Client::AWSError<SageMakerRuntimeErrors>(SageMakerRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, InvokeEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeEndpoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeEndpointOutcome>(
    [&]()-> InvokeEndpointOutcome {
      return InvokeEndpointOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/endpoints/");
      resolvedEndpoint.AddPathSegment(request.GetEndpointName());
      resolvedEndpoint.AddPathSegments("/invocations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InvokeEndpointAsyncOutcome SageMakerRuntimeClient::InvokeEndpointAsync(const InvokeEndpointAsyncRequest& request) const
{
  AWS_OPERATION_GUARD(InvokeEndpointAsync);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeEndpointAsync, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EndpointNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeEndpointAsync", "Required field: EndpointName, is not set");
    return InvokeEndpointAsyncOutcome(Aws::Client::AWSError<SageMakerRuntimeErrors>(SageMakerRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointName]", false));
  }
  if (!request.InputLocationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeEndpointAsync", "Required field: InputLocation, is not set");
    return InvokeEndpointAsyncOutcome(Aws::Client::AWSError<SageMakerRuntimeErrors>(SageMakerRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputLocation]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, InvokeEndpointAsync, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeEndpointAsync, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeEndpointAsync",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeEndpointAsyncOutcome>(
    [&]()-> InvokeEndpointAsyncOutcome {
      return InvokeEndpointAsyncOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/endpoints/");
      resolvedEndpoint.AddPathSegment(request.GetEndpointName());
      resolvedEndpoint.AddPathSegments("/async-invocations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InvokeEndpointWithResponseStreamOutcome SageMakerRuntimeClient::InvokeEndpointWithResponseStream(InvokeEndpointWithResponseStreamRequest& request) const
{
  AWS_OPERATION_GUARD(InvokeEndpointWithResponseStream);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeEndpointWithResponseStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EndpointNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeEndpointWithResponseStream", "Required field: EndpointName, is not set");
    return InvokeEndpointWithResponseStreamOutcome(Aws::Client::AWSError<SageMakerRuntimeErrors>(SageMakerRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, InvokeEndpointWithResponseStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeEndpointWithResponseStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeEndpointWithResponseStream",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeEndpointWithResponseStreamOutcome>(
    [&]()-> InvokeEndpointWithResponseStreamOutcome {
      request.SetResponseStreamFactory(
          [&] { request.GetEventStreamDecoder().Reset(); return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder()); }
      );
      return InvokeEndpointWithResponseStreamOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/endpoints/");
      resolvedEndpoint.AddPathSegment(request.GetEndpointName());
      resolvedEndpoint.AddPathSegments("/invocations-response-stream");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


