/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for OAM pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/oam/OAMClientPagination.h>
#include <aws/oam/OAMPaginationBase.h>
#include <aws/oam/model/ListLinksPaginationTraits.h>
#include <aws/oam/model/ListSinksPaginationTraits.h>
#include <aws/oam/model/ListAttachedLinksPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class OAMPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(OAMPaginationCompilationTest, OAMPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
