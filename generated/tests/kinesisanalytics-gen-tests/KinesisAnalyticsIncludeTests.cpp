/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/kinesisanalytics/KinesisAnalyticsClient.h>
#include <aws/kinesisanalytics/KinesisAnalyticsEndpointProvider.h>
#include <aws/kinesisanalytics/KinesisAnalyticsEndpointRules.h>
#include <aws/kinesisanalytics/KinesisAnalyticsErrorMarshaller.h>
#include <aws/kinesisanalytics/KinesisAnalyticsErrors.h>
#include <aws/kinesisanalytics/KinesisAnalyticsRequest.h>
#include <aws/kinesisanalytics/KinesisAnalyticsServiceClientModel.h>
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/model/AddApplicationCloudWatchLoggingOptionRequest.h>
#include <aws/kinesisanalytics/model/AddApplicationCloudWatchLoggingOptionResult.h>
#include <aws/kinesisanalytics/model/AddApplicationInputProcessingConfigurationRequest.h>
#include <aws/kinesisanalytics/model/AddApplicationInputProcessingConfigurationResult.h>
#include <aws/kinesisanalytics/model/AddApplicationInputRequest.h>
#include <aws/kinesisanalytics/model/AddApplicationInputResult.h>
#include <aws/kinesisanalytics/model/AddApplicationOutputRequest.h>
#include <aws/kinesisanalytics/model/AddApplicationOutputResult.h>
#include <aws/kinesisanalytics/model/AddApplicationReferenceDataSourceRequest.h>
#include <aws/kinesisanalytics/model/AddApplicationReferenceDataSourceResult.h>
#include <aws/kinesisanalytics/model/ApplicationDetail.h>
#include <aws/kinesisanalytics/model/ApplicationStatus.h>
#include <aws/kinesisanalytics/model/ApplicationSummary.h>
#include <aws/kinesisanalytics/model/ApplicationUpdate.h>
#include <aws/kinesisanalytics/model/CSVMappingParameters.h>
#include <aws/kinesisanalytics/model/CloudWatchLoggingOption.h>
#include <aws/kinesisanalytics/model/CloudWatchLoggingOptionDescription.h>
#include <aws/kinesisanalytics/model/CloudWatchLoggingOptionUpdate.h>
#include <aws/kinesisanalytics/model/CreateApplicationRequest.h>
#include <aws/kinesisanalytics/model/CreateApplicationResult.h>
#include <aws/kinesisanalytics/model/DeleteApplicationCloudWatchLoggingOptionRequest.h>
#include <aws/kinesisanalytics/model/DeleteApplicationCloudWatchLoggingOptionResult.h>
#include <aws/kinesisanalytics/model/DeleteApplicationInputProcessingConfigurationRequest.h>
#include <aws/kinesisanalytics/model/DeleteApplicationInputProcessingConfigurationResult.h>
#include <aws/kinesisanalytics/model/DeleteApplicationOutputRequest.h>
#include <aws/kinesisanalytics/model/DeleteApplicationOutputResult.h>
#include <aws/kinesisanalytics/model/DeleteApplicationReferenceDataSourceRequest.h>
#include <aws/kinesisanalytics/model/DeleteApplicationReferenceDataSourceResult.h>
#include <aws/kinesisanalytics/model/DeleteApplicationRequest.h>
#include <aws/kinesisanalytics/model/DeleteApplicationResult.h>
#include <aws/kinesisanalytics/model/DescribeApplicationRequest.h>
#include <aws/kinesisanalytics/model/DescribeApplicationResult.h>
#include <aws/kinesisanalytics/model/DestinationSchema.h>
#include <aws/kinesisanalytics/model/DiscoverInputSchemaRequest.h>
#include <aws/kinesisanalytics/model/DiscoverInputSchemaResult.h>
#include <aws/kinesisanalytics/model/Input.h>
#include <aws/kinesisanalytics/model/InputConfiguration.h>
#include <aws/kinesisanalytics/model/InputDescription.h>
#include <aws/kinesisanalytics/model/InputLambdaProcessor.h>
#include <aws/kinesisanalytics/model/InputLambdaProcessorDescription.h>
#include <aws/kinesisanalytics/model/InputLambdaProcessorUpdate.h>
#include <aws/kinesisanalytics/model/InputParallelism.h>
#include <aws/kinesisanalytics/model/InputParallelismUpdate.h>
#include <aws/kinesisanalytics/model/InputProcessingConfiguration.h>
#include <aws/kinesisanalytics/model/InputProcessingConfigurationDescription.h>
#include <aws/kinesisanalytics/model/InputProcessingConfigurationUpdate.h>
#include <aws/kinesisanalytics/model/InputSchemaUpdate.h>
#include <aws/kinesisanalytics/model/InputStartingPosition.h>
#include <aws/kinesisanalytics/model/InputStartingPositionConfiguration.h>
#include <aws/kinesisanalytics/model/InputUpdate.h>
#include <aws/kinesisanalytics/model/JSONMappingParameters.h>
#include <aws/kinesisanalytics/model/KinesisFirehoseInput.h>
#include <aws/kinesisanalytics/model/KinesisFirehoseInputDescription.h>
#include <aws/kinesisanalytics/model/KinesisFirehoseInputUpdate.h>
#include <aws/kinesisanalytics/model/KinesisFirehoseOutput.h>
#include <aws/kinesisanalytics/model/KinesisFirehoseOutputDescription.h>
#include <aws/kinesisanalytics/model/KinesisFirehoseOutputUpdate.h>
#include <aws/kinesisanalytics/model/KinesisStreamsInput.h>
#include <aws/kinesisanalytics/model/KinesisStreamsInputDescription.h>
#include <aws/kinesisanalytics/model/KinesisStreamsInputUpdate.h>
#include <aws/kinesisanalytics/model/KinesisStreamsOutput.h>
#include <aws/kinesisanalytics/model/KinesisStreamsOutputDescription.h>
#include <aws/kinesisanalytics/model/KinesisStreamsOutputUpdate.h>
#include <aws/kinesisanalytics/model/LambdaOutput.h>
#include <aws/kinesisanalytics/model/LambdaOutputDescription.h>
#include <aws/kinesisanalytics/model/LambdaOutputUpdate.h>
#include <aws/kinesisanalytics/model/ListApplicationsRequest.h>
#include <aws/kinesisanalytics/model/ListApplicationsResult.h>
#include <aws/kinesisanalytics/model/ListTagsForResourceRequest.h>
#include <aws/kinesisanalytics/model/ListTagsForResourceResult.h>
#include <aws/kinesisanalytics/model/MappingParameters.h>
#include <aws/kinesisanalytics/model/Output.h>
#include <aws/kinesisanalytics/model/OutputDescription.h>
#include <aws/kinesisanalytics/model/OutputUpdate.h>
#include <aws/kinesisanalytics/model/RecordColumn.h>
#include <aws/kinesisanalytics/model/RecordFormat.h>
#include <aws/kinesisanalytics/model/RecordFormatType.h>
#include <aws/kinesisanalytics/model/ReferenceDataSource.h>
#include <aws/kinesisanalytics/model/ReferenceDataSourceDescription.h>
#include <aws/kinesisanalytics/model/ReferenceDataSourceUpdate.h>
#include <aws/kinesisanalytics/model/S3Configuration.h>
#include <aws/kinesisanalytics/model/S3ReferenceDataSource.h>
#include <aws/kinesisanalytics/model/S3ReferenceDataSourceDescription.h>
#include <aws/kinesisanalytics/model/S3ReferenceDataSourceUpdate.h>
#include <aws/kinesisanalytics/model/SourceSchema.h>
#include <aws/kinesisanalytics/model/StartApplicationRequest.h>
#include <aws/kinesisanalytics/model/StartApplicationResult.h>
#include <aws/kinesisanalytics/model/StopApplicationRequest.h>
#include <aws/kinesisanalytics/model/StopApplicationResult.h>
#include <aws/kinesisanalytics/model/Tag.h>
#include <aws/kinesisanalytics/model/TagResourceRequest.h>
#include <aws/kinesisanalytics/model/TagResourceResult.h>
#include <aws/kinesisanalytics/model/UnableToDetectSchemaException.h>
#include <aws/kinesisanalytics/model/UntagResourceRequest.h>
#include <aws/kinesisanalytics/model/UntagResourceResult.h>
#include <aws/kinesisanalytics/model/UpdateApplicationRequest.h>
#include <aws/kinesisanalytics/model/UpdateApplicationResult.h>

using KinesisAnalyticsIncludeTest = ::testing::Test;

TEST_F(KinesisAnalyticsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::KinesisAnalytics::KinesisAnalyticsClient>("KinesisAnalyticsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
