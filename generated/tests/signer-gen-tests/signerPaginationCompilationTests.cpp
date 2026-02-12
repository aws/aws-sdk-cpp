/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for signer pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/signer/SignerClientPagination.h>
#include <aws/signer/SignerPaginationBase.h>
#include <aws/signer/model/ListSigningPlatformsPaginationTraits.h>
#include <aws/signer/model/ListSigningProfilesPaginationTraits.h>
#include <aws/signer/model/ListSigningJobsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class signerPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(signerPaginationCompilationTest, signerPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
