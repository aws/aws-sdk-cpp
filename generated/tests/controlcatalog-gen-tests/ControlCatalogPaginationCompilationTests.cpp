/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ControlCatalog pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/controlcatalog/ControlCatalogClientPagination.h>
#include <aws/controlcatalog/ControlCatalogPaginationBase.h>
#include <aws/controlcatalog/model/ListControlMappingsPaginationTraits.h>
#include <aws/controlcatalog/model/ListObjectivesPaginationTraits.h>
#include <aws/controlcatalog/model/ListControlsPaginationTraits.h>
#include <aws/controlcatalog/model/ListDomainsPaginationTraits.h>
#include <aws/controlcatalog/model/ListCommonControlsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ControlCatalogPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ControlCatalogPaginationCompilationTest, ControlCatalogPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
