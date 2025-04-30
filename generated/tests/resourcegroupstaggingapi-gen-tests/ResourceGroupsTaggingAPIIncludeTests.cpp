/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIClient.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIEndpointProvider.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIEndpointRules.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIErrorMarshaller.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIErrors.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIRequest.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIServiceClientModel.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/resourcegroupstaggingapi/model/ComplianceDetails.h>
#include <aws/resourcegroupstaggingapi/model/DescribeReportCreationRequest.h>
#include <aws/resourcegroupstaggingapi/model/DescribeReportCreationResult.h>
#include <aws/resourcegroupstaggingapi/model/ErrorCode.h>
#include <aws/resourcegroupstaggingapi/model/FailureInfo.h>
#include <aws/resourcegroupstaggingapi/model/GetComplianceSummaryRequest.h>
#include <aws/resourcegroupstaggingapi/model/GetComplianceSummaryResult.h>
#include <aws/resourcegroupstaggingapi/model/GetResourcesRequest.h>
#include <aws/resourcegroupstaggingapi/model/GetResourcesResult.h>
#include <aws/resourcegroupstaggingapi/model/GetTagKeysRequest.h>
#include <aws/resourcegroupstaggingapi/model/GetTagKeysResult.h>
#include <aws/resourcegroupstaggingapi/model/GetTagValuesRequest.h>
#include <aws/resourcegroupstaggingapi/model/GetTagValuesResult.h>
#include <aws/resourcegroupstaggingapi/model/GroupByAttribute.h>
#include <aws/resourcegroupstaggingapi/model/ResourceTagMapping.h>
#include <aws/resourcegroupstaggingapi/model/StartReportCreationRequest.h>
#include <aws/resourcegroupstaggingapi/model/StartReportCreationResult.h>
#include <aws/resourcegroupstaggingapi/model/Summary.h>
#include <aws/resourcegroupstaggingapi/model/Tag.h>
#include <aws/resourcegroupstaggingapi/model/TagFilter.h>
#include <aws/resourcegroupstaggingapi/model/TagResourcesRequest.h>
#include <aws/resourcegroupstaggingapi/model/TagResourcesResult.h>
#include <aws/resourcegroupstaggingapi/model/TargetIdType.h>
#include <aws/resourcegroupstaggingapi/model/UntagResourcesRequest.h>
#include <aws/resourcegroupstaggingapi/model/UntagResourcesResult.h>

using ResourceGroupsTaggingAPIIncludeTest = ::testing::Test;

TEST_F(ResourceGroupsTaggingAPIIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIClient>("ResourceGroupsTaggingAPIIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
