/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for AugmentedAIRuntime pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeClientPagination.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimePaginationBase.h>
#include <aws/sagemaker-a2i-runtime/model/ListHumanLoopsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AugmentedAIRuntimePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AugmentedAIRuntimePaginationCompilationTest, AugmentedAIRuntimePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
