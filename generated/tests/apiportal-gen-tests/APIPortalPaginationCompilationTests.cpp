/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for APIPortal pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/apiportal/APIPortalClientPagination.h>
#include <aws/apiportal/APIPortalPaginationBase.h>
#include <aws/apiportal/model/ListProductApiPagesPaginationTraits.h>
#include <aws/apiportal/model/ListManagedApiEventsPaginationTraits.h>
#include <aws/apiportal/model/ListManagedApisPaginationTraits.h>
#include <aws/apiportal/model/ListProductPagesPaginationTraits.h>
#include <aws/apiportal/model/ListDiscoveryStatusesPaginationTraits.h>
#include <aws/apiportal/model/ListApiInventoryItemsPaginationTraits.h>
#include <aws/apiportal/model/ListPortalsPaginationTraits.h>
#include <aws/apiportal/model/ListProductsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class APIPortalPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(APIPortalPaginationCompilationTest, APIPortalPaginationHeadersCompile)
{
      // Test passes if compilation succeeds
      SUCCEED();
}
