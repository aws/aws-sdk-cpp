/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ElementalInference pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/elementalinference/ElementalInferenceClientPagination.h>
#include <aws/elementalinference/ElementalInferencePaginationBase.h>
#include <aws/elementalinference/model/ListFeedsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ElementalInferencePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ElementalInferencePaginationCompilationTest, ElementalInferencePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
