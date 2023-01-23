/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/ssm/SSMErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/ssm/SSMEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SSMClient header */
#include <aws/ssm/model/AddTagsToResourceResult.h>
#include <aws/ssm/model/AssociateOpsItemRelatedItemResult.h>
#include <aws/ssm/model/CancelCommandResult.h>
#include <aws/ssm/model/CancelMaintenanceWindowExecutionResult.h>
#include <aws/ssm/model/CreateActivationResult.h>
#include <aws/ssm/model/CreateAssociationResult.h>
#include <aws/ssm/model/CreateAssociationBatchResult.h>
#include <aws/ssm/model/CreateDocumentResult.h>
#include <aws/ssm/model/CreateMaintenanceWindowResult.h>
#include <aws/ssm/model/CreateOpsItemResult.h>
#include <aws/ssm/model/CreateOpsMetadataResult.h>
#include <aws/ssm/model/CreatePatchBaselineResult.h>
#include <aws/ssm/model/CreateResourceDataSyncResult.h>
#include <aws/ssm/model/DeleteActivationResult.h>
#include <aws/ssm/model/DeleteAssociationResult.h>
#include <aws/ssm/model/DeleteDocumentResult.h>
#include <aws/ssm/model/DeleteInventoryResult.h>
#include <aws/ssm/model/DeleteMaintenanceWindowResult.h>
#include <aws/ssm/model/DeleteOpsMetadataResult.h>
#include <aws/ssm/model/DeleteParameterResult.h>
#include <aws/ssm/model/DeleteParametersResult.h>
#include <aws/ssm/model/DeletePatchBaselineResult.h>
#include <aws/ssm/model/DeleteResourceDataSyncResult.h>
#include <aws/ssm/model/DeleteResourcePolicyResult.h>
#include <aws/ssm/model/DeregisterManagedInstanceResult.h>
#include <aws/ssm/model/DeregisterPatchBaselineForPatchGroupResult.h>
#include <aws/ssm/model/DeregisterTargetFromMaintenanceWindowResult.h>
#include <aws/ssm/model/DeregisterTaskFromMaintenanceWindowResult.h>
#include <aws/ssm/model/DescribeActivationsResult.h>
#include <aws/ssm/model/DescribeAssociationResult.h>
#include <aws/ssm/model/DescribeAssociationExecutionTargetsResult.h>
#include <aws/ssm/model/DescribeAssociationExecutionsResult.h>
#include <aws/ssm/model/DescribeAutomationExecutionsResult.h>
#include <aws/ssm/model/DescribeAutomationStepExecutionsResult.h>
#include <aws/ssm/model/DescribeAvailablePatchesResult.h>
#include <aws/ssm/model/DescribeDocumentResult.h>
#include <aws/ssm/model/DescribeDocumentPermissionResult.h>
#include <aws/ssm/model/DescribeEffectiveInstanceAssociationsResult.h>
#include <aws/ssm/model/DescribeEffectivePatchesForPatchBaselineResult.h>
#include <aws/ssm/model/DescribeInstanceAssociationsStatusResult.h>
#include <aws/ssm/model/DescribeInstanceInformationResult.h>
#include <aws/ssm/model/DescribeInstancePatchStatesResult.h>
#include <aws/ssm/model/DescribeInstancePatchStatesForPatchGroupResult.h>
#include <aws/ssm/model/DescribeInstancePatchesResult.h>
#include <aws/ssm/model/DescribeInventoryDeletionsResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionTaskInvocationsResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionTasksResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionsResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowScheduleResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowTargetsResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowTasksResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowsResult.h>
#include <aws/ssm/model/DescribeMaintenanceWindowsForTargetResult.h>
#include <aws/ssm/model/DescribeOpsItemsResult.h>
#include <aws/ssm/model/DescribeParametersResult.h>
#include <aws/ssm/model/DescribePatchBaselinesResult.h>
#include <aws/ssm/model/DescribePatchGroupStateResult.h>
#include <aws/ssm/model/DescribePatchGroupsResult.h>
#include <aws/ssm/model/DescribePatchPropertiesResult.h>
#include <aws/ssm/model/DescribeSessionsResult.h>
#include <aws/ssm/model/DisassociateOpsItemRelatedItemResult.h>
#include <aws/ssm/model/GetAutomationExecutionResult.h>
#include <aws/ssm/model/GetCalendarStateResult.h>
#include <aws/ssm/model/GetCommandInvocationResult.h>
#include <aws/ssm/model/GetConnectionStatusResult.h>
#include <aws/ssm/model/GetDefaultPatchBaselineResult.h>
#include <aws/ssm/model/GetDeployablePatchSnapshotForInstanceResult.h>
#include <aws/ssm/model/GetDocumentResult.h>
#include <aws/ssm/model/GetInventoryResult.h>
#include <aws/ssm/model/GetInventorySchemaResult.h>
#include <aws/ssm/model/GetMaintenanceWindowResult.h>
#include <aws/ssm/model/GetMaintenanceWindowExecutionResult.h>
#include <aws/ssm/model/GetMaintenanceWindowExecutionTaskResult.h>
#include <aws/ssm/model/GetMaintenanceWindowExecutionTaskInvocationResult.h>
#include <aws/ssm/model/GetMaintenanceWindowTaskResult.h>
#include <aws/ssm/model/GetOpsItemResult.h>
#include <aws/ssm/model/GetOpsMetadataResult.h>
#include <aws/ssm/model/GetOpsSummaryResult.h>
#include <aws/ssm/model/GetParameterResult.h>
#include <aws/ssm/model/GetParameterHistoryResult.h>
#include <aws/ssm/model/GetParametersResult.h>
#include <aws/ssm/model/GetParametersByPathResult.h>
#include <aws/ssm/model/GetPatchBaselineResult.h>
#include <aws/ssm/model/GetPatchBaselineForPatchGroupResult.h>
#include <aws/ssm/model/GetResourcePoliciesResult.h>
#include <aws/ssm/model/GetServiceSettingResult.h>
#include <aws/ssm/model/LabelParameterVersionResult.h>
#include <aws/ssm/model/ListAssociationVersionsResult.h>
#include <aws/ssm/model/ListAssociationsResult.h>
#include <aws/ssm/model/ListCommandInvocationsResult.h>
#include <aws/ssm/model/ListCommandsResult.h>
#include <aws/ssm/model/ListComplianceItemsResult.h>
#include <aws/ssm/model/ListComplianceSummariesResult.h>
#include <aws/ssm/model/ListDocumentMetadataHistoryResult.h>
#include <aws/ssm/model/ListDocumentVersionsResult.h>
#include <aws/ssm/model/ListDocumentsResult.h>
#include <aws/ssm/model/ListInventoryEntriesResult.h>
#include <aws/ssm/model/ListOpsItemEventsResult.h>
#include <aws/ssm/model/ListOpsItemRelatedItemsResult.h>
#include <aws/ssm/model/ListOpsMetadataResult.h>
#include <aws/ssm/model/ListResourceComplianceSummariesResult.h>
#include <aws/ssm/model/ListResourceDataSyncResult.h>
#include <aws/ssm/model/ListTagsForResourceResult.h>
#include <aws/ssm/model/ModifyDocumentPermissionResult.h>
#include <aws/ssm/model/PutComplianceItemsResult.h>
#include <aws/ssm/model/PutInventoryResult.h>
#include <aws/ssm/model/PutParameterResult.h>
#include <aws/ssm/model/PutResourcePolicyResult.h>
#include <aws/ssm/model/RegisterDefaultPatchBaselineResult.h>
#include <aws/ssm/model/RegisterPatchBaselineForPatchGroupResult.h>
#include <aws/ssm/model/RegisterTargetWithMaintenanceWindowResult.h>
#include <aws/ssm/model/RegisterTaskWithMaintenanceWindowResult.h>
#include <aws/ssm/model/RemoveTagsFromResourceResult.h>
#include <aws/ssm/model/ResetServiceSettingResult.h>
#include <aws/ssm/model/ResumeSessionResult.h>
#include <aws/ssm/model/SendAutomationSignalResult.h>
#include <aws/ssm/model/SendCommandResult.h>
#include <aws/ssm/model/StartAssociationsOnceResult.h>
#include <aws/ssm/model/StartAutomationExecutionResult.h>
#include <aws/ssm/model/StartChangeRequestExecutionResult.h>
#include <aws/ssm/model/StartSessionResult.h>
#include <aws/ssm/model/StopAutomationExecutionResult.h>
#include <aws/ssm/model/TerminateSessionResult.h>
#include <aws/ssm/model/UnlabelParameterVersionResult.h>
#include <aws/ssm/model/UpdateAssociationResult.h>
#include <aws/ssm/model/UpdateAssociationStatusResult.h>
#include <aws/ssm/model/UpdateDocumentResult.h>
#include <aws/ssm/model/UpdateDocumentDefaultVersionResult.h>
#include <aws/ssm/model/UpdateDocumentMetadataResult.h>
#include <aws/ssm/model/UpdateMaintenanceWindowResult.h>
#include <aws/ssm/model/UpdateMaintenanceWindowTargetResult.h>
#include <aws/ssm/model/UpdateMaintenanceWindowTaskResult.h>
#include <aws/ssm/model/UpdateManagedInstanceRoleResult.h>
#include <aws/ssm/model/UpdateOpsItemResult.h>
#include <aws/ssm/model/UpdateOpsMetadataResult.h>
#include <aws/ssm/model/UpdatePatchBaselineResult.h>
#include <aws/ssm/model/UpdateResourceDataSyncResult.h>
#include <aws/ssm/model/UpdateServiceSettingResult.h>
/* End of service model headers required in SSMClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace SSM
  {
    using SSMClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SSMEndpointProviderBase = Aws::SSM::Endpoint::SSMEndpointProviderBase;
    using SSMEndpointProvider = Aws::SSM::Endpoint::SSMEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SSMClient header */
      class AddTagsToResourceRequest;
      class AssociateOpsItemRelatedItemRequest;
      class CancelCommandRequest;
      class CancelMaintenanceWindowExecutionRequest;
      class CreateActivationRequest;
      class CreateAssociationRequest;
      class CreateAssociationBatchRequest;
      class CreateDocumentRequest;
      class CreateMaintenanceWindowRequest;
      class CreateOpsItemRequest;
      class CreateOpsMetadataRequest;
      class CreatePatchBaselineRequest;
      class CreateResourceDataSyncRequest;
      class DeleteActivationRequest;
      class DeleteAssociationRequest;
      class DeleteDocumentRequest;
      class DeleteInventoryRequest;
      class DeleteMaintenanceWindowRequest;
      class DeleteOpsMetadataRequest;
      class DeleteParameterRequest;
      class DeleteParametersRequest;
      class DeletePatchBaselineRequest;
      class DeleteResourceDataSyncRequest;
      class DeleteResourcePolicyRequest;
      class DeregisterManagedInstanceRequest;
      class DeregisterPatchBaselineForPatchGroupRequest;
      class DeregisterTargetFromMaintenanceWindowRequest;
      class DeregisterTaskFromMaintenanceWindowRequest;
      class DescribeActivationsRequest;
      class DescribeAssociationRequest;
      class DescribeAssociationExecutionTargetsRequest;
      class DescribeAssociationExecutionsRequest;
      class DescribeAutomationExecutionsRequest;
      class DescribeAutomationStepExecutionsRequest;
      class DescribeAvailablePatchesRequest;
      class DescribeDocumentRequest;
      class DescribeDocumentPermissionRequest;
      class DescribeEffectiveInstanceAssociationsRequest;
      class DescribeEffectivePatchesForPatchBaselineRequest;
      class DescribeInstanceAssociationsStatusRequest;
      class DescribeInstanceInformationRequest;
      class DescribeInstancePatchStatesRequest;
      class DescribeInstancePatchStatesForPatchGroupRequest;
      class DescribeInstancePatchesRequest;
      class DescribeInventoryDeletionsRequest;
      class DescribeMaintenanceWindowExecutionTaskInvocationsRequest;
      class DescribeMaintenanceWindowExecutionTasksRequest;
      class DescribeMaintenanceWindowExecutionsRequest;
      class DescribeMaintenanceWindowScheduleRequest;
      class DescribeMaintenanceWindowTargetsRequest;
      class DescribeMaintenanceWindowTasksRequest;
      class DescribeMaintenanceWindowsRequest;
      class DescribeMaintenanceWindowsForTargetRequest;
      class DescribeOpsItemsRequest;
      class DescribeParametersRequest;
      class DescribePatchBaselinesRequest;
      class DescribePatchGroupStateRequest;
      class DescribePatchGroupsRequest;
      class DescribePatchPropertiesRequest;
      class DescribeSessionsRequest;
      class DisassociateOpsItemRelatedItemRequest;
      class GetAutomationExecutionRequest;
      class GetCalendarStateRequest;
      class GetCommandInvocationRequest;
      class GetConnectionStatusRequest;
      class GetDefaultPatchBaselineRequest;
      class GetDeployablePatchSnapshotForInstanceRequest;
      class GetDocumentRequest;
      class GetInventoryRequest;
      class GetInventorySchemaRequest;
      class GetMaintenanceWindowRequest;
      class GetMaintenanceWindowExecutionRequest;
      class GetMaintenanceWindowExecutionTaskRequest;
      class GetMaintenanceWindowExecutionTaskInvocationRequest;
      class GetMaintenanceWindowTaskRequest;
      class GetOpsItemRequest;
      class GetOpsMetadataRequest;
      class GetOpsSummaryRequest;
      class GetParameterRequest;
      class GetParameterHistoryRequest;
      class GetParametersRequest;
      class GetParametersByPathRequest;
      class GetPatchBaselineRequest;
      class GetPatchBaselineForPatchGroupRequest;
      class GetResourcePoliciesRequest;
      class GetServiceSettingRequest;
      class LabelParameterVersionRequest;
      class ListAssociationVersionsRequest;
      class ListAssociationsRequest;
      class ListCommandInvocationsRequest;
      class ListCommandsRequest;
      class ListComplianceItemsRequest;
      class ListComplianceSummariesRequest;
      class ListDocumentMetadataHistoryRequest;
      class ListDocumentVersionsRequest;
      class ListDocumentsRequest;
      class ListInventoryEntriesRequest;
      class ListOpsItemEventsRequest;
      class ListOpsItemRelatedItemsRequest;
      class ListOpsMetadataRequest;
      class ListResourceComplianceSummariesRequest;
      class ListResourceDataSyncRequest;
      class ListTagsForResourceRequest;
      class ModifyDocumentPermissionRequest;
      class PutComplianceItemsRequest;
      class PutInventoryRequest;
      class PutParameterRequest;
      class PutResourcePolicyRequest;
      class RegisterDefaultPatchBaselineRequest;
      class RegisterPatchBaselineForPatchGroupRequest;
      class RegisterTargetWithMaintenanceWindowRequest;
      class RegisterTaskWithMaintenanceWindowRequest;
      class RemoveTagsFromResourceRequest;
      class ResetServiceSettingRequest;
      class ResumeSessionRequest;
      class SendAutomationSignalRequest;
      class SendCommandRequest;
      class StartAssociationsOnceRequest;
      class StartAutomationExecutionRequest;
      class StartChangeRequestExecutionRequest;
      class StartSessionRequest;
      class StopAutomationExecutionRequest;
      class TerminateSessionRequest;
      class UnlabelParameterVersionRequest;
      class UpdateAssociationRequest;
      class UpdateAssociationStatusRequest;
      class UpdateDocumentRequest;
      class UpdateDocumentDefaultVersionRequest;
      class UpdateDocumentMetadataRequest;
      class UpdateMaintenanceWindowRequest;
      class UpdateMaintenanceWindowTargetRequest;
      class UpdateMaintenanceWindowTaskRequest;
      class UpdateManagedInstanceRoleRequest;
      class UpdateOpsItemRequest;
      class UpdateOpsMetadataRequest;
      class UpdatePatchBaselineRequest;
      class UpdateResourceDataSyncRequest;
      class UpdateServiceSettingRequest;
      /* End of service model forward declarations required in SSMClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddTagsToResourceResult, SSMError> AddTagsToResourceOutcome;
      typedef Aws::Utils::Outcome<AssociateOpsItemRelatedItemResult, SSMError> AssociateOpsItemRelatedItemOutcome;
      typedef Aws::Utils::Outcome<CancelCommandResult, SSMError> CancelCommandOutcome;
      typedef Aws::Utils::Outcome<CancelMaintenanceWindowExecutionResult, SSMError> CancelMaintenanceWindowExecutionOutcome;
      typedef Aws::Utils::Outcome<CreateActivationResult, SSMError> CreateActivationOutcome;
      typedef Aws::Utils::Outcome<CreateAssociationResult, SSMError> CreateAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateAssociationBatchResult, SSMError> CreateAssociationBatchOutcome;
      typedef Aws::Utils::Outcome<CreateDocumentResult, SSMError> CreateDocumentOutcome;
      typedef Aws::Utils::Outcome<CreateMaintenanceWindowResult, SSMError> CreateMaintenanceWindowOutcome;
      typedef Aws::Utils::Outcome<CreateOpsItemResult, SSMError> CreateOpsItemOutcome;
      typedef Aws::Utils::Outcome<CreateOpsMetadataResult, SSMError> CreateOpsMetadataOutcome;
      typedef Aws::Utils::Outcome<CreatePatchBaselineResult, SSMError> CreatePatchBaselineOutcome;
      typedef Aws::Utils::Outcome<CreateResourceDataSyncResult, SSMError> CreateResourceDataSyncOutcome;
      typedef Aws::Utils::Outcome<DeleteActivationResult, SSMError> DeleteActivationOutcome;
      typedef Aws::Utils::Outcome<DeleteAssociationResult, SSMError> DeleteAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteDocumentResult, SSMError> DeleteDocumentOutcome;
      typedef Aws::Utils::Outcome<DeleteInventoryResult, SSMError> DeleteInventoryOutcome;
      typedef Aws::Utils::Outcome<DeleteMaintenanceWindowResult, SSMError> DeleteMaintenanceWindowOutcome;
      typedef Aws::Utils::Outcome<DeleteOpsMetadataResult, SSMError> DeleteOpsMetadataOutcome;
      typedef Aws::Utils::Outcome<DeleteParameterResult, SSMError> DeleteParameterOutcome;
      typedef Aws::Utils::Outcome<DeleteParametersResult, SSMError> DeleteParametersOutcome;
      typedef Aws::Utils::Outcome<DeletePatchBaselineResult, SSMError> DeletePatchBaselineOutcome;
      typedef Aws::Utils::Outcome<DeleteResourceDataSyncResult, SSMError> DeleteResourceDataSyncOutcome;
      typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, SSMError> DeleteResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<DeregisterManagedInstanceResult, SSMError> DeregisterManagedInstanceOutcome;
      typedef Aws::Utils::Outcome<DeregisterPatchBaselineForPatchGroupResult, SSMError> DeregisterPatchBaselineForPatchGroupOutcome;
      typedef Aws::Utils::Outcome<DeregisterTargetFromMaintenanceWindowResult, SSMError> DeregisterTargetFromMaintenanceWindowOutcome;
      typedef Aws::Utils::Outcome<DeregisterTaskFromMaintenanceWindowResult, SSMError> DeregisterTaskFromMaintenanceWindowOutcome;
      typedef Aws::Utils::Outcome<DescribeActivationsResult, SSMError> DescribeActivationsOutcome;
      typedef Aws::Utils::Outcome<DescribeAssociationResult, SSMError> DescribeAssociationOutcome;
      typedef Aws::Utils::Outcome<DescribeAssociationExecutionTargetsResult, SSMError> DescribeAssociationExecutionTargetsOutcome;
      typedef Aws::Utils::Outcome<DescribeAssociationExecutionsResult, SSMError> DescribeAssociationExecutionsOutcome;
      typedef Aws::Utils::Outcome<DescribeAutomationExecutionsResult, SSMError> DescribeAutomationExecutionsOutcome;
      typedef Aws::Utils::Outcome<DescribeAutomationStepExecutionsResult, SSMError> DescribeAutomationStepExecutionsOutcome;
      typedef Aws::Utils::Outcome<DescribeAvailablePatchesResult, SSMError> DescribeAvailablePatchesOutcome;
      typedef Aws::Utils::Outcome<DescribeDocumentResult, SSMError> DescribeDocumentOutcome;
      typedef Aws::Utils::Outcome<DescribeDocumentPermissionResult, SSMError> DescribeDocumentPermissionOutcome;
      typedef Aws::Utils::Outcome<DescribeEffectiveInstanceAssociationsResult, SSMError> DescribeEffectiveInstanceAssociationsOutcome;
      typedef Aws::Utils::Outcome<DescribeEffectivePatchesForPatchBaselineResult, SSMError> DescribeEffectivePatchesForPatchBaselineOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceAssociationsStatusResult, SSMError> DescribeInstanceAssociationsStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceInformationResult, SSMError> DescribeInstanceInformationOutcome;
      typedef Aws::Utils::Outcome<DescribeInstancePatchStatesResult, SSMError> DescribeInstancePatchStatesOutcome;
      typedef Aws::Utils::Outcome<DescribeInstancePatchStatesForPatchGroupResult, SSMError> DescribeInstancePatchStatesForPatchGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeInstancePatchesResult, SSMError> DescribeInstancePatchesOutcome;
      typedef Aws::Utils::Outcome<DescribeInventoryDeletionsResult, SSMError> DescribeInventoryDeletionsOutcome;
      typedef Aws::Utils::Outcome<DescribeMaintenanceWindowExecutionTaskInvocationsResult, SSMError> DescribeMaintenanceWindowExecutionTaskInvocationsOutcome;
      typedef Aws::Utils::Outcome<DescribeMaintenanceWindowExecutionTasksResult, SSMError> DescribeMaintenanceWindowExecutionTasksOutcome;
      typedef Aws::Utils::Outcome<DescribeMaintenanceWindowExecutionsResult, SSMError> DescribeMaintenanceWindowExecutionsOutcome;
      typedef Aws::Utils::Outcome<DescribeMaintenanceWindowScheduleResult, SSMError> DescribeMaintenanceWindowScheduleOutcome;
      typedef Aws::Utils::Outcome<DescribeMaintenanceWindowTargetsResult, SSMError> DescribeMaintenanceWindowTargetsOutcome;
      typedef Aws::Utils::Outcome<DescribeMaintenanceWindowTasksResult, SSMError> DescribeMaintenanceWindowTasksOutcome;
      typedef Aws::Utils::Outcome<DescribeMaintenanceWindowsResult, SSMError> DescribeMaintenanceWindowsOutcome;
      typedef Aws::Utils::Outcome<DescribeMaintenanceWindowsForTargetResult, SSMError> DescribeMaintenanceWindowsForTargetOutcome;
      typedef Aws::Utils::Outcome<DescribeOpsItemsResult, SSMError> DescribeOpsItemsOutcome;
      typedef Aws::Utils::Outcome<DescribeParametersResult, SSMError> DescribeParametersOutcome;
      typedef Aws::Utils::Outcome<DescribePatchBaselinesResult, SSMError> DescribePatchBaselinesOutcome;
      typedef Aws::Utils::Outcome<DescribePatchGroupStateResult, SSMError> DescribePatchGroupStateOutcome;
      typedef Aws::Utils::Outcome<DescribePatchGroupsResult, SSMError> DescribePatchGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribePatchPropertiesResult, SSMError> DescribePatchPropertiesOutcome;
      typedef Aws::Utils::Outcome<DescribeSessionsResult, SSMError> DescribeSessionsOutcome;
      typedef Aws::Utils::Outcome<DisassociateOpsItemRelatedItemResult, SSMError> DisassociateOpsItemRelatedItemOutcome;
      typedef Aws::Utils::Outcome<GetAutomationExecutionResult, SSMError> GetAutomationExecutionOutcome;
      typedef Aws::Utils::Outcome<GetCalendarStateResult, SSMError> GetCalendarStateOutcome;
      typedef Aws::Utils::Outcome<GetCommandInvocationResult, SSMError> GetCommandInvocationOutcome;
      typedef Aws::Utils::Outcome<GetConnectionStatusResult, SSMError> GetConnectionStatusOutcome;
      typedef Aws::Utils::Outcome<GetDefaultPatchBaselineResult, SSMError> GetDefaultPatchBaselineOutcome;
      typedef Aws::Utils::Outcome<GetDeployablePatchSnapshotForInstanceResult, SSMError> GetDeployablePatchSnapshotForInstanceOutcome;
      typedef Aws::Utils::Outcome<GetDocumentResult, SSMError> GetDocumentOutcome;
      typedef Aws::Utils::Outcome<GetInventoryResult, SSMError> GetInventoryOutcome;
      typedef Aws::Utils::Outcome<GetInventorySchemaResult, SSMError> GetInventorySchemaOutcome;
      typedef Aws::Utils::Outcome<GetMaintenanceWindowResult, SSMError> GetMaintenanceWindowOutcome;
      typedef Aws::Utils::Outcome<GetMaintenanceWindowExecutionResult, SSMError> GetMaintenanceWindowExecutionOutcome;
      typedef Aws::Utils::Outcome<GetMaintenanceWindowExecutionTaskResult, SSMError> GetMaintenanceWindowExecutionTaskOutcome;
      typedef Aws::Utils::Outcome<GetMaintenanceWindowExecutionTaskInvocationResult, SSMError> GetMaintenanceWindowExecutionTaskInvocationOutcome;
      typedef Aws::Utils::Outcome<GetMaintenanceWindowTaskResult, SSMError> GetMaintenanceWindowTaskOutcome;
      typedef Aws::Utils::Outcome<GetOpsItemResult, SSMError> GetOpsItemOutcome;
      typedef Aws::Utils::Outcome<GetOpsMetadataResult, SSMError> GetOpsMetadataOutcome;
      typedef Aws::Utils::Outcome<GetOpsSummaryResult, SSMError> GetOpsSummaryOutcome;
      typedef Aws::Utils::Outcome<GetParameterResult, SSMError> GetParameterOutcome;
      typedef Aws::Utils::Outcome<GetParameterHistoryResult, SSMError> GetParameterHistoryOutcome;
      typedef Aws::Utils::Outcome<GetParametersResult, SSMError> GetParametersOutcome;
      typedef Aws::Utils::Outcome<GetParametersByPathResult, SSMError> GetParametersByPathOutcome;
      typedef Aws::Utils::Outcome<GetPatchBaselineResult, SSMError> GetPatchBaselineOutcome;
      typedef Aws::Utils::Outcome<GetPatchBaselineForPatchGroupResult, SSMError> GetPatchBaselineForPatchGroupOutcome;
      typedef Aws::Utils::Outcome<GetResourcePoliciesResult, SSMError> GetResourcePoliciesOutcome;
      typedef Aws::Utils::Outcome<GetServiceSettingResult, SSMError> GetServiceSettingOutcome;
      typedef Aws::Utils::Outcome<LabelParameterVersionResult, SSMError> LabelParameterVersionOutcome;
      typedef Aws::Utils::Outcome<ListAssociationVersionsResult, SSMError> ListAssociationVersionsOutcome;
      typedef Aws::Utils::Outcome<ListAssociationsResult, SSMError> ListAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListCommandInvocationsResult, SSMError> ListCommandInvocationsOutcome;
      typedef Aws::Utils::Outcome<ListCommandsResult, SSMError> ListCommandsOutcome;
      typedef Aws::Utils::Outcome<ListComplianceItemsResult, SSMError> ListComplianceItemsOutcome;
      typedef Aws::Utils::Outcome<ListComplianceSummariesResult, SSMError> ListComplianceSummariesOutcome;
      typedef Aws::Utils::Outcome<ListDocumentMetadataHistoryResult, SSMError> ListDocumentMetadataHistoryOutcome;
      typedef Aws::Utils::Outcome<ListDocumentVersionsResult, SSMError> ListDocumentVersionsOutcome;
      typedef Aws::Utils::Outcome<ListDocumentsResult, SSMError> ListDocumentsOutcome;
      typedef Aws::Utils::Outcome<ListInventoryEntriesResult, SSMError> ListInventoryEntriesOutcome;
      typedef Aws::Utils::Outcome<ListOpsItemEventsResult, SSMError> ListOpsItemEventsOutcome;
      typedef Aws::Utils::Outcome<ListOpsItemRelatedItemsResult, SSMError> ListOpsItemRelatedItemsOutcome;
      typedef Aws::Utils::Outcome<ListOpsMetadataResult, SSMError> ListOpsMetadataOutcome;
      typedef Aws::Utils::Outcome<ListResourceComplianceSummariesResult, SSMError> ListResourceComplianceSummariesOutcome;
      typedef Aws::Utils::Outcome<ListResourceDataSyncResult, SSMError> ListResourceDataSyncOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SSMError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ModifyDocumentPermissionResult, SSMError> ModifyDocumentPermissionOutcome;
      typedef Aws::Utils::Outcome<PutComplianceItemsResult, SSMError> PutComplianceItemsOutcome;
      typedef Aws::Utils::Outcome<PutInventoryResult, SSMError> PutInventoryOutcome;
      typedef Aws::Utils::Outcome<PutParameterResult, SSMError> PutParameterOutcome;
      typedef Aws::Utils::Outcome<PutResourcePolicyResult, SSMError> PutResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<RegisterDefaultPatchBaselineResult, SSMError> RegisterDefaultPatchBaselineOutcome;
      typedef Aws::Utils::Outcome<RegisterPatchBaselineForPatchGroupResult, SSMError> RegisterPatchBaselineForPatchGroupOutcome;
      typedef Aws::Utils::Outcome<RegisterTargetWithMaintenanceWindowResult, SSMError> RegisterTargetWithMaintenanceWindowOutcome;
      typedef Aws::Utils::Outcome<RegisterTaskWithMaintenanceWindowResult, SSMError> RegisterTaskWithMaintenanceWindowOutcome;
      typedef Aws::Utils::Outcome<RemoveTagsFromResourceResult, SSMError> RemoveTagsFromResourceOutcome;
      typedef Aws::Utils::Outcome<ResetServiceSettingResult, SSMError> ResetServiceSettingOutcome;
      typedef Aws::Utils::Outcome<ResumeSessionResult, SSMError> ResumeSessionOutcome;
      typedef Aws::Utils::Outcome<SendAutomationSignalResult, SSMError> SendAutomationSignalOutcome;
      typedef Aws::Utils::Outcome<SendCommandResult, SSMError> SendCommandOutcome;
      typedef Aws::Utils::Outcome<StartAssociationsOnceResult, SSMError> StartAssociationsOnceOutcome;
      typedef Aws::Utils::Outcome<StartAutomationExecutionResult, SSMError> StartAutomationExecutionOutcome;
      typedef Aws::Utils::Outcome<StartChangeRequestExecutionResult, SSMError> StartChangeRequestExecutionOutcome;
      typedef Aws::Utils::Outcome<StartSessionResult, SSMError> StartSessionOutcome;
      typedef Aws::Utils::Outcome<StopAutomationExecutionResult, SSMError> StopAutomationExecutionOutcome;
      typedef Aws::Utils::Outcome<TerminateSessionResult, SSMError> TerminateSessionOutcome;
      typedef Aws::Utils::Outcome<UnlabelParameterVersionResult, SSMError> UnlabelParameterVersionOutcome;
      typedef Aws::Utils::Outcome<UpdateAssociationResult, SSMError> UpdateAssociationOutcome;
      typedef Aws::Utils::Outcome<UpdateAssociationStatusResult, SSMError> UpdateAssociationStatusOutcome;
      typedef Aws::Utils::Outcome<UpdateDocumentResult, SSMError> UpdateDocumentOutcome;
      typedef Aws::Utils::Outcome<UpdateDocumentDefaultVersionResult, SSMError> UpdateDocumentDefaultVersionOutcome;
      typedef Aws::Utils::Outcome<UpdateDocumentMetadataResult, SSMError> UpdateDocumentMetadataOutcome;
      typedef Aws::Utils::Outcome<UpdateMaintenanceWindowResult, SSMError> UpdateMaintenanceWindowOutcome;
      typedef Aws::Utils::Outcome<UpdateMaintenanceWindowTargetResult, SSMError> UpdateMaintenanceWindowTargetOutcome;
      typedef Aws::Utils::Outcome<UpdateMaintenanceWindowTaskResult, SSMError> UpdateMaintenanceWindowTaskOutcome;
      typedef Aws::Utils::Outcome<UpdateManagedInstanceRoleResult, SSMError> UpdateManagedInstanceRoleOutcome;
      typedef Aws::Utils::Outcome<UpdateOpsItemResult, SSMError> UpdateOpsItemOutcome;
      typedef Aws::Utils::Outcome<UpdateOpsMetadataResult, SSMError> UpdateOpsMetadataOutcome;
      typedef Aws::Utils::Outcome<UpdatePatchBaselineResult, SSMError> UpdatePatchBaselineOutcome;
      typedef Aws::Utils::Outcome<UpdateResourceDataSyncResult, SSMError> UpdateResourceDataSyncOutcome;
      typedef Aws::Utils::Outcome<UpdateServiceSettingResult, SSMError> UpdateServiceSettingOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
      typedef std::future<AssociateOpsItemRelatedItemOutcome> AssociateOpsItemRelatedItemOutcomeCallable;
      typedef std::future<CancelCommandOutcome> CancelCommandOutcomeCallable;
      typedef std::future<CancelMaintenanceWindowExecutionOutcome> CancelMaintenanceWindowExecutionOutcomeCallable;
      typedef std::future<CreateActivationOutcome> CreateActivationOutcomeCallable;
      typedef std::future<CreateAssociationOutcome> CreateAssociationOutcomeCallable;
      typedef std::future<CreateAssociationBatchOutcome> CreateAssociationBatchOutcomeCallable;
      typedef std::future<CreateDocumentOutcome> CreateDocumentOutcomeCallable;
      typedef std::future<CreateMaintenanceWindowOutcome> CreateMaintenanceWindowOutcomeCallable;
      typedef std::future<CreateOpsItemOutcome> CreateOpsItemOutcomeCallable;
      typedef std::future<CreateOpsMetadataOutcome> CreateOpsMetadataOutcomeCallable;
      typedef std::future<CreatePatchBaselineOutcome> CreatePatchBaselineOutcomeCallable;
      typedef std::future<CreateResourceDataSyncOutcome> CreateResourceDataSyncOutcomeCallable;
      typedef std::future<DeleteActivationOutcome> DeleteActivationOutcomeCallable;
      typedef std::future<DeleteAssociationOutcome> DeleteAssociationOutcomeCallable;
      typedef std::future<DeleteDocumentOutcome> DeleteDocumentOutcomeCallable;
      typedef std::future<DeleteInventoryOutcome> DeleteInventoryOutcomeCallable;
      typedef std::future<DeleteMaintenanceWindowOutcome> DeleteMaintenanceWindowOutcomeCallable;
      typedef std::future<DeleteOpsMetadataOutcome> DeleteOpsMetadataOutcomeCallable;
      typedef std::future<DeleteParameterOutcome> DeleteParameterOutcomeCallable;
      typedef std::future<DeleteParametersOutcome> DeleteParametersOutcomeCallable;
      typedef std::future<DeletePatchBaselineOutcome> DeletePatchBaselineOutcomeCallable;
      typedef std::future<DeleteResourceDataSyncOutcome> DeleteResourceDataSyncOutcomeCallable;
      typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
      typedef std::future<DeregisterManagedInstanceOutcome> DeregisterManagedInstanceOutcomeCallable;
      typedef std::future<DeregisterPatchBaselineForPatchGroupOutcome> DeregisterPatchBaselineForPatchGroupOutcomeCallable;
      typedef std::future<DeregisterTargetFromMaintenanceWindowOutcome> DeregisterTargetFromMaintenanceWindowOutcomeCallable;
      typedef std::future<DeregisterTaskFromMaintenanceWindowOutcome> DeregisterTaskFromMaintenanceWindowOutcomeCallable;
      typedef std::future<DescribeActivationsOutcome> DescribeActivationsOutcomeCallable;
      typedef std::future<DescribeAssociationOutcome> DescribeAssociationOutcomeCallable;
      typedef std::future<DescribeAssociationExecutionTargetsOutcome> DescribeAssociationExecutionTargetsOutcomeCallable;
      typedef std::future<DescribeAssociationExecutionsOutcome> DescribeAssociationExecutionsOutcomeCallable;
      typedef std::future<DescribeAutomationExecutionsOutcome> DescribeAutomationExecutionsOutcomeCallable;
      typedef std::future<DescribeAutomationStepExecutionsOutcome> DescribeAutomationStepExecutionsOutcomeCallable;
      typedef std::future<DescribeAvailablePatchesOutcome> DescribeAvailablePatchesOutcomeCallable;
      typedef std::future<DescribeDocumentOutcome> DescribeDocumentOutcomeCallable;
      typedef std::future<DescribeDocumentPermissionOutcome> DescribeDocumentPermissionOutcomeCallable;
      typedef std::future<DescribeEffectiveInstanceAssociationsOutcome> DescribeEffectiveInstanceAssociationsOutcomeCallable;
      typedef std::future<DescribeEffectivePatchesForPatchBaselineOutcome> DescribeEffectivePatchesForPatchBaselineOutcomeCallable;
      typedef std::future<DescribeInstanceAssociationsStatusOutcome> DescribeInstanceAssociationsStatusOutcomeCallable;
      typedef std::future<DescribeInstanceInformationOutcome> DescribeInstanceInformationOutcomeCallable;
      typedef std::future<DescribeInstancePatchStatesOutcome> DescribeInstancePatchStatesOutcomeCallable;
      typedef std::future<DescribeInstancePatchStatesForPatchGroupOutcome> DescribeInstancePatchStatesForPatchGroupOutcomeCallable;
      typedef std::future<DescribeInstancePatchesOutcome> DescribeInstancePatchesOutcomeCallable;
      typedef std::future<DescribeInventoryDeletionsOutcome> DescribeInventoryDeletionsOutcomeCallable;
      typedef std::future<DescribeMaintenanceWindowExecutionTaskInvocationsOutcome> DescribeMaintenanceWindowExecutionTaskInvocationsOutcomeCallable;
      typedef std::future<DescribeMaintenanceWindowExecutionTasksOutcome> DescribeMaintenanceWindowExecutionTasksOutcomeCallable;
      typedef std::future<DescribeMaintenanceWindowExecutionsOutcome> DescribeMaintenanceWindowExecutionsOutcomeCallable;
      typedef std::future<DescribeMaintenanceWindowScheduleOutcome> DescribeMaintenanceWindowScheduleOutcomeCallable;
      typedef std::future<DescribeMaintenanceWindowTargetsOutcome> DescribeMaintenanceWindowTargetsOutcomeCallable;
      typedef std::future<DescribeMaintenanceWindowTasksOutcome> DescribeMaintenanceWindowTasksOutcomeCallable;
      typedef std::future<DescribeMaintenanceWindowsOutcome> DescribeMaintenanceWindowsOutcomeCallable;
      typedef std::future<DescribeMaintenanceWindowsForTargetOutcome> DescribeMaintenanceWindowsForTargetOutcomeCallable;
      typedef std::future<DescribeOpsItemsOutcome> DescribeOpsItemsOutcomeCallable;
      typedef std::future<DescribeParametersOutcome> DescribeParametersOutcomeCallable;
      typedef std::future<DescribePatchBaselinesOutcome> DescribePatchBaselinesOutcomeCallable;
      typedef std::future<DescribePatchGroupStateOutcome> DescribePatchGroupStateOutcomeCallable;
      typedef std::future<DescribePatchGroupsOutcome> DescribePatchGroupsOutcomeCallable;
      typedef std::future<DescribePatchPropertiesOutcome> DescribePatchPropertiesOutcomeCallable;
      typedef std::future<DescribeSessionsOutcome> DescribeSessionsOutcomeCallable;
      typedef std::future<DisassociateOpsItemRelatedItemOutcome> DisassociateOpsItemRelatedItemOutcomeCallable;
      typedef std::future<GetAutomationExecutionOutcome> GetAutomationExecutionOutcomeCallable;
      typedef std::future<GetCalendarStateOutcome> GetCalendarStateOutcomeCallable;
      typedef std::future<GetCommandInvocationOutcome> GetCommandInvocationOutcomeCallable;
      typedef std::future<GetConnectionStatusOutcome> GetConnectionStatusOutcomeCallable;
      typedef std::future<GetDefaultPatchBaselineOutcome> GetDefaultPatchBaselineOutcomeCallable;
      typedef std::future<GetDeployablePatchSnapshotForInstanceOutcome> GetDeployablePatchSnapshotForInstanceOutcomeCallable;
      typedef std::future<GetDocumentOutcome> GetDocumentOutcomeCallable;
      typedef std::future<GetInventoryOutcome> GetInventoryOutcomeCallable;
      typedef std::future<GetInventorySchemaOutcome> GetInventorySchemaOutcomeCallable;
      typedef std::future<GetMaintenanceWindowOutcome> GetMaintenanceWindowOutcomeCallable;
      typedef std::future<GetMaintenanceWindowExecutionOutcome> GetMaintenanceWindowExecutionOutcomeCallable;
      typedef std::future<GetMaintenanceWindowExecutionTaskOutcome> GetMaintenanceWindowExecutionTaskOutcomeCallable;
      typedef std::future<GetMaintenanceWindowExecutionTaskInvocationOutcome> GetMaintenanceWindowExecutionTaskInvocationOutcomeCallable;
      typedef std::future<GetMaintenanceWindowTaskOutcome> GetMaintenanceWindowTaskOutcomeCallable;
      typedef std::future<GetOpsItemOutcome> GetOpsItemOutcomeCallable;
      typedef std::future<GetOpsMetadataOutcome> GetOpsMetadataOutcomeCallable;
      typedef std::future<GetOpsSummaryOutcome> GetOpsSummaryOutcomeCallable;
      typedef std::future<GetParameterOutcome> GetParameterOutcomeCallable;
      typedef std::future<GetParameterHistoryOutcome> GetParameterHistoryOutcomeCallable;
      typedef std::future<GetParametersOutcome> GetParametersOutcomeCallable;
      typedef std::future<GetParametersByPathOutcome> GetParametersByPathOutcomeCallable;
      typedef std::future<GetPatchBaselineOutcome> GetPatchBaselineOutcomeCallable;
      typedef std::future<GetPatchBaselineForPatchGroupOutcome> GetPatchBaselineForPatchGroupOutcomeCallable;
      typedef std::future<GetResourcePoliciesOutcome> GetResourcePoliciesOutcomeCallable;
      typedef std::future<GetServiceSettingOutcome> GetServiceSettingOutcomeCallable;
      typedef std::future<LabelParameterVersionOutcome> LabelParameterVersionOutcomeCallable;
      typedef std::future<ListAssociationVersionsOutcome> ListAssociationVersionsOutcomeCallable;
      typedef std::future<ListAssociationsOutcome> ListAssociationsOutcomeCallable;
      typedef std::future<ListCommandInvocationsOutcome> ListCommandInvocationsOutcomeCallable;
      typedef std::future<ListCommandsOutcome> ListCommandsOutcomeCallable;
      typedef std::future<ListComplianceItemsOutcome> ListComplianceItemsOutcomeCallable;
      typedef std::future<ListComplianceSummariesOutcome> ListComplianceSummariesOutcomeCallable;
      typedef std::future<ListDocumentMetadataHistoryOutcome> ListDocumentMetadataHistoryOutcomeCallable;
      typedef std::future<ListDocumentVersionsOutcome> ListDocumentVersionsOutcomeCallable;
      typedef std::future<ListDocumentsOutcome> ListDocumentsOutcomeCallable;
      typedef std::future<ListInventoryEntriesOutcome> ListInventoryEntriesOutcomeCallable;
      typedef std::future<ListOpsItemEventsOutcome> ListOpsItemEventsOutcomeCallable;
      typedef std::future<ListOpsItemRelatedItemsOutcome> ListOpsItemRelatedItemsOutcomeCallable;
      typedef std::future<ListOpsMetadataOutcome> ListOpsMetadataOutcomeCallable;
      typedef std::future<ListResourceComplianceSummariesOutcome> ListResourceComplianceSummariesOutcomeCallable;
      typedef std::future<ListResourceDataSyncOutcome> ListResourceDataSyncOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ModifyDocumentPermissionOutcome> ModifyDocumentPermissionOutcomeCallable;
      typedef std::future<PutComplianceItemsOutcome> PutComplianceItemsOutcomeCallable;
      typedef std::future<PutInventoryOutcome> PutInventoryOutcomeCallable;
      typedef std::future<PutParameterOutcome> PutParameterOutcomeCallable;
      typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
      typedef std::future<RegisterDefaultPatchBaselineOutcome> RegisterDefaultPatchBaselineOutcomeCallable;
      typedef std::future<RegisterPatchBaselineForPatchGroupOutcome> RegisterPatchBaselineForPatchGroupOutcomeCallable;
      typedef std::future<RegisterTargetWithMaintenanceWindowOutcome> RegisterTargetWithMaintenanceWindowOutcomeCallable;
      typedef std::future<RegisterTaskWithMaintenanceWindowOutcome> RegisterTaskWithMaintenanceWindowOutcomeCallable;
      typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
      typedef std::future<ResetServiceSettingOutcome> ResetServiceSettingOutcomeCallable;
      typedef std::future<ResumeSessionOutcome> ResumeSessionOutcomeCallable;
      typedef std::future<SendAutomationSignalOutcome> SendAutomationSignalOutcomeCallable;
      typedef std::future<SendCommandOutcome> SendCommandOutcomeCallable;
      typedef std::future<StartAssociationsOnceOutcome> StartAssociationsOnceOutcomeCallable;
      typedef std::future<StartAutomationExecutionOutcome> StartAutomationExecutionOutcomeCallable;
      typedef std::future<StartChangeRequestExecutionOutcome> StartChangeRequestExecutionOutcomeCallable;
      typedef std::future<StartSessionOutcome> StartSessionOutcomeCallable;
      typedef std::future<StopAutomationExecutionOutcome> StopAutomationExecutionOutcomeCallable;
      typedef std::future<TerminateSessionOutcome> TerminateSessionOutcomeCallable;
      typedef std::future<UnlabelParameterVersionOutcome> UnlabelParameterVersionOutcomeCallable;
      typedef std::future<UpdateAssociationOutcome> UpdateAssociationOutcomeCallable;
      typedef std::future<UpdateAssociationStatusOutcome> UpdateAssociationStatusOutcomeCallable;
      typedef std::future<UpdateDocumentOutcome> UpdateDocumentOutcomeCallable;
      typedef std::future<UpdateDocumentDefaultVersionOutcome> UpdateDocumentDefaultVersionOutcomeCallable;
      typedef std::future<UpdateDocumentMetadataOutcome> UpdateDocumentMetadataOutcomeCallable;
      typedef std::future<UpdateMaintenanceWindowOutcome> UpdateMaintenanceWindowOutcomeCallable;
      typedef std::future<UpdateMaintenanceWindowTargetOutcome> UpdateMaintenanceWindowTargetOutcomeCallable;
      typedef std::future<UpdateMaintenanceWindowTaskOutcome> UpdateMaintenanceWindowTaskOutcomeCallable;
      typedef std::future<UpdateManagedInstanceRoleOutcome> UpdateManagedInstanceRoleOutcomeCallable;
      typedef std::future<UpdateOpsItemOutcome> UpdateOpsItemOutcomeCallable;
      typedef std::future<UpdateOpsMetadataOutcome> UpdateOpsMetadataOutcomeCallable;
      typedef std::future<UpdatePatchBaselineOutcome> UpdatePatchBaselineOutcomeCallable;
      typedef std::future<UpdateResourceDataSyncOutcome> UpdateResourceDataSyncOutcomeCallable;
      typedef std::future<UpdateServiceSettingOutcome> UpdateServiceSettingOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SSMClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SSMClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::AssociateOpsItemRelatedItemRequest&, const Model::AssociateOpsItemRelatedItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateOpsItemRelatedItemResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CancelCommandRequest&, const Model::CancelCommandOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelCommandResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CancelMaintenanceWindowExecutionRequest&, const Model::CancelMaintenanceWindowExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelMaintenanceWindowExecutionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateActivationRequest&, const Model::CreateActivationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateActivationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateAssociationRequest&, const Model::CreateAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssociationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateAssociationBatchRequest&, const Model::CreateAssociationBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAssociationBatchResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateDocumentRequest&, const Model::CreateDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateMaintenanceWindowRequest&, const Model::CreateMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateOpsItemRequest&, const Model::CreateOpsItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOpsItemResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateOpsMetadataRequest&, const Model::CreateOpsMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOpsMetadataResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreatePatchBaselineRequest&, const Model::CreatePatchBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePatchBaselineResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::CreateResourceDataSyncRequest&, const Model::CreateResourceDataSyncOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceDataSyncResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteActivationRequest&, const Model::DeleteActivationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteActivationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteAssociationRequest&, const Model::DeleteAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAssociationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteDocumentRequest&, const Model::DeleteDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteInventoryRequest&, const Model::DeleteInventoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInventoryResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteMaintenanceWindowRequest&, const Model::DeleteMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteOpsMetadataRequest&, const Model::DeleteOpsMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOpsMetadataResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteParameterRequest&, const Model::DeleteParameterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteParameterResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteParametersRequest&, const Model::DeleteParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteParametersResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeletePatchBaselineRequest&, const Model::DeletePatchBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePatchBaselineResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteResourceDataSyncRequest&, const Model::DeleteResourceDataSyncOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceDataSyncResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeregisterManagedInstanceRequest&, const Model::DeregisterManagedInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterManagedInstanceResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeregisterPatchBaselineForPatchGroupRequest&, const Model::DeregisterPatchBaselineForPatchGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterPatchBaselineForPatchGroupResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeregisterTargetFromMaintenanceWindowRequest&, const Model::DeregisterTargetFromMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterTargetFromMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DeregisterTaskFromMaintenanceWindowRequest&, const Model::DeregisterTaskFromMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterTaskFromMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeActivationsRequest&, const Model::DescribeActivationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeActivationsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeAssociationRequest&, const Model::DescribeAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAssociationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeAssociationExecutionTargetsRequest&, const Model::DescribeAssociationExecutionTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAssociationExecutionTargetsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeAssociationExecutionsRequest&, const Model::DescribeAssociationExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAssociationExecutionsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeAutomationExecutionsRequest&, const Model::DescribeAutomationExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAutomationExecutionsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeAutomationStepExecutionsRequest&, const Model::DescribeAutomationStepExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAutomationStepExecutionsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeAvailablePatchesRequest&, const Model::DescribeAvailablePatchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAvailablePatchesResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeDocumentRequest&, const Model::DescribeDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeDocumentPermissionRequest&, const Model::DescribeDocumentPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDocumentPermissionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeEffectiveInstanceAssociationsRequest&, const Model::DescribeEffectiveInstanceAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEffectiveInstanceAssociationsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeEffectivePatchesForPatchBaselineRequest&, const Model::DescribeEffectivePatchesForPatchBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEffectivePatchesForPatchBaselineResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeInstanceAssociationsStatusRequest&, const Model::DescribeInstanceAssociationsStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceAssociationsStatusResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeInstanceInformationRequest&, const Model::DescribeInstanceInformationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceInformationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeInstancePatchStatesRequest&, const Model::DescribeInstancePatchStatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstancePatchStatesResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeInstancePatchStatesForPatchGroupRequest&, const Model::DescribeInstancePatchStatesForPatchGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstancePatchStatesForPatchGroupResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeInstancePatchesRequest&, const Model::DescribeInstancePatchesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstancePatchesResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeInventoryDeletionsRequest&, const Model::DescribeInventoryDeletionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInventoryDeletionsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowExecutionTaskInvocationsRequest&, const Model::DescribeMaintenanceWindowExecutionTaskInvocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowExecutionTaskInvocationsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowExecutionTasksRequest&, const Model::DescribeMaintenanceWindowExecutionTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowExecutionTasksResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowExecutionsRequest&, const Model::DescribeMaintenanceWindowExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowExecutionsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowScheduleRequest&, const Model::DescribeMaintenanceWindowScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowScheduleResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowTargetsRequest&, const Model::DescribeMaintenanceWindowTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowTargetsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowTasksRequest&, const Model::DescribeMaintenanceWindowTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowTasksResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowsRequest&, const Model::DescribeMaintenanceWindowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeMaintenanceWindowsForTargetRequest&, const Model::DescribeMaintenanceWindowsForTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMaintenanceWindowsForTargetResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeOpsItemsRequest&, const Model::DescribeOpsItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOpsItemsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeParametersRequest&, const Model::DescribeParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeParametersResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribePatchBaselinesRequest&, const Model::DescribePatchBaselinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePatchBaselinesResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribePatchGroupStateRequest&, const Model::DescribePatchGroupStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePatchGroupStateResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribePatchGroupsRequest&, const Model::DescribePatchGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePatchGroupsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribePatchPropertiesRequest&, const Model::DescribePatchPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePatchPropertiesResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DescribeSessionsRequest&, const Model::DescribeSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSessionsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::DisassociateOpsItemRelatedItemRequest&, const Model::DisassociateOpsItemRelatedItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateOpsItemRelatedItemResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetAutomationExecutionRequest&, const Model::GetAutomationExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAutomationExecutionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetCalendarStateRequest&, const Model::GetCalendarStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCalendarStateResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetCommandInvocationRequest&, const Model::GetCommandInvocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCommandInvocationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetConnectionStatusRequest&, const Model::GetConnectionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectionStatusResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetDefaultPatchBaselineRequest&, const Model::GetDefaultPatchBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDefaultPatchBaselineResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetDeployablePatchSnapshotForInstanceRequest&, const Model::GetDeployablePatchSnapshotForInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeployablePatchSnapshotForInstanceResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetDocumentRequest&, const Model::GetDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetInventoryRequest&, const Model::GetInventoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInventoryResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetInventorySchemaRequest&, const Model::GetInventorySchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInventorySchemaResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetMaintenanceWindowRequest&, const Model::GetMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetMaintenanceWindowExecutionRequest&, const Model::GetMaintenanceWindowExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMaintenanceWindowExecutionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetMaintenanceWindowExecutionTaskRequest&, const Model::GetMaintenanceWindowExecutionTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMaintenanceWindowExecutionTaskResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetMaintenanceWindowExecutionTaskInvocationRequest&, const Model::GetMaintenanceWindowExecutionTaskInvocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMaintenanceWindowExecutionTaskInvocationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetMaintenanceWindowTaskRequest&, const Model::GetMaintenanceWindowTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMaintenanceWindowTaskResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetOpsItemRequest&, const Model::GetOpsItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOpsItemResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetOpsMetadataRequest&, const Model::GetOpsMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOpsMetadataResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetOpsSummaryRequest&, const Model::GetOpsSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOpsSummaryResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetParameterRequest&, const Model::GetParameterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetParameterResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetParameterHistoryRequest&, const Model::GetParameterHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetParameterHistoryResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetParametersRequest&, const Model::GetParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetParametersResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetParametersByPathRequest&, const Model::GetParametersByPathOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetParametersByPathResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetPatchBaselineRequest&, const Model::GetPatchBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPatchBaselineResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetPatchBaselineForPatchGroupRequest&, const Model::GetPatchBaselineForPatchGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPatchBaselineForPatchGroupResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetResourcePoliciesRequest&, const Model::GetResourcePoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePoliciesResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::GetServiceSettingRequest&, const Model::GetServiceSettingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceSettingResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::LabelParameterVersionRequest&, const Model::LabelParameterVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > LabelParameterVersionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListAssociationVersionsRequest&, const Model::ListAssociationVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociationVersionsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListAssociationsRequest&, const Model::ListAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociationsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListCommandInvocationsRequest&, const Model::ListCommandInvocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCommandInvocationsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListCommandsRequest&, const Model::ListCommandsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCommandsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListComplianceItemsRequest&, const Model::ListComplianceItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComplianceItemsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListComplianceSummariesRequest&, const Model::ListComplianceSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComplianceSummariesResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListDocumentMetadataHistoryRequest&, const Model::ListDocumentMetadataHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDocumentMetadataHistoryResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListDocumentVersionsRequest&, const Model::ListDocumentVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDocumentVersionsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListDocumentsRequest&, const Model::ListDocumentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDocumentsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListInventoryEntriesRequest&, const Model::ListInventoryEntriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInventoryEntriesResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListOpsItemEventsRequest&, const Model::ListOpsItemEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOpsItemEventsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListOpsItemRelatedItemsRequest&, const Model::ListOpsItemRelatedItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOpsItemRelatedItemsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListOpsMetadataRequest&, const Model::ListOpsMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOpsMetadataResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListResourceComplianceSummariesRequest&, const Model::ListResourceComplianceSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceComplianceSummariesResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListResourceDataSyncRequest&, const Model::ListResourceDataSyncOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceDataSyncResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ModifyDocumentPermissionRequest&, const Model::ModifyDocumentPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDocumentPermissionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::PutComplianceItemsRequest&, const Model::PutComplianceItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutComplianceItemsResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::PutInventoryRequest&, const Model::PutInventoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutInventoryResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::PutParameterRequest&, const Model::PutParameterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutParameterResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::RegisterDefaultPatchBaselineRequest&, const Model::RegisterDefaultPatchBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterDefaultPatchBaselineResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::RegisterPatchBaselineForPatchGroupRequest&, const Model::RegisterPatchBaselineForPatchGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterPatchBaselineForPatchGroupResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::RegisterTargetWithMaintenanceWindowRequest&, const Model::RegisterTargetWithMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterTargetWithMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::RegisterTaskWithMaintenanceWindowRequest&, const Model::RegisterTaskWithMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterTaskWithMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromResourceResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ResetServiceSettingRequest&, const Model::ResetServiceSettingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetServiceSettingResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::ResumeSessionRequest&, const Model::ResumeSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResumeSessionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::SendAutomationSignalRequest&, const Model::SendAutomationSignalOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendAutomationSignalResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::SendCommandRequest&, const Model::SendCommandOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendCommandResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::StartAssociationsOnceRequest&, const Model::StartAssociationsOnceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAssociationsOnceResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::StartAutomationExecutionRequest&, const Model::StartAutomationExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAutomationExecutionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::StartChangeRequestExecutionRequest&, const Model::StartChangeRequestExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartChangeRequestExecutionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::StartSessionRequest&, const Model::StartSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSessionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::StopAutomationExecutionRequest&, const Model::StopAutomationExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopAutomationExecutionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::TerminateSessionRequest&, const Model::TerminateSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateSessionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UnlabelParameterVersionRequest&, const Model::UnlabelParameterVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnlabelParameterVersionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateAssociationRequest&, const Model::UpdateAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssociationResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateAssociationStatusRequest&, const Model::UpdateAssociationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAssociationStatusResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateDocumentRequest&, const Model::UpdateDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDocumentResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateDocumentDefaultVersionRequest&, const Model::UpdateDocumentDefaultVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDocumentDefaultVersionResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateDocumentMetadataRequest&, const Model::UpdateDocumentMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDocumentMetadataResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateMaintenanceWindowRequest&, const Model::UpdateMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateMaintenanceWindowTargetRequest&, const Model::UpdateMaintenanceWindowTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMaintenanceWindowTargetResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateMaintenanceWindowTaskRequest&, const Model::UpdateMaintenanceWindowTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMaintenanceWindowTaskResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateManagedInstanceRoleRequest&, const Model::UpdateManagedInstanceRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateManagedInstanceRoleResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateOpsItemRequest&, const Model::UpdateOpsItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOpsItemResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateOpsMetadataRequest&, const Model::UpdateOpsMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOpsMetadataResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdatePatchBaselineRequest&, const Model::UpdatePatchBaselineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePatchBaselineResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateResourceDataSyncRequest&, const Model::UpdateResourceDataSyncOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceDataSyncResponseReceivedHandler;
    typedef std::function<void(const SSMClient*, const Model::UpdateServiceSettingRequest&, const Model::UpdateServiceSettingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceSettingResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SSM
} // namespace Aws
