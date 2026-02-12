/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SSM pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/ssm/SSMClientPagination.h>
#include <aws/ssm/SSMPaginationBase.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionTasksPaginationTraits.h>
#include <aws/ssm/model/DescribeAutomationExecutionsPaginationTraits.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionsPaginationTraits.h>
#include <aws/ssm/model/DescribePatchGroupsPaginationTraits.h>
#include <aws/ssm/model/DescribeOpsItemsPaginationTraits.h>
#include <aws/ssm/model/DescribeInstancePatchStatesForPatchGroupPaginationTraits.h>
#include <aws/ssm/model/GetOpsSummaryPaginationTraits.h>
#include <aws/ssm/model/DescribeInventoryDeletionsPaginationTraits.h>
#include <aws/ssm/model/DescribeInstancePatchStatesPaginationTraits.h>
#include <aws/ssm/model/DescribeMaintenanceWindowsPaginationTraits.h>
#include <aws/ssm/model/GetParametersByPathPaginationTraits.h>
#include <aws/ssm/model/ListCommandInvocationsPaginationTraits.h>
#include <aws/ssm/model/GetInventoryPaginationTraits.h>
#include <aws/ssm/model/ListOpsItemRelatedItemsPaginationTraits.h>
#include <aws/ssm/model/ListDocumentVersionsPaginationTraits.h>
#include <aws/ssm/model/ListOpsMetadataPaginationTraits.h>
#include <aws/ssm/model/DescribeAutomationStepExecutionsPaginationTraits.h>
#include <aws/ssm/model/DescribeSessionsPaginationTraits.h>
#include <aws/ssm/model/ListOpsItemEventsPaginationTraits.h>
#include <aws/ssm/model/DescribeAvailablePatchesPaginationTraits.h>
#include <aws/ssm/model/ListDocumentsPaginationTraits.h>
#include <aws/ssm/model/DescribeMaintenanceWindowExecutionTaskInvocationsPaginationTraits.h>
#include <aws/ssm/model/DescribeAssociationExecutionTargetsPaginationTraits.h>
#include <aws/ssm/model/DescribePatchBaselinesPaginationTraits.h>
#include <aws/ssm/model/DescribeMaintenanceWindowTasksPaginationTraits.h>
#include <aws/ssm/model/ListAssociationVersionsPaginationTraits.h>
#include <aws/ssm/model/ListComplianceSummariesPaginationTraits.h>
#include <aws/ssm/model/DescribeMaintenanceWindowTargetsPaginationTraits.h>
#include <aws/ssm/model/ListResourceDataSyncPaginationTraits.h>
#include <aws/ssm/model/ListNodesSummaryPaginationTraits.h>
#include <aws/ssm/model/GetParameterHistoryPaginationTraits.h>
#include <aws/ssm/model/ListCommandsPaginationTraits.h>
#include <aws/ssm/model/DescribePatchPropertiesPaginationTraits.h>
#include <aws/ssm/model/GetInventorySchemaPaginationTraits.h>
#include <aws/ssm/model/DescribeEffectiveInstanceAssociationsPaginationTraits.h>
#include <aws/ssm/model/DescribeInstancePatchesPaginationTraits.h>
#include <aws/ssm/model/ListComplianceItemsPaginationTraits.h>
#include <aws/ssm/model/DescribeActivationsPaginationTraits.h>
#include <aws/ssm/model/ListAssociationsPaginationTraits.h>
#include <aws/ssm/model/DescribeEffectivePatchesForPatchBaselinePaginationTraits.h>
#include <aws/ssm/model/DescribeInstancePropertiesPaginationTraits.h>
#include <aws/ssm/model/DescribeMaintenanceWindowSchedulePaginationTraits.h>
#include <aws/ssm/model/GetResourcePoliciesPaginationTraits.h>
#include <aws/ssm/model/DescribeAssociationExecutionsPaginationTraits.h>
#include <aws/ssm/model/DescribeInstanceInformationPaginationTraits.h>
#include <aws/ssm/model/ListResourceComplianceSummariesPaginationTraits.h>
#include <aws/ssm/model/DescribeParametersPaginationTraits.h>
#include <aws/ssm/model/DescribeMaintenanceWindowsForTargetPaginationTraits.h>
#include <aws/ssm/model/DescribeInstanceAssociationsStatusPaginationTraits.h>
#include <aws/ssm/model/ListNodesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SSMPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SSMPaginationCompilationTest, SSMPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
