/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/elasticloadbalancing/ElasticLoadBalancingClient.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingEndpointProvider.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingEndpointRules.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingErrorMarshaller.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingErrors.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingRequest.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingServiceClientModel.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/elasticloadbalancing/model/AccessLog.h>
#include <aws/elasticloadbalancing/model/AddTagsRequest.h>
#include <aws/elasticloadbalancing/model/AddTagsResult.h>
#include <aws/elasticloadbalancing/model/AdditionalAttribute.h>
#include <aws/elasticloadbalancing/model/AppCookieStickinessPolicy.h>
#include <aws/elasticloadbalancing/model/ApplySecurityGroupsToLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/ApplySecurityGroupsToLoadBalancerResult.h>
#include <aws/elasticloadbalancing/model/AttachLoadBalancerToSubnetsRequest.h>
#include <aws/elasticloadbalancing/model/AttachLoadBalancerToSubnetsResult.h>
#include <aws/elasticloadbalancing/model/BackendServerDescription.h>
#include <aws/elasticloadbalancing/model/ConfigureHealthCheckRequest.h>
#include <aws/elasticloadbalancing/model/ConfigureHealthCheckResult.h>
#include <aws/elasticloadbalancing/model/ConnectionDraining.h>
#include <aws/elasticloadbalancing/model/ConnectionSettings.h>
#include <aws/elasticloadbalancing/model/CreateAppCookieStickinessPolicyRequest.h>
#include <aws/elasticloadbalancing/model/CreateAppCookieStickinessPolicyResult.h>
#include <aws/elasticloadbalancing/model/CreateLBCookieStickinessPolicyRequest.h>
#include <aws/elasticloadbalancing/model/CreateLBCookieStickinessPolicyResult.h>
#include <aws/elasticloadbalancing/model/CreateLoadBalancerListenersRequest.h>
#include <aws/elasticloadbalancing/model/CreateLoadBalancerListenersResult.h>
#include <aws/elasticloadbalancing/model/CreateLoadBalancerPolicyRequest.h>
#include <aws/elasticloadbalancing/model/CreateLoadBalancerPolicyResult.h>
#include <aws/elasticloadbalancing/model/CreateLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/CreateLoadBalancerResult.h>
#include <aws/elasticloadbalancing/model/CrossZoneLoadBalancing.h>
#include <aws/elasticloadbalancing/model/DeleteLoadBalancerListenersRequest.h>
#include <aws/elasticloadbalancing/model/DeleteLoadBalancerListenersResult.h>
#include <aws/elasticloadbalancing/model/DeleteLoadBalancerPolicyRequest.h>
#include <aws/elasticloadbalancing/model/DeleteLoadBalancerPolicyResult.h>
#include <aws/elasticloadbalancing/model/DeleteLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/DeleteLoadBalancerResult.h>
#include <aws/elasticloadbalancing/model/DeregisterInstancesFromLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/DeregisterInstancesFromLoadBalancerResult.h>
#include <aws/elasticloadbalancing/model/DescribeAccountLimitsRequest.h>
#include <aws/elasticloadbalancing/model/DescribeAccountLimitsResult.h>
#include <aws/elasticloadbalancing/model/DescribeInstanceHealthRequest.h>
#include <aws/elasticloadbalancing/model/DescribeInstanceHealthResult.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerAttributesRequest.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerAttributesResult.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerPoliciesRequest.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerPoliciesResult.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerPolicyTypesRequest.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerPolicyTypesResult.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancersRequest.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancersResult.h>
#include <aws/elasticloadbalancing/model/DescribeTagsRequest.h>
#include <aws/elasticloadbalancing/model/DescribeTagsResult.h>
#include <aws/elasticloadbalancing/model/DetachLoadBalancerFromSubnetsRequest.h>
#include <aws/elasticloadbalancing/model/DetachLoadBalancerFromSubnetsResult.h>
#include <aws/elasticloadbalancing/model/DisableAvailabilityZonesForLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/DisableAvailabilityZonesForLoadBalancerResult.h>
#include <aws/elasticloadbalancing/model/EnableAvailabilityZonesForLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/EnableAvailabilityZonesForLoadBalancerResult.h>
#include <aws/elasticloadbalancing/model/HealthCheck.h>
#include <aws/elasticloadbalancing/model/Instance.h>
#include <aws/elasticloadbalancing/model/InstanceState.h>
#include <aws/elasticloadbalancing/model/LBCookieStickinessPolicy.h>
#include <aws/elasticloadbalancing/model/Limit.h>
#include <aws/elasticloadbalancing/model/Listener.h>
#include <aws/elasticloadbalancing/model/ListenerDescription.h>
#include <aws/elasticloadbalancing/model/LoadBalancerAttributes.h>
#include <aws/elasticloadbalancing/model/LoadBalancerDescription.h>
#include <aws/elasticloadbalancing/model/ModifyLoadBalancerAttributesRequest.h>
#include <aws/elasticloadbalancing/model/ModifyLoadBalancerAttributesResult.h>
#include <aws/elasticloadbalancing/model/Policies.h>
#include <aws/elasticloadbalancing/model/PolicyAttribute.h>
#include <aws/elasticloadbalancing/model/PolicyAttributeDescription.h>
#include <aws/elasticloadbalancing/model/PolicyAttributeTypeDescription.h>
#include <aws/elasticloadbalancing/model/PolicyDescription.h>
#include <aws/elasticloadbalancing/model/PolicyTypeDescription.h>
#include <aws/elasticloadbalancing/model/RegisterInstancesWithLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/RegisterInstancesWithLoadBalancerResult.h>
#include <aws/elasticloadbalancing/model/RemoveTagsRequest.h>
#include <aws/elasticloadbalancing/model/RemoveTagsResult.h>
#include <aws/elasticloadbalancing/model/ResponseMetadata.h>
#include <aws/elasticloadbalancing/model/SetLoadBalancerListenerSSLCertificateRequest.h>
#include <aws/elasticloadbalancing/model/SetLoadBalancerListenerSSLCertificateResult.h>
#include <aws/elasticloadbalancing/model/SetLoadBalancerPoliciesForBackendServerRequest.h>
#include <aws/elasticloadbalancing/model/SetLoadBalancerPoliciesForBackendServerResult.h>
#include <aws/elasticloadbalancing/model/SetLoadBalancerPoliciesOfListenerRequest.h>
#include <aws/elasticloadbalancing/model/SetLoadBalancerPoliciesOfListenerResult.h>
#include <aws/elasticloadbalancing/model/SourceSecurityGroup.h>
#include <aws/elasticloadbalancing/model/Tag.h>
#include <aws/elasticloadbalancing/model/TagDescription.h>
#include <aws/elasticloadbalancing/model/TagKeyOnly.h>

using ElasticLoadBalancingIncludeTest = ::testing::Test;

TEST_F(ElasticLoadBalancingIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ElasticLoadBalancing::ElasticLoadBalancingClient>("ElasticLoadBalancingIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
