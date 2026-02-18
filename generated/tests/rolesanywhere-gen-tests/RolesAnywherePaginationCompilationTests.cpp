/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for RolesAnywhere pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/rolesanywhere/RolesAnywhereClientPagination.h>
#include <aws/rolesanywhere/RolesAnywherePaginationBase.h>
#include <aws/rolesanywhere/model/ListCrlsPaginationTraits.h>
#include <aws/rolesanywhere/model/ListTrustAnchorsPaginationTraits.h>
#include <aws/rolesanywhere/model/ListSubjectsPaginationTraits.h>
#include <aws/rolesanywhere/model/ListProfilesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class RolesAnywherePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(RolesAnywherePaginationCompilationTest, RolesAnywherePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
