/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for OSIS pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/osis/OSISClientPagination.h>
#include <aws/osis/OSISPaginationBase.h>
#include <aws/osis/model/ListPipelinesPaginationTraits.h>
#include <aws/osis/model/ListPipelineEndpointConnectionsPaginationTraits.h>
#include <aws/osis/model/ListPipelineEndpointsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class OSISPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(OSISPaginationCompilationTest, OSISPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
