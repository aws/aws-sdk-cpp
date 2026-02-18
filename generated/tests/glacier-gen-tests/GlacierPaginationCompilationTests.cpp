/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Glacier pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/glacier/GlacierClientPagination.h>
#include <aws/glacier/GlacierPaginationBase.h>
#include <aws/glacier/model/ListMultipartUploadsPaginationTraits.h>
#include <aws/glacier/model/ListPartsPaginationTraits.h>
#include <aws/glacier/model/ListVaultsPaginationTraits.h>
#include <aws/glacier/model/ListJobsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class GlacierPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(GlacierPaginationCompilationTest, GlacierPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
