/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/healthlake/HealthLakeClient.h>
#include <aws/healthlake/HealthLakeEndpointProvider.h>
#include <aws/healthlake/HealthLakeErrorMarshaller.h>
#include <aws/healthlake/HealthLakeErrors.h>
#include <aws/healthlake/HealthLakeRequest.h>
#include <aws/healthlake/HealthLakeServiceClientModel.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/internal/HealthLakeEndpointRules.h>
#include <aws/healthlake/model/AgentInputMessage.h>
#include <aws/healthlake/model/AgentInputMessageType.h>
#include <aws/healthlake/model/AgentOutputMessage.h>
#include <aws/healthlake/model/AgentOutputMessageType.h>
#include <aws/healthlake/model/AnalyticsConfiguration.h>
#include <aws/healthlake/model/AnalyticsStatus.h>
#include <aws/healthlake/model/AuthorizationStrategy.h>
#include <aws/healthlake/model/CmkType.h>
#include <aws/healthlake/model/CreateDataTransformationProfileRequest.h>
#include <aws/healthlake/model/CreateDataTransformationProfileResult.h>
#include <aws/healthlake/model/CreateDataTransformationProfileSource.h>
#include <aws/healthlake/model/CreateFHIRDatastoreRequest.h>
#include <aws/healthlake/model/CreateFHIRDatastoreResult.h>
#include <aws/healthlake/model/DataTransformationProfileSummary.h>
#include <aws/healthlake/model/DataTransformationProfileVersionSummary.h>
#include <aws/healthlake/model/DataTransformationS3Configuration.h>
#include <aws/healthlake/model/DatastoreFilter.h>
#include <aws/healthlake/model/DatastoreProperties.h>
#include <aws/healthlake/model/DatastoreStatus.h>
#include <aws/healthlake/model/DeleteDataTransformationProfileRequest.h>
#include <aws/healthlake/model/DeleteDataTransformationProfileResult.h>
#include <aws/healthlake/model/DeleteFHIRDatastoreRequest.h>
#include <aws/healthlake/model/DeleteFHIRDatastoreResult.h>
#include <aws/healthlake/model/DescribeDataTransformationJobRequest.h>
#include <aws/healthlake/model/DescribeDataTransformationJobResult.h>
#include <aws/healthlake/model/DescribeFHIRDatastoreRequest.h>
#include <aws/healthlake/model/DescribeFHIRDatastoreResult.h>
#include <aws/healthlake/model/DescribeFHIRExportJobRequest.h>
#include <aws/healthlake/model/DescribeFHIRExportJobResult.h>
#include <aws/healthlake/model/DescribeFHIRImportJobRequest.h>
#include <aws/healthlake/model/DescribeFHIRImportJobResult.h>
#include <aws/healthlake/model/ErrorCategory.h>
#include <aws/healthlake/model/ErrorCause.h>
#include <aws/healthlake/model/ExistingVersionedProfileSource.h>
#include <aws/healthlake/model/ExportJobProperties.h>
#include <aws/healthlake/model/FHIRVersion.h>
#include <aws/healthlake/model/GetDataTransformationProfileRequest.h>
#include <aws/healthlake/model/GetDataTransformationProfileResult.h>
#include <aws/healthlake/model/IdentityProviderConfiguration.h>
#include <aws/healthlake/model/ImportJobProperties.h>
#include <aws/healthlake/model/InputDataConfig.h>
#include <aws/healthlake/model/JobProgressReport.h>
#include <aws/healthlake/model/JobStatus.h>
#include <aws/healthlake/model/KmsEncryptionConfig.h>
#include <aws/healthlake/model/ListDataTransformationJobsRequest.h>
#include <aws/healthlake/model/ListDataTransformationJobsResult.h>
#include <aws/healthlake/model/ListDataTransformationProfileVersionsRequest.h>
#include <aws/healthlake/model/ListDataTransformationProfileVersionsResult.h>
#include <aws/healthlake/model/ListDataTransformationProfilesRequest.h>
#include <aws/healthlake/model/ListDataTransformationProfilesResult.h>
#include <aws/healthlake/model/ListFHIRDatastoresRequest.h>
#include <aws/healthlake/model/ListFHIRDatastoresResult.h>
#include <aws/healthlake/model/ListFHIRExportJobsRequest.h>
#include <aws/healthlake/model/ListFHIRExportJobsResult.h>
#include <aws/healthlake/model/ListFHIRImportJobsRequest.h>
#include <aws/healthlake/model/ListFHIRImportJobsResult.h>
#include <aws/healthlake/model/ListTagsForResourceRequest.h>
#include <aws/healthlake/model/ListTagsForResourceResult.h>
#include <aws/healthlake/model/NlpConfiguration.h>
#include <aws/healthlake/model/NlpStatus.h>
#include <aws/healthlake/model/OutputDataConfig.h>
#include <aws/healthlake/model/PreloadDataConfig.h>
#include <aws/healthlake/model/PreloadDataType.h>
#include <aws/healthlake/model/ProfileConfiguration.h>
#include <aws/healthlake/model/ProfileMappingSource.h>
#include <aws/healthlake/model/PublishDataTransformationProfileRequest.h>
#include <aws/healthlake/model/PublishDataTransformationProfileResult.h>
#include <aws/healthlake/model/S3Configuration.h>
#include <aws/healthlake/model/SampleDataSource.h>
#include <aws/healthlake/model/SourceFormat.h>
#include <aws/healthlake/model/SseConfiguration.h>
#include <aws/healthlake/model/StartDataTransformationJobRequest.h>
#include <aws/healthlake/model/StartDataTransformationJobResult.h>
#include <aws/healthlake/model/StartFHIRExportJobRequest.h>
#include <aws/healthlake/model/StartFHIRExportJobResult.h>
#include <aws/healthlake/model/StartFHIRImportJobRequest.h>
#include <aws/healthlake/model/StartFHIRImportJobResult.h>
#include <aws/healthlake/model/StarterProfileSource.h>
#include <aws/healthlake/model/Tag.h>
#include <aws/healthlake/model/TagResourceRequest.h>
#include <aws/healthlake/model/TagResourceResult.h>
#include <aws/healthlake/model/TargetFormat.h>
#include <aws/healthlake/model/TransformationInputDataConfig.h>
#include <aws/healthlake/model/TransformationJobProgressReport.h>
#include <aws/healthlake/model/TransformationJobProperties.h>
#include <aws/healthlake/model/TransformationJobStatus.h>
#include <aws/healthlake/model/TransformationJobSummary.h>
#include <aws/healthlake/model/TransformationOutputDataConfig.h>
#include <aws/healthlake/model/UntagResourceRequest.h>
#include <aws/healthlake/model/UntagResourceResult.h>
#include <aws/healthlake/model/UpdateDataTransformationProfileRequest.h>
#include <aws/healthlake/model/UpdateDataTransformationProfileResult.h>
#include <aws/healthlake/model/UpdateFHIRDatastoreRequest.h>
#include <aws/healthlake/model/UpdateFHIRDatastoreResult.h>
#include <aws/healthlake/model/UpdateProfileWithAgentRequest.h>
#include <aws/healthlake/model/UpdateProfileWithAgentResult.h>
#include <aws/healthlake/model/ValidationLevel.h>

using HealthLakeIncludeTest = ::testing::Test;

TEST_F(HealthLakeIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::HealthLake::HealthLakeClient>("HealthLakeIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
