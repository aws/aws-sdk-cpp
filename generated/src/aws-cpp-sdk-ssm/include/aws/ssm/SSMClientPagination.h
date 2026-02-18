/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ssm/SSMClient.h>
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

namespace Aws {
namespace SSM {

using DescribeActivationsPaginator = Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeActivationsRequest,
                                                                       Pagination::DescribeActivationsPaginationTraits<SSMClient>>;
using DescribeAssociationExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeAssociationExecutionsRequest,
                                      Pagination::DescribeAssociationExecutionsPaginationTraits<SSMClient>>;
using DescribeAssociationExecutionTargetsPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeAssociationExecutionTargetsRequest,
                                      Pagination::DescribeAssociationExecutionTargetsPaginationTraits<SSMClient>>;
using DescribeAutomationExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeAutomationExecutionsRequest,
                                      Pagination::DescribeAutomationExecutionsPaginationTraits<SSMClient>>;
using DescribeAutomationStepExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeAutomationStepExecutionsRequest,
                                      Pagination::DescribeAutomationStepExecutionsPaginationTraits<SSMClient>>;
using DescribeAvailablePatchesPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeAvailablePatchesRequest,
                                      Pagination::DescribeAvailablePatchesPaginationTraits<SSMClient>>;
using DescribeEffectiveInstanceAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeEffectiveInstanceAssociationsRequest,
                                      Pagination::DescribeEffectiveInstanceAssociationsPaginationTraits<SSMClient>>;
using DescribeEffectivePatchesForPatchBaselinePaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeEffectivePatchesForPatchBaselineRequest,
                                      Pagination::DescribeEffectivePatchesForPatchBaselinePaginationTraits<SSMClient>>;
using DescribeInstanceAssociationsStatusPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeInstanceAssociationsStatusRequest,
                                      Pagination::DescribeInstanceAssociationsStatusPaginationTraits<SSMClient>>;
using DescribeInstanceInformationPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeInstanceInformationRequest,
                                      Pagination::DescribeInstanceInformationPaginationTraits<SSMClient>>;
using DescribeInstancePatchesPaginator = Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeInstancePatchesRequest,
                                                                           Pagination::DescribeInstancePatchesPaginationTraits<SSMClient>>;
using DescribeInstancePatchStatesPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeInstancePatchStatesRequest,
                                      Pagination::DescribeInstancePatchStatesPaginationTraits<SSMClient>>;
using DescribeInstancePatchStatesForPatchGroupPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeInstancePatchStatesForPatchGroupRequest,
                                      Pagination::DescribeInstancePatchStatesForPatchGroupPaginationTraits<SSMClient>>;
using DescribeInstancePropertiesPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeInstancePropertiesRequest,
                                      Pagination::DescribeInstancePropertiesPaginationTraits<SSMClient>>;
using DescribeInventoryDeletionsPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeInventoryDeletionsRequest,
                                      Pagination::DescribeInventoryDeletionsPaginationTraits<SSMClient>>;
using DescribeMaintenanceWindowExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeMaintenanceWindowExecutionsRequest,
                                      Pagination::DescribeMaintenanceWindowExecutionsPaginationTraits<SSMClient>>;
using DescribeMaintenanceWindowExecutionTaskInvocationsPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeMaintenanceWindowExecutionTaskInvocationsRequest,
                                      Pagination::DescribeMaintenanceWindowExecutionTaskInvocationsPaginationTraits<SSMClient>>;
using DescribeMaintenanceWindowExecutionTasksPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeMaintenanceWindowExecutionTasksRequest,
                                      Pagination::DescribeMaintenanceWindowExecutionTasksPaginationTraits<SSMClient>>;
using DescribeMaintenanceWindowsPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeMaintenanceWindowsRequest,
                                      Pagination::DescribeMaintenanceWindowsPaginationTraits<SSMClient>>;
using DescribeMaintenanceWindowSchedulePaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeMaintenanceWindowScheduleRequest,
                                      Pagination::DescribeMaintenanceWindowSchedulePaginationTraits<SSMClient>>;
using DescribeMaintenanceWindowsForTargetPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeMaintenanceWindowsForTargetRequest,
                                      Pagination::DescribeMaintenanceWindowsForTargetPaginationTraits<SSMClient>>;
using DescribeMaintenanceWindowTargetsPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeMaintenanceWindowTargetsRequest,
                                      Pagination::DescribeMaintenanceWindowTargetsPaginationTraits<SSMClient>>;
using DescribeMaintenanceWindowTasksPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeMaintenanceWindowTasksRequest,
                                      Pagination::DescribeMaintenanceWindowTasksPaginationTraits<SSMClient>>;
using DescribeOpsItemsPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeOpsItemsRequest, Pagination::DescribeOpsItemsPaginationTraits<SSMClient>>;
using DescribeParametersPaginator = Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeParametersRequest,
                                                                      Pagination::DescribeParametersPaginationTraits<SSMClient>>;
using DescribePatchBaselinesPaginator = Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribePatchBaselinesRequest,
                                                                          Pagination::DescribePatchBaselinesPaginationTraits<SSMClient>>;
using DescribePatchGroupsPaginator = Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribePatchGroupsRequest,
                                                                       Pagination::DescribePatchGroupsPaginationTraits<SSMClient>>;
using DescribePatchPropertiesPaginator = Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribePatchPropertiesRequest,
                                                                           Pagination::DescribePatchPropertiesPaginationTraits<SSMClient>>;
using DescribeSessionsPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::DescribeSessionsRequest, Pagination::DescribeSessionsPaginationTraits<SSMClient>>;
using GetInventoryPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::GetInventoryRequest, Pagination::GetInventoryPaginationTraits<SSMClient>>;
using GetInventorySchemaPaginator = Aws::Utils::Pagination::Paginator<SSMClient, Model::GetInventorySchemaRequest,
                                                                      Pagination::GetInventorySchemaPaginationTraits<SSMClient>>;
using GetOpsSummaryPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::GetOpsSummaryRequest, Pagination::GetOpsSummaryPaginationTraits<SSMClient>>;
using GetParameterHistoryPaginator = Aws::Utils::Pagination::Paginator<SSMClient, Model::GetParameterHistoryRequest,
                                                                       Pagination::GetParameterHistoryPaginationTraits<SSMClient>>;
using GetParametersByPathPaginator = Aws::Utils::Pagination::Paginator<SSMClient, Model::GetParametersByPathRequest,
                                                                       Pagination::GetParametersByPathPaginationTraits<SSMClient>>;
using GetResourcePoliciesPaginator = Aws::Utils::Pagination::Paginator<SSMClient, Model::GetResourcePoliciesRequest,
                                                                       Pagination::GetResourcePoliciesPaginationTraits<SSMClient>>;
using ListAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::ListAssociationsRequest, Pagination::ListAssociationsPaginationTraits<SSMClient>>;
using ListAssociationVersionsPaginator = Aws::Utils::Pagination::Paginator<SSMClient, Model::ListAssociationVersionsRequest,
                                                                           Pagination::ListAssociationVersionsPaginationTraits<SSMClient>>;
using ListCommandInvocationsPaginator = Aws::Utils::Pagination::Paginator<SSMClient, Model::ListCommandInvocationsRequest,
                                                                          Pagination::ListCommandInvocationsPaginationTraits<SSMClient>>;
using ListCommandsPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::ListCommandsRequest, Pagination::ListCommandsPaginationTraits<SSMClient>>;
using ListComplianceItemsPaginator = Aws::Utils::Pagination::Paginator<SSMClient, Model::ListComplianceItemsRequest,
                                                                       Pagination::ListComplianceItemsPaginationTraits<SSMClient>>;
using ListComplianceSummariesPaginator = Aws::Utils::Pagination::Paginator<SSMClient, Model::ListComplianceSummariesRequest,
                                                                           Pagination::ListComplianceSummariesPaginationTraits<SSMClient>>;
using ListDocumentsPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::ListDocumentsRequest, Pagination::ListDocumentsPaginationTraits<SSMClient>>;
using ListDocumentVersionsPaginator = Aws::Utils::Pagination::Paginator<SSMClient, Model::ListDocumentVersionsRequest,
                                                                        Pagination::ListDocumentVersionsPaginationTraits<SSMClient>>;
using ListNodesPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::ListNodesRequest, Pagination::ListNodesPaginationTraits<SSMClient>>;
using ListNodesSummaryPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::ListNodesSummaryRequest, Pagination::ListNodesSummaryPaginationTraits<SSMClient>>;
using ListOpsItemEventsPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::ListOpsItemEventsRequest, Pagination::ListOpsItemEventsPaginationTraits<SSMClient>>;
using ListOpsItemRelatedItemsPaginator = Aws::Utils::Pagination::Paginator<SSMClient, Model::ListOpsItemRelatedItemsRequest,
                                                                           Pagination::ListOpsItemRelatedItemsPaginationTraits<SSMClient>>;
using ListOpsMetadataPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::ListOpsMetadataRequest, Pagination::ListOpsMetadataPaginationTraits<SSMClient>>;
using ListResourceComplianceSummariesPaginator =
    Aws::Utils::Pagination::Paginator<SSMClient, Model::ListResourceComplianceSummariesRequest,
                                      Pagination::ListResourceComplianceSummariesPaginationTraits<SSMClient>>;
using ListResourceDataSyncPaginator = Aws::Utils::Pagination::Paginator<SSMClient, Model::ListResourceDataSyncRequest,
                                                                        Pagination::ListResourceDataSyncPaginationTraits<SSMClient>>;

}  // namespace SSM
}  // namespace Aws
