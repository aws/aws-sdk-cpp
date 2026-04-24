/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for finspace pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/finspace/FinspaceClientPagination.h>
#include <aws/finspace/FinspacePaginationBase.h>
#include <aws/finspace/model/ListKxChangesetsPaginationTraits.h>
#include <aws/finspace/model/ListKxScalingGroupsPaginationTraits.h>
#include <aws/finspace/model/ListKxDatabasesPaginationTraits.h>
#include <aws/finspace/model/ListKxEnvironmentsPaginationTraits.h>
#include <aws/finspace/model/ListKxClusterNodesPaginationTraits.h>
#include <aws/finspace/model/ListKxDataviewsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class finspacePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(finspacePaginationCompilationTest, finspacePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
