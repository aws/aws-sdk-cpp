/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for AppMesh pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/appmesh/AppMeshClientPagination.h>
#include <aws/appmesh/AppMeshPaginationBase.h>
#include <aws/appmesh/model/ListTagsForResourcePaginationTraits.h>
#include <aws/appmesh/model/ListVirtualGatewaysPaginationTraits.h>
#include <aws/appmesh/model/ListVirtualNodesPaginationTraits.h>
#include <aws/appmesh/model/ListMeshesPaginationTraits.h>
#include <aws/appmesh/model/ListRoutesPaginationTraits.h>
#include <aws/appmesh/model/ListVirtualRoutersPaginationTraits.h>
#include <aws/appmesh/model/ListGatewayRoutesPaginationTraits.h>
#include <aws/appmesh/model/ListVirtualServicesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AppMeshPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AppMeshPaginationCompilationTest, AppMeshPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
