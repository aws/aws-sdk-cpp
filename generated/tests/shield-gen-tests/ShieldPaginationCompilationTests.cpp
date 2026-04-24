/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Shield pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/shield/ShieldClientPagination.h>
#include <aws/shield/ShieldPaginationBase.h>
#include <aws/shield/model/ListProtectionGroupsPaginationTraits.h>
#include <aws/shield/model/ListProtectionsPaginationTraits.h>
#include <aws/shield/model/ListResourcesInProtectionGroupPaginationTraits.h>
#include <aws/shield/model/ListAttacksPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ShieldPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ShieldPaginationCompilationTest, ShieldPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
