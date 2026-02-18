/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Polly pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/polly/PollyClientPagination.h>
#include <aws/polly/PollyPaginationBase.h>
#include <aws/polly/model/ListSpeechSynthesisTasksPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class PollyPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PollyPaginationCompilationTest, PollyPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
