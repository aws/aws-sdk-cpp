/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/mediastore/MediaStoreClient.h>
#include <aws/mediastore/MediaStoreEndpointProvider.h>
#include <aws/mediastore/MediaStoreEndpointRules.h>
#include <aws/mediastore/MediaStoreErrorMarshaller.h>
#include <aws/mediastore/MediaStoreErrors.h>
#include <aws/mediastore/MediaStoreRequest.h>
#include <aws/mediastore/MediaStoreServiceClientModel.h>
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/mediastore/model/Container.h>
#include <aws/mediastore/model/ContainerLevelMetrics.h>
#include <aws/mediastore/model/ContainerStatus.h>
#include <aws/mediastore/model/CorsRule.h>
#include <aws/mediastore/model/CreateContainerRequest.h>
#include <aws/mediastore/model/CreateContainerResult.h>
#include <aws/mediastore/model/DeleteContainerPolicyRequest.h>
#include <aws/mediastore/model/DeleteContainerPolicyResult.h>
#include <aws/mediastore/model/DeleteContainerRequest.h>
#include <aws/mediastore/model/DeleteContainerResult.h>
#include <aws/mediastore/model/DeleteCorsPolicyRequest.h>
#include <aws/mediastore/model/DeleteCorsPolicyResult.h>
#include <aws/mediastore/model/DeleteLifecyclePolicyRequest.h>
#include <aws/mediastore/model/DeleteLifecyclePolicyResult.h>
#include <aws/mediastore/model/DeleteMetricPolicyRequest.h>
#include <aws/mediastore/model/DeleteMetricPolicyResult.h>
#include <aws/mediastore/model/DescribeContainerRequest.h>
#include <aws/mediastore/model/DescribeContainerResult.h>
#include <aws/mediastore/model/GetContainerPolicyRequest.h>
#include <aws/mediastore/model/GetContainerPolicyResult.h>
#include <aws/mediastore/model/GetCorsPolicyRequest.h>
#include <aws/mediastore/model/GetCorsPolicyResult.h>
#include <aws/mediastore/model/GetLifecyclePolicyRequest.h>
#include <aws/mediastore/model/GetLifecyclePolicyResult.h>
#include <aws/mediastore/model/GetMetricPolicyRequest.h>
#include <aws/mediastore/model/GetMetricPolicyResult.h>
#include <aws/mediastore/model/ListContainersRequest.h>
#include <aws/mediastore/model/ListContainersResult.h>
#include <aws/mediastore/model/ListTagsForResourceRequest.h>
#include <aws/mediastore/model/ListTagsForResourceResult.h>
#include <aws/mediastore/model/MethodName.h>
#include <aws/mediastore/model/MetricPolicy.h>
#include <aws/mediastore/model/MetricPolicyRule.h>
#include <aws/mediastore/model/PutContainerPolicyRequest.h>
#include <aws/mediastore/model/PutContainerPolicyResult.h>
#include <aws/mediastore/model/PutCorsPolicyRequest.h>
#include <aws/mediastore/model/PutCorsPolicyResult.h>
#include <aws/mediastore/model/PutLifecyclePolicyRequest.h>
#include <aws/mediastore/model/PutLifecyclePolicyResult.h>
#include <aws/mediastore/model/PutMetricPolicyRequest.h>
#include <aws/mediastore/model/PutMetricPolicyResult.h>
#include <aws/mediastore/model/StartAccessLoggingRequest.h>
#include <aws/mediastore/model/StartAccessLoggingResult.h>
#include <aws/mediastore/model/StopAccessLoggingRequest.h>
#include <aws/mediastore/model/StopAccessLoggingResult.h>
#include <aws/mediastore/model/Tag.h>
#include <aws/mediastore/model/TagResourceRequest.h>
#include <aws/mediastore/model/TagResourceResult.h>
#include <aws/mediastore/model/UntagResourceRequest.h>
#include <aws/mediastore/model/UntagResourceResult.h>

using MediaStoreIncludeTest = ::testing::Test;

TEST_F(MediaStoreIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::MediaStore::MediaStoreClient>("MediaStoreIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
