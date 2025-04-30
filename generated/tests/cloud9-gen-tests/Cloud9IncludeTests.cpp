/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/cloud9/Cloud9Client.h>
#include <aws/cloud9/Cloud9EndpointProvider.h>
#include <aws/cloud9/Cloud9EndpointRules.h>
#include <aws/cloud9/Cloud9ErrorMarshaller.h>
#include <aws/cloud9/Cloud9Errors.h>
#include <aws/cloud9/Cloud9Request.h>
#include <aws/cloud9/Cloud9ServiceClientModel.h>
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/cloud9/model/ConnectionType.h>
#include <aws/cloud9/model/CreateEnvironmentEC2Request.h>
#include <aws/cloud9/model/CreateEnvironmentEC2Result.h>
#include <aws/cloud9/model/CreateEnvironmentMembershipRequest.h>
#include <aws/cloud9/model/CreateEnvironmentMembershipResult.h>
#include <aws/cloud9/model/DeleteEnvironmentMembershipRequest.h>
#include <aws/cloud9/model/DeleteEnvironmentMembershipResult.h>
#include <aws/cloud9/model/DeleteEnvironmentRequest.h>
#include <aws/cloud9/model/DeleteEnvironmentResult.h>
#include <aws/cloud9/model/DescribeEnvironmentMembershipsRequest.h>
#include <aws/cloud9/model/DescribeEnvironmentMembershipsResult.h>
#include <aws/cloud9/model/DescribeEnvironmentStatusRequest.h>
#include <aws/cloud9/model/DescribeEnvironmentStatusResult.h>
#include <aws/cloud9/model/DescribeEnvironmentsRequest.h>
#include <aws/cloud9/model/DescribeEnvironmentsResult.h>
#include <aws/cloud9/model/Environment.h>
#include <aws/cloud9/model/EnvironmentLifecycle.h>
#include <aws/cloud9/model/EnvironmentLifecycleStatus.h>
#include <aws/cloud9/model/EnvironmentMember.h>
#include <aws/cloud9/model/EnvironmentStatus.h>
#include <aws/cloud9/model/EnvironmentType.h>
#include <aws/cloud9/model/ListEnvironmentsRequest.h>
#include <aws/cloud9/model/ListEnvironmentsResult.h>
#include <aws/cloud9/model/ListTagsForResourceRequest.h>
#include <aws/cloud9/model/ListTagsForResourceResult.h>
#include <aws/cloud9/model/ManagedCredentialsAction.h>
#include <aws/cloud9/model/ManagedCredentialsStatus.h>
#include <aws/cloud9/model/MemberPermissions.h>
#include <aws/cloud9/model/Permissions.h>
#include <aws/cloud9/model/Tag.h>
#include <aws/cloud9/model/TagResourceRequest.h>
#include <aws/cloud9/model/TagResourceResult.h>
#include <aws/cloud9/model/UntagResourceRequest.h>
#include <aws/cloud9/model/UntagResourceResult.h>
#include <aws/cloud9/model/UpdateEnvironmentMembershipRequest.h>
#include <aws/cloud9/model/UpdateEnvironmentMembershipResult.h>
#include <aws/cloud9/model/UpdateEnvironmentRequest.h>
#include <aws/cloud9/model/UpdateEnvironmentResult.h>

using Cloud9IncludeTest = ::testing::Test;

TEST_F(Cloud9IncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Cloud9::Cloud9Client>("Cloud9IncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
