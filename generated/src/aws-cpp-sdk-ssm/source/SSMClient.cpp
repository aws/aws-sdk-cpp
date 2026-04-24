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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddTagsToResourceOutcome(result.GetResultWithOwnership())
                            : AddTagsToResourceOutcome(std::move(result.GetError()));
}

AssociateOpsItemRelatedItemOutcome SSMClient::AssociateOpsItemRelatedItem(const AssociateOpsItemRelatedItemRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateOpsItemRelatedItemOutcome(result.GetResultWithOwnership())
                            : AssociateOpsItemRelatedItemOutcome(std::move(result.GetError()));
}

CancelCommandOutcome SSMClient::CancelCommand(const CancelCommandRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelCommandOutcome(result.GetResultWithOwnership()) : CancelCommandOutcome(std::move(result.GetError()));
}

CancelMaintenanceWindowExecutionOutcome SSMClient::CancelMaintenanceWindowExecution(
    const CancelMaintenanceWindowExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelMaintenanceWindowExecutionOutcome(result.GetResultWithOwnership())
                            : CancelMaintenanceWindowExecutionOutcome(std::move(result.GetError()));
}

CreateActivationOutcome SSMClient::CreateActivation(const CreateActivationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateActivationOutcome(result.GetResultWithOwnership())
                            : CreateActivationOutcome(std::move(result.GetError()));
}

CreateAssociationOutcome SSMClient::CreateAssociation(const CreateAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAssociationOutcome(result.GetResultWithOwnership())
                            : CreateAssociationOutcome(std::move(result.GetError()));
}

CreateAssociationBatchOutcome SSMClient::CreateAssociationBatch(const CreateAssociationBatchRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAssociationBatchOutcome(result.GetResultWithOwnership())
                            : CreateAssociationBatchOutcome(std::move(result.GetError()));
}

CreateDocumentOutcome SSMClient::CreateDocument(const CreateDocumentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDocumentOutcome(result.GetResultWithOwnership()) : CreateDocumentOutcome(std::move(result.GetError()));
}

CreateMaintenanceWindowOutcome SSMClient::CreateMaintenanceWindow(const CreateMaintenanceWindowRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMaintenanceWindowOutcome(result.GetResultWithOwnership())
                            : CreateMaintenanceWindowOutcome(std::move(result.GetError()));
}

CreateOpsItemOutcome SSMClient::CreateOpsItem(const CreateOpsItemRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOpsItemOutcome(result.GetResultWithOwnership()) : CreateOpsItemOutcome(std::move(result.GetError()));
}

CreateOpsMetadataOutcome SSMClient::CreateOpsMetadata(const CreateOpsMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOpsMetadataOutcome(result.GetResultWithOwnership())
                            : CreateOpsMetadataOutcome(std::move(result.GetError()));
}

CreatePatchBaselineOutcome SSMClient::CreatePatchBaseline(const CreatePatchBaselineRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePatchBaselineOutcome(result.GetResultWithOwnership())
                            : CreatePatchBaselineOutcome(std::move(result.GetError()));
}

CreateResourceDataSyncOutcome SSMClient::CreateResourceDataSync(const CreateResourceDataSyncRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateResourceDataSyncOutcome(result.GetResultWithOwnership())
                            : CreateResourceDataSyncOutcome(std::move(result.GetError()));
}

DeleteActivationOutcome SSMClient::DeleteActivation(const DeleteActivationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteActivationOutcome(result.GetResultWithOwnership())
                            : DeleteActivationOutcome(std::move(result.GetError()));
}

DeleteAssociationOutcome SSMClient::DeleteAssociation(const DeleteAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAssociationOutcome(result.GetResultWithOwnership())
                            : DeleteAssociationOutcome(std::move(result.GetError()));
}

DeleteDocumentOutcome SSMClient::DeleteDocument(const DeleteDocumentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDocumentOutcome(result.GetResultWithOwnership()) : DeleteDocumentOutcome(std::move(result.GetError()));
}

DeleteInventoryOutcome SSMClient::DeleteInventory(const DeleteInventoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteInventoryOutcome(result.GetResultWithOwnership())
                            : DeleteInventoryOutcome(std::move(result.GetError()));
}

DeleteMaintenanceWindowOutcome SSMClient::DeleteMaintenanceWindow(const DeleteMaintenanceWindowRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteMaintenanceWindowOutcome(result.GetResultWithOwnership())
                            : DeleteMaintenanceWindowOutcome(std::move(result.GetError()));
}

DeleteOpsItemOutcome SSMClient::DeleteOpsItem(const DeleteOpsItemRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteOpsItemOutcome(result.GetResultWithOwnership()) : DeleteOpsItemOutcome(std::move(result.GetError()));
}

