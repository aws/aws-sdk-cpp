/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for WellArchitected pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/wellarchitected/WellArchitectedClientPagination.h>
#include <aws/wellarchitected/WellArchitectedPaginationBase.h>
#include <aws/wellarchitected/model/ListLensReviewsPaginationTraits.h>
#include <aws/wellarchitected/model/ListReviewTemplateAnswersPaginationTraits.h>
#include <aws/wellarchitected/model/ListProfileSharesPaginationTraits.h>
#include <aws/wellarchitected/model/ListWorkloadsPaginationTraits.h>
#include <aws/wellarchitected/model/ListAnswersPaginationTraits.h>
#include <aws/wellarchitected/model/ListProfileNotificationsPaginationTraits.h>
#include <aws/wellarchitected/model/ListShareInvitationsPaginationTraits.h>
#include <aws/wellarchitected/model/ListCheckSummariesPaginationTraits.h>
#include <aws/wellarchitected/model/ListProfilesPaginationTraits.h>
#include <aws/wellarchitected/model/ListCheckDetailsPaginationTraits.h>
#include <aws/wellarchitected/model/ListWorkloadSharesPaginationTraits.h>
#include <aws/wellarchitected/model/ListNotificationsPaginationTraits.h>
#include <aws/wellarchitected/model/ListReviewTemplatesPaginationTraits.h>
#include <aws/wellarchitected/model/ListTemplateSharesPaginationTraits.h>
#include <aws/wellarchitected/model/GetConsolidatedReportPaginationTraits.h>
#include <aws/wellarchitected/model/ListLensesPaginationTraits.h>
#include <aws/wellarchitected/model/ListMilestonesPaginationTraits.h>
#include <aws/wellarchitected/model/ListLensSharesPaginationTraits.h>
#include <aws/wellarchitected/model/ListLensReviewImprovementsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class WellArchitectedPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(WellArchitectedPaginationCompilationTest, WellArchitectedPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
