/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Detective pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/detective/DetectiveClientPagination.h>
#include <aws/detective/DetectivePaginationBase.h>
#include <aws/detective/model/ListDatasourcePackagesPaginationTraits.h>
#include <aws/detective/model/ListInvitationsPaginationTraits.h>
#include <aws/detective/model/ListGraphsPaginationTraits.h>
#include <aws/detective/model/ListMembersPaginationTraits.h>
#include <aws/detective/model/ListOrganizationAdminAccountsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class DetectivePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(DetectivePaginationCompilationTest, DetectivePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
