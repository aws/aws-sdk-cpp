/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for AppIntegrationsService pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/appintegrations/AppIntegrationsServiceClientPagination.h>
#include <aws/appintegrations/AppIntegrationsServicePaginationBase.h>
#include <aws/appintegrations/model/ListDataIntegrationsPaginationTraits.h>
#include <aws/appintegrations/model/ListEventIntegrationsPaginationTraits.h>
#include <aws/appintegrations/model/ListDataIntegrationAssociationsPaginationTraits.h>
#include <aws/appintegrations/model/ListApplicationAssociationsPaginationTraits.h>
#include <aws/appintegrations/model/ListApplicationsPaginationTraits.h>
#include <aws/appintegrations/model/ListEventIntegrationAssociationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AppIntegrationsServicePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AppIntegrationsServicePaginationCompilationTest, AppIntegrationsServicePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
