/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/backup-gateway/BackupGatewayClient.h>
#include <aws/backup-gateway/BackupGatewayEndpointProvider.h>
#include <aws/backup-gateway/BackupGatewayEndpointRules.h>
#include <aws/backup-gateway/BackupGatewayErrorMarshaller.h>
#include <aws/backup-gateway/BackupGatewayErrors.h>
#include <aws/backup-gateway/BackupGatewayRequest.h>
#include <aws/backup-gateway/BackupGatewayServiceClientModel.h>
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/backup-gateway/model/AccessDeniedException.h>
#include <aws/backup-gateway/model/AssociateGatewayToServerRequest.h>
#include <aws/backup-gateway/model/AssociateGatewayToServerResult.h>
#include <aws/backup-gateway/model/BandwidthRateLimitInterval.h>
#include <aws/backup-gateway/model/ConflictException.h>
#include <aws/backup-gateway/model/CreateGatewayRequest.h>
#include <aws/backup-gateway/model/CreateGatewayResult.h>
#include <aws/backup-gateway/model/DeleteGatewayRequest.h>
#include <aws/backup-gateway/model/DeleteGatewayResult.h>
#include <aws/backup-gateway/model/DeleteHypervisorRequest.h>
#include <aws/backup-gateway/model/DeleteHypervisorResult.h>
#include <aws/backup-gateway/model/DisassociateGatewayFromServerRequest.h>
#include <aws/backup-gateway/model/DisassociateGatewayFromServerResult.h>
#include <aws/backup-gateway/model/Gateway.h>
#include <aws/backup-gateway/model/GatewayDetails.h>
#include <aws/backup-gateway/model/GatewayType.h>
#include <aws/backup-gateway/model/GetBandwidthRateLimitScheduleRequest.h>
#include <aws/backup-gateway/model/GetBandwidthRateLimitScheduleResult.h>
#include <aws/backup-gateway/model/GetGatewayRequest.h>
#include <aws/backup-gateway/model/GetGatewayResult.h>
#include <aws/backup-gateway/model/GetHypervisorPropertyMappingsRequest.h>
#include <aws/backup-gateway/model/GetHypervisorPropertyMappingsResult.h>
#include <aws/backup-gateway/model/GetHypervisorRequest.h>
#include <aws/backup-gateway/model/GetHypervisorResult.h>
#include <aws/backup-gateway/model/GetVirtualMachineRequest.h>
#include <aws/backup-gateway/model/GetVirtualMachineResult.h>
#include <aws/backup-gateway/model/Hypervisor.h>
#include <aws/backup-gateway/model/HypervisorDetails.h>
#include <aws/backup-gateway/model/HypervisorState.h>
#include <aws/backup-gateway/model/ImportHypervisorConfigurationRequest.h>
#include <aws/backup-gateway/model/ImportHypervisorConfigurationResult.h>
#include <aws/backup-gateway/model/InternalServerException.h>
#include <aws/backup-gateway/model/ListGatewaysRequest.h>
#include <aws/backup-gateway/model/ListGatewaysResult.h>
#include <aws/backup-gateway/model/ListHypervisorsRequest.h>
#include <aws/backup-gateway/model/ListHypervisorsResult.h>
#include <aws/backup-gateway/model/ListTagsForResourceRequest.h>
#include <aws/backup-gateway/model/ListTagsForResourceResult.h>
#include <aws/backup-gateway/model/ListVirtualMachinesRequest.h>
#include <aws/backup-gateway/model/ListVirtualMachinesResult.h>
#include <aws/backup-gateway/model/MaintenanceStartTime.h>
#include <aws/backup-gateway/model/PutBandwidthRateLimitScheduleRequest.h>
#include <aws/backup-gateway/model/PutBandwidthRateLimitScheduleResult.h>
#include <aws/backup-gateway/model/PutHypervisorPropertyMappingsRequest.h>
#include <aws/backup-gateway/model/PutHypervisorPropertyMappingsResult.h>
#include <aws/backup-gateway/model/PutMaintenanceStartTimeRequest.h>
#include <aws/backup-gateway/model/PutMaintenanceStartTimeResult.h>
#include <aws/backup-gateway/model/ResourceNotFoundException.h>
#include <aws/backup-gateway/model/StartVirtualMachinesMetadataSyncRequest.h>
#include <aws/backup-gateway/model/StartVirtualMachinesMetadataSyncResult.h>
#include <aws/backup-gateway/model/SyncMetadataStatus.h>
#include <aws/backup-gateway/model/Tag.h>
#include <aws/backup-gateway/model/TagResourceRequest.h>
#include <aws/backup-gateway/model/TagResourceResult.h>
#include <aws/backup-gateway/model/TestHypervisorConfigurationRequest.h>
#include <aws/backup-gateway/model/TestHypervisorConfigurationResult.h>
#include <aws/backup-gateway/model/ThrottlingException.h>
#include <aws/backup-gateway/model/UntagResourceRequest.h>
#include <aws/backup-gateway/model/UntagResourceResult.h>
#include <aws/backup-gateway/model/UpdateGatewayInformationRequest.h>
#include <aws/backup-gateway/model/UpdateGatewayInformationResult.h>
#include <aws/backup-gateway/model/UpdateGatewaySoftwareNowRequest.h>
#include <aws/backup-gateway/model/UpdateGatewaySoftwareNowResult.h>
#include <aws/backup-gateway/model/UpdateHypervisorRequest.h>
#include <aws/backup-gateway/model/UpdateHypervisorResult.h>
#include <aws/backup-gateway/model/ValidationException.h>
#include <aws/backup-gateway/model/VirtualMachine.h>
#include <aws/backup-gateway/model/VirtualMachineDetails.h>
#include <aws/backup-gateway/model/VmwareTag.h>
#include <aws/backup-gateway/model/VmwareToAwsTagMapping.h>

using BackupGatewayIncludeTest = ::testing::Test;

TEST_F(BackupGatewayIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::BackupGateway::BackupGatewayClient>("BackupGatewayIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
