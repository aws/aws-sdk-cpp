/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for CodeBuild pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/codebuild/CodeBuildClientPagination.h>
#include <aws/codebuild/CodeBuildPaginationBase.h>
#include <aws/codebuild/model/DescribeCodeCoveragesPaginationTraits.h>
#include <aws/codebuild/model/ListSandboxesForProjectPaginationTraits.h>
#include <aws/codebuild/model/ListSharedProjectsPaginationTraits.h>
#include <aws/codebuild/model/ListSharedReportGroupsPaginationTraits.h>
#include <aws/codebuild/model/DescribeTestCasesPaginationTraits.h>
#include <aws/codebuild/model/ListCommandExecutionsForSandboxPaginationTraits.h>
#include <aws/codebuild/model/ListReportsForReportGroupPaginationTraits.h>
#include <aws/codebuild/model/ListReportsPaginationTraits.h>
#include <aws/codebuild/model/ListBuildBatchesPaginationTraits.h>
#include <aws/codebuild/model/ListBuildsForProjectPaginationTraits.h>
#include <aws/codebuild/model/ListSandboxesPaginationTraits.h>
#include <aws/codebuild/model/ListReportGroupsPaginationTraits.h>
#include <aws/codebuild/model/ListFleetsPaginationTraits.h>
#include <aws/codebuild/model/ListBuildsPaginationTraits.h>
#include <aws/codebuild/model/ListBuildBatchesForProjectPaginationTraits.h>
#include <aws/codebuild/model/ListProjectsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class CodeBuildPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(CodeBuildPaginationCompilationTest, CodeBuildPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
