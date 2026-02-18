/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ssm/model/DescribeActivationsPaginationTraits.h>
#include <aws/ssm/model/DescribeAssociationExecutionTargetsPaginationTraits.h>
#include <aws/ssm/model/DescribeAssociationExecutionsPaginationTraits.h>
#include <aws/ssm/model/DescribeAutomationExecutionsPaginationTraits.h>
#include <aws/ssm/model/DescribeAutomationStepExecutionsPaginationTraits.h>
#include <aws/ssm/model/DescribeAvailablePatchesPaginationTraits.h>
#include <aws/ssm/model/DescribeEffectiveInstanceAssociationsPaginationTraits.h>
#include <aws/ssm/model/DescribeEffectivePatchesForPatchBaselinePaginationTraits.h>
#include <aws/ssm/model/DescribeInstanceAssociationsStatusPaginationTraits.h>
#include <aws/ssm/model/DescribeInstanceInformationPaginationTraits.h>
#include <aws/ssm/model/DescribeInstancePatchStatesForPatchGroupPaginationTraits.h>
#include <aws/ssm/model/DescribeInstancePatchStatesPaginationTraits.h>
#include <aws/ssm/model/DescribeInstancePatchesPaginationTraits.h>
#include <aws/ssm/model/DescribeInstancePropertiesPaginationTraits.h>
#include <aws/ssm/model/DescribeInventoryDeletionsPaginationTraits.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionTaskInvocationsPaginationTraits.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionTasksPaginationTraits.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionsPaginationTraits.h>
#include <aws/ssm/model/DescribeMaintenanceWindowSchedulePaginationTraits.h>
#include <aws/ssm/model/DescribeMaintenanceWindowTargetsPaginationTraits.h>
#include <aws/ssm/model/DescribeMaintenanceWindowTasksPaginationTraits.h>
#include <aws/ssm/model/DescribeMaintenanceWindowsForTargetPaginationTraits.h>
#include <aws/ssm/model/DescribeMaintenanceWindowsPaginationTraits.h>
#include <aws/ssm/model/DescribeOpsItemsPaginationTraits.h>
#include <aws/ssm/model/DescribeParametersPaginationTraits.h>
#include <aws/ssm/model/DescribePatchBaselinesPaginationTraits.h>
#include <aws/ssm/model/DescribePatchGroupsPaginationTraits.h>
#include <aws/ssm/model/DescribePatchPropertiesPaginationTraits.h>
#include <aws/ssm/model/DescribeSessionsPaginationTraits.h>
#include <aws/ssm/model/GetInventoryPaginationTraits.h>
#include <aws/ssm/model/GetInventorySchemaPaginationTraits.h>
#include <aws/ssm/model/GetOpsSummaryPaginationTraits.h>
#include <aws/ssm/model/GetParameterHistoryPaginationTraits.h>
#include <aws/ssm/model/GetParametersByPathPaginationTraits.h>
#include <aws/ssm/model/GetResourcePoliciesPaginationTraits.h>
#include <aws/ssm/model/ListAssociationVersionsPaginationTraits.h>
#include <aws/ssm/model/ListAssociationsPaginationTraits.h>
#include <aws/ssm/model/ListCommandInvocationsPaginationTraits.h>
#include <aws/ssm/model/ListCommandsPaginationTraits.h>
#include <aws/ssm/model/ListComplianceItemsPaginationTraits.h>
#include <aws/ssm/model/ListComplianceSummariesPaginationTraits.h>
#include <aws/ssm/model/ListDocumentVersionsPaginationTraits.h>
#include <aws/ssm/model/ListDocumentsPaginationTraits.h>
#include <aws/ssm/model/ListNodesPaginationTraits.h>
#include <aws/ssm/model/ListNodesSummaryPaginationTraits.h>
#include <aws/ssm/model/ListOpsItemEventsPaginationTraits.h>
#include <aws/ssm/model/ListOpsItemRelatedItemsPaginationTraits.h>
#include <aws/ssm/model/ListOpsMetadataPaginationTraits.h>
#include <aws/ssm/model/ListResourceComplianceSummariesPaginationTraits.h>
#include <aws/ssm/model/ListResourceDataSyncPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SSM {

