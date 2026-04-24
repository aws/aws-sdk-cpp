/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/workmailmessageflow/WorkMailMessageFlowClient.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowEndpointProvider.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowEndpointRules.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowErrorMarshaller.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowErrors.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowRequest.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowServiceClientModel.h>
#include <aws/workmailmessageflow/WorkMailMessageFlow_EXPORTS.h>
#include <aws/workmailmessageflow/model/GetRawMessageContentRequest.h>
#include <aws/workmailmessageflow/model/GetRawMessageContentResult.h>
#include <aws/workmailmessageflow/model/PutRawMessageContentRequest.h>
#include <aws/workmailmessageflow/model/PutRawMessageContentResult.h>
#include <aws/workmailmessageflow/model/RawMessageContent.h>
#include <aws/workmailmessageflow/model/S3Reference.h>

using WorkMailMessageFlowIncludeTest = ::testing::Test;

TEST_F(WorkMailMessageFlowIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::WorkMailMessageFlow::WorkMailMessageFlowClient>("WorkMailMessageFlowIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
