/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for LaunchWizard pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/launch-wizard/LaunchWizardClientPagination.h>
#include <aws/launch-wizard/LaunchWizardPaginationBase.h>
#include <aws/launch-wizard/model/ListDeploymentEventsPaginationTraits.h>
#include <aws/launch-wizard/model/ListDeploymentsPaginationTraits.h>
#include <aws/launch-wizard/model/ListWorkloadDeploymentPatternsPaginationTraits.h>
#include <aws/launch-wizard/model/ListDeploymentPatternVersionsPaginationTraits.h>
#include <aws/launch-wizard/model/ListWorkloadsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class LaunchWizardPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(LaunchWizardPaginationCompilationTest, LaunchWizardPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
