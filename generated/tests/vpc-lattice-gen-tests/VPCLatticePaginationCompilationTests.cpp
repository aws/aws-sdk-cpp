/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for VPCLattice pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/vpc-lattice/VPCLatticeClientPagination.h>
#include <aws/vpc-lattice/VPCLatticePaginationBase.h>
#include <aws/vpc-lattice/model/ListResourceGatewaysPaginationTraits.h>
#include <aws/vpc-lattice/model/ListDomainVerificationsPaginationTraits.h>
#include <aws/vpc-lattice/model/ListResourceConfigurationsPaginationTraits.h>
#include <aws/vpc-lattice/model/ListServiceNetworkResourceAssociationsPaginationTraits.h>
#include <aws/vpc-lattice/model/ListServiceNetworkVpcEndpointAssociationsPaginationTraits.h>
#include <aws/vpc-lattice/model/ListResourceEndpointAssociationsPaginationTraits.h>
#include <aws/vpc-lattice/model/ListServicesPaginationTraits.h>
#include <aws/vpc-lattice/model/ListRulesPaginationTraits.h>
#include <aws/vpc-lattice/model/ListTargetsPaginationTraits.h>
#include <aws/vpc-lattice/model/ListServiceNetworksPaginationTraits.h>
#include <aws/vpc-lattice/model/ListAccessLogSubscriptionsPaginationTraits.h>
#include <aws/vpc-lattice/model/ListServiceNetworkServiceAssociationsPaginationTraits.h>
#include <aws/vpc-lattice/model/ListListenersPaginationTraits.h>
#include <aws/vpc-lattice/model/ListTargetGroupsPaginationTraits.h>
#include <aws/vpc-lattice/model/ListServiceNetworkVpcAssociationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class VPCLatticePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(VPCLatticePaginationCompilationTest, VPCLatticePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