DeleteOpsMetadataOutcome SSMClient::DeleteOpsMetadata(const DeleteOpsMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteOpsMetadataOutcome(result.GetResultWithOwnership())
                            : DeleteOpsMetadataOutcome(std::move(result.GetError()));
}

DeleteParameterOutcome SSMClient::DeleteParameter(const DeleteParameterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteParameterOutcome(result.GetResultWithOwnership())
                            : DeleteParameterOutcome(std::move(result.GetError()));
}

DeleteParametersOutcome SSMClient::DeleteParameters(const DeleteParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteParametersOutcome(result.GetResultWithOwnership())
                            : DeleteParametersOutcome(std::move(result.GetError()));
}

DeletePatchBaselineOutcome SSMClient::DeletePatchBaseline(const DeletePatchBaselineRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePatchBaselineOutcome(result.GetResultWithOwnership())
                            : DeletePatchBaselineOutcome(std::move(result.GetError()));
}

DeleteResourceDataSyncOutcome SSMClient::DeleteResourceDataSync(const DeleteResourceDataSyncRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteResourceDataSyncOutcome(result.GetResultWithOwnership())
                            : DeleteResourceDataSyncOutcome(std::move(result.GetError()));
}

DeleteResourcePolicyOutcome SSMClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteResourcePolicyOutcome(result.GetResultWithOwnership())
                            : DeleteResourcePolicyOutcome(std::move(result.GetError()));
}

DeregisterManagedInstanceOutcome SSMClient::DeregisterManagedInstance(const DeregisterManagedInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterManagedInstanceOutcome(result.GetResultWithOwnership())
                            : DeregisterManagedInstanceOutcome(std::move(result.GetError()));
}

DeregisterPatchBaselineForPatchGroupOutcome SSMClient::DeregisterPatchBaselineForPatchGroup(
    const DeregisterPatchBaselineForPatchGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterPatchBaselineForPatchGroupOutcome(result.GetResultWithOwnership())
                            : DeregisterPatchBaselineForPatchGroupOutcome(std::move(result.GetError()));
}

DeregisterTargetFromMaintenanceWindowOutcome SSMClient::DeregisterTargetFromMaintenanceWindow(
    const DeregisterTargetFromMaintenanceWindowRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterTargetFromMaintenanceWindowOutcome(result.GetResultWithOwnership())
                            : DeregisterTargetFromMaintenanceWindowOutcome(std::move(result.GetError()));
}

DeregisterTaskFromMaintenanceWindowOutcome SSMClient::DeregisterTaskFromMaintenanceWindow(
    const DeregisterTaskFromMaintenanceWindowRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterTaskFromMaintenanceWindowOutcome(result.GetResultWithOwnership())
                            : DeregisterTaskFromMaintenanceWindowOutcome(std::move(result.GetError()));
}

DescribeActivationsOutcome SSMClient::DescribeActivations(const DescribeActivationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeActivationsOutcome(result.GetResultWithOwnership())
                            : DescribeActivationsOutcome(std::move(result.GetError()));
}

DescribeAssociationOutcome SSMClient::DescribeAssociation(const DescribeAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAssociationOutcome(result.GetResultWithOwnership())
                            : DescribeAssociationOutcome(std::move(result.GetError()));
}

DescribeAssociationExecutionTargetsOutcome SSMClient::DescribeAssociationExecutionTargets(
    const DescribeAssociationExecutionTargetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAssociationExecutionTargetsOutcome(result.GetResultWithOwnership())
                            : DescribeAssociationExecutionTargetsOutcome(std::move(result.GetError()));
}

DescribeAssociationExecutionsOutcome SSMClient::DescribeAssociationExecutions(const DescribeAssociationExecutionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAssociationExecutionsOutcome(result.GetResultWithOwnership())
                            : DescribeAssociationExecutionsOutcome(std::move(result.GetError()));
}

DescribeAutomationExecutionsOutcome SSMClient::DescribeAutomationExecutions(const DescribeAutomationExecutionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAutomationExecutionsOutcome(result.GetResultWithOwnership())
                            : DescribeAutomationExecutionsOutcome(std::move(result.GetError()));
}

DescribeAutomationStepExecutionsOutcome SSMClient::DescribeAutomationStepExecutions(
    const DescribeAutomationStepExecutionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAutomationStepExecutionsOutcome(result.GetResultWithOwnership())
                            : DescribeAutomationStepExecutionsOutcome(std::move(result.GetError()));
}

DescribeAvailablePatchesOutcome SSMClient::DescribeAvailablePatches(const DescribeAvailablePatchesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAvailablePatchesOutcome(result.GetResultWithOwnership())
                            : DescribeAvailablePatchesOutcome(std::move(result.GetError()));
}

DescribeDocumentOutcome SSMClient::DescribeDocument(const DescribeDocumentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDocumentOutcome(result.GetResultWithOwnership())
                            : DescribeDocumentOutcome(std::move(result.GetError()));
}

