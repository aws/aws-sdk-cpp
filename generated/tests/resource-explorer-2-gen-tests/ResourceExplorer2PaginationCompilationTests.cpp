/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ResourceExplorer2 pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/resource-explorer-2/ResourceExplorer2ClientPagination.h>
#include <aws/resource-explorer-2/ResourceExplorer2PaginationBase.h>
#include <aws/resource-explorer-2/model/ListManagedViewsPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListServiceViewsPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListSupportedResourceTypesPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListIndexesPaginationTraits.h>
#include <aws/resource-explorer-2/model/GetResourceExplorerSetupPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListServiceIndexesPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListResourcesPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListStreamingAccessForServicesPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListIndexesForMembersPaginationTraits.h>
#include <aws/resource-explorer-2/model/ListViewsPaginationTraits.h>
#include <aws/resource-explorer-2/model/SearchPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ResourceExplorer2PaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ResourceExplorer2PaginationCompilationTest, ResourceExplorer2PaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
