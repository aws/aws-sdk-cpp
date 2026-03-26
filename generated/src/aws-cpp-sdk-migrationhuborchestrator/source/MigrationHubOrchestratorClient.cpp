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
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorClient.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorEndpointProvider.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorErrorMarshaller.h>
#include <aws/migrationhuborchestrator/model/CreateTemplateRequest.h>
#include <aws/migrationhuborchestrator/model/CreateWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/CreateWorkflowStepGroupRequest.h>
#include <aws/migrationhuborchestrator/model/CreateWorkflowStepRequest.h>
#include <aws/migrationhuborchestrator/model/DeleteTemplateRequest.h>
#include <aws/migrationhuborchestrator/model/DeleteWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/DeleteWorkflowStepGroupRequest.h>
#include <aws/migrationhuborchestrator/model/DeleteWorkflowStepRequest.h>
#include <aws/migrationhuborchestrator/model/GetTemplateRequest.h>
#include <aws/migrationhuborchestrator/model/GetTemplateStepGroupRequest.h>
#include <aws/migrationhuborchestrator/model/GetTemplateStepRequest.h>
#include <aws/migrationhuborchestrator/model/GetWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/GetWorkflowStepGroupRequest.h>
#include <aws/migrationhuborchestrator/model/GetWorkflowStepRequest.h>
#include <aws/migrationhuborchestrator/model/ListPluginsRequest.h>
#include <aws/migrationhuborchestrator/model/ListTagsForResourceRequest.h>
#include <aws/migrationhuborchestrator/model/ListTemplateStepGroupsRequest.h>
#include <aws/migrationhuborchestrator/model/ListTemplateStepsRequest.h>
#include <aws/migrationhuborchestrator/model/ListTemplatesRequest.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowStepGroupsRequest.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowStepsRequest.h>
#include <aws/migrationhuborchestrator/model/ListWorkflowsRequest.h>
#include <aws/migrationhuborchestrator/model/RetryWorkflowStepRequest.h>
#include <aws/migrationhuborchestrator/model/StartWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/StopWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/TagResourceRequest.h>
#include <aws/migrationhuborchestrator/model/UntagResourceRequest.h>
#include <aws/migrationhuborchestrator/model/UpdateTemplateRequest.h>
#include <aws/migrationhuborchestrator/model/UpdateWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/UpdateWorkflowStepGroupRequest.h>
#include <aws/migrationhuborchestrator/model/UpdateWorkflowStepRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MigrationHubOrchestrator;
using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace MigrationHubOrchestrator {
const char SERVICE_NAME[] = "migrationhub-orchestrator";
const char ALLOCATION_TAG[] = "MigrationHubOrchestratorClient";
}  // namespace MigrationHubOrchestrator
}  // namespace Aws
const char* MigrationHubOrchestratorClient::GetServiceName() { return SERVICE_NAME; }
const char* MigrationHubOrchestratorClient::GetAllocationTag() { return ALLOCATION_TAG; }

