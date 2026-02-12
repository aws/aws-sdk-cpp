/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MediaStore pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/mediastore/MediaStoreClientPagination.h>
#include <aws/mediastore/MediaStorePaginationBase.h>
#include <aws/mediastore/model/ListContainersPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MediaStorePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MediaStorePaginationCompilationTest, MediaStorePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
