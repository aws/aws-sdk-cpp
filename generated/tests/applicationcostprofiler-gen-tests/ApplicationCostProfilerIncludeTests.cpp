/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/applicationcostprofiler/ApplicationCostProfilerClient.h>
#include <aws/applicationcostprofiler/ApplicationCostProfilerEndpointProvider.h>
#include <aws/applicationcostprofiler/ApplicationCostProfilerEndpointRules.h>
#include <aws/applicationcostprofiler/ApplicationCostProfilerErrorMarshaller.h>
#include <aws/applicationcostprofiler/ApplicationCostProfilerErrors.h>
#include <aws/applicationcostprofiler/ApplicationCostProfilerRequest.h>
#include <aws/applicationcostprofiler/ApplicationCostProfilerServiceClientModel.h>
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
#include <aws/applicationcostprofiler/model/DeleteReportDefinitionRequest.h>
#include <aws/applicationcostprofiler/model/DeleteReportDefinitionResult.h>
#include <aws/applicationcostprofiler/model/Format.h>
#include <aws/applicationcostprofiler/model/GetReportDefinitionRequest.h>
#include <aws/applicationcostprofiler/model/GetReportDefinitionResult.h>
#include <aws/applicationcostprofiler/model/ImportApplicationUsageRequest.h>
#include <aws/applicationcostprofiler/model/ImportApplicationUsageResult.h>
#include <aws/applicationcostprofiler/model/ListReportDefinitionsRequest.h>
#include <aws/applicationcostprofiler/model/ListReportDefinitionsResult.h>
#include <aws/applicationcostprofiler/model/PutReportDefinitionRequest.h>
#include <aws/applicationcostprofiler/model/PutReportDefinitionResult.h>
#include <aws/applicationcostprofiler/model/ReportDefinition.h>
#include <aws/applicationcostprofiler/model/ReportFrequency.h>
#include <aws/applicationcostprofiler/model/S3BucketRegion.h>
#include <aws/applicationcostprofiler/model/S3Location.h>
#include <aws/applicationcostprofiler/model/SourceS3Location.h>
#include <aws/applicationcostprofiler/model/UpdateReportDefinitionRequest.h>
#include <aws/applicationcostprofiler/model/UpdateReportDefinitionResult.h>

using ApplicationCostProfilerIncludeTest = ::testing::Test;

TEST_F(ApplicationCostProfilerIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ApplicationCostProfiler::ApplicationCostProfilerClient>("ApplicationCostProfilerIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
