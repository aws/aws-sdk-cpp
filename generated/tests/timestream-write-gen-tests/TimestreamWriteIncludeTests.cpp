/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/timestream-write/TimestreamWriteClient.h>
#include <aws/timestream-write/TimestreamWriteClientConfiguration.h>
#include <aws/timestream-write/TimestreamWriteEndpointProvider.h>
#include <aws/timestream-write/TimestreamWriteEndpointRules.h>
#include <aws/timestream-write/TimestreamWriteErrorMarshaller.h>
#include <aws/timestream-write/TimestreamWriteErrors.h>
#include <aws/timestream-write/TimestreamWriteRequest.h>
#include <aws/timestream-write/TimestreamWriteServiceClientModel.h>
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/model/BatchLoadDataFormat.h>
#include <aws/timestream-write/model/BatchLoadProgressReport.h>
#include <aws/timestream-write/model/BatchLoadStatus.h>
#include <aws/timestream-write/model/BatchLoadTask.h>
#include <aws/timestream-write/model/BatchLoadTaskDescription.h>
#include <aws/timestream-write/model/CreateBatchLoadTaskRequest.h>
#include <aws/timestream-write/model/CreateBatchLoadTaskResult.h>
#include <aws/timestream-write/model/CreateDatabaseRequest.h>
#include <aws/timestream-write/model/CreateDatabaseResult.h>
#include <aws/timestream-write/model/CreateTableRequest.h>
#include <aws/timestream-write/model/CreateTableResult.h>
#include <aws/timestream-write/model/CsvConfiguration.h>
#include <aws/timestream-write/model/DataModel.h>
#include <aws/timestream-write/model/DataModelConfiguration.h>
#include <aws/timestream-write/model/DataModelS3Configuration.h>
#include <aws/timestream-write/model/DataSourceConfiguration.h>
#include <aws/timestream-write/model/DataSourceS3Configuration.h>
#include <aws/timestream-write/model/Database.h>
#include <aws/timestream-write/model/DeleteDatabaseRequest.h>
#include <aws/timestream-write/model/DeleteTableRequest.h>
#include <aws/timestream-write/model/DescribeBatchLoadTaskRequest.h>
#include <aws/timestream-write/model/DescribeBatchLoadTaskResult.h>
#include <aws/timestream-write/model/DescribeDatabaseRequest.h>
#include <aws/timestream-write/model/DescribeDatabaseResult.h>
#include <aws/timestream-write/model/DescribeEndpointsRequest.h>
#include <aws/timestream-write/model/DescribeEndpointsResult.h>
#include <aws/timestream-write/model/DescribeTableRequest.h>
#include <aws/timestream-write/model/DescribeTableResult.h>
#include <aws/timestream-write/model/Dimension.h>
#include <aws/timestream-write/model/DimensionMapping.h>
#include <aws/timestream-write/model/DimensionValueType.h>
#include <aws/timestream-write/model/Endpoint.h>
#include <aws/timestream-write/model/ListBatchLoadTasksRequest.h>
#include <aws/timestream-write/model/ListBatchLoadTasksResult.h>
#include <aws/timestream-write/model/ListDatabasesRequest.h>
#include <aws/timestream-write/model/ListDatabasesResult.h>
#include <aws/timestream-write/model/ListTablesRequest.h>
#include <aws/timestream-write/model/ListTablesResult.h>
#include <aws/timestream-write/model/ListTagsForResourceRequest.h>
#include <aws/timestream-write/model/ListTagsForResourceResult.h>
#include <aws/timestream-write/model/MagneticStoreRejectedDataLocation.h>
#include <aws/timestream-write/model/MagneticStoreWriteProperties.h>
#include <aws/timestream-write/model/MeasureValue.h>
#include <aws/timestream-write/model/MeasureValueType.h>
#include <aws/timestream-write/model/MixedMeasureMapping.h>
#include <aws/timestream-write/model/MultiMeasureAttributeMapping.h>
#include <aws/timestream-write/model/MultiMeasureMappings.h>
#include <aws/timestream-write/model/PartitionKey.h>
#include <aws/timestream-write/model/PartitionKeyEnforcementLevel.h>
#include <aws/timestream-write/model/PartitionKeyType.h>
#include <aws/timestream-write/model/Record.h>
#include <aws/timestream-write/model/RecordsIngested.h>
#include <aws/timestream-write/model/RejectedRecord.h>
#include <aws/timestream-write/model/RejectedRecordsException.h>
#include <aws/timestream-write/model/ReportConfiguration.h>
#include <aws/timestream-write/model/ReportS3Configuration.h>
#include <aws/timestream-write/model/ResumeBatchLoadTaskRequest.h>
#include <aws/timestream-write/model/ResumeBatchLoadTaskResult.h>
#include <aws/timestream-write/model/RetentionProperties.h>
#include <aws/timestream-write/model/S3Configuration.h>
#include <aws/timestream-write/model/S3EncryptionOption.h>
#include <aws/timestream-write/model/ScalarMeasureValueType.h>
#include <aws/timestream-write/model/Schema.h>
#include <aws/timestream-write/model/Table.h>
#include <aws/timestream-write/model/TableStatus.h>
#include <aws/timestream-write/model/Tag.h>
#include <aws/timestream-write/model/TagResourceRequest.h>
#include <aws/timestream-write/model/TagResourceResult.h>
#include <aws/timestream-write/model/TimeUnit.h>
#include <aws/timestream-write/model/UntagResourceRequest.h>
#include <aws/timestream-write/model/UntagResourceResult.h>
#include <aws/timestream-write/model/UpdateDatabaseRequest.h>
#include <aws/timestream-write/model/UpdateDatabaseResult.h>
#include <aws/timestream-write/model/UpdateTableRequest.h>
#include <aws/timestream-write/model/UpdateTableResult.h>
#include <aws/timestream-write/model/WriteRecordsRequest.h>
#include <aws/timestream-write/model/WriteRecordsResult.h>

using TimestreamWriteIncludeTest = ::testing::Test;

TEST_F(TimestreamWriteIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::TimestreamWrite::TimestreamWriteClient>("TimestreamWriteIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