class SSMClient;

template <typename DerivedClient>
class SSMPaginationBase {
 public:
  /**
   * Create a paginator for DescribeActivations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeActivationsRequest,
                                    Pagination::DescribeActivationsPaginationTraits<DerivedClient>>
  DescribeActivationsPaginator(const Model::DescribeActivationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeActivationsRequest,
                                             Pagination::DescribeActivationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeAssociationExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAssociationExecutionsRequest,
                                    Pagination::DescribeAssociationExecutionsPaginationTraits<DerivedClient>>
  DescribeAssociationExecutionsPaginator(const Model::DescribeAssociationExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAssociationExecutionsRequest,
                                             Pagination::DescribeAssociationExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeAssociationExecutionTargets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAssociationExecutionTargetsRequest,
                                    Pagination::DescribeAssociationExecutionTargetsPaginationTraits<DerivedClient>>
  DescribeAssociationExecutionTargetsPaginator(const Model::DescribeAssociationExecutionTargetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAssociationExecutionTargetsRequest,
                                             Pagination::DescribeAssociationExecutionTargetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeAutomationExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAutomationExecutionsRequest,
                                    Pagination::DescribeAutomationExecutionsPaginationTraits<DerivedClient>>
  DescribeAutomationExecutionsPaginator(const Model::DescribeAutomationExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAutomationExecutionsRequest,
                                             Pagination::DescribeAutomationExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeAutomationStepExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAutomationStepExecutionsRequest,
                                    Pagination::DescribeAutomationStepExecutionsPaginationTraits<DerivedClient>>
  DescribeAutomationStepExecutionsPaginator(const Model::DescribeAutomationStepExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAutomationStepExecutionsRequest,
                                             Pagination::DescribeAutomationStepExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeAvailablePatches operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAvailablePatchesRequest,
                                    Pagination::DescribeAvailablePatchesPaginationTraits<DerivedClient>>
  DescribeAvailablePatchesPaginator(const Model::DescribeAvailablePatchesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeAvailablePatchesRequest,
                                             Pagination::DescribeAvailablePatchesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEffectiveInstanceAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEffectiveInstanceAssociationsRequest,
                                    Pagination::DescribeEffectiveInstanceAssociationsPaginationTraits<DerivedClient>>
  DescribeEffectiveInstanceAssociationsPaginator(const Model::DescribeEffectiveInstanceAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEffectiveInstanceAssociationsRequest,
                                             Pagination::DescribeEffectiveInstanceAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEffectivePatchesForPatchBaseline operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEffectivePatchesForPatchBaselineRequest,
                                    Pagination::DescribeEffectivePatchesForPatchBaselinePaginationTraits<DerivedClient>>
  DescribeEffectivePatchesForPatchBaselinePaginator(const Model::DescribeEffectivePatchesForPatchBaselineRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEffectivePatchesForPatchBaselineRequest,
                                             Pagination::DescribeEffectivePatchesForPatchBaselinePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInstanceAssociationsStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceAssociationsStatusRequest,
                                    Pagination::DescribeInstanceAssociationsStatusPaginationTraits<DerivedClient>>
  DescribeInstanceAssociationsStatusPaginator(const Model::DescribeInstanceAssociationsStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceAssociationsStatusRequest,
                                             Pagination::DescribeInstanceAssociationsStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInstanceInformation operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceInformationRequest,
                                    Pagination::DescribeInstanceInformationPaginationTraits<DerivedClient>>
  DescribeInstanceInformationPaginator(const Model::DescribeInstanceInformationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstanceInformationRequest,
                                             Pagination::DescribeInstanceInformationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInstancePatches operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstancePatchesRequest,
                                    Pagination::DescribeInstancePatchesPaginationTraits<DerivedClient>>
  DescribeInstancePatchesPaginator(const Model::DescribeInstancePatchesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstancePatchesRequest,
                                             Pagination::DescribeInstancePatchesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInstancePatchStates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstancePatchStatesRequest,
                                    Pagination::DescribeInstancePatchStatesPaginationTraits<DerivedClient>>
  DescribeInstancePatchStatesPaginator(const Model::DescribeInstancePatchStatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstancePatchStatesRequest,
                                             Pagination::DescribeInstancePatchStatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInstancePatchStatesForPatchGroup operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstancePatchStatesForPatchGroupRequest,
                                    Pagination::DescribeInstancePatchStatesForPatchGroupPaginationTraits<DerivedClient>>
  DescribeInstancePatchStatesForPatchGroupPaginator(const Model::DescribeInstancePatchStatesForPatchGroupRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstancePatchStatesForPatchGroupRequest,
                                             Pagination::DescribeInstancePatchStatesForPatchGroupPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInstanceProperties operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstancePropertiesRequest,
                                    Pagination::DescribeInstancePropertiesPaginationTraits<DerivedClient>>
  DescribeInstancePropertiesPaginator(const Model::DescribeInstancePropertiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInstancePropertiesRequest,
                                             Pagination::DescribeInstancePropertiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeInventoryDeletions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInventoryDeletionsRequest,
                                    Pagination::DescribeInventoryDeletionsPaginationTraits<DerivedClient>>
  DescribeInventoryDeletionsPaginator(const Model::DescribeInventoryDeletionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeInventoryDeletionsRequest,
                                             Pagination::DescribeInventoryDeletionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMaintenanceWindowExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMaintenanceWindowExecutionsRequest,
                                    Pagination::DescribeMaintenanceWindowExecutionsPaginationTraits<DerivedClient>>
  DescribeMaintenanceWindowExecutionsPaginator(const Model::DescribeMaintenanceWindowExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMaintenanceWindowExecutionsRequest,
                                             Pagination::DescribeMaintenanceWindowExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMaintenanceWindowExecutionTaskInvocations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMaintenanceWindowExecutionTaskInvocationsRequest,
                                    Pagination::DescribeMaintenanceWindowExecutionTaskInvocationsPaginationTraits<DerivedClient>>
  DescribeMaintenanceWindowExecutionTaskInvocationsPaginator(
      const Model::DescribeMaintenanceWindowExecutionTaskInvocationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMaintenanceWindowExecutionTaskInvocationsRequest,
                                             Pagination::DescribeMaintenanceWindowExecutionTaskInvocationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMaintenanceWindowExecutionTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMaintenanceWindowExecutionTasksRequest,
                                    Pagination::DescribeMaintenanceWindowExecutionTasksPaginationTraits<DerivedClient>>
  DescribeMaintenanceWindowExecutionTasksPaginator(const Model::DescribeMaintenanceWindowExecutionTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMaintenanceWindowExecutionTasksRequest,
                                             Pagination::DescribeMaintenanceWindowExecutionTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMaintenanceWindows operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMaintenanceWindowsRequest,
                                    Pagination::DescribeMaintenanceWindowsPaginationTraits<DerivedClient>>
  DescribeMaintenanceWindowsPaginator(const Model::DescribeMaintenanceWindowsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMaintenanceWindowsRequest,
                                             Pagination::DescribeMaintenanceWindowsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMaintenanceWindowSchedule operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMaintenanceWindowScheduleRequest,
                                    Pagination::DescribeMaintenanceWindowSchedulePaginationTraits<DerivedClient>>
  DescribeMaintenanceWindowSchedulePaginator(const Model::DescribeMaintenanceWindowScheduleRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMaintenanceWindowScheduleRequest,
                                             Pagination::DescribeMaintenanceWindowSchedulePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMaintenanceWindowsForTarget operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMaintenanceWindowsForTargetRequest,
                                    Pagination::DescribeMaintenanceWindowsForTargetPaginationTraits<DerivedClient>>
  DescribeMaintenanceWindowsForTargetPaginator(const Model::DescribeMaintenanceWindowsForTargetRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMaintenanceWindowsForTargetRequest,
                                             Pagination::DescribeMaintenanceWindowsForTargetPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMaintenanceWindowTargets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMaintenanceWindowTargetsRequest,
                                    Pagination::DescribeMaintenanceWindowTargetsPaginationTraits<DerivedClient>>
  DescribeMaintenanceWindowTargetsPaginator(const Model::DescribeMaintenanceWindowTargetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMaintenanceWindowTargetsRequest,
                                             Pagination::DescribeMaintenanceWindowTargetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMaintenanceWindowTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMaintenanceWindowTasksRequest,
                                    Pagination::DescribeMaintenanceWindowTasksPaginationTraits<DerivedClient>>
  DescribeMaintenanceWindowTasksPaginator(const Model::DescribeMaintenanceWindowTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMaintenanceWindowTasksRequest,
                                             Pagination::DescribeMaintenanceWindowTasksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeOpsItems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOpsItemsRequest,
                                    Pagination::DescribeOpsItemsPaginationTraits<DerivedClient>>
  DescribeOpsItemsPaginator(const Model::DescribeOpsItemsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOpsItemsRequest,
                                             Pagination::DescribeOpsItemsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for DescribeParameters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeParametersRequest,
                                    Pagination::DescribeParametersPaginationTraits<DerivedClient>>
  DescribeParametersPaginator(const Model::DescribeParametersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeParametersRequest,
                                             Pagination::DescribeParametersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribePatchBaselines operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePatchBaselinesRequest,
                                    Pagination::DescribePatchBaselinesPaginationTraits<DerivedClient>>
  DescribePatchBaselinesPaginator(const Model::DescribePatchBaselinesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePatchBaselinesRequest,
                                             Pagination::DescribePatchBaselinesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribePatchGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePatchGroupsRequest,
                                    Pagination::DescribePatchGroupsPaginationTraits<DerivedClient>>
  DescribePatchGroupsPaginator(const Model::DescribePatchGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePatchGroupsRequest,
                                             Pagination::DescribePatchGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribePatchProperties operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePatchPropertiesRequest,
                                    Pagination::DescribePatchPropertiesPaginationTraits<DerivedClient>>
  DescribePatchPropertiesPaginator(const Model::DescribePatchPropertiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribePatchPropertiesRequest,
                                             Pagination::DescribePatchPropertiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSessions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSessionsRequest,
                                    Pagination::DescribeSessionsPaginationTraits<DerivedClient>>
  DescribeSessionsPaginator(const Model::DescribeSessionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSessionsRequest,
                                             Pagination::DescribeSessionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for GetInventory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetInventoryRequest, Pagination::GetInventoryPaginationTraits<DerivedClient>>
  GetInventoryPaginator(const Model::GetInventoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetInventoryRequest,
                                             Pagination::GetInventoryPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for GetInventorySchema operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetInventorySchemaRequest,
                                    Pagination::GetInventorySchemaPaginationTraits<DerivedClient>>
  GetInventorySchemaPaginator(const Model::GetInventorySchemaRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetInventorySchemaRequest,
                                             Pagination::GetInventorySchemaPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetOpsSummary operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetOpsSummaryRequest, Pagination::GetOpsSummaryPaginationTraits<DerivedClient>>
  GetOpsSummaryPaginator(const Model::GetOpsSummaryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetOpsSummaryRequest,
                                             Pagination::GetOpsSummaryPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for GetParameterHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetParameterHistoryRequest,
                                    Pagination::GetParameterHistoryPaginationTraits<DerivedClient>>
  GetParameterHistoryPaginator(const Model::GetParameterHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetParameterHistoryRequest,
                                             Pagination::GetParameterHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetParametersByPath operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetParametersByPathRequest,
                                    Pagination::GetParametersByPathPaginationTraits<DerivedClient>>
  GetParametersByPathPaginator(const Model::GetParametersByPathRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetParametersByPathRequest,
                                             Pagination::GetParametersByPathPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetResourcePolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourcePoliciesRequest,
                                    Pagination::GetResourcePoliciesPaginationTraits<DerivedClient>>
  GetResourcePoliciesPaginator(const Model::GetResourcePoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourcePoliciesRequest,
                                             Pagination::GetResourcePoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociationsRequest,
                                    Pagination::ListAssociationsPaginationTraits<DerivedClient>>
  ListAssociationsPaginator(const Model::ListAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociationsRequest,
                                             Pagination::ListAssociationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListAssociationVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociationVersionsRequest,
                                    Pagination::ListAssociationVersionsPaginationTraits<DerivedClient>>
  ListAssociationVersionsPaginator(const Model::ListAssociationVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociationVersionsRequest,
                                             Pagination::ListAssociationVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCommandInvocations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCommandInvocationsRequest,
                                    Pagination::ListCommandInvocationsPaginationTraits<DerivedClient>>
  ListCommandInvocationsPaginator(const Model::ListCommandInvocationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCommandInvocationsRequest,
                                             Pagination::ListCommandInvocationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCommands operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCommandsRequest, Pagination::ListCommandsPaginationTraits<DerivedClient>>
  ListCommandsPaginator(const Model::ListCommandsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCommandsRequest,
                                             Pagination::ListCommandsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListComplianceItems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComplianceItemsRequest,
                                    Pagination::ListComplianceItemsPaginationTraits<DerivedClient>>
  ListComplianceItemsPaginator(const Model::ListComplianceItemsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComplianceItemsRequest,
                                             Pagination::ListComplianceItemsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListComplianceSummaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComplianceSummariesRequest,
                                    Pagination::ListComplianceSummariesPaginationTraits<DerivedClient>>
  ListComplianceSummariesPaginator(const Model::ListComplianceSummariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComplianceSummariesRequest,
                                             Pagination::ListComplianceSummariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDocuments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDocumentsRequest, Pagination::ListDocumentsPaginationTraits<DerivedClient>>
  ListDocumentsPaginator(const Model::ListDocumentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDocumentsRequest,
                                             Pagination::ListDocumentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListDocumentVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDocumentVersionsRequest,
                                    Pagination::ListDocumentVersionsPaginationTraits<DerivedClient>>
  ListDocumentVersionsPaginator(const Model::ListDocumentVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDocumentVersionsRequest,
                                             Pagination::ListDocumentVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNodes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNodesRequest, Pagination::ListNodesPaginationTraits<DerivedClient>>
  ListNodesPaginator(const Model::ListNodesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNodesRequest, Pagination::ListNodesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNodesSummary operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNodesSummaryRequest,
                                    Pagination::ListNodesSummaryPaginationTraits<DerivedClient>>
  ListNodesSummaryPaginator(const Model::ListNodesSummaryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNodesSummaryRequest,
                                             Pagination::ListNodesSummaryPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListOpsItemEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOpsItemEventsRequest,
                                    Pagination::ListOpsItemEventsPaginationTraits<DerivedClient>>
  ListOpsItemEventsPaginator(const Model::ListOpsItemEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOpsItemEventsRequest,
                                             Pagination::ListOpsItemEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOpsItemRelatedItems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOpsItemRelatedItemsRequest,
                                    Pagination::ListOpsItemRelatedItemsPaginationTraits<DerivedClient>>
  ListOpsItemRelatedItemsPaginator(const Model::ListOpsItemRelatedItemsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOpsItemRelatedItemsRequest,
                                             Pagination::ListOpsItemRelatedItemsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOpsMetadata operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOpsMetadataRequest,
                                    Pagination::ListOpsMetadataPaginationTraits<DerivedClient>>
  ListOpsMetadataPaginator(const Model::ListOpsMetadataRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOpsMetadataRequest,
                                             Pagination::ListOpsMetadataPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListResourceComplianceSummaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceComplianceSummariesRequest,
                                    Pagination::ListResourceComplianceSummariesPaginationTraits<DerivedClient>>
  ListResourceComplianceSummariesPaginator(const Model::ListResourceComplianceSummariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceComplianceSummariesRequest,
                                             Pagination::ListResourceComplianceSummariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourceDataSync operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceDataSyncRequest,
                                    Pagination::ListResourceDataSyncPaginationTraits<DerivedClient>>
  ListResourceDataSyncPaginator(const Model::ListResourceDataSyncRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceDataSyncRequest,
                                             Pagination::ListResourceDataSyncPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace SSM
}  // namespace Aws
