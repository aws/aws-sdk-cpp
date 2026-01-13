/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Connect pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/connect/ConnectClientPagination.h>
#include <aws/connect/ConnectPaginationBase.h>
#include <aws/connect/model/SearchResourceTagsPaginationTraits.h>
#include <aws/connect/model/ListTrafficDistributionGroupsPaginationTraits.h>
#include <aws/connect/model/ListEvaluationFormsPaginationTraits.h>
#include <aws/connect/model/ListUserProficienciesPaginationTraits.h>
#include <aws/connect/model/ListSecurityProfileFlowModulesPaginationTraits.h>
#include <aws/connect/model/EvaluateDataTableValuesPaginationTraits.h>
#include <aws/connect/model/ListInstanceStorageConfigsPaginationTraits.h>
#include <aws/connect/model/SearchDataTablesPaginationTraits.h>
#include <aws/connect/model/SearchTestCasesPaginationTraits.h>
#include <aws/connect/model/ListDataTableValuesPaginationTraits.h>
#include <aws/connect/model/ListRoutingProfileQueuesPaginationTraits.h>
#include <aws/connect/model/ListSecurityProfilePermissionsPaginationTraits.h>
#include <aws/connect/model/ListRoutingProfilesPaginationTraits.h>
#include <aws/connect/model/SearchSecurityProfilesPaginationTraits.h>
#include <aws/connect/model/GetMetricDataPaginationTraits.h>
#include <aws/connect/model/ListTestCasesPaginationTraits.h>
#include <aws/connect/model/SearchHoursOfOperationsPaginationTraits.h>
#include <aws/connect/model/ListSecurityProfilesPaginationTraits.h>
#include <aws/connect/model/ListDefaultVocabulariesPaginationTraits.h>
#include <aws/connect/model/ListInstanceAttributesPaginationTraits.h>
#include <aws/connect/model/ListSecurityProfileApplicationsPaginationTraits.h>
#include <aws/connect/model/GetCurrentUserDataPaginationTraits.h>
#include <aws/connect/model/ListDataTableAttributesPaginationTraits.h>
#include <aws/connect/model/ListUsersPaginationTraits.h>
#include <aws/connect/model/ListRealtimeContactAnalysisSegmentsV2PaginationTraits.h>
#include <aws/connect/model/ListPredefinedAttributesPaginationTraits.h>
#include <aws/connect/model/ListContactFlowsPaginationTraits.h>
#include <aws/connect/model/ListRulesPaginationTraits.h>
#include <aws/connect/model/ListAuthenticationProfilesPaginationTraits.h>
#include <aws/connect/model/ListViewsPaginationTraits.h>
#include <aws/connect/model/SearchPromptsPaginationTraits.h>
#include <aws/connect/model/SearchRoutingProfilesPaginationTraits.h>
#include <aws/connect/model/ListDataTablePrimaryValuesPaginationTraits.h>
#include <aws/connect/model/ListWorkspacesPaginationTraits.h>
#include <aws/connect/model/SearchQuickConnectsPaginationTraits.h>
#include <aws/connect/model/ListQueuesPaginationTraits.h>
#include <aws/connect/model/SearchQueuesPaginationTraits.h>
#include <aws/connect/model/ListViewVersionsPaginationTraits.h>
#include <aws/connect/model/ListInstancesPaginationTraits.h>
#include <aws/connect/model/ListPhoneNumbersV2PaginationTraits.h>
#include <aws/connect/model/ListFlowAssociationsPaginationTraits.h>
#include <aws/connect/model/GetMetricDataV2PaginationTraits.h>
#include <aws/connect/model/ListHoursOfOperationOverridesPaginationTraits.h>
#include <aws/connect/model/ListTaskTemplatesPaginationTraits.h>
#include <aws/connect/model/ListApprovedOriginsPaginationTraits.h>
#include <aws/connect/model/ListQueueQuickConnectsPaginationTraits.h>
#include <aws/connect/model/ListHoursOfOperationsPaginationTraits.h>
#include <aws/connect/model/SearchWorkspacesPaginationTraits.h>
#include <aws/connect/model/ListUserHierarchyGroupsPaginationTraits.h>
#include <aws/connect/model/SearchAvailablePhoneNumbersPaginationTraits.h>
#include <aws/connect/model/ListPromptsPaginationTraits.h>
#include <aws/connect/model/ListContactFlowModulesPaginationTraits.h>
#include <aws/connect/model/SearchContactFlowsPaginationTraits.h>
#include <aws/connect/model/SearchUserHierarchyGroupsPaginationTraits.h>
#include <aws/connect/model/SearchWorkspaceAssociationsPaginationTraits.h>
#include <aws/connect/model/ListContactEvaluationsPaginationTraits.h>
#include <aws/connect/model/ListWorkspacePagesPaginationTraits.h>
#include <aws/connect/model/ListUseCasesPaginationTraits.h>
#include <aws/connect/model/SearchViewsPaginationTraits.h>
#include <aws/connect/model/ListSecurityKeysPaginationTraits.h>
#include <aws/connect/model/ListBotsPaginationTraits.h>
#include <aws/connect/model/ListContactFlowModuleVersionsPaginationTraits.h>
#include <aws/connect/model/ListAgentStatusesPaginationTraits.h>
#include <aws/connect/model/ListContactFlowModuleAliasesPaginationTraits.h>
#include <aws/connect/model/SearchContactsPaginationTraits.h>
#include <aws/connect/model/GetCurrentMetricDataPaginationTraits.h>
#include <aws/connect/model/ListIntegrationAssociationsPaginationTraits.h>
#include <aws/connect/model/ListContactReferencesPaginationTraits.h>
#include <aws/connect/model/SearchPredefinedAttributesPaginationTraits.h>
#include <aws/connect/model/ListContactFlowVersionsPaginationTraits.h>
#include <aws/connect/model/ListLexBotsPaginationTraits.h>
#include <aws/connect/model/ListDataTablesPaginationTraits.h>
#include <aws/connect/model/SearchContactFlowModulesPaginationTraits.h>
#include <aws/connect/model/SearchUsersPaginationTraits.h>
#include <aws/connect/model/ListEntitySecurityProfilesPaginationTraits.h>
#include <aws/connect/model/ListTrafficDistributionGroupUsersPaginationTraits.h>
#include <aws/connect/model/SearchHoursOfOperationOverridesPaginationTraits.h>
#include <aws/connect/model/ListQuickConnectsPaginationTraits.h>
#include <aws/connect/model/ListRoutingProfileManualAssignmentQueuesPaginationTraits.h>
#include <aws/connect/model/ListEvaluationFormVersionsPaginationTraits.h>
#include <aws/connect/model/ListLambdaFunctionsPaginationTraits.h>
#include <aws/connect/model/ListPhoneNumbersPaginationTraits.h>
#include <aws/connect/model/ListChildHoursOfOperationsPaginationTraits.h>
#include <aws/connect/model/SearchAgentStatusesPaginationTraits.h>
#include <aws/connect/model/SearchVocabulariesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ConnectPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ConnectPaginationCompilationTest, ConnectPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
