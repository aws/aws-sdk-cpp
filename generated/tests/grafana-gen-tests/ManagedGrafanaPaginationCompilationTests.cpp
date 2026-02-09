/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ManagedGrafana pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/grafana/ManagedGrafanaClientPagination.h>
#include <aws/grafana/ManagedGrafanaPaginationBase.h>
#include <aws/grafana/model/ListPermissionsPaginationTraits.h>
#include <aws/grafana/model/ListWorkspaceServiceAccountsPaginationTraits.h>
#include <aws/grafana/model/ListVersionsPaginationTraits.h>
#include <aws/grafana/model/ListWorkspacesPaginationTraits.h>
#include <aws/grafana/model/ListWorkspaceServiceAccountTokensPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ManagedGrafanaPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ManagedGrafanaPaginationCompilationTest, ManagedGrafanaPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
