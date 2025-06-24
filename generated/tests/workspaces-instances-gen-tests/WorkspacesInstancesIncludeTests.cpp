/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/workspaces-instances/WorkspacesInstancesClient.h>
#include <aws/workspaces-instances/WorkspacesInstancesEndpointProvider.h>
#include <aws/workspaces-instances/WorkspacesInstancesEndpointRules.h>
#include <aws/workspaces-instances/WorkspacesInstancesErrorMarshaller.h>
#include <aws/workspaces-instances/WorkspacesInstancesErrors.h>
#include <aws/workspaces-instances/WorkspacesInstancesRequest.h>
#include <aws/workspaces-instances/WorkspacesInstancesServiceClientModel.h>
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/AmdSevSnpEnum.h>
#include <aws/workspaces-instances/model/AssociateVolumeRequest.h>
#include <aws/workspaces-instances/model/AssociateVolumeResult.h>
#include <aws/workspaces-instances/model/AutoRecoveryEnum.h>
#include <aws/workspaces-instances/model/BandwidthWeightingEnum.h>
#include <aws/workspaces-instances/model/BlockDeviceMappingRequest.h>
#include <aws/workspaces-instances/model/CapacityReservationPreferenceEnum.h>
#include <aws/workspaces-instances/model/CapacityReservationSpecification.h>
#include <aws/workspaces-instances/model/CapacityReservationTarget.h>
#include <aws/workspaces-instances/model/ConflictException.h>
#include <aws/workspaces-instances/model/ConnectionTrackingSpecificationRequest.h>
#include <aws/workspaces-instances/model/CpuCreditsEnum.h>
#include <aws/workspaces-instances/model/CpuOptionsRequest.h>
#include <aws/workspaces-instances/model/CreateVolumeRequest.h>
#include <aws/workspaces-instances/model/CreateVolumeResult.h>
#include <aws/workspaces-instances/model/CreateWorkspaceInstanceRequest.h>
#include <aws/workspaces-instances/model/CreateWorkspaceInstanceResult.h>
#include <aws/workspaces-instances/model/CreditSpecificationRequest.h>
#include <aws/workspaces-instances/model/DeleteVolumeRequest.h>
#include <aws/workspaces-instances/model/DeleteVolumeResult.h>
#include <aws/workspaces-instances/model/DeleteWorkspaceInstanceRequest.h>
#include <aws/workspaces-instances/model/DeleteWorkspaceInstanceResult.h>
#include <aws/workspaces-instances/model/DisassociateModeEnum.h>
#include <aws/workspaces-instances/model/DisassociateVolumeRequest.h>
#include <aws/workspaces-instances/model/DisassociateVolumeResult.h>
#include <aws/workspaces-instances/model/EC2InstanceError.h>
#include <aws/workspaces-instances/model/EC2ManagedInstance.h>
#include <aws/workspaces-instances/model/EbsBlockDevice.h>
#include <aws/workspaces-instances/model/EnaSrdSpecificationRequest.h>
#include <aws/workspaces-instances/model/EnaSrdUdpSpecificationRequest.h>
#include <aws/workspaces-instances/model/EnclaveOptionsRequest.h>
#include <aws/workspaces-instances/model/GetWorkspaceInstanceRequest.h>
#include <aws/workspaces-instances/model/GetWorkspaceInstanceResult.h>
#include <aws/workspaces-instances/model/HibernationOptionsRequest.h>
#include <aws/workspaces-instances/model/HostnameTypeEnum.h>
#include <aws/workspaces-instances/model/HttpEndpointEnum.h>
#include <aws/workspaces-instances/model/HttpProtocolIpv6Enum.h>
#include <aws/workspaces-instances/model/HttpTokensEnum.h>
#include <aws/workspaces-instances/model/IamInstanceProfileSpecification.h>
#include <aws/workspaces-instances/model/InstanceInterruptionBehaviorEnum.h>
#include <aws/workspaces-instances/model/InstanceIpv6Address.h>
#include <aws/workspaces-instances/model/InstanceMaintenanceOptionsRequest.h>
#include <aws/workspaces-instances/model/InstanceMarketOptionsRequest.h>
#include <aws/workspaces-instances/model/InstanceMetadataOptionsRequest.h>
#include <aws/workspaces-instances/model/InstanceMetadataTagsEnum.h>
#include <aws/workspaces-instances/model/InstanceNetworkInterfaceSpecification.h>
#include <aws/workspaces-instances/model/InstanceNetworkPerformanceOptionsRequest.h>
#include <aws/workspaces-instances/model/InstanceTypeInfo.h>
#include <aws/workspaces-instances/model/InterfaceTypeEnum.h>
#include <aws/workspaces-instances/model/InternalServerException.h>
#include <aws/workspaces-instances/model/Ipv4PrefixSpecificationRequest.h>
#include <aws/workspaces-instances/model/Ipv6PrefixSpecificationRequest.h>
#include <aws/workspaces-instances/model/LicenseConfigurationRequest.h>
#include <aws/workspaces-instances/model/ListInstanceTypesRequest.h>
#include <aws/workspaces-instances/model/ListInstanceTypesResult.h>
#include <aws/workspaces-instances/model/ListRegionsRequest.h>
#include <aws/workspaces-instances/model/ListRegionsResult.h>
#include <aws/workspaces-instances/model/ListTagsForResourceRequest.h>
#include <aws/workspaces-instances/model/ListTagsForResourceResult.h>
#include <aws/workspaces-instances/model/ListWorkspaceInstancesRequest.h>
#include <aws/workspaces-instances/model/ListWorkspaceInstancesResult.h>
#include <aws/workspaces-instances/model/ManagedInstanceRequest.h>
#include <aws/workspaces-instances/model/MarketTypeEnum.h>
#include <aws/workspaces-instances/model/Placement.h>
#include <aws/workspaces-instances/model/PrivateDnsNameOptionsRequest.h>
#include <aws/workspaces-instances/model/PrivateIpAddressSpecification.h>
#include <aws/workspaces-instances/model/ProvisionStateEnum.h>
#include <aws/workspaces-instances/model/Region.h>
#include <aws/workspaces-instances/model/ResourceNotFoundException.h>
#include <aws/workspaces-instances/model/ResourceTypeEnum.h>
#include <aws/workspaces-instances/model/RunInstancesMonitoringEnabled.h>
#include <aws/workspaces-instances/model/ServiceQuotaExceededException.h>
#include <aws/workspaces-instances/model/SpotInstanceTypeEnum.h>
#include <aws/workspaces-instances/model/SpotMarketOptions.h>
#include <aws/workspaces-instances/model/Tag.h>
#include <aws/workspaces-instances/model/TagResourceRequest.h>
#include <aws/workspaces-instances/model/TagResourceResult.h>
#include <aws/workspaces-instances/model/TagSpecification.h>
#include <aws/workspaces-instances/model/TenancyEnum.h>
#include <aws/workspaces-instances/model/ThrottlingException.h>
#include <aws/workspaces-instances/model/UntagResourceRequest.h>
#include <aws/workspaces-instances/model/UntagResourceResult.h>
#include <aws/workspaces-instances/model/ValidationException.h>
#include <aws/workspaces-instances/model/ValidationExceptionField.h>
#include <aws/workspaces-instances/model/ValidationExceptionReason.h>
#include <aws/workspaces-instances/model/VolumeTypeEnum.h>
#include <aws/workspaces-instances/model/WorkspaceInstance.h>
#include <aws/workspaces-instances/model/WorkspaceInstanceError.h>

using WorkspacesInstancesIncludeTest = ::testing::Test;

TEST_F(WorkspacesInstancesIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::WorkspacesInstances::WorkspacesInstancesClient>("WorkspacesInstancesIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
