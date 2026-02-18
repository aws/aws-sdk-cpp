/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CodeGuruReviewer pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/codeguru-reviewer/CodeGuruReviewerClientPagination.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerPaginationBase.h>
#include <aws/codeguru-reviewer/model/ListRecommendationsPaginationTraits.h>
#include <aws/codeguru-reviewer/model/ListRepositoryAssociationsPaginationTraits.h>
#include <aws/codeguru-reviewer/model/ListCodeReviewsPaginationTraits.h>
#include <aws/codeguru-reviewer/model/ListRecommendationFeedbackPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CodeGuruReviewerPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CodeGuruReviewerPaginationCompilationTest, CodeGuruReviewerPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
