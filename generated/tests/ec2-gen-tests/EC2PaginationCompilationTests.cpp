/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for EC2 pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/ec2/EC2ClientPagination.h>
#include <aws/ec2/model/pagination/DescribeImagesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeIpv6PoolsPaginationTraits.h>
#include <aws/ec2/model/pagination/GetIpamPrefixListResolverVersionEntriesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeFleetsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsPaginationTraits.h>
#include <aws/ec2/model/pagination/GetAssociatedIpv6PoolCidrsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeImportImageTasksPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeRouteServerEndpointsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeIpamPrefixListResolverTargetsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeReservedInstancesOfferingsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeVerifiedAccessEndpointsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeTransitGatewaysPaginationTraits.h>
#include <aws/ec2/model/pagination/ListSnapshotsInRecycleBinPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeCapacityReservationBillingRequestsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeTransitGatewayConnectPeersPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeCapacityReservationsPaginationTraits.h>
#include <aws/ec2/model/pagination/GetIpamPrefixListResolverRulesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeAwsNetworkPerformanceMetricSubscriptionsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeHostsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeVerifiedAccessInstancesPaginationTraits.h>
#include <aws/ec2/model/pagination/GetManagedPrefixListAssociationsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeVpcEndpointServiceConfigurationsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeNetworkInterfacesPaginationTraits.h>
#include <aws/ec2/model/pagination/GetGroupsForCapacityReservationPaginationTraits.h>
#include <aws/ec2/model/pagination/ListImagesInRecycleBinPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeVpcEndpointsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeCapacityManagerDataExportsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeVolumeStatusPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeIpamPrefixListResolversPaginationTraits.h>
#include <aws/ec2/model/pagination/GetTransitGatewayAttachmentPropagationsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeInternetGatewaysPaginationTraits.h>
#include <aws/ec2/model/pagination/GetInstanceTypesFromInstanceRequirementsPaginationTraits.h>
#include <aws/ec2/model/pagination/GetNetworkInsightsAccessScopeAnalysisFindingsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeSecurityGroupVpcAssociationsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribePrefixListsPaginationTraits.h>
#include <aws/ec2/model/pagination/GetIpamDiscoveredResourceCidrsPaginationTraits.h>
#include <aws/ec2/model/pagination/GetTransitGatewayPolicyTableAssociationsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeInstanceTypesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeTrunkInterfaceAssociationsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeRouteTablesPaginationTraits.h>
#include <aws/ec2/model/pagination/GetTransitGatewayRouteTableAssociationsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeSecurityGroupRulesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeVerifiedAccessInstanceLoggingConfigurationsPaginationTraits.h>
#include <aws/ec2/model/pagination/GetCapacityManagerMetricDataPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeClientVpnEndpointsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeInstanceCreditSpecificationsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeNetworkInsightsAccessScopeAnalysesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeTrafficMirrorSessionsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeFastSnapshotRestoresPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeScheduledInstanceAvailabilityPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeMacModificationTasksPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeTransitGatewayRouteTablesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeNetworkInsightsAccessScopesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeCapacityBlocksPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeTagsPaginationTraits.h>
#include <aws/ec2/model/pagination/GetTransitGatewayRouteTablePropagationsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeImageUsageReportsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeScheduledInstancesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeInstanceTopologyPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeNetworkAclsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeVerifiedAccessTrustProvidersPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeByoipCidrsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeCapacityBlockExtensionHistoryPaginationTraits.h>
#include <aws/ec2/model/pagination/GetIpamResourceCidrsPaginationTraits.h>
#include <aws/ec2/model/pagination/GetVpnConnectionDeviceTypesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeTransitGatewayPeeringAttachmentsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribePublicIpv4PoolsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeVpcEndpointServicePermissionsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeSubnetsPaginationTraits.h>
#include <aws/ec2/model/pagination/GetIpamPrefixListResolverVersionsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeTransitGatewayPolicyTablesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeSpotInstanceRequestsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeSnapshotTierStatusPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeAddressesAttributePaginationTraits.h>
#include <aws/ec2/model/pagination/GetSecurityGroupsForVpcPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeIamInstanceProfileAssociationsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeVolumesModificationsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeVpcsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeStaleSecurityGroupsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeCarrierGatewaysPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeFlowLogsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeInstanceEventWindowsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeVpcPeeringConnectionsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeTransitGatewayAttachmentsPaginationTraits.h>
#include <aws/ec2/model/pagination/GetIpamPoolAllocationsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeTrafficMirrorTargetsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeLocalGatewayRouteTableVpcAssociationsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeImageReferencesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeLocalGatewayRouteTablesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeVpcClassicLinkDnsSupportPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeVpcEndpointConnectionNotificationsPaginationTraits.h>
#include <aws/ec2/model/pagination/GetManagedPrefixListEntriesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeLaunchTemplateVersionsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeTransitGatewayConnectsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeNatGatewaysPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeImportSnapshotTasksPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeRouteServerPeersPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeTransitGatewayRouteTableAnnouncementsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeCapacityReservationFleetsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeIpamPoolsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeInstancesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeCapacityBlockExtensionOfferingsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeLocalGatewayVirtualInterfaceGroupsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeIpamResourceDiscoveriesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeTransitGatewayVpcAttachmentsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeVpnConcentratorsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeVerifiedAccessGroupsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribePrincipalIdFormatPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeSecurityGroupsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeImageUsageReportEntriesPaginationTraits.h>
#include <aws/ec2/model/pagination/SearchTransitGatewayMulticastGroupsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeRouteServersPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeLaunchTemplatesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeSpotFleetRequestsPaginationTraits.h>
#include <aws/ec2/model/pagination/GetSpotPlacementScoresPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeClientVpnRoutesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeAddressTransfersPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeInstanceImageMetadataPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeVolumesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeHostReservationsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeInstanceTypeOfferingsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeCoipPoolsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeIpamResourceDiscoveryAssociationsPaginationTraits.h>
#include <aws/ec2/model/pagination/GetIpamDiscoveredAccountsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeReplaceRootVolumeTasksPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeSpotPriceHistoryPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeTransitGatewayMulticastDomainsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeClientVpnAuthorizationRulesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeNetworkInsightsAnalysesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeCapacityBlockOfferingsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeLocalGatewayVirtualInterfacesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeMovingAddressesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeMacHostsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeIpamsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeClientVpnConnectionsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeNetworkInsightsPathsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeTrafficMirrorFiltersPaginationTraits.h>
#include <aws/ec2/model/pagination/SearchLocalGatewayRoutesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeIpamScopesPaginationTraits.h>
#include <aws/ec2/model/pagination/GetTransitGatewayMulticastDomainAssociationsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeStoreImageTasksPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeFpgaImagesPaginationTraits.h>
#include <aws/ec2/model/pagination/GetTransitGatewayPrefixListReferencesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeNetworkInterfacePermissionsPaginationTraits.h>
#include <aws/ec2/model/pagination/GetAwsNetworkPerformanceDataPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeClientVpnTargetNetworksPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeDhcpOptionsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeFastLaunchImagesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeHostReservationOfferingsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeLocalGatewaysPaginationTraits.h>
#include <aws/ec2/model/pagination/GetIpamAddressHistoryPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeManagedPrefixListsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeCapacityBlockStatusPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeVpcEndpointConnectionsPaginationTraits.h>
#include <aws/ec2/model/pagination/GetIpamPoolCidrsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeInstanceConnectEndpointsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeClassicLinkInstancesPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeExportImageTasksPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeInstanceStatusPaginationTraits.h>
#include <aws/ec2/model/pagination/GetCapacityManagerMetricDimensionsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeReservedInstancesModificationsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeSnapshotsPaginationTraits.h>
#include <aws/ec2/model/pagination/DescribeEgressOnlyInternetGatewaysPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class EC2PaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(EC2PaginationCompilationTest, EC2PaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
