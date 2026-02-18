/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for AccessAnalyzer pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/accessanalyzer/AccessAnalyzerClientPagination.h>
#include <aws/accessanalyzer/AccessAnalyzerPaginationBase.h>
#include <aws/accessanalyzer/model/ValidatePolicyPaginationTraits.h>
#include <aws/accessanalyzer/model/ListFindingsPaginationTraits.h>
#include <aws/accessanalyzer/model/ListAnalyzersPaginationTraits.h>
#include <aws/accessanalyzer/model/ListPolicyGenerationsPaginationTraits.h>
#include <aws/accessanalyzer/model/ListFindingsV2PaginationTraits.h>
#include <aws/accessanalyzer/model/GetFindingV2PaginationTraits.h>
#include <aws/accessanalyzer/model/GetFindingRecommendationPaginationTraits.h>
#include <aws/accessanalyzer/model/ListArchiveRulesPaginationTraits.h>
#include <aws/accessanalyzer/model/ListAccessPreviewFindingsPaginationTraits.h>
#include <aws/accessanalyzer/model/ListAnalyzedResourcesPaginationTraits.h>
#include <aws/accessanalyzer/model/ListAccessPreviewsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AccessAnalyzerPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AccessAnalyzerPaginationCompilationTest, AccessAnalyzerPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