DescribeDocumentPermissionOutcome SSMClient::DescribeDocumentPermission(const DescribeDocumentPermissionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDocumentPermissionOutcome(result.GetResultWithOwnership())
                            : DescribeDocumentPermissionOutcome(std::move(result.GetError()));
}

DescribeEffectiveInstanceAssociationsOutcome SSMClient::DescribeEffectiveInstanceAssociations(
    const DescribeEffectiveInstanceAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEffectiveInstanceAssociationsOutcome(result.GetResultWithOwnership())
                            : DescribeEffectiveInstanceAssociationsOutcome(std::move(result.GetError()));
}

DescribeEffectivePatchesForPatchBaselineOutcome SSMClient::DescribeEffectivePatchesForPatchBaseline(
    const DescribeEffectivePatchesForPatchBaselineRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEffectivePatchesForPatchBaselineOutcome(result.GetResultWithOwnership())
                            : DescribeEffectivePatchesForPatchBaselineOutcome(std::move(result.GetError()));
}

DescribeInstanceAssociationsStatusOutcome SSMClient::DescribeInstanceAssociationsStatus(
    const DescribeInstanceAssociationsStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstanceAssociationsStatusOutcome(result.GetResultWithOwnership())
                            : DescribeInstanceAssociationsStatusOutcome(std::move(result.GetError()));
}

DescribeInstanceInformationOutcome SSMClient::DescribeInstanceInformation(const DescribeInstanceInformationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstanceInformationOutcome(result.GetResultWithOwnership())
                            : DescribeInstanceInformationOutcome(std::move(result.GetError()));
}

DescribeInstancePatchStatesOutcome SSMClient::DescribeInstancePatchStates(const DescribeInstancePatchStatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstancePatchStatesOutcome(result.GetResultWithOwnership())
                            : DescribeInstancePatchStatesOutcome(std::move(result.GetError()));
}

DescribeInstancePatchStatesForPatchGroupOutcome SSMClient::DescribeInstancePatchStatesForPatchGroup(
    const DescribeInstancePatchStatesForPatchGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstancePatchStatesForPatchGroupOutcome(result.GetResultWithOwnership())
                            : DescribeInstancePatchStatesForPatchGroupOutcome(std::move(result.GetError()));
}

DescribeInstancePatchesOutcome SSMClient::DescribeInstancePatches(const DescribeInstancePatchesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstancePatchesOutcome(result.GetResultWithOwnership())
                            : DescribeInstancePatchesOutcome(std::move(result.GetError()));
}

DescribeInstancePropertiesOutcome SSMClient::DescribeInstanceProperties(const DescribeInstancePropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInstancePropertiesOutcome(result.GetResultWithOwnership())
                            : DescribeInstancePropertiesOutcome(std::move(result.GetError()));
}

DescribeInventoryDeletionsOutcome SSMClient::DescribeInventoryDeletions(const DescribeInventoryDeletionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInventoryDeletionsOutcome(result.GetResultWithOwnership())
                            : DescribeInventoryDeletionsOutcome(std::move(result.GetError()));
}

DescribeMaintenanceWindowExecutionTaskInvocationsOutcome SSMClient::DescribeMaintenanceWindowExecutionTaskInvocations(
    const DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMaintenanceWindowExecutionTaskInvocationsOutcome(result.GetResultWithOwnership())
                            : DescribeMaintenanceWindowExecutionTaskInvocationsOutcome(std::move(result.GetError()));
}

DescribeMaintenanceWindowExecutionTasksOutcome SSMClient::DescribeMaintenanceWindowExecutionTasks(
    const DescribeMaintenanceWindowExecutionTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMaintenanceWindowExecutionTasksOutcome(result.GetResultWithOwnership())
                            : DescribeMaintenanceWindowExecutionTasksOutcome(std::move(result.GetError()));
}

DescribeMaintenanceWindowExecutionsOutcome SSMClient::DescribeMaintenanceWindowExecutions(
    const DescribeMaintenanceWindowExecutionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMaintenanceWindowExecutionsOutcome(result.GetResultWithOwnership())
                            : DescribeMaintenanceWindowExecutionsOutcome(std::move(result.GetError()));
}

DescribeMaintenanceWindowScheduleOutcome SSMClient::DescribeMaintenanceWindowSchedule(
    const DescribeMaintenanceWindowScheduleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMaintenanceWindowScheduleOutcome(result.GetResultWithOwnership())
                            : DescribeMaintenanceWindowScheduleOutcome(std::move(result.GetError()));
}

DescribeMaintenanceWindowTargetsOutcome SSMClient::DescribeMaintenanceWindowTargets(
    const DescribeMaintenanceWindowTargetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMaintenanceWindowTargetsOutcome(result.GetResultWithOwnership())
                            : DescribeMaintenanceWindowTargetsOutcome(std::move(result.GetError()));
}

