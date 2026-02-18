/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for NovaAct pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/nova-act/NovaActClientPagination.h>
#include <aws/nova-act/NovaActPaginationBase.h>
#include <aws/nova-act/model/ListSessionsPaginationTraits.h>
#include <aws/nova-act/model/ListActsPaginationTraits.h>
#include <aws/nova-act/model/ListWorkflowDefinitionsPaginationTraits.h>
#include <aws/nova-act/model/ListWorkflowRunsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class NovaActPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(NovaActPaginationCompilationTest, NovaActPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
