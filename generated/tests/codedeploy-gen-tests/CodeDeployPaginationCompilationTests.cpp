/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CodeDeploy pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/codedeploy/CodeDeployClientPagination.h>
#include <aws/codedeploy/CodeDeployPaginationBase.h>
#include <aws/codedeploy/model/ListDeploymentsPaginationTraits.h>
#include <aws/codedeploy/model/ListDeploymentConfigsPaginationTraits.h>
#include <aws/codedeploy/model/ListApplicationRevisionsPaginationTraits.h>
#include <aws/codedeploy/model/ListApplicationsPaginationTraits.h>
#include <aws/codedeploy/model/ListDeploymentGroupsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CodeDeployPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CodeDeployPaginationCompilationTest, CodeDeployPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
