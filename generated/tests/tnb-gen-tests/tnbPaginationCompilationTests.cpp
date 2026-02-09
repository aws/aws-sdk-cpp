/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for tnb pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/tnb/TnbClientPagination.h>
#include <aws/tnb/TnbPaginationBase.h>
#include <aws/tnb/model/ListSolNetworkOperationsPaginationTraits.h>
#include <aws/tnb/model/ListSolFunctionPackagesPaginationTraits.h>
#include <aws/tnb/model/ListSolFunctionInstancesPaginationTraits.h>
#include <aws/tnb/model/ListSolNetworkInstancesPaginationTraits.h>
#include <aws/tnb/model/ListSolNetworkPackagesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class tnbPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(tnbPaginationCompilationTest, tnbPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
