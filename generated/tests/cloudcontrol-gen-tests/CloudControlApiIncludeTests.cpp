/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/cloudcontrol/CloudControlApiClient.h>
#include <aws/cloudcontrol/CloudControlApiEndpointProvider.h>
#include <aws/cloudcontrol/CloudControlApiEndpointRules.h>
#include <aws/cloudcontrol/CloudControlApiErrorMarshaller.h>
#include <aws/cloudcontrol/CloudControlApiErrors.h>
#include <aws/cloudcontrol/CloudControlApiRequest.h>
#include <aws/cloudcontrol/CloudControlApiServiceClientModel.h>
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/cloudcontrol/model/CancelResourceRequestRequest.h>
#include <aws/cloudcontrol/model/CancelResourceRequestResult.h>
#include <aws/cloudcontrol/model/CreateResourceRequest.h>
#include <aws/cloudcontrol/model/CreateResourceResult.h>
#include <aws/cloudcontrol/model/DeleteResourceRequest.h>
#include <aws/cloudcontrol/model/DeleteResourceResult.h>
#include <aws/cloudcontrol/model/GetResourceRequest.h>
#include <aws/cloudcontrol/model/GetResourceRequestStatusRequest.h>
#include <aws/cloudcontrol/model/GetResourceRequestStatusResult.h>
#include <aws/cloudcontrol/model/GetResourceResult.h>
#include <aws/cloudcontrol/model/HandlerErrorCode.h>
#include <aws/cloudcontrol/model/HookProgressEvent.h>
#include <aws/cloudcontrol/model/ListResourceRequestsRequest.h>
#include <aws/cloudcontrol/model/ListResourceRequestsResult.h>
#include <aws/cloudcontrol/model/ListResourcesRequest.h>
#include <aws/cloudcontrol/model/ListResourcesResult.h>
#include <aws/cloudcontrol/model/Operation.h>
#include <aws/cloudcontrol/model/OperationStatus.h>
#include <aws/cloudcontrol/model/ProgressEvent.h>
#include <aws/cloudcontrol/model/ResourceDescription.h>
#include <aws/cloudcontrol/model/ResourceRequestStatusFilter.h>
#include <aws/cloudcontrol/model/UpdateResourceRequest.h>
#include <aws/cloudcontrol/model/UpdateResourceResult.h>

using CloudControlApiIncludeTest = ::testing::Test;

TEST_F(CloudControlApiIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::CloudControlApi::CloudControlApiClient>("CloudControlApiIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
