/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for NetworkManager pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/networkmanager/NetworkManagerClientPagination.h>
#include <aws/networkmanager/NetworkManagerPaginationBase.h>
#include <aws/networkmanager/model/GetConnectionsPaginationTraits.h>
#include <aws/networkmanager/model/GetCustomerGatewayAssociationsPaginationTraits.h>
#include <aws/networkmanager/model/GetCoreNetworkChangeEventsPaginationTraits.h>
#include <aws/networkmanager/model/GetNetworkTelemetryPaginationTraits.h>
#include <aws/networkmanager/model/ListConnectPeersPaginationTraits.h>
#include <aws/networkmanager/model/ListPeeringsPaginationTraits.h>
#include <aws/networkmanager/model/GetTransitGatewayRegistrationsPaginationTraits.h>
#include <aws/networkmanager/model/ListCoreNetworkPolicyVersionsPaginationTraits.h>
#include <aws/networkmanager/model/GetNetworkResourcesPaginationTraits.h>
#include <aws/networkmanager/model/DescribeGlobalNetworksPaginationTraits.h>
#include <aws/networkmanager/model/ListAttachmentsPaginationTraits.h>
#include <aws/networkmanager/model/GetNetworkResourceCountsPaginationTraits.h>
#include <aws/networkmanager/model/GetNetworkResourceRelationshipsPaginationTraits.h>
#include <aws/networkmanager/model/GetSitesPaginationTraits.h>
#include <aws/networkmanager/model/GetCoreNetworkChangeSetPaginationTraits.h>
#include <aws/networkmanager/model/ListAttachmentRoutingPolicyAssociationsPaginationTraits.h>
#include <aws/networkmanager/model/GetLinksPaginationTraits.h>
#include <aws/networkmanager/model/GetTransitGatewayConnectPeerAssociationsPaginationTraits.h>
#include <aws/networkmanager/model/GetConnectPeerAssociationsPaginationTraits.h>
#include <aws/networkmanager/model/GetDevicesPaginationTraits.h>
#include <aws/networkmanager/model/GetLinkAssociationsPaginationTraits.h>
#include <aws/networkmanager/model/ListCoreNetworksPaginationTraits.h>
#include <aws/networkmanager/model/ListCoreNetworkRoutingInformationPaginationTraits.h>
#include <aws/networkmanager/model/ListCoreNetworkPrefixListAssociationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class NetworkManagerPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(NetworkManagerPaginationCompilationTest, NetworkManagerPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