DescribeMaintenanceWindowTasksOutcome SSMClient::DescribeMaintenanceWindowTasks(
    const DescribeMaintenanceWindowTasksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMaintenanceWindowTasksOutcome(result.GetResultWithOwnership())
                            : DescribeMaintenanceWindowTasksOutcome(std::move(result.GetError()));
}

DescribeMaintenanceWindowsOutcome SSMClient::DescribeMaintenanceWindows(const DescribeMaintenanceWindowsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMaintenanceWindowsOutcome(result.GetResultWithOwnership())
                            : DescribeMaintenanceWindowsOutcome(std::move(result.GetError()));
}

DescribeMaintenanceWindowsForTargetOutcome SSMClient::DescribeMaintenanceWindowsForTarget(
    const DescribeMaintenanceWindowsForTargetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeMaintenanceWindowsForTargetOutcome(result.GetResultWithOwnership())
                            : DescribeMaintenanceWindowsForTargetOutcome(std::move(result.GetError()));
}

DescribeOpsItemsOutcome SSMClient::DescribeOpsItems(const DescribeOpsItemsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOpsItemsOutcome(result.GetResultWithOwnership())
                            : DescribeOpsItemsOutcome(std::move(result.GetError()));
}

DescribeParametersOutcome SSMClient::DescribeParameters(const DescribeParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeParametersOutcome(result.GetResultWithOwnership())
                            : DescribeParametersOutcome(std::move(result.GetError()));
}

DescribePatchBaselinesOutcome SSMClient::DescribePatchBaselines(const DescribePatchBaselinesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePatchBaselinesOutcome(result.GetResultWithOwnership())
                            : DescribePatchBaselinesOutcome(std::move(result.GetError()));
}

DescribePatchGroupStateOutcome SSMClient::DescribePatchGroupState(const DescribePatchGroupStateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePatchGroupStateOutcome(result.GetResultWithOwnership())
                            : DescribePatchGroupStateOutcome(std::move(result.GetError()));
}

DescribePatchGroupsOutcome SSMClient::DescribePatchGroups(const DescribePatchGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePatchGroupsOutcome(result.GetResultWithOwnership())
                            : DescribePatchGroupsOutcome(std::move(result.GetError()));
}

DescribePatchPropertiesOutcome SSMClient::DescribePatchProperties(const DescribePatchPropertiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePatchPropertiesOutcome(result.GetResultWithOwnership())
                            : DescribePatchPropertiesOutcome(std::move(result.GetError()));
}

DescribeSessionsOutcome SSMClient::DescribeSessions(const DescribeSessionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSessionsOutcome(result.GetResultWithOwnership())
                            : DescribeSessionsOutcome(std::move(result.GetError()));
}

DisassociateOpsItemRelatedItemOutcome SSMClient::DisassociateOpsItemRelatedItem(
    const DisassociateOpsItemRelatedItemRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateOpsItemRelatedItemOutcome(result.GetResultWithOwnership())
                            : DisassociateOpsItemRelatedItemOutcome(std::move(result.GetError()));
}

GetAccessTokenOutcome SSMClient::GetAccessToken(const GetAccessTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAccessTokenOutcome(result.GetResultWithOwnership()) : GetAccessTokenOutcome(std::move(result.GetError()));
}

GetAutomationExecutionOutcome SSMClient::GetAutomationExecution(const GetAutomationExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAutomationExecutionOutcome(result.GetResultWithOwnership())
                            : GetAutomationExecutionOutcome(std::move(result.GetError()));
}

GetCalendarStateOutcome SSMClient::GetCalendarState(const GetCalendarStateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCalendarStateOutcome(result.GetResultWithOwnership())
                            : GetCalendarStateOutcome(std::move(result.GetError()));
}

GetCommandInvocationOutcome SSMClient::GetCommandInvocation(const GetCommandInvocationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCommandInvocationOutcome(result.GetResultWithOwnership())
                            : GetCommandInvocationOutcome(std::move(result.GetError()));
}

GetConnectionStatusOutcome SSMClient::GetConnectionStatus(const GetConnectionStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetConnectionStatusOutcome(result.GetResultWithOwnership())
                            : GetConnectionStatusOutcome(std::move(result.GetError()));
}

GetDefaultPatchBaselineOutcome SSMClient::GetDefaultPatchBaseline(const GetDefaultPatchBaselineRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDefaultPatchBaselineOutcome(result.GetResultWithOwnership())
                            : GetDefaultPatchBaselineOutcome(std::move(result.GetError()));
}

GetDeployablePatchSnapshotForInstanceOutcome SSMClient::GetDeployablePatchSnapshotForInstance(
    const GetDeployablePatchSnapshotForInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDeployablePatchSnapshotForInstanceOutcome(result.GetResultWithOwnership())
                            : GetDeployablePatchSnapshotForInstanceOutcome(std::move(result.GetError()));
}

