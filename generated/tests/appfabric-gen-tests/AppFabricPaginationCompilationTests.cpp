/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for AppFabric pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/appfabric/AppFabricClientPagination.h>
#include <aws/appfabric/AppFabricPaginationBase.h>
#include <aws/appfabric/model/ListAppBundlesPaginationTraits.h>
#include <aws/appfabric/model/ListAppAuthorizationsPaginationTraits.h>
#include <aws/appfabric/model/ListIngestionsPaginationTraits.h>
#include <aws/appfabric/model/ListIngestionDestinationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AppFabricPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AppFabricPaginationCompilationTest, AppFabricPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
