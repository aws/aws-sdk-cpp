/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for PcaConnectorAd pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/pca-connector-ad/PcaConnectorAdClientPagination.h>
#include <aws/pca-connector-ad/PcaConnectorAdPaginationBase.h>
#include <aws/pca-connector-ad/model/ListDirectoryRegistrationsPaginationTraits.h>
#include <aws/pca-connector-ad/model/ListTemplatesPaginationTraits.h>
#include <aws/pca-connector-ad/model/ListServicePrincipalNamesPaginationTraits.h>
#include <aws/pca-connector-ad/model/ListTemplateGroupAccessControlEntriesPaginationTraits.h>
#include <aws/pca-connector-ad/model/ListConnectorsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class PcaConnectorAdPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PcaConnectorAdPaginationCompilationTest, PcaConnectorAdPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