GetDocumentOutcome SSMClient::GetDocument(const GetDocumentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDocumentOutcome(result.GetResultWithOwnership()) : GetDocumentOutcome(std::move(result.GetError()));
}

GetExecutionPreviewOutcome SSMClient::GetExecutionPreview(const GetExecutionPreviewRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetExecutionPreviewOutcome(result.GetResultWithOwnership())
                            : GetExecutionPreviewOutcome(std::move(result.GetError()));
}

GetInventoryOutcome SSMClient::GetInventory(const GetInventoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetInventoryOutcome(result.GetResultWithOwnership()) : GetInventoryOutcome(std::move(result.GetError()));
}

GetInventorySchemaOutcome SSMClient::GetInventorySchema(const GetInventorySchemaRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetInventorySchemaOutcome(result.GetResultWithOwnership())
                            : GetInventorySchemaOutcome(std::move(result.GetError()));
}

GetMaintenanceWindowOutcome SSMClient::GetMaintenanceWindow(const GetMaintenanceWindowRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMaintenanceWindowOutcome(result.GetResultWithOwnership())
                            : GetMaintenanceWindowOutcome(std::move(result.GetError()));
}

GetMaintenanceWindowExecutionOutcome SSMClient::GetMaintenanceWindowExecution(const GetMaintenanceWindowExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMaintenanceWindowExecutionOutcome(result.GetResultWithOwnership())
                            : GetMaintenanceWindowExecutionOutcome(std::move(result.GetError()));
}

GetMaintenanceWindowExecutionTaskOutcome SSMClient::GetMaintenanceWindowExecutionTask(
    const GetMaintenanceWindowExecutionTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMaintenanceWindowExecutionTaskOutcome(result.GetResultWithOwnership())
                            : GetMaintenanceWindowExecutionTaskOutcome(std::move(result.GetError()));
}

GetMaintenanceWindowExecutionTaskInvocationOutcome SSMClient::GetMaintenanceWindowExecutionTaskInvocation(
    const GetMaintenanceWindowExecutionTaskInvocationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMaintenanceWindowExecutionTaskInvocationOutcome(result.GetResultWithOwnership())
                            : GetMaintenanceWindowExecutionTaskInvocationOutcome(std::move(result.GetError()));
}

GetMaintenanceWindowTaskOutcome SSMClient::GetMaintenanceWindowTask(const GetMaintenanceWindowTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMaintenanceWindowTaskOutcome(result.GetResultWithOwnership())
                            : GetMaintenanceWindowTaskOutcome(std::move(result.GetError()));
}

GetOpsItemOutcome SSMClient::GetOpsItem(const GetOpsItemRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOpsItemOutcome(result.GetResultWithOwnership()) : GetOpsItemOutcome(std::move(result.GetError()));
}

GetOpsMetadataOutcome SSMClient::GetOpsMetadata(const GetOpsMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOpsMetadataOutcome(result.GetResultWithOwnership()) : GetOpsMetadataOutcome(std::move(result.GetError()));
}

GetOpsSummaryOutcome SSMClient::GetOpsSummary(const GetOpsSummaryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOpsSummaryOutcome(result.GetResultWithOwnership()) : GetOpsSummaryOutcome(std::move(result.GetError()));
}

GetParameterOutcome SSMClient::GetParameter(const GetParameterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetParameterOutcome(result.GetResultWithOwnership()) : GetParameterOutcome(std::move(result.GetError()));
}

GetParameterHistoryOutcome SSMClient::GetParameterHistory(const GetParameterHistoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetParameterHistoryOutcome(result.GetResultWithOwnership())
                            : GetParameterHistoryOutcome(std::move(result.GetError()));
}

GetParametersOutcome SSMClient::GetParameters(const GetParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetParametersOutcome(result.GetResultWithOwnership()) : GetParametersOutcome(std::move(result.GetError()));
}

GetParametersByPathOutcome SSMClient::GetParametersByPath(const GetParametersByPathRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetParametersByPathOutcome(result.GetResultWithOwnership())
                            : GetParametersByPathOutcome(std::move(result.GetError()));
}

GetPatchBaselineOutcome SSMClient::GetPatchBaseline(const GetPatchBaselineRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPatchBaselineOutcome(result.GetResultWithOwnership())
                            : GetPatchBaselineOutcome(std::move(result.GetError()));
}

GetPatchBaselineForPatchGroupOutcome SSMClient::GetPatchBaselineForPatchGroup(const GetPatchBaselineForPatchGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPatchBaselineForPatchGroupOutcome(result.GetResultWithOwnership())
                            : GetPatchBaselineForPatchGroupOutcome(std::move(result.GetError()));
}

