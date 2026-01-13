/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for VerifiedPermissions pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/verifiedpermissions/VerifiedPermissionsClientPagination.h>
#include <aws/verifiedpermissions/VerifiedPermissionsPaginationBase.h>
#include <aws/verifiedpermissions/model/ListPolicyTemplatesPaginationTraits.h>
#include <aws/verifiedpermissions/model/ListIdentitySourcesPaginationTraits.h>
#include <aws/verifiedpermissions/model/ListPoliciesPaginationTraits.h>
#include <aws/verifiedpermissions/model/ListPolicyStoresPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class VerifiedPermissionsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(VerifiedPermissionsPaginationCompilationTest, VerifiedPermissionsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
