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
#include <aws/nova-act/NovaActClient.h>
#include <aws/nova-act/NovaActEndpointProvider.h>
#include <aws/nova-act/NovaActErrorMarshaller.h>
#include <aws/nova-act/model/CreateActRequest.h>
#include <aws/nova-act/model/CreateSessionRequest.h>
#include <aws/nova-act/model/CreateWorkflowDefinitionRequest.h>
#include <aws/nova-act/model/CreateWorkflowRunRequest.h>
#include <aws/nova-act/model/DeleteWorkflowDefinitionRequest.h>
#include <aws/nova-act/model/DeleteWorkflowRunRequest.h>
#include <aws/nova-act/model/GetWorkflowDefinitionRequest.h>
#include <aws/nova-act/model/GetWorkflowRunRequest.h>
#include <aws/nova-act/model/InvokeActStepRequest.h>
#include <aws/nova-act/model/ListActsRequest.h>
#include <aws/nova-act/model/ListModelsRequest.h>
#include <aws/nova-act/model/ListSessionsRequest.h>
#include <aws/nova-act/model/ListWorkflowDefinitionsRequest.h>
#include <aws/nova-act/model/ListWorkflowRunsRequest.h>
#include <aws/nova-act/model/UpdateActRequest.h>
#include <aws/nova-act/model/UpdateWorkflowRunRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::NovaAct;
using namespace Aws::NovaAct::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace NovaAct {
const char SERVICE_NAME[] = "nova-act";
const char ALLOCATION_TAG[] = "NovaActClient";
}  // namespace NovaAct
}  // namespace Aws
const char* NovaActClient::GetServiceName() { return SERVICE_NAME; }
const char* NovaActClient::GetAllocationTag() { return ALLOCATION_TAG; }

