/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for DirectoryService pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/ds/DirectoryServiceClientPagination.h>
#include <aws/ds/DirectoryServicePaginationBase.h>
#include <aws/ds/model/DescribeRegionsPaginationTraits.h>
#include <aws/ds/model/ListIpRoutesPaginationTraits.h>
#include <aws/ds/model/DescribeClientAuthenticationSettingsPaginationTraits.h>
#include <aws/ds/model/DescribeTrustsPaginationTraits.h>
#include <aws/ds/model/DescribeDirectoriesPaginationTraits.h>
#include <aws/ds/model/ListSchemaExtensionsPaginationTraits.h>
#include <aws/ds/model/DescribeSnapshotsPaginationTraits.h>
#include <aws/ds/model/ListLogSubscriptionsPaginationTraits.h>
#include <aws/ds/model/DescribeSharedDirectoriesPaginationTraits.h>
#include <aws/ds/model/DescribeLDAPSSettingsPaginationTraits.h>
#include <aws/ds/model/DescribeDomainControllersPaginationTraits.h>
#include <aws/ds/model/ListTagsForResourcePaginationTraits.h>
#include <aws/ds/model/DescribeUpdateDirectoryPaginationTraits.h>
#include <aws/ds/model/ListADAssessmentsPaginationTraits.h>
#include <aws/ds/model/ListCertificatesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class DirectoryServicePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(DirectoryServicePaginationCompilationTest, DirectoryServicePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