GetResourcePoliciesOutcome SSMClient::GetResourcePolicies(const GetResourcePoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourcePoliciesOutcome(result.GetResultWithOwnership())
                            : GetResourcePoliciesOutcome(std::move(result.GetError()));
}

GetServiceSettingOutcome SSMClient::GetServiceSetting(const GetServiceSettingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetServiceSettingOutcome(result.GetResultWithOwnership())
                            : GetServiceSettingOutcome(std::move(result.GetError()));
}

LabelParameterVersionOutcome SSMClient::LabelParameterVersion(const LabelParameterVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? LabelParameterVersionOutcome(result.GetResultWithOwnership())
                            : LabelParameterVersionOutcome(std::move(result.GetError()));
}

ListAssociationVersionsOutcome SSMClient::ListAssociationVersions(const ListAssociationVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAssociationVersionsOutcome(result.GetResultWithOwnership())
                            : ListAssociationVersionsOutcome(std::move(result.GetError()));
}

ListAssociationsOutcome SSMClient::ListAssociations(const ListAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAssociationsOutcome(result.GetResultWithOwnership())
                            : ListAssociationsOutcome(std::move(result.GetError()));
}

ListCommandInvocationsOutcome SSMClient::ListCommandInvocations(const ListCommandInvocationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCommandInvocationsOutcome(result.GetResultWithOwnership())
                            : ListCommandInvocationsOutcome(std::move(result.GetError()));
}

ListCommandsOutcome SSMClient::ListCommands(const ListCommandsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCommandsOutcome(result.GetResultWithOwnership()) : ListCommandsOutcome(std::move(result.GetError()));
}

ListComplianceItemsOutcome SSMClient::ListComplianceItems(const ListComplianceItemsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListComplianceItemsOutcome(result.GetResultWithOwnership())
                            : ListComplianceItemsOutcome(std::move(result.GetError()));
}

ListComplianceSummariesOutcome SSMClient::ListComplianceSummaries(const ListComplianceSummariesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListComplianceSummariesOutcome(result.GetResultWithOwnership())
                            : ListComplianceSummariesOutcome(std::move(result.GetError()));
}

ListDocumentMetadataHistoryOutcome SSMClient::ListDocumentMetadataHistory(const ListDocumentMetadataHistoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDocumentMetadataHistoryOutcome(result.GetResultWithOwnership())
                            : ListDocumentMetadataHistoryOutcome(std::move(result.GetError()));
}

ListDocumentVersionsOutcome SSMClient::ListDocumentVersions(const ListDocumentVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDocumentVersionsOutcome(result.GetResultWithOwnership())
                            : ListDocumentVersionsOutcome(std::move(result.GetError()));
}

ListDocumentsOutcome SSMClient::ListDocuments(const ListDocumentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDocumentsOutcome(result.GetResultWithOwnership()) : ListDocumentsOutcome(std::move(result.GetError()));
}

ListInventoryEntriesOutcome SSMClient::ListInventoryEntries(const ListInventoryEntriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListInventoryEntriesOutcome(result.GetResultWithOwnership())
                            : ListInventoryEntriesOutcome(std::move(result.GetError()));
}

ListNodesOutcome SSMClient::ListNodes(const ListNodesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListNodesOutcome(result.GetResultWithOwnership()) : ListNodesOutcome(std::move(result.GetError()));
}

ListNodesSummaryOutcome SSMClient::ListNodesSummary(const ListNodesSummaryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListNodesSummaryOutcome(result.GetResultWithOwnership())
                            : ListNodesSummaryOutcome(std::move(result.GetError()));
}

ListOpsItemEventsOutcome SSMClient::ListOpsItemEvents(const ListOpsItemEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListOpsItemEventsOutcome(result.GetResultWithOwnership())
                            : ListOpsItemEventsOutcome(std::move(result.GetError()));
}

ListOpsItemRelatedItemsOutcome SSMClient::ListOpsItemRelatedItems(const ListOpsItemRelatedItemsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListOpsItemRelatedItemsOutcome(result.GetResultWithOwnership())
                            : ListOpsItemRelatedItemsOutcome(std::move(result.GetError()));
}

ListOpsMetadataOutcome SSMClient::ListOpsMetadata(const ListOpsMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListOpsMetadataOutcome(result.GetResultWithOwnership())
                            : ListOpsMetadataOutcome(std::move(result.GetError()));
}

ListResourceComplianceSummariesOutcome SSMClient::ListResourceComplianceSummaries(
    const ListResourceComplianceSummariesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListResourceComplianceSummariesOutcome(result.GetResultWithOwnership())
                            : ListResourceComplianceSummariesOutcome(std::move(result.GetError()));
}

