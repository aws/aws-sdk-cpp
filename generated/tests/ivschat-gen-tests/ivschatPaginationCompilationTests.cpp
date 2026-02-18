/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ivschat pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/ivschat/IvschatClientPagination.h>
#include <aws/ivschat/IvschatPaginationBase.h>
#include <aws/ivschat/model/ListLoggingConfigurationsPaginationTraits.h>
#include <aws/ivschat/model/ListRoomsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ivschatPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ivschatPaginationCompilationTest, ivschatPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
