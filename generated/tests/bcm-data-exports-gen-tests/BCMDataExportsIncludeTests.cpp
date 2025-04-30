/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/bcm-data-exports/BCMDataExportsClient.h>
#include <aws/bcm-data-exports/BCMDataExportsEndpointProvider.h>
#include <aws/bcm-data-exports/BCMDataExportsEndpointRules.h>
#include <aws/bcm-data-exports/BCMDataExportsErrorMarshaller.h>
#include <aws/bcm-data-exports/BCMDataExportsErrors.h>
#include <aws/bcm-data-exports/BCMDataExportsRequest.h>
#include <aws/bcm-data-exports/BCMDataExportsServiceClientModel.h>
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/bcm-data-exports/model/Column.h>
#include <aws/bcm-data-exports/model/CompressionOption.h>
#include <aws/bcm-data-exports/model/CreateExportRequest.h>
#include <aws/bcm-data-exports/model/CreateExportResult.h>
#include <aws/bcm-data-exports/model/DataQuery.h>
#include <aws/bcm-data-exports/model/DeleteExportRequest.h>
#include <aws/bcm-data-exports/model/DeleteExportResult.h>
#include <aws/bcm-data-exports/model/DestinationConfigurations.h>
#include <aws/bcm-data-exports/model/ExecutionReference.h>
#include <aws/bcm-data-exports/model/ExecutionStatus.h>
#include <aws/bcm-data-exports/model/ExecutionStatusCode.h>
#include <aws/bcm-data-exports/model/ExecutionStatusReason.h>
#include <aws/bcm-data-exports/model/Export.h>
#include <aws/bcm-data-exports/model/ExportReference.h>
#include <aws/bcm-data-exports/model/ExportStatus.h>
#include <aws/bcm-data-exports/model/ExportStatusCode.h>
#include <aws/bcm-data-exports/model/FormatOption.h>
#include <aws/bcm-data-exports/model/FrequencyOption.h>
#include <aws/bcm-data-exports/model/GetExecutionRequest.h>
#include <aws/bcm-data-exports/model/GetExecutionResult.h>
#include <aws/bcm-data-exports/model/GetExportRequest.h>
#include <aws/bcm-data-exports/model/GetExportResult.h>
#include <aws/bcm-data-exports/model/GetTableRequest.h>
#include <aws/bcm-data-exports/model/GetTableResult.h>
#include <aws/bcm-data-exports/model/ListExecutionsRequest.h>
#include <aws/bcm-data-exports/model/ListExecutionsResult.h>
#include <aws/bcm-data-exports/model/ListExportsRequest.h>
#include <aws/bcm-data-exports/model/ListExportsResult.h>
#include <aws/bcm-data-exports/model/ListTablesRequest.h>
#include <aws/bcm-data-exports/model/ListTablesResult.h>
#include <aws/bcm-data-exports/model/ListTagsForResourceRequest.h>
#include <aws/bcm-data-exports/model/ListTagsForResourceResult.h>
#include <aws/bcm-data-exports/model/OverwriteOption.h>
#include <aws/bcm-data-exports/model/RefreshCadence.h>
#include <aws/bcm-data-exports/model/ResourceNotFoundException.h>
#include <aws/bcm-data-exports/model/ResourceTag.h>
#include <aws/bcm-data-exports/model/S3Destination.h>
#include <aws/bcm-data-exports/model/S3OutputConfigurations.h>
#include <aws/bcm-data-exports/model/S3OutputType.h>
#include <aws/bcm-data-exports/model/ServiceQuotaExceededException.h>
#include <aws/bcm-data-exports/model/Table.h>
#include <aws/bcm-data-exports/model/TablePropertyDescription.h>
#include <aws/bcm-data-exports/model/TagResourceRequest.h>
#include <aws/bcm-data-exports/model/TagResourceResult.h>
#include <aws/bcm-data-exports/model/ThrottlingException.h>
#include <aws/bcm-data-exports/model/UntagResourceRequest.h>
#include <aws/bcm-data-exports/model/UntagResourceResult.h>
#include <aws/bcm-data-exports/model/UpdateExportRequest.h>
#include <aws/bcm-data-exports/model/UpdateExportResult.h>
#include <aws/bcm-data-exports/model/ValidationException.h>
#include <aws/bcm-data-exports/model/ValidationExceptionField.h>
#include <aws/bcm-data-exports/model/ValidationExceptionReason.h>

using BCMDataExportsIncludeTest = ::testing::Test;

TEST_F(BCMDataExportsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::BCMDataExports::BCMDataExportsClient>("BCMDataExportsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