MigrationHubOrchestratorClient::MigrationHubOrchestratorClient(
    const MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration& clientConfiguration,
    std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubOrchestratorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<MigrationHubOrchestratorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MigrationHubOrchestratorClient::MigrationHubOrchestratorClient(
    const AWSCredentials& credentials, std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase> endpointProvider,
    const MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubOrchestratorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<MigrationHubOrchestratorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MigrationHubOrchestratorClient::MigrationHubOrchestratorClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase> endpointProvider,
    const MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubOrchestratorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<MigrationHubOrchestratorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MigrationHubOrchestratorClient::MigrationHubOrchestratorClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubOrchestratorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MigrationHubOrchestratorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MigrationHubOrchestratorClient::MigrationHubOrchestratorClient(const AWSCredentials& credentials,
                                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubOrchestratorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MigrationHubOrchestratorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MigrationHubOrchestratorClient::MigrationHubOrchestratorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MigrationHubOrchestratorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MigrationHubOrchestratorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MigrationHubOrchestratorClient::~MigrationHubOrchestratorClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase>& MigrationHubOrchestratorClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void MigrationHubOrchestratorClient::init(const MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration& config) {
  AWSClient::SetServiceClientName("MigrationHubOrchestrator");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "migrationhub-orchestrator");
}

void MigrationHubOrchestratorClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MigrationHubOrchestratorClient::InvokeOperationOutcome MigrationHubOrchestratorClient::InvokeServiceOperation(
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

CreateTemplateOutcome MigrationHubOrchestratorClient::CreateTemplate(const CreateTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/template");
  };

  return CreateTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkflowOutcome MigrationHubOrchestratorClient::CreateWorkflow(const CreateWorkflowRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflow/");
  };

  return CreateWorkflowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkflowStepOutcome MigrationHubOrchestratorClient::CreateWorkflowStep(const CreateWorkflowStepRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstep");
  };

  return CreateWorkflowStepOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkflowStepGroupOutcome MigrationHubOrchestratorClient::CreateWorkflowStepGroup(
    const CreateWorkflowStepGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstepgroups");
  };

  return CreateWorkflowStepGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTemplateOutcome MigrationHubOrchestratorClient::DeleteTemplate(const DeleteTemplateRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTemplate", "Required field: Id, is not set");
    return DeleteTemplateOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/template/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteWorkflowOutcome MigrationHubOrchestratorClient::DeleteWorkflow(const DeleteWorkflowRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkflow", "Required field: Id, is not set");
    return DeleteWorkflowOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflow/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteWorkflowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteWorkflowStepOutcome MigrationHubOrchestratorClient::DeleteWorkflowStep(const DeleteWorkflowStepRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkflowStep", "Required field: Id, is not set");
    return DeleteWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.StepGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkflowStep", "Required field: StepGroupId, is not set");
    return DeleteWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepGroupId]", false));
  }
  if (!request.WorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkflowStep", "Required field: WorkflowId, is not set");
    return DeleteWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstep/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteWorkflowStepOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteWorkflowStepGroupOutcome MigrationHubOrchestratorClient::DeleteWorkflowStepGroup(
    const DeleteWorkflowStepGroupRequest& request) const {
  if (!request.WorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkflowStepGroup", "Required field: WorkflowId, is not set");
    return DeleteWorkflowStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkflowStepGroup", "Required field: Id, is not set");
    return DeleteWorkflowStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstepgroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteWorkflowStepGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetTemplateOutcome MigrationHubOrchestratorClient::GetTemplate(const GetTemplateRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTemplate", "Required field: Id, is not set");
    return GetTemplateOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflowtemplate/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTemplateStepOutcome MigrationHubOrchestratorClient::GetTemplateStep(const GetTemplateStepRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTemplateStep", "Required field: Id, is not set");
    return GetTemplateStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.TemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTemplateStep", "Required field: TemplateId, is not set");
    return GetTemplateStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  if (!request.StepGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTemplateStep", "Required field: StepGroupId, is not set");
    return GetTemplateStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepGroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templatestep/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetTemplateStepOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTemplateStepGroupOutcome MigrationHubOrchestratorClient::GetTemplateStepGroup(const GetTemplateStepGroupRequest& request) const {
  if (!request.TemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTemplateStepGroup", "Required field: TemplateId, is not set");
    return GetTemplateStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTemplateStepGroup", "Required field: Id, is not set");
    return GetTemplateStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stepgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetTemplateStepGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWorkflowOutcome MigrationHubOrchestratorClient::GetWorkflow(const GetWorkflowRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflow", "Required field: Id, is not set");
    return GetWorkflowOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflow/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetWorkflowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWorkflowStepOutcome MigrationHubOrchestratorClient::GetWorkflowStep(const GetWorkflowStepRequest& request) const {
  if (!request.WorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflowStep", "Required field: WorkflowId, is not set");
    return GetWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  if (!request.StepGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflowStep", "Required field: StepGroupId, is not set");
    return GetWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepGroupId]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflowStep", "Required field: Id, is not set");
    return GetWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstep/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetWorkflowStepOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWorkflowStepGroupOutcome MigrationHubOrchestratorClient::GetWorkflowStepGroup(const GetWorkflowStepGroupRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflowStepGroup", "Required field: Id, is not set");
    return GetWorkflowStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.WorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkflowStepGroup", "Required field: WorkflowId, is not set");
    return GetWorkflowStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstepgroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetWorkflowStepGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPluginsOutcome MigrationHubOrchestratorClient::ListPlugins(const ListPluginsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/plugins");
  };

  return ListPluginsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome MigrationHubOrchestratorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTemplateStepGroupsOutcome MigrationHubOrchestratorClient::ListTemplateStepGroups(const ListTemplateStepGroupsRequest& request) const {
  if (!request.TemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTemplateStepGroups", "Required field: TemplateId, is not set");
    return ListTemplateStepGroupsOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templatestepgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  };

  return ListTemplateStepGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTemplateStepsOutcome MigrationHubOrchestratorClient::ListTemplateSteps(const ListTemplateStepsRequest& request) const {
  if (!request.TemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTemplateSteps", "Required field: TemplateId, is not set");
    return ListTemplateStepsOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  if (!request.StepGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTemplateSteps", "Required field: StepGroupId, is not set");
    return ListTemplateStepsOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepGroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templatesteps");
  };

  return ListTemplateStepsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTemplatesOutcome MigrationHubOrchestratorClient::ListTemplates(const ListTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflowtemplates");
  };

  return ListTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListWorkflowStepGroupsOutcome MigrationHubOrchestratorClient::ListWorkflowStepGroups(const ListWorkflowStepGroupsRequest& request) const {
  if (!request.WorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkflowStepGroups", "Required field: WorkflowId, is not set");
    return ListWorkflowStepGroupsOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstepgroups");
  };

  return ListWorkflowStepGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListWorkflowStepsOutcome MigrationHubOrchestratorClient::ListWorkflowSteps(const ListWorkflowStepsRequest& request) const {
  if (!request.WorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkflowSteps", "Required field: WorkflowId, is not set");
    return ListWorkflowStepsOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  if (!request.StepGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkflowSteps", "Required field: StepGroupId, is not set");
    return ListWorkflowStepsOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepGroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflow/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstepgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStepGroupId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflowsteps");
  };

  return ListWorkflowStepsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListWorkflowsOutcome MigrationHubOrchestratorClient::ListWorkflows(const ListWorkflowsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflows");
  };

  return ListWorkflowsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

RetryWorkflowStepOutcome MigrationHubOrchestratorClient::RetryWorkflowStep(const RetryWorkflowStepRequest& request) const {
  if (!request.WorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RetryWorkflowStep", "Required field: WorkflowId, is not set");
    return RetryWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  if (!request.StepGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RetryWorkflowStep", "Required field: StepGroupId, is not set");
    return RetryWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepGroupId]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RetryWorkflowStep", "Required field: Id, is not set");
    return RetryWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/retryworkflowstep/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return RetryWorkflowStepOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartWorkflowOutcome MigrationHubOrchestratorClient::StartWorkflow(const StartWorkflowRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartWorkflow", "Required field: Id, is not set");
    return StartWorkflowOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflow/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  };

  return StartWorkflowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopWorkflowOutcome MigrationHubOrchestratorClient::StopWorkflow(const StopWorkflowRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopWorkflow", "Required field: Id, is not set");
    return StopWorkflowOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflow/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  };

  return StopWorkflowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome MigrationHubOrchestratorClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome MigrationHubOrchestratorClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateTemplateOutcome MigrationHubOrchestratorClient::UpdateTemplate(const UpdateTemplateRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTemplate", "Required field: Id, is not set");
    return UpdateTemplateOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/template/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWorkflowOutcome MigrationHubOrchestratorClient::UpdateWorkflow(const UpdateWorkflowRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkflow", "Required field: Id, is not set");
    return UpdateWorkflowOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflow/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateWorkflowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWorkflowStepOutcome MigrationHubOrchestratorClient::UpdateWorkflowStep(const UpdateWorkflowStepRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkflowStep", "Required field: Id, is not set");
    return UpdateWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstep/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateWorkflowStepOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWorkflowStepGroupOutcome MigrationHubOrchestratorClient::UpdateWorkflowStepGroup(
    const UpdateWorkflowStepGroupRequest& request) const {
  if (!request.WorkflowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkflowStepGroup", "Required field: WorkflowId, is not set");
    return UpdateWorkflowStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkflowStepGroup", "Required field: Id, is not set");
    return UpdateWorkflowStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(
        MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstepgroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateWorkflowStepGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
