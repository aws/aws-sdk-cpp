/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/inspector-scan/InspectorscanClient.h>
#include <aws/inspector-scan/InspectorscanEndpointProvider.h>
#include <aws/inspector-scan/InspectorscanEndpointRules.h>
#include <aws/inspector-scan/InspectorscanErrorMarshaller.h>
#include <aws/inspector-scan/InspectorscanErrors.h>
#include <aws/inspector-scan/InspectorscanRequest.h>
#include <aws/inspector-scan/InspectorscanServiceClientModel.h>
#include <aws/inspector-scan/Inspectorscan_EXPORTS.h>
#include <aws/inspector-scan/model/InternalServerException.h>
#include <aws/inspector-scan/model/InternalServerExceptionReason.h>
#include <aws/inspector-scan/model/OutputFormat.h>
#include <aws/inspector-scan/model/ScanSbomRequest.h>
#include <aws/inspector-scan/model/ScanSbomResult.h>
#include <aws/inspector-scan/model/ThrottlingException.h>
#include <aws/inspector-scan/model/ValidationException.h>
#include <aws/inspector-scan/model/ValidationExceptionField.h>
#include <aws/inspector-scan/model/ValidationExceptionReason.h>

using InspectorscanIncludeTest = ::testing::Test;

TEST_F(InspectorscanIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::inspectorscan::InspectorscanClient>("InspectorscanIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
