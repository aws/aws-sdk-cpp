/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/evs/EVSClient.h>
#include <aws/evs/EVSEndpointProvider.h>
#include <aws/evs/EVSEndpointRules.h>
#include <aws/evs/EVSErrorMarshaller.h>
#include <aws/evs/EVSErrors.h>
#include <aws/evs/EVSRequest.h>
#include <aws/evs/EVSServiceClientModel.h>
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/model/AssociateEipToVlanRequest.h>
#include <aws/evs/model/AssociateEipToVlanResult.h>
#include <aws/evs/model/Check.h>
#include <aws/evs/model/CheckResult.h>
#include <aws/evs/model/CheckType.h>
#include <aws/evs/model/ConnectivityInfo.h>
#include <aws/evs/model/CreateEnvironmentHostRequest.h>
#include <aws/evs/model/CreateEnvironmentHostResult.h>
#include <aws/evs/model/CreateEnvironmentRequest.h>
#include <aws/evs/model/CreateEnvironmentResult.h>
#include <aws/evs/model/DeleteEnvironmentHostRequest.h>
#include <aws/evs/model/DeleteEnvironmentHostResult.h>
#include <aws/evs/model/DeleteEnvironmentRequest.h>
#include <aws/evs/model/DeleteEnvironmentResult.h>
#include <aws/evs/model/DisassociateEipFromVlanRequest.h>
#include <aws/evs/model/DisassociateEipFromVlanResult.h>
#include <aws/evs/model/EipAssociation.h>
#include <aws/evs/model/Environment.h>
#include <aws/evs/model/EnvironmentState.h>
#include <aws/evs/model/EnvironmentSummary.h>
#include <aws/evs/model/GetEnvironmentRequest.h>
#include <aws/evs/model/GetEnvironmentResult.h>
#include <aws/evs/model/Host.h>
#include <aws/evs/model/HostInfoForCreate.h>
#include <aws/evs/model/HostState.h>
#include <aws/evs/model/InitialVlanInfo.h>
#include <aws/evs/model/InitialVlans.h>
#include <aws/evs/model/InstanceType.h>
#include <aws/evs/model/LicenseInfo.h>
#include <aws/evs/model/ListEnvironmentHostsRequest.h>
#include <aws/evs/model/ListEnvironmentHostsResult.h>
#include <aws/evs/model/ListEnvironmentVlansRequest.h>
#include <aws/evs/model/ListEnvironmentVlansResult.h>
#include <aws/evs/model/ListEnvironmentsRequest.h>
#include <aws/evs/model/ListEnvironmentsResult.h>
#include <aws/evs/model/ListTagsForResourceRequest.h>
#include <aws/evs/model/ListTagsForResourceResult.h>
#include <aws/evs/model/NetworkInterface.h>
#include <aws/evs/model/ResourceNotFoundException.h>
#include <aws/evs/model/Secret.h>
#include <aws/evs/model/ServiceAccessSecurityGroups.h>
#include <aws/evs/model/TagResourceRequest.h>
#include <aws/evs/model/TagResourceResult.h>
#include <aws/evs/model/ThrottlingException.h>
#include <aws/evs/model/UntagResourceRequest.h>
#include <aws/evs/model/UntagResourceResult.h>
#include <aws/evs/model/ValidationException.h>
#include <aws/evs/model/ValidationExceptionField.h>
#include <aws/evs/model/ValidationExceptionReason.h>
#include <aws/evs/model/VcfHostnames.h>
#include <aws/evs/model/VcfVersion.h>
#include <aws/evs/model/Vlan.h>
#include <aws/evs/model/VlanState.h>

using EVSIncludeTest = ::testing::Test;

TEST_F(EVSIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::EVS::EVSClient>("EVSIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
