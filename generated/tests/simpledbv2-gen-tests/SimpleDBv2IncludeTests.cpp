/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/simpledbv2/SimpleDBv2Client.h>
#include <aws/simpledbv2/SimpleDBv2EndpointProvider.h>
#include <aws/simpledbv2/SimpleDBv2EndpointRules.h>
#include <aws/simpledbv2/SimpleDBv2ErrorMarshaller.h>
#include <aws/simpledbv2/SimpleDBv2Errors.h>
#include <aws/simpledbv2/SimpleDBv2Request.h>
#include <aws/simpledbv2/SimpleDBv2ServiceClientModel.h>
#include <aws/simpledbv2/SimpleDBv2_EXPORTS.h>
#include <aws/simpledbv2/model/ExportStatus.h>
#include <aws/simpledbv2/model/ExportSummary.h>
#include <aws/simpledbv2/model/GetExportRequest.h>
#include <aws/simpledbv2/model/GetExportResult.h>
#include <aws/simpledbv2/model/ListExportsRequest.h>
#include <aws/simpledbv2/model/ListExportsResult.h>
#include <aws/simpledbv2/model/S3SseAlgorithm.h>
#include <aws/simpledbv2/model/StartDomainExportRequest.h>
#include <aws/simpledbv2/model/StartDomainExportResult.h>

using SimpleDBv2IncludeTest = ::testing::Test;

TEST_F(SimpleDBv2IncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SimpleDBv2::SimpleDBv2Client>("SimpleDBv2IncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
