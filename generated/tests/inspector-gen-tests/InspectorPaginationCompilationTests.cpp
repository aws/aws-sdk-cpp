/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Inspector pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/inspector/InspectorClientPagination.h>
#include <aws/inspector/InspectorPaginationBase.h>
#include <aws/inspector/model/GetExclusionsPreviewPaginationTraits.h>
#include <aws/inspector/model/ListAssessmentRunAgentsPaginationTraits.h>
#include <aws/inspector/model/ListAssessmentTemplatesPaginationTraits.h>
#include <aws/inspector/model/ListEventSubscriptionsPaginationTraits.h>
#include <aws/inspector/model/ListFindingsPaginationTraits.h>
#include <aws/inspector/model/PreviewAgentsPaginationTraits.h>
#include <aws/inspector/model/ListAssessmentRunsPaginationTraits.h>
#include <aws/inspector/model/ListExclusionsPaginationTraits.h>
#include <aws/inspector/model/ListAssessmentTargetsPaginationTraits.h>
#include <aws/inspector/model/ListRulesPackagesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class InspectorPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(InspectorPaginationCompilationTest, InspectorPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
