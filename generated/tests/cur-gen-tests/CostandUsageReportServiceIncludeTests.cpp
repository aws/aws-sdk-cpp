/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/cur/CostandUsageReportServiceClient.h>
#include <aws/cur/CostandUsageReportServiceEndpointProvider.h>
#include <aws/cur/CostandUsageReportServiceEndpointRules.h>
#include <aws/cur/CostandUsageReportServiceErrorMarshaller.h>
#include <aws/cur/CostandUsageReportServiceErrors.h>
#include <aws/cur/CostandUsageReportServiceRequest.h>
#include <aws/cur/CostandUsageReportServiceServiceClientModel.h>
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/cur/model/AWSRegion.h>
#include <aws/cur/model/AdditionalArtifact.h>
#include <aws/cur/model/CompressionFormat.h>
#include <aws/cur/model/DeleteReportDefinitionRequest.h>
#include <aws/cur/model/DeleteReportDefinitionResult.h>
#include <aws/cur/model/DescribeReportDefinitionsRequest.h>
#include <aws/cur/model/DescribeReportDefinitionsResult.h>
#include <aws/cur/model/LastStatus.h>
#include <aws/cur/model/ListTagsForResourceRequest.h>
#include <aws/cur/model/ListTagsForResourceResult.h>
#include <aws/cur/model/ModifyReportDefinitionRequest.h>
#include <aws/cur/model/ModifyReportDefinitionResult.h>
#include <aws/cur/model/PutReportDefinitionRequest.h>
#include <aws/cur/model/PutReportDefinitionResult.h>
#include <aws/cur/model/ReportDefinition.h>
#include <aws/cur/model/ReportFormat.h>
#include <aws/cur/model/ReportStatus.h>
#include <aws/cur/model/ReportVersioning.h>
#include <aws/cur/model/SchemaElement.h>
#include <aws/cur/model/Tag.h>
#include <aws/cur/model/TagResourceRequest.h>
#include <aws/cur/model/TagResourceResult.h>
#include <aws/cur/model/TimeUnit.h>
#include <aws/cur/model/UntagResourceRequest.h>
#include <aws/cur/model/UntagResourceResult.h>

using CostandUsageReportServiceIncludeTest = ::testing::Test;

TEST_F(CostandUsageReportServiceIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::CostandUsageReportService::CostandUsageReportServiceClient>("CostandUsageReportServiceIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
