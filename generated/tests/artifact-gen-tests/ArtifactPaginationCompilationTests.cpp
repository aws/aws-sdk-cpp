/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Artifact pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/artifact/ArtifactClientPagination.h>
#include <aws/artifact/ArtifactPaginationBase.h>
#include <aws/artifact/model/ListReportsPaginationTraits.h>
#include <aws/artifact/model/ListCustomerAgreementsPaginationTraits.h>
#include <aws/artifact/model/ListReportVersionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ArtifactPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ArtifactPaginationCompilationTest, ArtifactPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
