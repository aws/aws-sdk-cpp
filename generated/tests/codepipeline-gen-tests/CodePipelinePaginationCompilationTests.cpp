/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CodePipeline pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/codepipeline/CodePipelineClientPagination.h>
#include <aws/codepipeline/CodePipelinePaginationBase.h>
#include <aws/codepipeline/model/ListDeployActionExecutionTargetsPaginationTraits.h>
#include <aws/codepipeline/model/ListTagsForResourcePaginationTraits.h>
#include <aws/codepipeline/model/ListPipelineExecutionsPaginationTraits.h>
#include <aws/codepipeline/model/ListRuleExecutionsPaginationTraits.h>
#include <aws/codepipeline/model/ListActionTypesPaginationTraits.h>
#include <aws/codepipeline/model/ListActionExecutionsPaginationTraits.h>
#include <aws/codepipeline/model/ListWebhooksPaginationTraits.h>
#include <aws/codepipeline/model/ListPipelinesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CodePipelinePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CodePipelinePaginationCompilationTest, CodePipelinePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
