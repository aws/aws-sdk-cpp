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
#include <aws/ssm/SSMClient.h>
#include <aws/ssm/SSMEndpointProvider.h>
#include <aws/ssm/SSMErrorMarshaller.h>
#include <aws/ssm/model/AddTagsToResourceRequest.h>
#include <aws/ssm/model/AssociateOpsItemRelatedItemRequest.h>
#include <aws/ssm/model/CancelCommandRequest.h>
#include <aws/ssm/model/CancelMaintenanceWindowExecutionRequest.h>
#include <aws/ssm/model/CreateActivationRequest.h>
#include <aws/ssm/model/CreateAssociationBatchRequest.h>
#include <aws/ssm/model/CreateAssociationRequest.h>
#include <aws/ssm/model/CreateDocumentRequest.h>
#include <aws/ssm/model/CreateMaintenanceWindowRequest.h>
#include <aws/ssm/model/CreateOpsItemRequest.h>
#include <aws/ssm/model/CreateOpsMetadataRequest.h>
#include <aws/ssm/model/CreatePatchBaselineRequest.h>
#include <aws/ssm/model/CreateResourceDataSyncRequest.h>
#include <aws/ssm/model/DeleteActivationRequest.h>
#include <aws/ssm/model/DeleteAssociationRequest.h>
#include <aws/ssm/model/DeleteDocumentRequest.h>
#include <aws/ssm/model/DeleteInventoryRequest.h>
#include <aws/ssm/model/DeleteMaintenanceWindowRequest.h>
#include <aws/ssm/model/DeleteOpsItemRequest.h>
#include <aws/ssm/model/DeleteOpsMetadataRequest.h>
#include <aws/ssm/model/DeleteParameterRequest.h>
#include <aws/ssm/model/DeleteParametersRequest.h>
#include <aws/ssm/model/DeletePatchBaselineRequest.h>
#include <aws/ssm/model/DeleteResourceDataSyncRequest.h>
#include <aws/ssm/model/DeleteResourcePolicyRequest.h>
#include <aws/ssm/model/DeregisterManagedInstanceRequest.h>
#include <aws/ssm/model/DeregisterPatchBaselineForPatchGroupRequest.h>
#include <aws/ssm/model/DeregisterTargetFromMaintenanceWindowRequest.h>
#include <aws/ssm/model/DeregisterTaskFromMaintenanceWindowRequest.h>
#include <aws/ssm/model/DescribeActivationsRequest.h>
#include <aws/ssm/model/DescribeAssociationExecutionTargetsRequest.h>
#include <aws/ssm/model/DescribeAssociationExecutionsRequest.h>
#include <aws/ssm/model/DescribeAssociationRequest.h>
#include <aws/ssm/model/DescribeAutomationExecutionsRequest.h>
#include <aws/ssm/model/DescribeAutomationStepExecutionsRequest.h>
#include <aws/ssm/model/DescribeAvailablePatchesRequest.h>
#include <aws/ssm/model/DescribeDocumentPermissionRequest.h>
#include <aws/ssm/model/DescribeDocumentRequest.h>
#include <aws/ssm/model/DescribeEffectiveInstanceAssociationsRequest.h>
#include <aws/ssm/model/DescribeEffectivePatchesForPatchBaselineRequest.h>
#include <aws/ssm/model/DescribeInstanceAssociationsStatusRequest.h>
#include <aws/ssm/model/DescribeInstanceInformationRequest.h>
#include <aws/ssm/model/DescribeInstancePatchStatesForPatchGroupRequest.h>
#include <aws/ssm/model/DescribeInstancePatchStatesRequest.h>
#include <aws/ssm/model/DescribeInstancePatchesRequest.h>
#include <aws/ssm/model/DescribeInstancePropertiesRequest.h>
#include <aws/ssm/model/DescribeInventoryDeletionsRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionTaskInvocationsRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionTasksRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionsRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowScheduleRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowTargetsRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowTasksRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowsForTargetRequest.h>
#include <aws/ssm/model/DescribeMaintenanceWindowsRequest.h>
#include <aws/ssm/model/DescribeOpsItemsRequest.h>
#include <aws/ssm/model/DescribeParametersRequest.h>
#include <aws/ssm/model/DescribePatchBaselinesRequest.h>
#include <aws/ssm/model/DescribePatchGroupStateRequest.h>
#include <aws/ssm/model/DescribePatchGroupsRequest.h>
#include <aws/ssm/model/DescribePatchPropertiesRequest.h>
#include <aws/ssm/model/DescribeSessionsRequest.h>
#include <aws/ssm/model/DisassociateOpsItemRelatedItemRequest.h>
#include <aws/ssm/model/GetAccessTokenRequest.h>
#include <aws/ssm/model/GetAutomationExecutionRequest.h>
#include <aws/ssm/model/GetCalendarStateRequest.h>
#include <aws/ssm/model/GetCommandInvocationRequest.h>
#include <aws/ssm/model/GetConnectionStatusRequest.h>
#include <aws/ssm/model/GetDefaultPatchBaselineRequest.h>
#include <aws/ssm/model/GetDeployablePatchSnapshotForInstanceRequest.h>
#include <aws/ssm/model/GetDocumentRequest.h>
#include <aws/ssm/model/GetExecutionPreviewRequest.h>
#include <aws/ssm/model/GetInventoryRequest.h>
#include <aws/ssm/model/GetInventorySchemaRequest.h>
#include <aws/ssm/model/GetMaintenanceWindowExecutionRequest.h>
#include <aws/ssm/model/GetMaintenanceWindowExecutionTaskInvocationRequest.h>
#include <aws/ssm/model/GetMaintenanceWindowExecutionTaskRequest.h>
#include <aws/ssm/model/GetMaintenanceWindowRequest.h>
#include <aws/ssm/model/GetMaintenanceWindowTaskRequest.h>
#include <aws/ssm/model/GetOpsItemRequest.h>
#include <aws/ssm/model/GetOpsMetadataRequest.h>
#include <aws/ssm/model/GetOpsSummaryRequest.h>
#include <aws/ssm/model/GetParameterHistoryRequest.h>
#include <aws/ssm/model/GetParameterRequest.h>
#include <aws/ssm/model/GetParametersByPathRequest.h>
#include <aws/ssm/model/GetParametersRequest.h>
#include <aws/ssm/model/GetPatchBaselineForPatchGroupRequest.h>
#include <aws/ssm/model/GetPatchBaselineRequest.h>
#include <aws/ssm/model/GetResourcePoliciesRequest.h>
#include <aws/ssm/model/GetServiceSettingRequest.h>
#include <aws/ssm/model/LabelParameterVersionRequest.h>
#include <aws/ssm/model/ListAssociationVersionsRequest.h>
#include <aws/ssm/model/ListAssociationsRequest.h>
#include <aws/ssm/model/ListCommandInvocationsRequest.h>
#include <aws/ssm/model/ListCommandsRequest.h>
#include <aws/ssm/model/ListComplianceItemsRequest.h>
#include <aws/ssm/model/ListComplianceSummariesRequest.h>
#include <aws/ssm/model/ListDocumentMetadataHistoryRequest.h>
#include <aws/ssm/model/ListDocumentVersionsRequest.h>
#include <aws/ssm/model/ListDocumentsRequest.h>
#include <aws/ssm/model/ListInventoryEntriesRequest.h>
#include <aws/ssm/model/ListNodesRequest.h>
#include <aws/ssm/model/ListNodesSummaryRequest.h>
#include <aws/ssm/model/ListOpsItemEventsRequest.h>
#include <aws/ssm/model/ListOpsItemRelatedItemsRequest.h>
#include <aws/ssm/model/ListOpsMetadataRequest.h>
#include <aws/ssm/model/ListResourceComplianceSummariesRequest.h>
#include <aws/ssm/model/ListResourceDataSyncRequest.h>
#include <aws/ssm/model/ListTagsForResourceRequest.h>
#include <aws/ssm/model/ModifyDocumentPermissionRequest.h>
#include <aws/ssm/model/PutComplianceItemsRequest.h>
#include <aws/ssm/model/PutInventoryRequest.h>
#include <aws/ssm/model/PutParameterRequest.h>
#include <aws/ssm/model/PutResourcePolicyRequest.h>
#include <aws/ssm/model/RegisterDefaultPatchBaselineRequest.h>
#include <aws/ssm/model/RegisterPatchBaselineForPatchGroupRequest.h>
#include <aws/ssm/model/RegisterTargetWithMaintenanceWindowRequest.h>
#include <aws/ssm/model/RegisterTaskWithMaintenanceWindowRequest.h>
#include <aws/ssm/model/RemoveTagsFromResourceRequest.h>
#include <aws/ssm/model/ResetServiceSettingRequest.h>
#include <aws/ssm/model/ResumeSessionRequest.h>
#include <aws/ssm/model/SendAutomationSignalRequest.h>
#include <aws/ssm/model/SendCommandRequest.h>
#include <aws/ssm/model/StartAccessRequestRequest.h>
#include <aws/ssm/model/StartAssociationsOnceRequest.h>
#include <aws/ssm/model/StartAutomationExecutionRequest.h>
#include <aws/ssm/model/StartChangeRequestExecutionRequest.h>
#include <aws/ssm/model/StartExecutionPreviewRequest.h>
#include <aws/ssm/model/StartSessionRequest.h>
#include <aws/ssm/model/StopAutomationExecutionRequest.h>
#include <aws/ssm/model/TerminateSessionRequest.h>
#include <aws/ssm/model/UnlabelParameterVersionRequest.h>
#include <aws/ssm/model/UpdateAssociationRequest.h>
#include <aws/ssm/model/UpdateAssociationStatusRequest.h>
#include <aws/ssm/model/UpdateDocumentDefaultVersionRequest.h>
#include <aws/ssm/model/UpdateDocumentMetadataRequest.h>
#include <aws/ssm/model/UpdateDocumentRequest.h>
#include <aws/ssm/model/UpdateMaintenanceWindowRequest.h>
#include <aws/ssm/model/UpdateMaintenanceWindowTargetRequest.h>
#include <aws/ssm/model/UpdateMaintenanceWindowTaskRequest.h>
#include <aws/ssm/model/UpdateManagedInstanceRoleRequest.h>
#include <aws/ssm/model/UpdateOpsItemRequest.h>
#include <aws/ssm/model/UpdateOpsMetadataRequest.h>
#include <aws/ssm/model/UpdatePatchBaselineRequest.h>
#include <aws/ssm/model/UpdateResourceDataSyncRequest.h>
#include <aws/ssm/model/UpdateServiceSettingRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SSM;
using namespace Aws::SSM::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SSM {
const char SERVICE_NAME[] = "ssm";
const char ALLOCATION_TAG[] = "SSMClient";
}  // namespace SSM
}  // namespace Aws
const char* SSMClient::GetServiceName() { return SERVICE_NAME; }
const char* SSMClient::GetAllocationTag() { return ALLOCATION_TAG; }

