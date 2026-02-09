/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for AppSync pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/appsync/AppSyncClientPagination.h>
#include <aws/appsync/AppSyncPaginationBase.h>
#include <aws/appsync/model/ListChannelNamespacesPaginationTraits.h>
#include <aws/appsync/model/ListGraphqlApisPaginationTraits.h>
#include <aws/appsync/model/ListTypesPaginationTraits.h>
#include <aws/appsync/model/ListApiKeysPaginationTraits.h>
#include <aws/appsync/model/ListDataSourcesPaginationTraits.h>
#include <aws/appsync/model/ListResolversByFunctionPaginationTraits.h>
#include <aws/appsync/model/ListApisPaginationTraits.h>
#include <aws/appsync/model/ListDomainNamesPaginationTraits.h>
#include <aws/appsync/model/ListTypesByAssociationPaginationTraits.h>
#include <aws/appsync/model/ListFunctionsPaginationTraits.h>
#include <aws/appsync/model/ListSourceApiAssociationsPaginationTraits.h>
#include <aws/appsync/model/ListResolversPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AppSyncPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AppSyncPaginationCompilationTest, AppSyncPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
