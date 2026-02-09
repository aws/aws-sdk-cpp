/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for EBS pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/ebs/EBSClientPagination.h>
#include <aws/ebs/EBSPaginationBase.h>
#include <aws/ebs/model/ListSnapshotBlocksPaginationTraits.h>
#include <aws/ebs/model/ListChangedBlocksPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class EBSPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(EBSPaginationCompilationTest, EBSPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