SSMClient::SSMClient(const SSM::SSMClientConfiguration& clientConfiguration, std::shared_ptr<SSMEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SSMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SSMClient::SSMClient(const AWSCredentials& credentials, std::shared_ptr<SSMEndpointProviderBase> endpointProvider,
                     const SSM::SSMClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SSMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SSMClient::SSMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<SSMEndpointProviderBase> endpointProvider, const SSM::SSMClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SSMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SSMClient::SSMClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SSMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SSMClient::SSMClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SSMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SSMClient::SSMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SSMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SSMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SSMClient::~SSMClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SSMEndpointProviderBase>& SSMClient::accessEndpointProvider() { return m_endpointProvider; }

void SSMClient::init(const SSM::SSMClientConfiguration& config) {
  AWSClient::SetServiceClientName("SSM");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "ssm");
}

void SSMClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SSMClient::InvokeOperationOutcome SSMClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AddTagsToResourceOutcome SSMClient::AddTagsToResource(const AddTagsToResourceRequest& request) const {
  return AddTagsToResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateOpsItemRelatedItemOutcome SSMClient::AssociateOpsItemRelatedItem(const AssociateOpsItemRelatedItemRequest& request) const {
  return AssociateOpsItemRelatedItemOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelCommandOutcome SSMClient::CancelCommand(const CancelCommandRequest& request) const {
  return CancelCommandOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelMaintenanceWindowExecutionOutcome SSMClient::CancelMaintenanceWindowExecution(
    const CancelMaintenanceWindowExecutionRequest& request) const {
  return CancelMaintenanceWindowExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateActivationOutcome SSMClient::CreateActivation(const CreateActivationRequest& request) const {
  return CreateActivationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAssociationOutcome SSMClient::CreateAssociation(const CreateAssociationRequest& request) const {
  return CreateAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAssociationBatchOutcome SSMClient::CreateAssociationBatch(const CreateAssociationBatchRequest& request) const {
  return CreateAssociationBatchOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDocumentOutcome SSMClient::CreateDocument(const CreateDocumentRequest& request) const {
  return CreateDocumentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMaintenanceWindowOutcome SSMClient::CreateMaintenanceWindow(const CreateMaintenanceWindowRequest& request) const {
  return CreateMaintenanceWindowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOpsItemOutcome SSMClient::CreateOpsItem(const CreateOpsItemRequest& request) const {
  return CreateOpsItemOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateOpsMetadataOutcome SSMClient::CreateOpsMetadata(const CreateOpsMetadataRequest& request) const {
  return CreateOpsMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePatchBaselineOutcome SSMClient::CreatePatchBaseline(const CreatePatchBaselineRequest& request) const {
  return CreatePatchBaselineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateResourceDataSyncOutcome SSMClient::CreateResourceDataSync(const CreateResourceDataSyncRequest& request) const {
  return CreateResourceDataSyncOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteActivationOutcome SSMClient::DeleteActivation(const DeleteActivationRequest& request) const {
  return DeleteActivationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAssociationOutcome SSMClient::DeleteAssociation(const DeleteAssociationRequest& request) const {
  return DeleteAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDocumentOutcome SSMClient::DeleteDocument(const DeleteDocumentRequest& request) const {
  return DeleteDocumentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteInventoryOutcome SSMClient::DeleteInventory(const DeleteInventoryRequest& request) const {
  return DeleteInventoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMaintenanceWindowOutcome SSMClient::DeleteMaintenanceWindow(const DeleteMaintenanceWindowRequest& request) const {
  return DeleteMaintenanceWindowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteOpsItemOutcome SSMClient::DeleteOpsItem(const DeleteOpsItemRequest& request) const {
  return DeleteOpsItemOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteOpsMetadataOutcome SSMClient::DeleteOpsMetadata(const DeleteOpsMetadataRequest& request) const {
  return DeleteOpsMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteParameterOutcome SSMClient::DeleteParameter(const DeleteParameterRequest& request) const {
  return DeleteParameterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteParametersOutcome SSMClient::DeleteParameters(const DeleteParametersRequest& request) const {
  return DeleteParametersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePatchBaselineOutcome SSMClient::DeletePatchBaseline(const DeletePatchBaselineRequest& request) const {
  return DeletePatchBaselineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourceDataSyncOutcome SSMClient::DeleteResourceDataSync(const DeleteResourceDataSyncRequest& request) const {
  return DeleteResourceDataSyncOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteResourcePolicyOutcome SSMClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterManagedInstanceOutcome SSMClient::DeregisterManagedInstance(const DeregisterManagedInstanceRequest& request) const {
  return DeregisterManagedInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterPatchBaselineForPatchGroupOutcome SSMClient::DeregisterPatchBaselineForPatchGroup(
    const DeregisterPatchBaselineForPatchGroupRequest& request) const {
  return DeregisterPatchBaselineForPatchGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterTargetFromMaintenanceWindowOutcome SSMClient::DeregisterTargetFromMaintenanceWindow(
    const DeregisterTargetFromMaintenanceWindowRequest& request) const {
  return DeregisterTargetFromMaintenanceWindowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterTaskFromMaintenanceWindowOutcome SSMClient::DeregisterTaskFromMaintenanceWindow(
    const DeregisterTaskFromMaintenanceWindowRequest& request) const {
  return DeregisterTaskFromMaintenanceWindowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeActivationsOutcome SSMClient::DescribeActivations(const DescribeActivationsRequest& request) const {
  return DescribeActivationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAssociationOutcome SSMClient::DescribeAssociation(const DescribeAssociationRequest& request) const {
  return DescribeAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAssociationExecutionTargetsOutcome SSMClient::DescribeAssociationExecutionTargets(
    const DescribeAssociationExecutionTargetsRequest& request) const {
  return DescribeAssociationExecutionTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAssociationExecutionsOutcome SSMClient::DescribeAssociationExecutions(const DescribeAssociationExecutionsRequest& request) const {
  return DescribeAssociationExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAutomationExecutionsOutcome SSMClient::DescribeAutomationExecutions(const DescribeAutomationExecutionsRequest& request) const {
  return DescribeAutomationExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAutomationStepExecutionsOutcome SSMClient::DescribeAutomationStepExecutions(
    const DescribeAutomationStepExecutionsRequest& request) const {
  return DescribeAutomationStepExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAvailablePatchesOutcome SSMClient::DescribeAvailablePatches(const DescribeAvailablePatchesRequest& request) const {
  return DescribeAvailablePatchesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDocumentOutcome SSMClient::DescribeDocument(const DescribeDocumentRequest& request) const {
  return DescribeDocumentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDocumentPermissionOutcome SSMClient::DescribeDocumentPermission(const DescribeDocumentPermissionRequest& request) const {
  return DescribeDocumentPermissionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEffectiveInstanceAssociationsOutcome SSMClient::DescribeEffectiveInstanceAssociations(
    const DescribeEffectiveInstanceAssociationsRequest& request) const {
  return DescribeEffectiveInstanceAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEffectivePatchesForPatchBaselineOutcome SSMClient::DescribeEffectivePatchesForPatchBaseline(
    const DescribeEffectivePatchesForPatchBaselineRequest& request) const {
  return DescribeEffectivePatchesForPatchBaselineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstanceAssociationsStatusOutcome SSMClient::DescribeInstanceAssociationsStatus(
    const DescribeInstanceAssociationsStatusRequest& request) const {
  return DescribeInstanceAssociationsStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstanceInformationOutcome SSMClient::DescribeInstanceInformation(const DescribeInstanceInformationRequest& request) const {
  return DescribeInstanceInformationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstancePatchStatesOutcome SSMClient::DescribeInstancePatchStates(const DescribeInstancePatchStatesRequest& request) const {
  return DescribeInstancePatchStatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstancePatchStatesForPatchGroupOutcome SSMClient::DescribeInstancePatchStatesForPatchGroup(
    const DescribeInstancePatchStatesForPatchGroupRequest& request) const {
  return DescribeInstancePatchStatesForPatchGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstancePatchesOutcome SSMClient::DescribeInstancePatches(const DescribeInstancePatchesRequest& request) const {
  return DescribeInstancePatchesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInstancePropertiesOutcome SSMClient::DescribeInstanceProperties(const DescribeInstancePropertiesRequest& request) const {
  return DescribeInstancePropertiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeInventoryDeletionsOutcome SSMClient::DescribeInventoryDeletions(const DescribeInventoryDeletionsRequest& request) const {
  return DescribeInventoryDeletionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMaintenanceWindowExecutionTaskInvocationsOutcome SSMClient::DescribeMaintenanceWindowExecutionTaskInvocations(
    const DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request) const {
  return DescribeMaintenanceWindowExecutionTaskInvocationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMaintenanceWindowExecutionTasksOutcome SSMClient::DescribeMaintenanceWindowExecutionTasks(
    const DescribeMaintenanceWindowExecutionTasksRequest& request) const {
  return DescribeMaintenanceWindowExecutionTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMaintenanceWindowExecutionsOutcome SSMClient::DescribeMaintenanceWindowExecutions(
    const DescribeMaintenanceWindowExecutionsRequest& request) const {
  return DescribeMaintenanceWindowExecutionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMaintenanceWindowScheduleOutcome SSMClient::DescribeMaintenanceWindowSchedule(
    const DescribeMaintenanceWindowScheduleRequest& request) const {
  return DescribeMaintenanceWindowScheduleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMaintenanceWindowTargetsOutcome SSMClient::DescribeMaintenanceWindowTargets(
    const DescribeMaintenanceWindowTargetsRequest& request) const {
  return DescribeMaintenanceWindowTargetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMaintenanceWindowTasksOutcome SSMClient::DescribeMaintenanceWindowTasks(
    const DescribeMaintenanceWindowTasksRequest& request) const {
  return DescribeMaintenanceWindowTasksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMaintenanceWindowsOutcome SSMClient::DescribeMaintenanceWindows(const DescribeMaintenanceWindowsRequest& request) const {
  return DescribeMaintenanceWindowsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeMaintenanceWindowsForTargetOutcome SSMClient::DescribeMaintenanceWindowsForTarget(
    const DescribeMaintenanceWindowsForTargetRequest& request) const {
  return DescribeMaintenanceWindowsForTargetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOpsItemsOutcome SSMClient::DescribeOpsItems(const DescribeOpsItemsRequest& request) const {
  return DescribeOpsItemsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeParametersOutcome SSMClient::DescribeParameters(const DescribeParametersRequest& request) const {
  return DescribeParametersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePatchBaselinesOutcome SSMClient::DescribePatchBaselines(const DescribePatchBaselinesRequest& request) const {
  return DescribePatchBaselinesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePatchGroupStateOutcome SSMClient::DescribePatchGroupState(const DescribePatchGroupStateRequest& request) const {
  return DescribePatchGroupStateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePatchGroupsOutcome SSMClient::DescribePatchGroups(const DescribePatchGroupsRequest& request) const {
  return DescribePatchGroupsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePatchPropertiesOutcome SSMClient::DescribePatchProperties(const DescribePatchPropertiesRequest& request) const {
  return DescribePatchPropertiesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSessionsOutcome SSMClient::DescribeSessions(const DescribeSessionsRequest& request) const {
  return DescribeSessionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateOpsItemRelatedItemOutcome SSMClient::DisassociateOpsItemRelatedItem(
    const DisassociateOpsItemRelatedItemRequest& request) const {
  return DisassociateOpsItemRelatedItemOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAccessTokenOutcome SSMClient::GetAccessToken(const GetAccessTokenRequest& request) const {
  return GetAccessTokenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAutomationExecutionOutcome SSMClient::GetAutomationExecution(const GetAutomationExecutionRequest& request) const {
  return GetAutomationExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCalendarStateOutcome SSMClient::GetCalendarState(const GetCalendarStateRequest& request) const {
  return GetCalendarStateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCommandInvocationOutcome SSMClient::GetCommandInvocation(const GetCommandInvocationRequest& request) const {
  return GetCommandInvocationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetConnectionStatusOutcome SSMClient::GetConnectionStatus(const GetConnectionStatusRequest& request) const {
  return GetConnectionStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDefaultPatchBaselineOutcome SSMClient::GetDefaultPatchBaseline(const GetDefaultPatchBaselineRequest& request) const {
  return GetDefaultPatchBaselineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDeployablePatchSnapshotForInstanceOutcome SSMClient::GetDeployablePatchSnapshotForInstance(
    const GetDeployablePatchSnapshotForInstanceRequest& request) const {
  return GetDeployablePatchSnapshotForInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDocumentOutcome SSMClient::GetDocument(const GetDocumentRequest& request) const {
  return GetDocumentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetExecutionPreviewOutcome SSMClient::GetExecutionPreview(const GetExecutionPreviewRequest& request) const {
  return GetExecutionPreviewOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetInventoryOutcome SSMClient::GetInventory(const GetInventoryRequest& request) const {
  return GetInventoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetInventorySchemaOutcome SSMClient::GetInventorySchema(const GetInventorySchemaRequest& request) const {
  return GetInventorySchemaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMaintenanceWindowOutcome SSMClient::GetMaintenanceWindow(const GetMaintenanceWindowRequest& request) const {
  return GetMaintenanceWindowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMaintenanceWindowExecutionOutcome SSMClient::GetMaintenanceWindowExecution(const GetMaintenanceWindowExecutionRequest& request) const {
  return GetMaintenanceWindowExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMaintenanceWindowExecutionTaskOutcome SSMClient::GetMaintenanceWindowExecutionTask(
    const GetMaintenanceWindowExecutionTaskRequest& request) const {
  return GetMaintenanceWindowExecutionTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMaintenanceWindowExecutionTaskInvocationOutcome SSMClient::GetMaintenanceWindowExecutionTaskInvocation(
    const GetMaintenanceWindowExecutionTaskInvocationRequest& request) const {
  return GetMaintenanceWindowExecutionTaskInvocationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMaintenanceWindowTaskOutcome SSMClient::GetMaintenanceWindowTask(const GetMaintenanceWindowTaskRequest& request) const {
  return GetMaintenanceWindowTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOpsItemOutcome SSMClient::GetOpsItem(const GetOpsItemRequest& request) const {
  return GetOpsItemOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOpsMetadataOutcome SSMClient::GetOpsMetadata(const GetOpsMetadataRequest& request) const {
  return GetOpsMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOpsSummaryOutcome SSMClient::GetOpsSummary(const GetOpsSummaryRequest& request) const {
  return GetOpsSummaryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetParameterOutcome SSMClient::GetParameter(const GetParameterRequest& request) const {
  return GetParameterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetParameterHistoryOutcome SSMClient::GetParameterHistory(const GetParameterHistoryRequest& request) const {
  return GetParameterHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetParametersOutcome SSMClient::GetParameters(const GetParametersRequest& request) const {
  return GetParametersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetParametersByPathOutcome SSMClient::GetParametersByPath(const GetParametersByPathRequest& request) const {
  return GetParametersByPathOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPatchBaselineOutcome SSMClient::GetPatchBaseline(const GetPatchBaselineRequest& request) const {
  return GetPatchBaselineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPatchBaselineForPatchGroupOutcome SSMClient::GetPatchBaselineForPatchGroup(const GetPatchBaselineForPatchGroupRequest& request) const {
  return GetPatchBaselineForPatchGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourcePoliciesOutcome SSMClient::GetResourcePolicies(const GetResourcePoliciesRequest& request) const {
  return GetResourcePoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetServiceSettingOutcome SSMClient::GetServiceSetting(const GetServiceSettingRequest& request) const {
  return GetServiceSettingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

LabelParameterVersionOutcome SSMClient::LabelParameterVersion(const LabelParameterVersionRequest& request) const {
  return LabelParameterVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAssociationVersionsOutcome SSMClient::ListAssociationVersions(const ListAssociationVersionsRequest& request) const {
  return ListAssociationVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAssociationsOutcome SSMClient::ListAssociations(const ListAssociationsRequest& request) const {
  return ListAssociationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCommandInvocationsOutcome SSMClient::ListCommandInvocations(const ListCommandInvocationsRequest& request) const {
  return ListCommandInvocationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCommandsOutcome SSMClient::ListCommands(const ListCommandsRequest& request) const {
  return ListCommandsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListComplianceItemsOutcome SSMClient::ListComplianceItems(const ListComplianceItemsRequest& request) const {
  return ListComplianceItemsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListComplianceSummariesOutcome SSMClient::ListComplianceSummaries(const ListComplianceSummariesRequest& request) const {
  return ListComplianceSummariesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDocumentMetadataHistoryOutcome SSMClient::ListDocumentMetadataHistory(const ListDocumentMetadataHistoryRequest& request) const {
  return ListDocumentMetadataHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDocumentVersionsOutcome SSMClient::ListDocumentVersions(const ListDocumentVersionsRequest& request) const {
  return ListDocumentVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDocumentsOutcome SSMClient::ListDocuments(const ListDocumentsRequest& request) const {
  return ListDocumentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListInventoryEntriesOutcome SSMClient::ListInventoryEntries(const ListInventoryEntriesRequest& request) const {
  return ListInventoryEntriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNodesOutcome SSMClient::ListNodes(const ListNodesRequest& request) const {
  return ListNodesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNodesSummaryOutcome SSMClient::ListNodesSummary(const ListNodesSummaryRequest& request) const {
  return ListNodesSummaryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOpsItemEventsOutcome SSMClient::ListOpsItemEvents(const ListOpsItemEventsRequest& request) const {
  return ListOpsItemEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOpsItemRelatedItemsOutcome SSMClient::ListOpsItemRelatedItems(const ListOpsItemRelatedItemsRequest& request) const {
  return ListOpsItemRelatedItemsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOpsMetadataOutcome SSMClient::ListOpsMetadata(const ListOpsMetadataRequest& request) const {
  return ListOpsMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourceComplianceSummariesOutcome SSMClient::ListResourceComplianceSummaries(
    const ListResourceComplianceSummariesRequest& request) const {
  return ListResourceComplianceSummariesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourceDataSyncOutcome SSMClient::ListResourceDataSync(const ListResourceDataSyncRequest& request) const {
  return ListResourceDataSyncOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome SSMClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ModifyDocumentPermissionOutcome SSMClient::ModifyDocumentPermission(const ModifyDocumentPermissionRequest& request) const {
  return ModifyDocumentPermissionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutComplianceItemsOutcome SSMClient::PutComplianceItems(const PutComplianceItemsRequest& request) const {
  return PutComplianceItemsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutInventoryOutcome SSMClient::PutInventory(const PutInventoryRequest& request) const {
  return PutInventoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutParameterOutcome SSMClient::PutParameter(const PutParameterRequest& request) const {
  return PutParameterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutResourcePolicyOutcome SSMClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  return PutResourcePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterDefaultPatchBaselineOutcome SSMClient::RegisterDefaultPatchBaseline(const RegisterDefaultPatchBaselineRequest& request) const {
  return RegisterDefaultPatchBaselineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterPatchBaselineForPatchGroupOutcome SSMClient::RegisterPatchBaselineForPatchGroup(
    const RegisterPatchBaselineForPatchGroupRequest& request) const {
  return RegisterPatchBaselineForPatchGroupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterTargetWithMaintenanceWindowOutcome SSMClient::RegisterTargetWithMaintenanceWindow(
    const RegisterTargetWithMaintenanceWindowRequest& request) const {
  return RegisterTargetWithMaintenanceWindowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterTaskWithMaintenanceWindowOutcome SSMClient::RegisterTaskWithMaintenanceWindow(
    const RegisterTaskWithMaintenanceWindowRequest& request) const {
  return RegisterTaskWithMaintenanceWindowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveTagsFromResourceOutcome SSMClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const {
  return RemoveTagsFromResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResetServiceSettingOutcome SSMClient::ResetServiceSetting(const ResetServiceSettingRequest& request) const {
  return ResetServiceSettingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResumeSessionOutcome SSMClient::ResumeSession(const ResumeSessionRequest& request) const {
  return ResumeSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendAutomationSignalOutcome SSMClient::SendAutomationSignal(const SendAutomationSignalRequest& request) const {
  return SendAutomationSignalOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendCommandOutcome SSMClient::SendCommand(const SendCommandRequest& request) const {
  return SendCommandOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartAccessRequestOutcome SSMClient::StartAccessRequest(const StartAccessRequestRequest& request) const {
  return StartAccessRequestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartAssociationsOnceOutcome SSMClient::StartAssociationsOnce(const StartAssociationsOnceRequest& request) const {
  return StartAssociationsOnceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartAutomationExecutionOutcome SSMClient::StartAutomationExecution(const StartAutomationExecutionRequest& request) const {
  return StartAutomationExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartChangeRequestExecutionOutcome SSMClient::StartChangeRequestExecution(const StartChangeRequestExecutionRequest& request) const {
  return StartChangeRequestExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartExecutionPreviewOutcome SSMClient::StartExecutionPreview(const StartExecutionPreviewRequest& request) const {
  return StartExecutionPreviewOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartSessionOutcome SSMClient::StartSession(const StartSessionRequest& request) const {
  return StartSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopAutomationExecutionOutcome SSMClient::StopAutomationExecution(const StopAutomationExecutionRequest& request) const {
  return StopAutomationExecutionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TerminateSessionOutcome SSMClient::TerminateSession(const TerminateSessionRequest& request) const {
  return TerminateSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UnlabelParameterVersionOutcome SSMClient::UnlabelParameterVersion(const UnlabelParameterVersionRequest& request) const {
  return UnlabelParameterVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAssociationOutcome SSMClient::UpdateAssociation(const UpdateAssociationRequest& request) const {
  return UpdateAssociationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAssociationStatusOutcome SSMClient::UpdateAssociationStatus(const UpdateAssociationStatusRequest& request) const {
  return UpdateAssociationStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDocumentOutcome SSMClient::UpdateDocument(const UpdateDocumentRequest& request) const {
  return UpdateDocumentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDocumentDefaultVersionOutcome SSMClient::UpdateDocumentDefaultVersion(const UpdateDocumentDefaultVersionRequest& request) const {
  return UpdateDocumentDefaultVersionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDocumentMetadataOutcome SSMClient::UpdateDocumentMetadata(const UpdateDocumentMetadataRequest& request) const {
  return UpdateDocumentMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMaintenanceWindowOutcome SSMClient::UpdateMaintenanceWindow(const UpdateMaintenanceWindowRequest& request) const {
  return UpdateMaintenanceWindowOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMaintenanceWindowTargetOutcome SSMClient::UpdateMaintenanceWindowTarget(const UpdateMaintenanceWindowTargetRequest& request) const {
  return UpdateMaintenanceWindowTargetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMaintenanceWindowTaskOutcome SSMClient::UpdateMaintenanceWindowTask(const UpdateMaintenanceWindowTaskRequest& request) const {
  return UpdateMaintenanceWindowTaskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateManagedInstanceRoleOutcome SSMClient::UpdateManagedInstanceRole(const UpdateManagedInstanceRoleRequest& request) const {
  return UpdateManagedInstanceRoleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateOpsItemOutcome SSMClient::UpdateOpsItem(const UpdateOpsItemRequest& request) const {
  return UpdateOpsItemOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateOpsMetadataOutcome SSMClient::UpdateOpsMetadata(const UpdateOpsMetadataRequest& request) const {
  return UpdateOpsMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePatchBaselineOutcome SSMClient::UpdatePatchBaseline(const UpdatePatchBaselineRequest& request) const {
  return UpdatePatchBaselineOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateResourceDataSyncOutcome SSMClient::UpdateResourceDataSync(const UpdateResourceDataSyncRequest& request) const {
  return UpdateResourceDataSyncOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateServiceSettingOutcome SSMClient::UpdateServiceSetting(const UpdateServiceSettingRequest& request) const {
  return UpdateServiceSettingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
