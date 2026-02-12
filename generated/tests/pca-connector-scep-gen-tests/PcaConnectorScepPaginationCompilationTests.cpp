/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for PcaConnectorScep pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/pca-connector-scep/PcaConnectorScepClientPagination.h>
#include <aws/pca-connector-scep/PcaConnectorScepPaginationBase.h>
#include <aws/pca-connector-scep/model/ListConnectorsPaginationTraits.h>
#include <aws/pca-connector-scep/model/ListChallengeMetadataPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class PcaConnectorScepPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PcaConnectorScepPaginationCompilationTest, PcaConnectorScepPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
