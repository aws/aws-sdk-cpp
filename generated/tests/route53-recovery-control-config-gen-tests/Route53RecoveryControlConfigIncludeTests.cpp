/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigClient.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigEndpointProvider.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigEndpointRules.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigErrorMarshaller.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigErrors.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigRequest.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigServiceClientModel.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/model/AssertionRule.h>
#include <aws/route53-recovery-control-config/model/AssertionRuleUpdate.h>
#include <aws/route53-recovery-control-config/model/Cluster.h>
#include <aws/route53-recovery-control-config/model/ClusterEndpoint.h>
#include <aws/route53-recovery-control-config/model/ControlPanel.h>
#include <aws/route53-recovery-control-config/model/CreateClusterRequest.h>
#include <aws/route53-recovery-control-config/model/CreateClusterResult.h>
#include <aws/route53-recovery-control-config/model/CreateControlPanelRequest.h>
#include <aws/route53-recovery-control-config/model/CreateControlPanelResult.h>
#include <aws/route53-recovery-control-config/model/CreateRoutingControlRequest.h>
#include <aws/route53-recovery-control-config/model/CreateRoutingControlResult.h>
#include <aws/route53-recovery-control-config/model/CreateSafetyRuleRequest.h>
#include <aws/route53-recovery-control-config/model/CreateSafetyRuleResult.h>
#include <aws/route53-recovery-control-config/model/DeleteClusterRequest.h>
#include <aws/route53-recovery-control-config/model/DeleteClusterResult.h>
#include <aws/route53-recovery-control-config/model/DeleteControlPanelRequest.h>
#include <aws/route53-recovery-control-config/model/DeleteControlPanelResult.h>
#include <aws/route53-recovery-control-config/model/DeleteRoutingControlRequest.h>
#include <aws/route53-recovery-control-config/model/DeleteRoutingControlResult.h>
#include <aws/route53-recovery-control-config/model/DeleteSafetyRuleRequest.h>
#include <aws/route53-recovery-control-config/model/DeleteSafetyRuleResult.h>
#include <aws/route53-recovery-control-config/model/DescribeClusterRequest.h>
#include <aws/route53-recovery-control-config/model/DescribeClusterResult.h>
#include <aws/route53-recovery-control-config/model/DescribeControlPanelRequest.h>
#include <aws/route53-recovery-control-config/model/DescribeControlPanelResult.h>
#include <aws/route53-recovery-control-config/model/DescribeRoutingControlRequest.h>
#include <aws/route53-recovery-control-config/model/DescribeRoutingControlResult.h>
#include <aws/route53-recovery-control-config/model/DescribeSafetyRuleRequest.h>
#include <aws/route53-recovery-control-config/model/DescribeSafetyRuleResult.h>
#include <aws/route53-recovery-control-config/model/GatingRule.h>
#include <aws/route53-recovery-control-config/model/GatingRuleUpdate.h>
#include <aws/route53-recovery-control-config/model/GetResourcePolicyRequest.h>
#include <aws/route53-recovery-control-config/model/GetResourcePolicyResult.h>
#include <aws/route53-recovery-control-config/model/ListAssociatedRoute53HealthChecksRequest.h>
#include <aws/route53-recovery-control-config/model/ListAssociatedRoute53HealthChecksResult.h>
#include <aws/route53-recovery-control-config/model/ListClustersRequest.h>
#include <aws/route53-recovery-control-config/model/ListClustersResult.h>
#include <aws/route53-recovery-control-config/model/ListControlPanelsRequest.h>
#include <aws/route53-recovery-control-config/model/ListControlPanelsResult.h>
#include <aws/route53-recovery-control-config/model/ListRoutingControlsRequest.h>
#include <aws/route53-recovery-control-config/model/ListRoutingControlsResult.h>
#include <aws/route53-recovery-control-config/model/ListSafetyRulesRequest.h>
#include <aws/route53-recovery-control-config/model/ListSafetyRulesResult.h>
#include <aws/route53-recovery-control-config/model/ListTagsForResourceRequest.h>
#include <aws/route53-recovery-control-config/model/ListTagsForResourceResult.h>
#include <aws/route53-recovery-control-config/model/NetworkType.h>
#include <aws/route53-recovery-control-config/model/NewAssertionRule.h>
#include <aws/route53-recovery-control-config/model/NewGatingRule.h>
#include <aws/route53-recovery-control-config/model/RoutingControl.h>
#include <aws/route53-recovery-control-config/model/Rule.h>
#include <aws/route53-recovery-control-config/model/RuleConfig.h>
#include <aws/route53-recovery-control-config/model/RuleType.h>
#include <aws/route53-recovery-control-config/model/Status.h>
#include <aws/route53-recovery-control-config/model/TagResourceRequest.h>
#include <aws/route53-recovery-control-config/model/TagResourceResult.h>
#include <aws/route53-recovery-control-config/model/UntagResourceRequest.h>
#include <aws/route53-recovery-control-config/model/UntagResourceResult.h>
#include <aws/route53-recovery-control-config/model/UpdateClusterRequest.h>
#include <aws/route53-recovery-control-config/model/UpdateClusterResult.h>
#include <aws/route53-recovery-control-config/model/UpdateControlPanelRequest.h>
#include <aws/route53-recovery-control-config/model/UpdateControlPanelResult.h>
#include <aws/route53-recovery-control-config/model/UpdateRoutingControlRequest.h>
#include <aws/route53-recovery-control-config/model/UpdateRoutingControlResult.h>
#include <aws/route53-recovery-control-config/model/UpdateSafetyRuleRequest.h>
#include <aws/route53-recovery-control-config/model/UpdateSafetyRuleResult.h>

using Route53RecoveryControlConfigIncludeTest = ::testing::Test;

TEST_F(Route53RecoveryControlConfigIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Route53RecoveryControlConfig::Route53RecoveryControlConfigClient>("Route53RecoveryControlConfigIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
