/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for AppRegistry pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/servicecatalog-appregistry/AppRegistryClientPagination.h>
#include <aws/servicecatalog-appregistry/AppRegistryPaginationBase.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedAttributeGroupsPaginationTraits.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsPaginationTraits.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsForApplicationPaginationTraits.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedResourcesPaginationTraits.h>
#include <aws/servicecatalog-appregistry/model/ListApplicationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AppRegistryPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AppRegistryPaginationCompilationTest, AppRegistryPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
