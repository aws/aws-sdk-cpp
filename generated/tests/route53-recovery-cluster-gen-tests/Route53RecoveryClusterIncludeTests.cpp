/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/route53-recovery-cluster/Route53RecoveryClusterClient.h>
#include <aws/route53-recovery-cluster/Route53RecoveryClusterEndpointProvider.h>
#include <aws/route53-recovery-cluster/Route53RecoveryClusterEndpointRules.h>
#include <aws/route53-recovery-cluster/Route53RecoveryClusterErrorMarshaller.h>
#include <aws/route53-recovery-cluster/Route53RecoveryClusterErrors.h>
#include <aws/route53-recovery-cluster/Route53RecoveryClusterRequest.h>
#include <aws/route53-recovery-cluster/Route53RecoveryClusterServiceClientModel.h>
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>
#include <aws/route53-recovery-cluster/model/ConflictException.h>
#include <aws/route53-recovery-cluster/model/GetRoutingControlStateRequest.h>
#include <aws/route53-recovery-cluster/model/GetRoutingControlStateResult.h>
#include <aws/route53-recovery-cluster/model/InternalServerException.h>
#include <aws/route53-recovery-cluster/model/ListRoutingControlsRequest.h>
#include <aws/route53-recovery-cluster/model/ListRoutingControlsResult.h>
#include <aws/route53-recovery-cluster/model/ResourceNotFoundException.h>
#include <aws/route53-recovery-cluster/model/RoutingControl.h>
#include <aws/route53-recovery-cluster/model/RoutingControlState.h>
#include <aws/route53-recovery-cluster/model/ServiceLimitExceededException.h>
#include <aws/route53-recovery-cluster/model/ThrottlingException.h>
#include <aws/route53-recovery-cluster/model/UpdateRoutingControlStateEntry.h>
#include <aws/route53-recovery-cluster/model/UpdateRoutingControlStateRequest.h>
#include <aws/route53-recovery-cluster/model/UpdateRoutingControlStateResult.h>
#include <aws/route53-recovery-cluster/model/UpdateRoutingControlStatesRequest.h>
#include <aws/route53-recovery-cluster/model/UpdateRoutingControlStatesResult.h>
#include <aws/route53-recovery-cluster/model/ValidationException.h>
#include <aws/route53-recovery-cluster/model/ValidationExceptionField.h>
#include <aws/route53-recovery-cluster/model/ValidationExceptionReason.h>

using Route53RecoveryClusterIncludeTest = ::testing::Test;

TEST_F(Route53RecoveryClusterIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Route53RecoveryCluster::Route53RecoveryClusterClient>("Route53RecoveryClusterIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
