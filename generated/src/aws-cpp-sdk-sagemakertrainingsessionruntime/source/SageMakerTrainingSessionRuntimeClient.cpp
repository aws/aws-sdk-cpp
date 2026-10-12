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
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeClient.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeEndpointProvider.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeErrorMarshaller.h>
#include <aws/sagemakertrainingsessionruntime/model/ExecuteSamplingOperationRequest.h>
#include <aws/sagemakertrainingsessionruntime/model/ExecuteTrainingOperationRequest.h>
#include <aws/sagemakertrainingsessionruntime/model/GetSamplingOperationResultRequest.h>
#include <aws/sagemakertrainingsessionruntime/model/GetTrainingOperationResultRequest.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleTrainingSessionRequest.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleTrainingSessionWithResponseStreamRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SageMakerTrainingSessionRuntime;
using namespace Aws::SageMakerTrainingSessionRuntime::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
const char SERVICE_NAME[] = "sagemaker";
const char ALLOCATION_TAG[] = "SageMakerTrainingSessionRuntimeClient";
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
const char* SageMakerTrainingSessionRuntimeClient::GetServiceName() { return SERVICE_NAME; }
const char* SageMakerTrainingSessionRuntimeClient::GetAllocationTag() { return ALLOCATION_TAG; }

SageMakerTrainingSessionRuntimeClient::SageMakerTrainingSessionRuntimeClient(
    const SageMakerTrainingSessionRuntime::SageMakerTrainingSessionRuntimeClientConfiguration& clientConfiguration,
    std::shared_ptr<SageMakerTrainingSessionRuntimeEndpointProviderBase> endpointProvider)
    : BASECLASS(
          clientConfiguration,
          Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
              ALLOCATION_TAG,
              Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
              SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
          Aws::MakeShared<SageMakerTrainingSessionRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<SageMakerTrainingSessionRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerTrainingSessionRuntimeClient::SageMakerTrainingSessionRuntimeClient(
    const AWSCredentials& credentials, std::shared_ptr<SageMakerTrainingSessionRuntimeEndpointProviderBase> endpointProvider,
    const SageMakerTrainingSessionRuntime::SageMakerTrainingSessionRuntimeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerTrainingSessionRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<SageMakerTrainingSessionRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerTrainingSessionRuntimeClient::SageMakerTrainingSessionRuntimeClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<SageMakerTrainingSessionRuntimeEndpointProviderBase> endpointProvider,
    const SageMakerTrainingSessionRuntime::SageMakerTrainingSessionRuntimeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerTrainingSessionRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<SageMakerTrainingSessionRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SageMakerTrainingSessionRuntimeClient::SageMakerTrainingSessionRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(
          clientConfiguration,
          Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
              ALLOCATION_TAG,
              Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
              SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
          Aws::MakeShared<SageMakerTrainingSessionRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SageMakerTrainingSessionRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerTrainingSessionRuntimeClient::SageMakerTrainingSessionRuntimeClient(const AWSCredentials& credentials,
                                                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerTrainingSessionRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SageMakerTrainingSessionRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SageMakerTrainingSessionRuntimeClient::SageMakerTrainingSessionRuntimeClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SageMakerTrainingSessionRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SageMakerTrainingSessionRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SageMakerTrainingSessionRuntimeClient::~SageMakerTrainingSessionRuntimeClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SageMakerTrainingSessionRuntimeEndpointProviderBase>& SageMakerTrainingSessionRuntimeClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void SageMakerTrainingSessionRuntimeClient::init(
    const SageMakerTrainingSessionRuntime::SageMakerTrainingSessionRuntimeClientConfiguration& config) {
  AWSClient::SetServiceClientName("SageMakerTrainingSessionRuntime");
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

void SageMakerTrainingSessionRuntimeClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SageMakerTrainingSessionRuntimeClient::InvokeOperationOutcome SageMakerTrainingSessionRuntimeClient::InvokeServiceOperation(
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

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
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
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

ExecuteSamplingOperationOutcome SageMakerTrainingSessionRuntimeClient::ExecuteSamplingOperation(
    const ExecuteSamplingOperationRequest& request) const {
  if (!request.TrainingSessionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExecuteSamplingOperation", "Required field: TrainingSessionName, is not set");
    return ExecuteSamplingOperationOutcome(Aws::Client::AWSError<SageMakerTrainingSessionRuntimeErrors>(
        SageMakerTrainingSessionRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainingSessionName]",
        false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/training-sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrainingSessionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sampling-operations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExecuteSamplingOperationOutcome(result.GetResultWithOwnership())
                            : ExecuteSamplingOperationOutcome(std::move(result.GetError()));
}

ExecuteTrainingOperationOutcome SageMakerTrainingSessionRuntimeClient::ExecuteTrainingOperation(
    const ExecuteTrainingOperationRequest& request) const {
  if (!request.TrainingSessionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExecuteTrainingOperation", "Required field: TrainingSessionName, is not set");
    return ExecuteTrainingOperationOutcome(Aws::Client::AWSError<SageMakerTrainingSessionRuntimeErrors>(
        SageMakerTrainingSessionRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainingSessionName]",
        false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/training-sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrainingSessionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/operations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExecuteTrainingOperationOutcome(result.GetResultWithOwnership())
                            : ExecuteTrainingOperationOutcome(std::move(result.GetError()));
}

GetSamplingOperationResultOutcome SageMakerTrainingSessionRuntimeClient::GetSamplingOperationResult(
    const GetSamplingOperationResultRequest& request) const {
  if (!request.TrainingSessionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSamplingOperationResult", "Required field: TrainingSessionName, is not set");
    return GetSamplingOperationResultOutcome(Aws::Client::AWSError<SageMakerTrainingSessionRuntimeErrors>(
        SageMakerTrainingSessionRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainingSessionName]",
        false));
  }
  if (!request.OperationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSamplingOperationResult", "Required field: OperationId, is not set");
    return GetSamplingOperationResultOutcome(Aws::Client::AWSError<SageMakerTrainingSessionRuntimeErrors>(
        SageMakerTrainingSessionRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OperationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/training-sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrainingSessionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sampling-operations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOperationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSamplingOperationResultOutcome(result.GetResultWithOwnership())
                            : GetSamplingOperationResultOutcome(std::move(result.GetError()));
}

GetTrainingOperationResultOutcome SageMakerTrainingSessionRuntimeClient::GetTrainingOperationResult(
    const GetTrainingOperationResultRequest& request) const {
  if (!request.TrainingSessionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTrainingOperationResult", "Required field: TrainingSessionName, is not set");
    return GetTrainingOperationResultOutcome(Aws::Client::AWSError<SageMakerTrainingSessionRuntimeErrors>(
        SageMakerTrainingSessionRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainingSessionName]",
        false));
  }
  if (!request.OperationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTrainingOperationResult", "Required field: OperationId, is not set");
    return GetTrainingOperationResultOutcome(Aws::Client::AWSError<SageMakerTrainingSessionRuntimeErrors>(
        SageMakerTrainingSessionRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OperationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/training-sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrainingSessionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/operations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOperationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTrainingOperationResultOutcome(result.GetResultWithOwnership())
                            : GetTrainingOperationResultOutcome(std::move(result.GetError()));
}

SampleTrainingSessionOutcome SageMakerTrainingSessionRuntimeClient::SampleTrainingSession(
    const SampleTrainingSessionRequest& request) const {
  AWS_OPERATION_GUARD(SampleTrainingSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SampleTrainingSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrainingSessionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SampleTrainingSession", "Required field: TrainingSessionName, is not set");
    return SampleTrainingSessionOutcome(Aws::Client::AWSError<SageMakerTrainingSessionRuntimeErrors>(
        SageMakerTrainingSessionRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainingSessionName]",
        false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SampleTrainingSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SampleTrainingSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SampleTrainingSession",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SampleTrainingSessionOutcome>(
      [&]() -> SampleTrainingSessionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SampleTrainingSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/training-sessions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrainingSessionName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sample");
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? SampleTrainingSessionOutcome(result.GetResultWithOwnership())
                                  : SampleTrainingSessionOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SampleTrainingSessionWithResponseStreamOutcome SageMakerTrainingSessionRuntimeClient::SampleTrainingSessionWithResponseStream(
    const SampleTrainingSessionWithResponseStreamRequest& request) const {
  AWS_OPERATION_GUARD(SampleTrainingSessionWithResponseStream);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SampleTrainingSessionWithResponseStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrainingSessionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SampleTrainingSessionWithResponseStream", "Required field: TrainingSessionName, is not set");
    return SampleTrainingSessionWithResponseStreamOutcome(Aws::Client::AWSError<SageMakerTrainingSessionRuntimeErrors>(
        SageMakerTrainingSessionRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrainingSessionName]",
        false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SampleTrainingSessionWithResponseStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SampleTrainingSessionWithResponseStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SampleTrainingSessionWithResponseStream",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SampleTrainingSessionWithResponseStreamOutcome>(
      [&]() -> SampleTrainingSessionWithResponseStreamOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SampleTrainingSessionWithResponseStream, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/training-sessions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrainingSessionName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sample-with-response-stream");
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? SampleTrainingSessionWithResponseStreamOutcome(result.GetResultWithOwnership())
                                  : SampleTrainingSessionWithResponseStreamOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
