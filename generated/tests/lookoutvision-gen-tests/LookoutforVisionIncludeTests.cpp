/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/lookoutvision/LookoutforVisionClient.h>
#include <aws/lookoutvision/LookoutforVisionEndpointProvider.h>
#include <aws/lookoutvision/LookoutforVisionEndpointRules.h>
#include <aws/lookoutvision/LookoutforVisionErrorMarshaller.h>
#include <aws/lookoutvision/LookoutforVisionErrors.h>
#include <aws/lookoutvision/LookoutforVisionRequest.h>
#include <aws/lookoutvision/LookoutforVisionServiceClientModel.h>
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/Anomaly.h>
#include <aws/lookoutvision/model/ConflictException.h>
#include <aws/lookoutvision/model/CreateDatasetRequest.h>
#include <aws/lookoutvision/model/CreateDatasetResult.h>
#include <aws/lookoutvision/model/CreateModelRequest.h>
#include <aws/lookoutvision/model/CreateModelResult.h>
#include <aws/lookoutvision/model/CreateProjectRequest.h>
#include <aws/lookoutvision/model/CreateProjectResult.h>
#include <aws/lookoutvision/model/DatasetDescription.h>
#include <aws/lookoutvision/model/DatasetGroundTruthManifest.h>
#include <aws/lookoutvision/model/DatasetImageStats.h>
#include <aws/lookoutvision/model/DatasetMetadata.h>
#include <aws/lookoutvision/model/DatasetSource.h>
#include <aws/lookoutvision/model/DatasetStatus.h>
#include <aws/lookoutvision/model/DeleteDatasetRequest.h>
#include <aws/lookoutvision/model/DeleteDatasetResult.h>
#include <aws/lookoutvision/model/DeleteModelRequest.h>
#include <aws/lookoutvision/model/DeleteModelResult.h>
#include <aws/lookoutvision/model/DeleteProjectRequest.h>
#include <aws/lookoutvision/model/DeleteProjectResult.h>
#include <aws/lookoutvision/model/DescribeDatasetRequest.h>
#include <aws/lookoutvision/model/DescribeDatasetResult.h>
#include <aws/lookoutvision/model/DescribeModelPackagingJobRequest.h>
#include <aws/lookoutvision/model/DescribeModelPackagingJobResult.h>
#include <aws/lookoutvision/model/DescribeModelRequest.h>
#include <aws/lookoutvision/model/DescribeModelResult.h>
#include <aws/lookoutvision/model/DescribeProjectRequest.h>
#include <aws/lookoutvision/model/DescribeProjectResult.h>
#include <aws/lookoutvision/model/DetectAnomaliesRequest.h>
#include <aws/lookoutvision/model/DetectAnomaliesResult.h>
#include <aws/lookoutvision/model/DetectAnomalyResult.h>
#include <aws/lookoutvision/model/GreengrassConfiguration.h>
#include <aws/lookoutvision/model/GreengrassOutputDetails.h>
#include <aws/lookoutvision/model/ImageSource.h>
#include <aws/lookoutvision/model/InputS3Object.h>
#include <aws/lookoutvision/model/InternalServerException.h>
#include <aws/lookoutvision/model/ListDatasetEntriesRequest.h>
#include <aws/lookoutvision/model/ListDatasetEntriesResult.h>
#include <aws/lookoutvision/model/ListModelPackagingJobsRequest.h>
#include <aws/lookoutvision/model/ListModelPackagingJobsResult.h>
#include <aws/lookoutvision/model/ListModelsRequest.h>
#include <aws/lookoutvision/model/ListModelsResult.h>
#include <aws/lookoutvision/model/ListProjectsRequest.h>
#include <aws/lookoutvision/model/ListProjectsResult.h>
#include <aws/lookoutvision/model/ListTagsForResourceRequest.h>
#include <aws/lookoutvision/model/ListTagsForResourceResult.h>
#include <aws/lookoutvision/model/ModelDescription.h>
#include <aws/lookoutvision/model/ModelHostingStatus.h>
#include <aws/lookoutvision/model/ModelMetadata.h>
#include <aws/lookoutvision/model/ModelPackagingConfiguration.h>
#include <aws/lookoutvision/model/ModelPackagingDescription.h>
#include <aws/lookoutvision/model/ModelPackagingJobMetadata.h>
#include <aws/lookoutvision/model/ModelPackagingJobStatus.h>
#include <aws/lookoutvision/model/ModelPackagingOutputDetails.h>
#include <aws/lookoutvision/model/ModelPerformance.h>
#include <aws/lookoutvision/model/ModelStatus.h>
#include <aws/lookoutvision/model/OutputConfig.h>
#include <aws/lookoutvision/model/OutputS3Object.h>
#include <aws/lookoutvision/model/PixelAnomaly.h>
#include <aws/lookoutvision/model/ProjectDescription.h>
#include <aws/lookoutvision/model/ProjectMetadata.h>
#include <aws/lookoutvision/model/ResourceNotFoundException.h>
#include <aws/lookoutvision/model/ResourceType.h>
#include <aws/lookoutvision/model/S3Location.h>
#include <aws/lookoutvision/model/ServiceQuotaExceededException.h>
#include <aws/lookoutvision/model/StartModelPackagingJobRequest.h>
#include <aws/lookoutvision/model/StartModelPackagingJobResult.h>
#include <aws/lookoutvision/model/StartModelRequest.h>
#include <aws/lookoutvision/model/StartModelResult.h>
#include <aws/lookoutvision/model/StopModelRequest.h>
#include <aws/lookoutvision/model/StopModelResult.h>
#include <aws/lookoutvision/model/Tag.h>
#include <aws/lookoutvision/model/TagResourceRequest.h>
#include <aws/lookoutvision/model/TagResourceResult.h>
#include <aws/lookoutvision/model/TargetDevice.h>
#include <aws/lookoutvision/model/TargetPlatform.h>
#include <aws/lookoutvision/model/TargetPlatformAccelerator.h>
#include <aws/lookoutvision/model/TargetPlatformArch.h>
#include <aws/lookoutvision/model/TargetPlatformOs.h>
#include <aws/lookoutvision/model/ThrottlingException.h>
#include <aws/lookoutvision/model/UntagResourceRequest.h>
#include <aws/lookoutvision/model/UntagResourceResult.h>
#include <aws/lookoutvision/model/UpdateDatasetEntriesRequest.h>
#include <aws/lookoutvision/model/UpdateDatasetEntriesResult.h>

using LookoutforVisionIncludeTest = ::testing::Test;

TEST_F(LookoutforVisionIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::LookoutforVision::LookoutforVisionClient>("LookoutforVisionIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
