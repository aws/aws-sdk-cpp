/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for B2BI pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/b2bi/B2BIClientPagination.h>
#include <aws/b2bi/B2BIPaginationBase.h>
#include <aws/b2bi/model/ListProfilesPaginationTraits.h>
#include <aws/b2bi/model/ListTransformersPaginationTraits.h>
#include <aws/b2bi/model/ListCapabilitiesPaginationTraits.h>
#include <aws/b2bi/model/ListPartnershipsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class B2BIPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(B2BIPaginationCompilationTest, B2BIPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
