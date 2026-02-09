/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for HealthLake pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/healthlake/HealthLakeClientPagination.h>
#include <aws/healthlake/HealthLakePaginationBase.h>
#include <aws/healthlake/model/ListFHIRImportJobsPaginationTraits.h>
#include <aws/healthlake/model/ListFHIRDatastoresPaginationTraits.h>
#include <aws/healthlake/model/ListFHIRExportJobsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class HealthLakePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(HealthLakePaginationCompilationTest, HealthLakePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
