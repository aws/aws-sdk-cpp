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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-runs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowRunId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/acts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateActOutcome(result.GetResultWithOwnership()) : CreateActOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-runs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowRunId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateSessionOutcome(result.GetResultWithOwnership()) : CreateSessionOutcome(std::move(result.GetError()));
}

CreateWorkflowDefinitionOutcome NovaActClient::CreateWorkflowDefinition(const CreateWorkflowDefinitionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateWorkflowDefinitionOutcome(result.GetResultWithOwnership())
                            : CreateWorkflowDefinitionOutcome(std::move(result.GetError()));
}

CreateWorkflowRunOutcome NovaActClient::CreateWorkflowRun(const CreateWorkflowRunRequest& request) const {
  if (!request.WorkflowDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWorkflowRun", "Required field: WorkflowDefinitionName, is not set");
    return CreateWorkflowRunOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [WorkflowDefinitionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-runs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateWorkflowRunOutcome(result.GetResultWithOwnership())
                            : CreateWorkflowRunOutcome(std::move(result.GetError()));
}

DeleteWorkflowDefinitionOutcome NovaActClient::DeleteWorkflowDefinition(const DeleteWorkflowDefinitionRequest& request) const {
  if (!request.WorkflowDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkflowDefinition", "Required field: WorkflowDefinitionName, is not set");
    return DeleteWorkflowDefinitionOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [WorkflowDefinitionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteWorkflowDefinitionOutcome(result.GetResultWithOwnership())
                            : DeleteWorkflowDefinitionOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-runs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowRunId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteWorkflowRunOutcome(result.GetResultWithOwnership())
                            : DeleteWorkflowRunOutcome(std::move(result.GetError()));
}

GetWorkflowDefinitionOutcome NovaActClient::GetWorkflowDefinition(const GetWorkflowDefinitionRequest& request) const {
  if (!request.WorkflowDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflowDefinition", "Required field: WorkflowDefinitionName, is not set");
    return GetWorkflowDefinitionOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [WorkflowDefinitionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetWorkflowDefinitionOutcome(result.GetResultWithOwnership())
                            : GetWorkflowDefinitionOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-runs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowRunId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetWorkflowRunOutcome(result.GetResultWithOwnership()) : GetWorkflowRunOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-runs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowRunId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/acts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetActId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/invoke-step/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? InvokeActStepOutcome(result.GetResultWithOwnership()) : InvokeActStepOutcome(std::move(result.GetError()));
}

ListActsOutcome NovaActClient::ListActs(const ListActsRequest& request) const {
  if (!request.WorkflowDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListActs", "Required field: WorkflowDefinitionName, is not set");
    return ListActsOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [WorkflowDefinitionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/acts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListActsOutcome(result.GetResultWithOwnership()) : ListActsOutcome(std::move(result.GetError()));
}

ListModelsOutcome NovaActClient::ListModels(const ListModelsRequest& request) const {
  if (!request.ClientCompatibilityVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListModels", "Required field: ClientCompatibilityVersion, is not set");
    return ListModelsOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [ClientCompatibilityVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/models");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListModelsOutcome(result.GetResultWithOwnership()) : ListModelsOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-runs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowRunId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSessionsOutcome(result.GetResultWithOwnership()) : ListSessionsOutcome(std::move(result.GetError()));
}

ListWorkflowDefinitionsOutcome NovaActClient::ListWorkflowDefinitions(const ListWorkflowDefinitionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListWorkflowDefinitionsOutcome(result.GetResultWithOwnership())
                            : ListWorkflowDefinitionsOutcome(std::move(result.GetError()));
}

ListWorkflowRunsOutcome NovaActClient::ListWorkflowRuns(const ListWorkflowRunsRequest& request) const {
  if (!request.WorkflowDefinitionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkflowRuns", "Required field: WorkflowDefinitionName, is not set");
    return ListWorkflowRunsOutcome(Aws::Client::AWSError<NovaActErrors>(NovaActErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [WorkflowDefinitionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-runs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListWorkflowRunsOutcome(result.GetResultWithOwnership())
                            : ListWorkflowRunsOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-runs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowRunId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sessions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/acts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetActId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateActOutcome(result.GetResultWithOwnership()) : UpdateActOutcome(std::move(result.GetError()));
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

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-definitions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowDefinitionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow-runs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowRunId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateWorkflowRunOutcome(result.GetResultWithOwnership())
                            : UpdateWorkflowRunOutcome(std::move(result.GetError()));
}
