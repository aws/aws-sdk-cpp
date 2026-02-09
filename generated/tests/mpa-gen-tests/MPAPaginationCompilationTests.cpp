/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MPA pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/mpa/MPAClientPagination.h>
#include <aws/mpa/MPAPaginationBase.h>
#include <aws/mpa/model/ListPolicyVersionsPaginationTraits.h>
#include <aws/mpa/model/ListResourcePoliciesPaginationTraits.h>
#include <aws/mpa/model/ListIdentitySourcesPaginationTraits.h>
#include <aws/mpa/model/ListPoliciesPaginationTraits.h>
#include <aws/mpa/model/ListApprovalTeamsPaginationTraits.h>
#include <aws/mpa/model/ListSessionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MPAPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MPAPaginationCompilationTest, MPAPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