ListResourceDataSyncOutcome SSMClient::ListResourceDataSync(const ListResourceDataSyncRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListResourceDataSyncOutcome(result.GetResultWithOwnership())
                            : ListResourceDataSyncOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome SSMClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ModifyDocumentPermissionOutcome SSMClient::ModifyDocumentPermission(const ModifyDocumentPermissionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyDocumentPermissionOutcome(result.GetResultWithOwnership())
                            : ModifyDocumentPermissionOutcome(std::move(result.GetError()));
}

PutComplianceItemsOutcome SSMClient::PutComplianceItems(const PutComplianceItemsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutComplianceItemsOutcome(result.GetResultWithOwnership())
                            : PutComplianceItemsOutcome(std::move(result.GetError()));
}

PutInventoryOutcome SSMClient::PutInventory(const PutInventoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutInventoryOutcome(result.GetResultWithOwnership()) : PutInventoryOutcome(std::move(result.GetError()));
}

PutParameterOutcome SSMClient::PutParameter(const PutParameterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutParameterOutcome(result.GetResultWithOwnership()) : PutParameterOutcome(std::move(result.GetError()));
}

PutResourcePolicyOutcome SSMClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutResourcePolicyOutcome(result.GetResultWithOwnership())
                            : PutResourcePolicyOutcome(std::move(result.GetError()));
}

RegisterDefaultPatchBaselineOutcome SSMClient::RegisterDefaultPatchBaseline(const RegisterDefaultPatchBaselineRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterDefaultPatchBaselineOutcome(result.GetResultWithOwnership())
                            : RegisterDefaultPatchBaselineOutcome(std::move(result.GetError()));
}

RegisterPatchBaselineForPatchGroupOutcome SSMClient::RegisterPatchBaselineForPatchGroup(
    const RegisterPatchBaselineForPatchGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterPatchBaselineForPatchGroupOutcome(result.GetResultWithOwnership())
                            : RegisterPatchBaselineForPatchGroupOutcome(std::move(result.GetError()));
}

RegisterTargetWithMaintenanceWindowOutcome SSMClient::RegisterTargetWithMaintenanceWindow(
    const RegisterTargetWithMaintenanceWindowRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterTargetWithMaintenanceWindowOutcome(result.GetResultWithOwnership())
                            : RegisterTargetWithMaintenanceWindowOutcome(std::move(result.GetError()));
}

RegisterTaskWithMaintenanceWindowOutcome SSMClient::RegisterTaskWithMaintenanceWindow(
    const RegisterTaskWithMaintenanceWindowRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterTaskWithMaintenanceWindowOutcome(result.GetResultWithOwnership())
                            : RegisterTaskWithMaintenanceWindowOutcome(std::move(result.GetError()));
}

RemoveTagsFromResourceOutcome SSMClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveTagsFromResourceOutcome(result.GetResultWithOwnership())
                            : RemoveTagsFromResourceOutcome(std::move(result.GetError()));
}

ResetServiceSettingOutcome SSMClient::ResetServiceSetting(const ResetServiceSettingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetServiceSettingOutcome(result.GetResultWithOwnership())
                            : ResetServiceSettingOutcome(std::move(result.GetError()));
}

ResumeSessionOutcome SSMClient::ResumeSession(const ResumeSessionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResumeSessionOutcome(result.GetResultWithOwnership()) : ResumeSessionOutcome(std::move(result.GetError()));
}

SendAutomationSignalOutcome SSMClient::SendAutomationSignal(const SendAutomationSignalRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendAutomationSignalOutcome(result.GetResultWithOwnership())
                            : SendAutomationSignalOutcome(std::move(result.GetError()));
}

SendCommandOutcome SSMClient::SendCommand(const SendCommandRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendCommandOutcome(result.GetResultWithOwnership()) : SendCommandOutcome(std::move(result.GetError()));
}

StartAccessRequestOutcome SSMClient::StartAccessRequest(const StartAccessRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartAccessRequestOutcome(result.GetResultWithOwnership())
                            : StartAccessRequestOutcome(std::move(result.GetError()));
}

StartAssociationsOnceOutcome SSMClient::StartAssociationsOnce(const StartAssociationsOnceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartAssociationsOnceOutcome(result.GetResultWithOwnership())
                            : StartAssociationsOnceOutcome(std::move(result.GetError()));
}

StartAutomationExecutionOutcome SSMClient::StartAutomationExecution(const StartAutomationExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartAutomationExecutionOutcome(result.GetResultWithOwnership())
                            : StartAutomationExecutionOutcome(std::move(result.GetError()));
}

StartChangeRequestExecutionOutcome SSMClient::StartChangeRequestExecution(const StartChangeRequestExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartChangeRequestExecutionOutcome(result.GetResultWithOwnership())
                            : StartChangeRequestExecutionOutcome(std::move(result.GetError()));
}

StartExecutionPreviewOutcome SSMClient::StartExecutionPreview(const StartExecutionPreviewRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartExecutionPreviewOutcome(result.GetResultWithOwnership())
                            : StartExecutionPreviewOutcome(std::move(result.GetError()));
}

