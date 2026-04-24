/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/s3outposts/S3OutpostsClient.h>
#include <aws/s3outposts/S3OutpostsEndpointProvider.h>
#include <aws/s3outposts/S3OutpostsEndpointRules.h>
#include <aws/s3outposts/S3OutpostsErrorMarshaller.h>
#include <aws/s3outposts/S3OutpostsErrors.h>
#include <aws/s3outposts/S3OutpostsRequest.h>
#include <aws/s3outposts/S3OutpostsServiceClientModel.h>
#include <aws/s3outposts/S3Outposts_EXPORTS.h>
#include <aws/s3outposts/model/CreateEndpointRequest.h>
#include <aws/s3outposts/model/CreateEndpointResult.h>
#include <aws/s3outposts/model/DeleteEndpointRequest.h>
#include <aws/s3outposts/model/Endpoint.h>
#include <aws/s3outposts/model/EndpointAccessType.h>
#include <aws/s3outposts/model/EndpointStatus.h>
#include <aws/s3outposts/model/FailedReason.h>
#include <aws/s3outposts/model/ListEndpointsRequest.h>
#include <aws/s3outposts/model/ListEndpointsResult.h>
#include <aws/s3outposts/model/ListOutpostsWithS3Request.h>
#include <aws/s3outposts/model/ListOutpostsWithS3Result.h>
#include <aws/s3outposts/model/ListSharedEndpointsRequest.h>
#include <aws/s3outposts/model/ListSharedEndpointsResult.h>
#include <aws/s3outposts/model/NetworkInterface.h>
#include <aws/s3outposts/model/Outpost.h>

using S3OutpostsIncludeTest = ::testing::Test;

TEST_F(S3OutpostsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::S3Outposts::S3OutpostsClient>("S3OutpostsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
