/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CodeGuruSecurity pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/codeguru-security/CodeGuruSecurityClientPagination.h>
#include <aws/codeguru-security/CodeGuruSecurityPaginationBase.h>
#include <aws/codeguru-security/model/ListFindingsMetricsPaginationTraits.h>
#include <aws/codeguru-security/model/ListScansPaginationTraits.h>
#include <aws/codeguru-security/model/GetFindingsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CodeGuruSecurityPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CodeGuruSecurityPaginationCompilationTest, CodeGuruSecurityPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