StartSessionOutcome SSMClient::StartSession(const StartSessionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartSessionOutcome(result.GetResultWithOwnership()) : StartSessionOutcome(std::move(result.GetError()));
}

StopAutomationExecutionOutcome SSMClient::StopAutomationExecution(const StopAutomationExecutionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopAutomationExecutionOutcome(result.GetResultWithOwnership())
                            : StopAutomationExecutionOutcome(std::move(result.GetError()));
}

TerminateSessionOutcome SSMClient::TerminateSession(const TerminateSessionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TerminateSessionOutcome(result.GetResultWithOwnership())
                            : TerminateSessionOutcome(std::move(result.GetError()));
}

UnlabelParameterVersionOutcome SSMClient::UnlabelParameterVersion(const UnlabelParameterVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UnlabelParameterVersionOutcome(result.GetResultWithOwnership())
                            : UnlabelParameterVersionOutcome(std::move(result.GetError()));
}

UpdateAssociationOutcome SSMClient::UpdateAssociation(const UpdateAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAssociationOutcome(result.GetResultWithOwnership())
                            : UpdateAssociationOutcome(std::move(result.GetError()));
}

UpdateAssociationStatusOutcome SSMClient::UpdateAssociationStatus(const UpdateAssociationStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAssociationStatusOutcome(result.GetResultWithOwnership())
                            : UpdateAssociationStatusOutcome(std::move(result.GetError()));
}

UpdateDocumentOutcome SSMClient::UpdateDocument(const UpdateDocumentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDocumentOutcome(result.GetResultWithOwnership()) : UpdateDocumentOutcome(std::move(result.GetError()));
}

UpdateDocumentDefaultVersionOutcome SSMClient::UpdateDocumentDefaultVersion(const UpdateDocumentDefaultVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDocumentDefaultVersionOutcome(result.GetResultWithOwnership())
                            : UpdateDocumentDefaultVersionOutcome(std::move(result.GetError()));
}

UpdateDocumentMetadataOutcome SSMClient::UpdateDocumentMetadata(const UpdateDocumentMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDocumentMetadataOutcome(result.GetResultWithOwnership())
                            : UpdateDocumentMetadataOutcome(std::move(result.GetError()));
}

UpdateMaintenanceWindowOutcome SSMClient::UpdateMaintenanceWindow(const UpdateMaintenanceWindowRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateMaintenanceWindowOutcome(result.GetResultWithOwnership())
                            : UpdateMaintenanceWindowOutcome(std::move(result.GetError()));
}

UpdateMaintenanceWindowTargetOutcome SSMClient::UpdateMaintenanceWindowTarget(const UpdateMaintenanceWindowTargetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateMaintenanceWindowTargetOutcome(result.GetResultWithOwnership())
                            : UpdateMaintenanceWindowTargetOutcome(std::move(result.GetError()));
}

UpdateMaintenanceWindowTaskOutcome SSMClient::UpdateMaintenanceWindowTask(const UpdateMaintenanceWindowTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateMaintenanceWindowTaskOutcome(result.GetResultWithOwnership())
                            : UpdateMaintenanceWindowTaskOutcome(std::move(result.GetError()));
}

UpdateManagedInstanceRoleOutcome SSMClient::UpdateManagedInstanceRole(const UpdateManagedInstanceRoleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateManagedInstanceRoleOutcome(result.GetResultWithOwnership())
                            : UpdateManagedInstanceRoleOutcome(std::move(result.GetError()));
}

UpdateOpsItemOutcome SSMClient::UpdateOpsItem(const UpdateOpsItemRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateOpsItemOutcome(result.GetResultWithOwnership()) : UpdateOpsItemOutcome(std::move(result.GetError()));
}

UpdateOpsMetadataOutcome SSMClient::UpdateOpsMetadata(const UpdateOpsMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateOpsMetadataOutcome(result.GetResultWithOwnership())
                            : UpdateOpsMetadataOutcome(std::move(result.GetError()));
}

UpdatePatchBaselineOutcome SSMClient::UpdatePatchBaseline(const UpdatePatchBaselineRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePatchBaselineOutcome(result.GetResultWithOwnership())
                            : UpdatePatchBaselineOutcome(std::move(result.GetError()));
}

UpdateResourceDataSyncOutcome SSMClient::UpdateResourceDataSync(const UpdateResourceDataSyncRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateResourceDataSyncOutcome(result.GetResultWithOwnership())
                            : UpdateResourceDataSyncOutcome(std::move(result.GetError()));
}

UpdateServiceSettingOutcome SSMClient::UpdateServiceSetting(const UpdateServiceSettingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateServiceSettingOutcome(result.GetResultWithOwnership())
                            : UpdateServiceSettingOutcome(std::move(result.GetError()));
}
