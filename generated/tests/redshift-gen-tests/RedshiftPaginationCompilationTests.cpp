/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Redshift pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/redshift/RedshiftClientPagination.h>
#include <aws/redshift/RedshiftPaginationBase.h>
#include <aws/redshift/model/DescribeHsmConfigurationsPaginationTraits.h>
#include <aws/redshift/model/DescribeEndpointAccessPaginationTraits.h>
#include <aws/redshift/model/DescribeDataSharesForConsumerPaginationTraits.h>
#include <aws/redshift/model/DescribeHsmClientCertificatesPaginationTraits.h>
#include <aws/redshift/model/DescribeEventSubscriptionsPaginationTraits.h>
#include <aws/redshift/model/DescribeEndpointAuthorizationPaginationTraits.h>
#include <aws/redshift/model/DescribeClusterParameterGroupsPaginationTraits.h>
#include <aws/redshift/model/DescribeClusterDbRevisionsPaginationTraits.h>
#include <aws/redshift/model/DescribeOrderableClusterOptionsPaginationTraits.h>
#include <aws/redshift/model/DescribeSnapshotSchedulesPaginationTraits.h>
#include <aws/redshift/model/DescribeCustomDomainAssociationsPaginationTraits.h>
#include <aws/redshift/model/DescribeTagsPaginationTraits.h>
#include <aws/redshift/model/ListRecommendationsPaginationTraits.h>
#include <aws/redshift/model/DescribeReservedNodeOfferingsPaginationTraits.h>
#include <aws/redshift/model/DescribeRedshiftIdcApplicationsPaginationTraits.h>
#include <aws/redshift/model/DescribeSnapshotCopyGrantsPaginationTraits.h>
#include <aws/redshift/model/DescribeTableRestoreStatusPaginationTraits.h>
#include <aws/redshift/model/DescribeNodeConfigurationOptionsPaginationTraits.h>
#include <aws/redshift/model/GetReservedNodeExchangeConfigurationOptionsPaginationTraits.h>
#include <aws/redshift/model/DescribeClusterParametersPaginationTraits.h>
#include <aws/redshift/model/DescribeDataSharesPaginationTraits.h>
#include <aws/redshift/model/DescribeReservedNodeExchangeStatusPaginationTraits.h>
#include <aws/redshift/model/DescribeInboundIntegrationsPaginationTraits.h>
#include <aws/redshift/model/DescribeUsageLimitsPaginationTraits.h>
#include <aws/redshift/model/DescribeEventsPaginationTraits.h>
#include <aws/redshift/model/DescribeIntegrationsPaginationTraits.h>
#include <aws/redshift/model/DescribeClusterSubnetGroupsPaginationTraits.h>
#include <aws/redshift/model/DescribeDataSharesForProducerPaginationTraits.h>
#include <aws/redshift/model/DescribeDefaultClusterParametersPaginationTraits.h>
#include <aws/redshift/model/DescribeReservedNodesPaginationTraits.h>
#include <aws/redshift/model/GetReservedNodeExchangeOfferingsPaginationTraits.h>
#include <aws/redshift/model/DescribeClusterSnapshotsPaginationTraits.h>
#include <aws/redshift/model/DescribeClusterSecurityGroupsPaginationTraits.h>
#include <aws/redshift/model/DescribeClusterVersionsPaginationTraits.h>
#include <aws/redshift/model/DescribeScheduledActionsPaginationTraits.h>
#include <aws/redshift/model/DescribeClustersPaginationTraits.h>
#include <aws/redshift/model/DescribeClusterTracksPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class RedshiftPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(RedshiftPaginationCompilationTest, RedshiftPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
