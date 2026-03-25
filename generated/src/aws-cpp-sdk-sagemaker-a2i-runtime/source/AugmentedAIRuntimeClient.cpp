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
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeClient.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeEndpointProvider.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeErrorMarshaller.h>
#include <aws/sagemaker-a2i-runtime/model/DeleteHumanLoopRequest.h>
#include <aws/sagemaker-a2i-runtime/model/DescribeHumanLoopRequest.h>
#include <aws/sagemaker-a2i-runtime/model/ListHumanLoopsRequest.h>
#include <aws/sagemaker-a2i-runtime/model/StartHumanLoopRequest.h>
#include <aws/sagemaker-a2i-runtime/model/StopHumanLoopRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AugmentedAIRuntime;
using namespace Aws::AugmentedAIRuntime::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace AugmentedAIRuntime {
const char SERVICE_NAME[] = "sagemaker";
const char ALLOCATION_TAG[] = "AugmentedAIRuntimeClient";
}  // namespace AugmentedAIRuntime
}  // namespace Aws
const char* AugmentedAIRuntimeClient::GetServiceName() { return SERVICE_NAME; }
const char* AugmentedAIRuntimeClient::GetAllocationTag() { return ALLOCATION_TAG; }

AugmentedAIRuntimeClient::AugmentedAIRuntimeClient(const AugmentedAIRuntime::AugmentedAIRuntimeClientConfiguration& clientConfiguration,
                                                   std::shared_ptr<AugmentedAIRuntimeEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AugmentedAIRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<AugmentedAIRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AugmentedAIRuntimeClient::AugmentedAIRuntimeClient(const AWSCredentials& credentials,
                                                   std::shared_ptr<AugmentedAIRuntimeEndpointProviderBase> endpointProvider,
                                                   const AugmentedAIRuntime::AugmentedAIRuntimeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AugmentedAIRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<AugmentedAIRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AugmentedAIRuntimeClient::AugmentedAIRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   std::shared_ptr<AugmentedAIRuntimeEndpointProviderBase> endpointProvider,
                                                   const AugmentedAIRuntime::AugmentedAIRuntimeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AugmentedAIRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<AugmentedAIRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
AugmentedAIRuntimeClient::AugmentedAIRuntimeClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AugmentedAIRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AugmentedAIRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AugmentedAIRuntimeClient::AugmentedAIRuntimeClient(const AWSCredentials& credentials,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AugmentedAIRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AugmentedAIRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AugmentedAIRuntimeClient::AugmentedAIRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AugmentedAIRuntimeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AugmentedAIRuntimeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
AugmentedAIRuntimeClient::~AugmentedAIRuntimeClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<AugmentedAIRuntimeEndpointProviderBase>& AugmentedAIRuntimeClient::accessEndpointProvider() { return m_endpointProvider; }

void AugmentedAIRuntimeClient::init(const AugmentedAIRuntime::AugmentedAIRuntimeClientConfiguration& config) {
  AWSClient::SetServiceClientName("SageMaker A2I Runtime");
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

void AugmentedAIRuntimeClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
AugmentedAIRuntimeClient::InvokeOperationOutcome AugmentedAIRuntimeClient::InvokeServiceOperation(
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

DeleteHumanLoopOutcome AugmentedAIRuntimeClient::DeleteHumanLoop(const DeleteHumanLoopRequest& request) const {
  if (!request.HumanLoopNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteHumanLoop", "Required field: HumanLoopName, is not set");
    return DeleteHumanLoopOutcome(Aws::Client::AWSError<AugmentedAIRuntimeErrors>(
        AugmentedAIRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HumanLoopName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/human-loops/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHumanLoopName());
  };

  return DeleteHumanLoopOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeHumanLoopOutcome AugmentedAIRuntimeClient::DescribeHumanLoop(const DescribeHumanLoopRequest& request) const {
  if (!request.HumanLoopNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeHumanLoop", "Required field: HumanLoopName, is not set");
    return DescribeHumanLoopOutcome(Aws::Client::AWSError<AugmentedAIRuntimeErrors>(
        AugmentedAIRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HumanLoopName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/human-loops/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHumanLoopName());
  };

  return DescribeHumanLoopOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListHumanLoopsOutcome AugmentedAIRuntimeClient::ListHumanLoops(const ListHumanLoopsRequest& request) const {
  if (!request.FlowDefinitionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListHumanLoops", "Required field: FlowDefinitionArn, is not set");
    return ListHumanLoopsOutcome(Aws::Client::AWSError<AugmentedAIRuntimeErrors>(
        AugmentedAIRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowDefinitionArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/human-loops");
  };

  return ListHumanLoopsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

StartHumanLoopOutcome AugmentedAIRuntimeClient::StartHumanLoop(const StartHumanLoopRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/human-loops");
  };

  return StartHumanLoopOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopHumanLoopOutcome AugmentedAIRuntimeClient::StopHumanLoop(const StopHumanLoopRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/human-loops/stop");
  };

  return StopHumanLoopOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
