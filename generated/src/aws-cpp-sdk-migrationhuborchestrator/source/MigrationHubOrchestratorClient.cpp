/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/migrationhuborchestrator/MigrationHubOrchestratorClient.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorErrorMarshaller.h>
#include <aws/migrationhuborchestrator/MigrationHubOrchestratorEndpointProvider.h>
#include <aws/migrationhuborchestrator/model/CreateWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/CreateWorkflowStepRequest.h>
#include <aws/migrationhuborchestrator/model/CreateWorkflowStepGroupRequest.h>
#include <aws/migrationhuborchestrator/model/DeleteWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/DeleteWorkflowStepRequest.h>
#include <aws/migrationhuborchestrator/model/DeleteWorkflowStepGroupRequest.h>
#include <aws/migrationhuborchestrator/model/GetTemplateRequest.h>
#include <aws/migrationhuborchestrator/model/GetTemplateStepRequest.h>
#include <aws/migrationhuborchestrator/model/GetTemplateStepGroupRequest.h>
#include <aws/migrationhuborchestrator/model/GetWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/GetWorkflowStepRequest.h>
#include <aws/migrationhuborchestrator/model/GetWorkflowStepGroupRequest.h>
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
#include <aws/migrationhuborchestrator/model/UpdateWorkflowRequest.h>
#include <aws/migrationhuborchestrator/model/UpdateWorkflowStepRequest.h>
#include <aws/migrationhuborchestrator/model/UpdateWorkflowStepGroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MigrationHubOrchestrator;
using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* MigrationHubOrchestratorClient::SERVICE_NAME = "migrationhub-orchestrator";
const char* MigrationHubOrchestratorClient::ALLOCATION_TAG = "MigrationHubOrchestratorClient";

