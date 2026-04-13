/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Interconnect pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/interconnect/InterconnectClientPagination.h>
#include <aws/interconnect/InterconnectPaginationBase.h>
#include <aws/interconnect/model/ListConnectionsPaginationTraits.h>
#include <aws/interconnect/model/ListEnvironmentsPaginationTraits.h>
#include <aws/interconnect/model/ListAttachPointsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class InterconnectPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(InterconnectPaginationCompilationTest, InterconnectPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