NovaActClient::NovaActClient(const NovaAct::NovaActClientConfiguration& clientConfiguration,
                             std::shared_ptr<NovaActEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NovaActErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NovaActEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NovaActClient::NovaActClient(const AWSCredentials& credentials, std::shared_ptr<NovaActEndpointProviderBase> endpointProvider,
                             const NovaAct::NovaActClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NovaActErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NovaActEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NovaActClient::NovaActClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<NovaActEndpointProviderBase> endpointProvider,
                             const NovaAct::NovaActClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NovaActErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NovaActEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
NovaActClient::NovaActClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NovaActErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NovaActEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NovaActClient::NovaActClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NovaActErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NovaActEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NovaActClient::NovaActClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NovaActErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NovaActEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
NovaActClient::~NovaActClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<NovaActEndpointProviderBase>& NovaActClient::accessEndpointProvider() { return m_endpointProvider; }

void NovaActClient::init(const NovaAct::NovaActClientConfiguration& config) {
  AWSClient::SetServiceClientName("Nova Act");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "nova-act");
}

void NovaActClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
NovaActClient::InvokeOperationOutcome NovaActClient::InvokeServiceOperation(
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

CreateActOutcome NovaActClient::CreateAct(const CreateActRequest& request) const {
  if (!request.WorkflowDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAct", "Required field: WorkflowDefinitionName, is not set");
    return CreateActOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [WorkflowDefinitionName]", false));
  }
  if (!request.WorkflowRunIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAct", "Required field: WorkflowRunId, is not set");
    return CreateActOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [WorkflowRunId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAct", "Required field: SessionId, is not set");
    return CreateActOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [SessionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateAct, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateAct, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateAct",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateActOutcome>(
      [&]() -> CreateActOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-runs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowRunId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/acts");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateActOutcome(CreateActResult(result.GetResultWithOwnership()))
                                  : CreateActOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSessionOutcome NovaActClient::CreateSession(const CreateSessionRequest& request) const {
  if (!request.WorkflowDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSession", "Required field: WorkflowDefinitionName, is not set");
    return CreateSessionOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [WorkflowDefinitionName]", false));
  }
  if (!request.WorkflowRunIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSession", "Required field: WorkflowRunId, is not set");
    return CreateSessionOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [WorkflowRunId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSession",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSessionOutcome>(
      [&]() -> CreateSessionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-runs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowRunId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sessions");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateSessionOutcome(CreateSessionResult(result.GetResultWithOwnership()))
                                  : CreateSessionOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateWorkflowDefinitionOutcome NovaActClient::CreateWorkflowDefinition(const CreateWorkflowDefinitionRequest& request) const {
  AWS_OPERATION_GUARD(CreateWorkflowDefinition);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkflowDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateWorkflowDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateWorkflowDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateWorkflowDefinition",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateWorkflowDefinitionOutcome>(
      [&]() -> CreateWorkflowDefinitionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkflowDefinition, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateWorkflowDefinitionOutcome(CreateWorkflowDefinitionResult(result.GetResultWithOwnership()))
                                  : CreateWorkflowDefinitionOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateWorkflowRunOutcome NovaActClient::CreateWorkflowRun(const CreateWorkflowRunRequest& request) const {
  if (!request.WorkflowDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWorkflowRun", "Required field: WorkflowDefinitionName, is not set");
    return CreateWorkflowRunOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [WorkflowDefinitionName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateWorkflowRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateWorkflowRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateWorkflowRun",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateWorkflowRunOutcome>(
      [&]() -> CreateWorkflowRunOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkflowRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-runs");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? CreateWorkflowRunOutcome(CreateWorkflowRunResult(result.GetResultWithOwnership()))
                                  : CreateWorkflowRunOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteWorkflowDefinitionOutcome NovaActClient::DeleteWorkflowDefinition(const DeleteWorkflowDefinitionRequest& request) const {
  if (!request.WorkflowDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkflowDefinition", "Required field: WorkflowDefinitionName, is not set");
    return DeleteWorkflowDefinitionOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [WorkflowDefinitionName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteWorkflowDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteWorkflowDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteWorkflowDefinition",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteWorkflowDefinitionOutcome>(
      [&]() -> DeleteWorkflowDefinitionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkflowDefinition, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteWorkflowDefinitionOutcome(DeleteWorkflowDefinitionResult(result.GetResultWithOwnership()))
                                  : DeleteWorkflowDefinitionOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteWorkflowRunOutcome NovaActClient::DeleteWorkflowRun(const DeleteWorkflowRunRequest& request) const {
  if (!request.WorkflowDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkflowRun", "Required field: WorkflowDefinitionName, is not set");
    return DeleteWorkflowRunOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [WorkflowDefinitionName]", false));
  }
  if (!request.WorkflowRunIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkflowRun", "Required field: WorkflowRunId, is not set");
    return DeleteWorkflowRunOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [WorkflowRunId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteWorkflowRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteWorkflowRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteWorkflowRun",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteWorkflowRunOutcome>(
      [&]() -> DeleteWorkflowRunOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkflowRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-runs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowRunId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? DeleteWorkflowRunOutcome(DeleteWorkflowRunResult(result.GetResultWithOwnership()))
                                  : DeleteWorkflowRunOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetWorkflowDefinitionOutcome NovaActClient::GetWorkflowDefinition(const GetWorkflowDefinitionRequest& request) const {
  if (!request.WorkflowDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflowDefinition", "Required field: WorkflowDefinitionName, is not set");
    return GetWorkflowDefinitionOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [WorkflowDefinitionName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetWorkflowDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetWorkflowDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetWorkflowDefinition",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetWorkflowDefinitionOutcome>(
      [&]() -> GetWorkflowDefinitionOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWorkflowDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetWorkflowDefinitionOutcome(GetWorkflowDefinitionResult(result.GetResultWithOwnership()))
                                  : GetWorkflowDefinitionOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetWorkflowRunOutcome NovaActClient::GetWorkflowRun(const GetWorkflowRunRequest& request) const {
  if (!request.WorkflowDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflowRun", "Required field: WorkflowDefinitionName, is not set");
    return GetWorkflowRunOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [WorkflowDefinitionName]", false));
  }
  if (!request.WorkflowRunIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflowRun", "Required field: WorkflowRunId, is not set");
    return GetWorkflowRunOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [WorkflowRunId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetWorkflowRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetWorkflowRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetWorkflowRun",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetWorkflowRunOutcome>(
      [&]() -> GetWorkflowRunOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWorkflowRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-runs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowRunId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? GetWorkflowRunOutcome(GetWorkflowRunResult(result.GetResultWithOwnership()))
                                  : GetWorkflowRunOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

InvokeActStepOutcome NovaActClient::InvokeActStep(const InvokeActStepRequest& request) const {
  if (!request.WorkflowDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeActStep", "Required field: WorkflowDefinitionName, is not set");
    return InvokeActStepOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [WorkflowDefinitionName]", false));
  }
  if (!request.WorkflowRunIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeActStep", "Required field: WorkflowRunId, is not set");
    return InvokeActStepOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [WorkflowRunId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeActStep", "Required field: SessionId, is not set");
    return InvokeActStepOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [SessionId]", false));
  }
  if (!request.ActIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InvokeActStep", "Required field: ActId, is not set");
    return InvokeActStepOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ActId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, InvokeActStep, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeActStep, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeActStep",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeActStepOutcome>(
      [&]() -> InvokeActStepOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InvokeActStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-runs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowRunId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/acts/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetActId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/invoke-step/");
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? InvokeActStepOutcome(InvokeActStepResult(result.GetResultWithOwnership()))
                                  : InvokeActStepOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListActsOutcome NovaActClient::ListActs(const ListActsRequest& request) const {
  if (!request.WorkflowDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListActs", "Required field: WorkflowDefinitionName, is not set");
    return ListActsOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [WorkflowDefinitionName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListActs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListActs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListActs",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListActsOutcome>(
      [&]() -> ListActsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListActs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/acts");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListActsOutcome(ListActsResult(result.GetResultWithOwnership())) : ListActsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListModelsOutcome NovaActClient::ListModels(const ListModelsRequest& request) const {
  if (!request.ClientCompatibilityVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListModels", "Required field: ClientCompatibilityVersion, is not set");
    return ListModelsOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ClientCompatibilityVersion]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListModels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListModels",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListModelsOutcome>(
      [&]() -> ListModelsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListModels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/models");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListModelsOutcome(ListModelsResult(result.GetResultWithOwnership()))
                                  : ListModelsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSessionsOutcome NovaActClient::ListSessions(const ListSessionsRequest& request) const {
  if (!request.WorkflowDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSessions", "Required field: WorkflowDefinitionName, is not set");
    return ListSessionsOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [WorkflowDefinitionName]", false));
  }
  if (!request.WorkflowRunIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSessions", "Required field: WorkflowRunId, is not set");
    return ListSessionsOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [WorkflowRunId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListSessions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSessions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSessions",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSessionsOutcome>(
      [&]() -> ListSessionsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-runs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowRunId());
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListSessionsOutcome(ListSessionsResult(result.GetResultWithOwnership()))
                                  : ListSessionsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListWorkflowDefinitionsOutcome NovaActClient::ListWorkflowDefinitions(const ListWorkflowDefinitionsRequest& request) const {
  AWS_OPERATION_GUARD(ListWorkflowDefinitions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkflowDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListWorkflowDefinitions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWorkflowDefinitions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWorkflowDefinitions",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWorkflowDefinitionsOutcome>(
      [&]() -> ListWorkflowDefinitionsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkflowDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListWorkflowDefinitionsOutcome(ListWorkflowDefinitionsResult(result.GetResultWithOwnership()))
                                  : ListWorkflowDefinitionsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListWorkflowRunsOutcome NovaActClient::ListWorkflowRuns(const ListWorkflowRunsRequest& request) const {
  if (!request.WorkflowDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkflowRuns", "Required field: WorkflowDefinitionName, is not set");
    return ListWorkflowRunsOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [WorkflowDefinitionName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListWorkflowRuns, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListWorkflowRuns, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListWorkflowRuns",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListWorkflowRunsOutcome>(
      [&]() -> ListWorkflowRunsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkflowRuns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-runs");
        auto result =
            MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? ListWorkflowRunsOutcome(ListWorkflowRunsResult(result.GetResultWithOwnership()))
                                  : ListWorkflowRunsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateActOutcome NovaActClient::UpdateAct(const UpdateActRequest& request) const {
  if (!request.WorkflowDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAct", "Required field: WorkflowDefinitionName, is not set");
    return UpdateActOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [WorkflowDefinitionName]", false));
  }
  if (!request.WorkflowRunIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAct", "Required field: WorkflowRunId, is not set");
    return UpdateActOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [WorkflowRunId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAct", "Required field: SessionId, is not set");
    return UpdateActOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [SessionId]", false));
  }
  if (!request.ActIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAct", "Required field: ActId, is not set");
    return UpdateActOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [ActId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateAct, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAct, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAct",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateActOutcome>(
      [&]() -> UpdateActOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAct, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-runs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowRunId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/acts/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetActId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateActOutcome(UpdateActResult(result.GetResultWithOwnership()))
                                  : UpdateActOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateWorkflowRunOutcome NovaActClient::UpdateWorkflowRun(const UpdateWorkflowRunRequest& request) const {
  if (!request.WorkflowDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkflowRun", "Required field: WorkflowDefinitionName, is not set");
    return UpdateWorkflowRunOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [WorkflowDefinitionName]", false));
  }
  if (!request.WorkflowRunIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkflowRun", "Required field: WorkflowRunId, is not set");
    return UpdateWorkflowRunOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [WorkflowRunId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateWorkflowRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateWorkflowRun, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateWorkflowRun",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateWorkflowRunOutcome>(
      [&]() -> UpdateWorkflowRunOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkflowRun, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
        endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-runs/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowRunId());
        auto result = MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
        return result.IsSuccess() ? UpdateWorkflowRunOutcome(UpdateWorkflowRunResult(result.GetResultWithOwnership()))
                                  : UpdateWorkflowRunOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
