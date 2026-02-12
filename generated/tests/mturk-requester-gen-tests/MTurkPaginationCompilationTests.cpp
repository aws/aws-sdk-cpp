/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MTurk pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/mturk-requester/MTurkClientPagination.h>
#include <aws/mturk-requester/MTurkPaginationBase.h>
#include <aws/mturk-requester/model/ListHITsForQualificationTypePaginationTraits.h>
#include <aws/mturk-requester/model/ListWorkerBlocksPaginationTraits.h>
#include <aws/mturk-requester/model/ListReviewableHITsPaginationTraits.h>
#include <aws/mturk-requester/model/ListBonusPaymentsPaginationTraits.h>
#include <aws/mturk-requester/model/ListQualificationRequestsPaginationTraits.h>
#include <aws/mturk-requester/model/ListReviewPolicyResultsForHITPaginationTraits.h>
#include <aws/mturk-requester/model/ListAssignmentsForHITPaginationTraits.h>
#include <aws/mturk-requester/model/ListHITsPaginationTraits.h>
#include <aws/mturk-requester/model/ListWorkersWithQualificationTypePaginationTraits.h>
#include <aws/mturk-requester/model/ListQualificationTypesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MTurkPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MTurkPaginationCompilationTest, MTurkPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
