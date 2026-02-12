/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Braket pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/braket/BraketClientPagination.h>
#include <aws/braket/BraketPaginationBase.h>
#include <aws/braket/model/SearchJobsPaginationTraits.h>
#include <aws/braket/model/SearchQuantumTasksPaginationTraits.h>
#include <aws/braket/model/SearchDevicesPaginationTraits.h>
#include <aws/braket/model/SearchSpendingLimitsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class BraketPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(BraketPaginationCompilationTest, BraketPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
