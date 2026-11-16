/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntimeClient.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntimeEndpointProvider.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntimeErrorMarshaller.h>
#include <aws/sagemaker-inference-router-runtime/model/InvokeInferenceRouterAsyncRequest.h>
#include <aws/sagemaker-inference-router-runtime/model/InvokeInferenceRouterRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SageMakerInferenceRouterRuntime;
using namespace Aws::SageMakerInferenceRouterRuntime::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SageMakerInferenceRouterRuntime {
const char SERVICE_NAME[] = "sagemaker";
const char ALLOCATION_TAG[] = "SageMakerInferenceRouterRuntimeClient";
}  // namespace SageMakerInferenceRouterRuntime
}  // namespace Aws
const char* SageMakerInferenceRouterRuntimeClient::GetServiceName() { return SERVICE_NAME; }
const char* SageMakerInferenceRouterRuntimeClient::GetAllocationTag() { return ALLOCATION_TAG; }

SageMakerInferenceRouterRuntimeClient::SageMakerInferenceRouterRuntimeClient(
    const SageMakerInferenceRouterRuntime::SageMakerInferenceRouterRuntimeClientConfiguration& clientConfiguration,
    std::shared_ptr<SageMakerInferenceRouterRuntimeEndpointProviderBase> endpointProvider)
    : BASECLASS(
          clientConfiguration,
          Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
              ALLOCATION_TAG,
              Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
              SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
          Aws::MakeShared<SageMakerInferenceRouterRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<SageMakerInferenceRouterRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerInferenceRouterRuntimeClient::SageMakerInferenceRouterRuntimeClient(
    const AWSCredentials& credentials, std::shared_ptr<SageMakerInferenceRouterRuntimeEndpointProviderBase> endpointProvider,
    const SageMakerInferenceRouterRuntime::SageMakerInferenceRouterRuntimeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerInferenceRouterRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<SageMakerInferenceRouterRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerInferenceRouterRuntimeClient::SageMakerInferenceRouterRuntimeClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<SageMakerInferenceRouterRuntimeEndpointProviderBase> endpointProvider,
    const SageMakerInferenceRouterRuntime::SageMakerInferenceRouterRuntimeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerInferenceRouterRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<SageMakerInferenceRouterRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SageMakerInferenceRouterRuntimeClient::SageMakerInferenceRouterRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(
          clientConfiguration,
          Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
              ALLOCATION_TAG,
              Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
              SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
          Aws::MakeShared<SageMakerInferenceRouterRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SageMakerInferenceRouterRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerInferenceRouterRuntimeClient::SageMakerInferenceRouterRuntimeClient(const AWSCredentials& credentials,
                                                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerInferenceRouterRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SageMakerInferenceRouterRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerInferenceRouterRuntimeClient::SageMakerInferenceRouterRuntimeClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerInferenceRouterRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SageMakerInferenceRouterRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SageMakerInferenceRouterRuntimeClient::~SageMakerInferenceRouterRuntimeClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SageMakerInferenceRouterRuntimeEndpointProviderBase>& SageMakerInferenceRouterRuntimeClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void SageMakerInferenceRouterRuntimeClient::init(
    const SageMakerInferenceRouterRuntime::SageMakerInferenceRouterRuntimeClientConfiguration& config) {
  AWSClient::SetServiceClientName("SageMaker Inference Router Runtime");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "sagemaker");
}

void SageMakerInferenceRouterRuntimeClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SageMakerInferenceRouterRuntimeClient::InvokeOperationOutcome SageMakerInferenceRouterRuntimeClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return Aws::Client::AsyncOperationState::MakeCallWithTiming<InvokeOperationOutcome>(
      request, std::move(span),
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

InvokeInferenceRouterOutcome SageMakerInferenceRouterRuntimeClient::InvokeInferenceRouter(
    const InvokeInferenceRouterRequest& request) const {
  AWS_OPERATION_GUARD(InvokeInferenceRouter);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeInferenceRouter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InferenceRouterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeInferenceRouter", "Required field: InferenceRouterName, is not set");
    return InvokeInferenceRouterOutcome(Aws::Client::AWSError<SageMakerInferenceRouterRuntimeErrors>(
        SageMakerInferenceRouterRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InferenceRouterName]",
        false));
  }
  if (!request.RoutingTargetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeInferenceRouter", "Required field: RoutingTargetName, is not set");
    return InvokeInferenceRouterOutcome(Aws::Client::AWSError<SageMakerInferenceRouterRuntimeErrors>(
        SageMakerInferenceRouterRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoutingTargetName]",
        false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, InvokeInferenceRouter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeInferenceRouter, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeInferenceRouter",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return Aws::Client::AsyncOperationState::MakeCallWithTiming<InvokeInferenceRouterOutcome>(
      request, std::move(span),
      [&]() -> InvokeInferenceRouterOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InvokeInferenceRouter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/inference-routers/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInferenceRouterName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/invocations");
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? InvokeInferenceRouterOutcome(result.GetResultWithOwnership())
                                  : InvokeInferenceRouterOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InvokeInferenceRouterAsyncOutcome SageMakerInferenceRouterRuntimeClient::InvokeInferenceRouterAsync(
    const InvokeInferenceRouterAsyncRequest& request) const {
  if (!request.InferenceRouterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeInferenceRouterAsync", "Required field: InferenceRouterName, is not set");
    return InvokeInferenceRouterAsyncOutcome(Aws::Client::AWSError<SageMakerInferenceRouterRuntimeErrors>(
        SageMakerInferenceRouterRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InferenceRouterName]",
        false));
  }
  if (!request.RoutingTargetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeInferenceRouterAsync", "Required field: RoutingTargetName, is not set");
    return InvokeInferenceRouterAsyncOutcome(Aws::Client::AWSError<SageMakerInferenceRouterRuntimeErrors>(
        SageMakerInferenceRouterRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoutingTargetName]",
        false));
  }
  if (!request.InputLocationHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeInferenceRouterAsync", "Required field: InputLocation, is not set");
    return InvokeInferenceRouterAsyncOutcome(Aws::Client::AWSError<SageMakerInferenceRouterRuntimeErrors>(
        SageMakerInferenceRouterRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputLocation]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/inference-routers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInferenceRouterName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/async-invocations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? InvokeInferenceRouterAsyncOutcome(result.GetResultWithOwnership())
                            : InvokeInferenceRouterAsyncOutcome(std::move(result.GetError()));
}
