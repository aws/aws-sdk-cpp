/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CodeCommit pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/codecommit/CodeCommitClientPagination.h>
#include <aws/codecommit/CodeCommitPaginationBase.h>
#include <aws/codecommit/model/GetCommentsForPullRequestPaginationTraits.h>
#include <aws/codecommit/model/ListFileCommitHistoryPaginationTraits.h>
#include <aws/codecommit/model/GetCommentsForComparedCommitPaginationTraits.h>
#include <aws/codecommit/model/ListBranchesPaginationTraits.h>
#include <aws/codecommit/model/ListRepositoriesPaginationTraits.h>
#include <aws/codecommit/model/GetMergeConflictsPaginationTraits.h>
#include <aws/codecommit/model/ListPullRequestsPaginationTraits.h>
#include <aws/codecommit/model/GetDifferencesPaginationTraits.h>
#include <aws/codecommit/model/GetCommentReactionsPaginationTraits.h>
#include <aws/codecommit/model/ListApprovalRuleTemplatesPaginationTraits.h>
#include <aws/codecommit/model/DescribeMergeConflictsPaginationTraits.h>
#include <aws/codecommit/model/DescribePullRequestEventsPaginationTraits.h>
#include <aws/codecommit/model/ListRepositoriesForApprovalRuleTemplatePaginationTraits.h>
#include <aws/codecommit/model/ListAssociatedApprovalRuleTemplatesForRepositoryPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CodeCommitPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CodeCommitPaginationCompilationTest, CodeCommitPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
