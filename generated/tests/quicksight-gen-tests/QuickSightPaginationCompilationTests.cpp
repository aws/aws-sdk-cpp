/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for QuickSight pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/quicksight/QuickSightClientPagination.h>
#include <aws/quicksight/QuickSightPaginationBase.h>
#include <aws/quicksight/model/ListDashboardsPaginationTraits.h>
#include <aws/quicksight/model/ListAnalysesPaginationTraits.h>
#include <aws/quicksight/model/ListThemeVersionsPaginationTraits.h>
#include <aws/quicksight/model/ListBrandsPaginationTraits.h>
#include <aws/quicksight/model/ListTemplatesPaginationTraits.h>
#include <aws/quicksight/model/DescribeFolderPermissionsPaginationTraits.h>
#include <aws/quicksight/model/ListThemesPaginationTraits.h>
#include <aws/quicksight/model/ListCustomPermissionsPaginationTraits.h>
#include <aws/quicksight/model/ListFoldersPaginationTraits.h>
#include <aws/quicksight/model/SearchAnalysesPaginationTraits.h>
#include <aws/quicksight/model/ListTemplateVersionsPaginationTraits.h>
#include <aws/quicksight/model/ListAssetBundleImportJobsPaginationTraits.h>
#include <aws/quicksight/model/ListIAMPolicyAssignmentsForUserPaginationTraits.h>
#include <aws/quicksight/model/ListFolderMembersPaginationTraits.h>
#include <aws/quicksight/model/ListDataSourcesPaginationTraits.h>
#include <aws/quicksight/model/ListIAMPolicyAssignmentsPaginationTraits.h>
#include <aws/quicksight/model/SearchGroupsPaginationTraits.h>
#include <aws/quicksight/model/ListUserGroupsPaginationTraits.h>
#include <aws/quicksight/model/SearchDashboardsPaginationTraits.h>
#include <aws/quicksight/model/DescribeFolderResolvedPermissionsPaginationTraits.h>
#include <aws/quicksight/model/ListTopicsPaginationTraits.h>
#include <aws/quicksight/model/ListActionConnectorsPaginationTraits.h>
#include <aws/quicksight/model/ListNamespacesPaginationTraits.h>
#include <aws/quicksight/model/ListGroupMembershipsPaginationTraits.h>
#include <aws/quicksight/model/SearchTopicsPaginationTraits.h>
#include <aws/quicksight/model/SearchFlowsPaginationTraits.h>
#include <aws/quicksight/model/ListAssetBundleExportJobsPaginationTraits.h>
#include <aws/quicksight/model/ListDataSetsPaginationTraits.h>
#include <aws/quicksight/model/ListVPCConnectionsPaginationTraits.h>
#include <aws/quicksight/model/SearchActionConnectorsPaginationTraits.h>
#include <aws/quicksight/model/ListDashboardVersionsPaginationTraits.h>
#include <aws/quicksight/model/SearchFoldersPaginationTraits.h>
#include <aws/quicksight/model/SearchDataSourcesPaginationTraits.h>
#include <aws/quicksight/model/ListGroupsPaginationTraits.h>
#include <aws/quicksight/model/ListFoldersForResourcePaginationTraits.h>
#include <aws/quicksight/model/ListTemplateAliasesPaginationTraits.h>
#include <aws/quicksight/model/ListUsersPaginationTraits.h>
#include <aws/quicksight/model/ListFlowsPaginationTraits.h>
#include <aws/quicksight/model/SearchDataSetsPaginationTraits.h>
#include <aws/quicksight/model/ListIngestionsPaginationTraits.h>
#include <aws/quicksight/model/ListRoleMembershipsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class QuickSightPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(QuickSightPaginationCompilationTest, QuickSightPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
