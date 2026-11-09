/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Continuum pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/continuum/ContinuumClientPagination.h>
#include <aws/continuum/ContinuumPaginationBase.h>
#include <aws/continuum/model/ListCodeIssueArtifactsPaginationTraits.h>
#include <aws/continuum/model/ListCodeScansPaginationTraits.h>
#include <aws/continuum/model/ListEnvironmentsPaginationTraits.h>
#include <aws/continuum/model/ListIntegrationsPaginationTraits.h>
#include <aws/continuum/model/ListCodeIssuesPaginationTraits.h>
#include <aws/continuum/model/ListAssociatedCollectorsPaginationTraits.h>
#include <aws/continuum/model/ListAssociatedEnvironmentsPaginationTraits.h>
#include <aws/continuum/model/ListCodeFindingsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ContinuumPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ContinuumPaginationCompilationTest, ContinuumPaginationHeadersCompile)
{
      // Test passes if compilation succeeds
      SUCCEED();
}
