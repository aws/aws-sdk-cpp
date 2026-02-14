/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for RedshiftServerless pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/redshift-serverless/RedshiftServerlessClientPagination.h>
#include <aws/redshift-serverless/RedshiftServerlessPaginationBase.h>
#include <aws/redshift-serverless/model/ListNamespacesPaginationTraits.h>
#include <aws/redshift-serverless/model/ListUsageLimitsPaginationTraits.h>
#include <aws/redshift-serverless/model/ListManagedWorkgroupsPaginationTraits.h>
#include <aws/redshift-serverless/model/ListSnapshotsPaginationTraits.h>
#include <aws/redshift-serverless/model/ListReservationOfferingsPaginationTraits.h>
#include <aws/redshift-serverless/model/ListScheduledActionsPaginationTraits.h>
#include <aws/redshift-serverless/model/ListSnapshotCopyConfigurationsPaginationTraits.h>
#include <aws/redshift-serverless/model/ListTableRestoreStatusPaginationTraits.h>
#include <aws/redshift-serverless/model/ListTracksPaginationTraits.h>
#include <aws/redshift-serverless/model/ListReservationsPaginationTraits.h>
#include <aws/redshift-serverless/model/ListWorkgroupsPaginationTraits.h>
#include <aws/redshift-serverless/model/ListCustomDomainAssociationsPaginationTraits.h>
#include <aws/redshift-serverless/model/ListEndpointAccessPaginationTraits.h>
#include <aws/redshift-serverless/model/ListRecoveryPointsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class RedshiftServerlessPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(RedshiftServerlessPaginationCompilationTest, RedshiftServerlessPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
