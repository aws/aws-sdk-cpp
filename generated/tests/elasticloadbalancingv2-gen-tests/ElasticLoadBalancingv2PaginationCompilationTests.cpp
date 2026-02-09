/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ElasticLoadBalancingv2 pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2ClientPagination.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2PaginationBase.h>
#include <aws/elasticloadbalancingv2/model/DescribeListenerCertificatesPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeAccountLimitsPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeTrustStoreRevocationsPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeListenersPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeRulesPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeTrustStoreAssociationsPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeTrustStoresPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeLoadBalancersPaginationTraits.h>
#include <aws/elasticloadbalancingv2/model/DescribeTargetGroupsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ElasticLoadBalancingv2PaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ElasticLoadBalancingv2PaginationCompilationTest, ElasticLoadBalancingv2PaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