MigrationHubOrchestratorClient::MigrationHubOrchestratorClient(const MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration& clientConfiguration,
                                                               std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubOrchestratorErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MigrationHubOrchestratorClient::MigrationHubOrchestratorClient(const AWSCredentials& credentials,
                                                               std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase> endpointProvider,
                                                               const MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubOrchestratorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MigrationHubOrchestratorClient::MigrationHubOrchestratorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                               std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase> endpointProvider,
                                                               const MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubOrchestratorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  MigrationHubOrchestratorClient::MigrationHubOrchestratorClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubOrchestratorErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<MigrationHubOrchestratorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MigrationHubOrchestratorClient::MigrationHubOrchestratorClient(const AWSCredentials& credentials,
                                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubOrchestratorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MigrationHubOrchestratorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MigrationHubOrchestratorClient::MigrationHubOrchestratorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubOrchestratorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MigrationHubOrchestratorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
MigrationHubOrchestratorClient::~MigrationHubOrchestratorClient()
{
}

std::shared_ptr<MigrationHubOrchestratorEndpointProviderBase>& MigrationHubOrchestratorClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void MigrationHubOrchestratorClient::init(const MigrationHubOrchestrator::MigrationHubOrchestratorClientConfiguration& config)
{
  AWSClient::SetServiceClientName("MigrationHubOrchestrator");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void MigrationHubOrchestratorClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateWorkflowOutcome MigrationHubOrchestratorClient::CreateWorkflow(const CreateWorkflowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflow/");
  return CreateWorkflowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkflowStepOutcome MigrationHubOrchestratorClient::CreateWorkflowStep(const CreateWorkflowStepRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkflowStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkflowStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstep");
  return CreateWorkflowStepOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateWorkflowStepGroupOutcome MigrationHubOrchestratorClient::CreateWorkflowStepGroup(const CreateWorkflowStepGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateWorkflowStepGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateWorkflowStepGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstepgroups");
  return CreateWorkflowStepGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkflowOutcome MigrationHubOrchestratorClient::DeleteWorkflow(const DeleteWorkflowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkflow", "Required field: Id, is not set");
    return DeleteWorkflowOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflow/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteWorkflowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkflowStepOutcome MigrationHubOrchestratorClient::DeleteWorkflowStep(const DeleteWorkflowStepRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkflowStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkflowStep", "Required field: Id, is not set");
    return DeleteWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.StepGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkflowStep", "Required field: StepGroupId, is not set");
    return DeleteWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepGroupId]", false));
  }
  if (!request.WorkflowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkflowStep", "Required field: WorkflowId, is not set");
    return DeleteWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkflowStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstep/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteWorkflowStepOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteWorkflowStepGroupOutcome MigrationHubOrchestratorClient::DeleteWorkflowStepGroup(const DeleteWorkflowStepGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteWorkflowStepGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkflowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkflowStepGroup", "Required field: WorkflowId, is not set");
    return DeleteWorkflowStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteWorkflowStepGroup", "Required field: Id, is not set");
    return DeleteWorkflowStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteWorkflowStepGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstepgroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteWorkflowStepGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

GetTemplateOutcome MigrationHubOrchestratorClient::GetTemplate(const GetTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTemplate", "Required field: Id, is not set");
    return GetTemplateOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflowtemplate/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTemplateStepOutcome MigrationHubOrchestratorClient::GetTemplateStep(const GetTemplateStepRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTemplateStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTemplateStep", "Required field: Id, is not set");
    return GetTemplateStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTemplateStep", "Required field: TemplateId, is not set");
    return GetTemplateStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  if (!request.StepGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTemplateStep", "Required field: StepGroupId, is not set");
    return GetTemplateStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepGroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTemplateStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templatestep/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetTemplateStepOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTemplateStepGroupOutcome MigrationHubOrchestratorClient::GetTemplateStepGroup(const GetTemplateStepGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTemplateStepGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTemplateStepGroup", "Required field: TemplateId, is not set");
    return GetTemplateStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTemplateStepGroup", "Required field: Id, is not set");
    return GetTemplateStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTemplateStepGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stepgroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetTemplateStepGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWorkflowOutcome MigrationHubOrchestratorClient::GetWorkflow(const GetWorkflowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflow", "Required field: Id, is not set");
    return GetWorkflowOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflow/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetWorkflowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWorkflowStepOutcome MigrationHubOrchestratorClient::GetWorkflowStep(const GetWorkflowStepRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWorkflowStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkflowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflowStep", "Required field: WorkflowId, is not set");
    return GetWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  if (!request.StepGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflowStep", "Required field: StepGroupId, is not set");
    return GetWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepGroupId]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflowStep", "Required field: Id, is not set");
    return GetWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWorkflowStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstep/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetWorkflowStepOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetWorkflowStepGroupOutcome MigrationHubOrchestratorClient::GetWorkflowStepGroup(const GetWorkflowStepGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWorkflowStepGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflowStepGroup", "Required field: Id, is not set");
    return GetWorkflowStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.WorkflowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetWorkflowStepGroup", "Required field: WorkflowId, is not set");
    return GetWorkflowStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWorkflowStepGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstepgroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetWorkflowStepGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPluginsOutcome MigrationHubOrchestratorClient::ListPlugins(const ListPluginsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPlugins, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPlugins, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/plugins");
  return ListPluginsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome MigrationHubOrchestratorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplateStepGroupsOutcome MigrationHubOrchestratorClient::ListTemplateStepGroups(const ListTemplateStepGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTemplateStepGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateStepGroups", "Required field: TemplateId, is not set");
    return ListTemplateStepGroupsOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTemplateStepGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templatestepgroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  return ListTemplateStepGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplateStepsOutcome MigrationHubOrchestratorClient::ListTemplateSteps(const ListTemplateStepsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTemplateSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateSteps", "Required field: TemplateId, is not set");
    return ListTemplateStepsOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  if (!request.StepGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateSteps", "Required field: StepGroupId, is not set");
    return ListTemplateStepsOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepGroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTemplateSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templatesteps");
  return ListTemplateStepsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplatesOutcome MigrationHubOrchestratorClient::ListTemplates(const ListTemplatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflowtemplates");
  return ListTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWorkflowStepGroupsOutcome MigrationHubOrchestratorClient::ListWorkflowStepGroups(const ListWorkflowStepGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkflowStepGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkflowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListWorkflowStepGroups", "Required field: WorkflowId, is not set");
    return ListWorkflowStepGroupsOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkflowStepGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstepgroups");
  return ListWorkflowStepGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWorkflowStepsOutcome MigrationHubOrchestratorClient::ListWorkflowSteps(const ListWorkflowStepsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkflowSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkflowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListWorkflowSteps", "Required field: WorkflowId, is not set");
    return ListWorkflowStepsOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  if (!request.StepGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListWorkflowSteps", "Required field: StepGroupId, is not set");
    return ListWorkflowStepsOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepGroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkflowSteps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflow/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkflowId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstepgroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStepGroupId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowsteps");
  return ListWorkflowStepsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListWorkflowsOutcome MigrationHubOrchestratorClient::ListWorkflows(const ListWorkflowsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListWorkflows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListWorkflows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflows");
  return ListWorkflowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

RetryWorkflowStepOutcome MigrationHubOrchestratorClient::RetryWorkflowStep(const RetryWorkflowStepRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RetryWorkflowStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkflowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RetryWorkflowStep", "Required field: WorkflowId, is not set");
    return RetryWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  if (!request.StepGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RetryWorkflowStep", "Required field: StepGroupId, is not set");
    return RetryWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StepGroupId]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RetryWorkflowStep", "Required field: Id, is not set");
    return RetryWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RetryWorkflowStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/retryworkflowstep/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return RetryWorkflowStepOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartWorkflowOutcome MigrationHubOrchestratorClient::StartWorkflow(const StartWorkflowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartWorkflow", "Required field: Id, is not set");
    return StartWorkflowOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflow/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  return StartWorkflowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopWorkflowOutcome MigrationHubOrchestratorClient::StopWorkflow(const StopWorkflowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopWorkflow", "Required field: Id, is not set");
    return StopWorkflowOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflow/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  return StopWorkflowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome MigrationHubOrchestratorClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome MigrationHubOrchestratorClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkflowOutcome MigrationHubOrchestratorClient::UpdateWorkflow(const UpdateWorkflowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkflow", "Required field: Id, is not set");
    return UpdateWorkflowOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkflow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/migrationworkflow/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateWorkflowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkflowStepOutcome MigrationHubOrchestratorClient::UpdateWorkflowStep(const UpdateWorkflowStepRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkflowStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkflowStep", "Required field: Id, is not set");
    return UpdateWorkflowStepOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkflowStep, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstep/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateWorkflowStepOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateWorkflowStepGroupOutcome MigrationHubOrchestratorClient::UpdateWorkflowStepGroup(const UpdateWorkflowStepGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateWorkflowStepGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WorkflowIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkflowStepGroup", "Required field: WorkflowId, is not set");
    return UpdateWorkflowStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkflowId]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateWorkflowStepGroup", "Required field: Id, is not set");
    return UpdateWorkflowStepGroupOutcome(Aws::Client::AWSError<MigrationHubOrchestratorErrors>(MigrationHubOrchestratorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateWorkflowStepGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/workflowstepgroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateWorkflowStepGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

