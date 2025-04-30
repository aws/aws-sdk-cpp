/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/importexport/ImportExportClient.h>
#include <aws/importexport/ImportExportEndpointProvider.h>
#include <aws/importexport/ImportExportEndpointRules.h>
#include <aws/importexport/ImportExportErrorMarshaller.h>
#include <aws/importexport/ImportExportErrors.h>
#include <aws/importexport/ImportExportRequest.h>
#include <aws/importexport/ImportExportServiceClientModel.h>
#include <aws/importexport/ImportExport_EXPORTS.h>
#include <aws/importexport/model/Artifact.h>
#include <aws/importexport/model/CancelJobRequest.h>
#include <aws/importexport/model/CancelJobResult.h>
#include <aws/importexport/model/CreateJobRequest.h>
#include <aws/importexport/model/CreateJobResult.h>
#include <aws/importexport/model/GetShippingLabelRequest.h>
#include <aws/importexport/model/GetShippingLabelResult.h>
#include <aws/importexport/model/GetStatusRequest.h>
#include <aws/importexport/model/GetStatusResult.h>
#include <aws/importexport/model/Job.h>
#include <aws/importexport/model/JobType.h>
#include <aws/importexport/model/ListJobsRequest.h>
#include <aws/importexport/model/ListJobsResult.h>
#include <aws/importexport/model/ResponseMetadata.h>
#include <aws/importexport/model/UpdateJobRequest.h>
#include <aws/importexport/model/UpdateJobResult.h>

using ImportExportIncludeTest = ::testing::Test;

TEST_F(ImportExportIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ImportExport::ImportExportClient>("ImportExportIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
