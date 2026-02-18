/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SecurityIR pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/security-ir/SecurityIRClientPagination.h>
#include <aws/security-ir/SecurityIRPaginationBase.h>
#include <aws/security-ir/model/ListInvestigationsPaginationTraits.h>
#include <aws/security-ir/model/ListMembershipsPaginationTraits.h>
#include <aws/security-ir/model/ListCaseEditsPaginationTraits.h>
#include <aws/security-ir/model/ListCasesPaginationTraits.h>
#include <aws/security-ir/model/ListCommentsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SecurityIRPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SecurityIRPaginationCompilationTest, SecurityIRPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
