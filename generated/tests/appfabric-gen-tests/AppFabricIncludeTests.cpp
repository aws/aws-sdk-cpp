/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/appfabric/AppFabricClient.h>
#include <aws/appfabric/AppFabricEndpointProvider.h>
#include <aws/appfabric/AppFabricEndpointRules.h>
#include <aws/appfabric/AppFabricErrorMarshaller.h>
#include <aws/appfabric/AppFabricErrors.h>
#include <aws/appfabric/AppFabricRequest.h>
#include <aws/appfabric/AppFabricServiceClientModel.h>
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/model/ApiKeyCredential.h>
#include <aws/appfabric/model/AppAuthorization.h>
#include <aws/appfabric/model/AppAuthorizationStatus.h>
#include <aws/appfabric/model/AppAuthorizationSummary.h>
#include <aws/appfabric/model/AppBundle.h>
#include <aws/appfabric/model/AppBundleSummary.h>
#include <aws/appfabric/model/AuditLogDestinationConfiguration.h>
#include <aws/appfabric/model/AuditLogProcessingConfiguration.h>
#include <aws/appfabric/model/AuthRequest.h>
#include <aws/appfabric/model/AuthType.h>
#include <aws/appfabric/model/BatchGetUserAccessTasksRequest.h>
#include <aws/appfabric/model/BatchGetUserAccessTasksResult.h>
#include <aws/appfabric/model/ConflictException.h>
#include <aws/appfabric/model/ConnectAppAuthorizationRequest.h>
#include <aws/appfabric/model/ConnectAppAuthorizationResult.h>
#include <aws/appfabric/model/CreateAppAuthorizationRequest.h>
#include <aws/appfabric/model/CreateAppAuthorizationResult.h>
#include <aws/appfabric/model/CreateAppBundleRequest.h>
#include <aws/appfabric/model/CreateAppBundleResult.h>
#include <aws/appfabric/model/CreateIngestionDestinationRequest.h>
#include <aws/appfabric/model/CreateIngestionDestinationResult.h>
#include <aws/appfabric/model/CreateIngestionRequest.h>
#include <aws/appfabric/model/CreateIngestionResult.h>
#include <aws/appfabric/model/Credential.h>
#include <aws/appfabric/model/DeleteAppAuthorizationRequest.h>
#include <aws/appfabric/model/DeleteAppAuthorizationResult.h>
#include <aws/appfabric/model/DeleteAppBundleRequest.h>
#include <aws/appfabric/model/DeleteAppBundleResult.h>
#include <aws/appfabric/model/DeleteIngestionDestinationRequest.h>
#include <aws/appfabric/model/DeleteIngestionDestinationResult.h>
#include <aws/appfabric/model/DeleteIngestionRequest.h>
#include <aws/appfabric/model/DeleteIngestionResult.h>
#include <aws/appfabric/model/Destination.h>
#include <aws/appfabric/model/DestinationConfiguration.h>
#include <aws/appfabric/model/FirehoseStream.h>
#include <aws/appfabric/model/Format.h>
#include <aws/appfabric/model/GetAppAuthorizationRequest.h>
#include <aws/appfabric/model/GetAppAuthorizationResult.h>
#include <aws/appfabric/model/GetAppBundleRequest.h>
#include <aws/appfabric/model/GetAppBundleResult.h>
#include <aws/appfabric/model/GetIngestionDestinationRequest.h>
#include <aws/appfabric/model/GetIngestionDestinationResult.h>
#include <aws/appfabric/model/GetIngestionRequest.h>
#include <aws/appfabric/model/GetIngestionResult.h>
#include <aws/appfabric/model/Ingestion.h>
#include <aws/appfabric/model/IngestionDestination.h>
#include <aws/appfabric/model/IngestionDestinationStatus.h>
#include <aws/appfabric/model/IngestionDestinationSummary.h>
#include <aws/appfabric/model/IngestionState.h>
#include <aws/appfabric/model/IngestionSummary.h>
#include <aws/appfabric/model/IngestionType.h>
#include <aws/appfabric/model/InternalServerException.h>
#include <aws/appfabric/model/ListAppAuthorizationsRequest.h>
#include <aws/appfabric/model/ListAppAuthorizationsResult.h>
#include <aws/appfabric/model/ListAppBundlesRequest.h>
#include <aws/appfabric/model/ListAppBundlesResult.h>
#include <aws/appfabric/model/ListIngestionDestinationsRequest.h>
#include <aws/appfabric/model/ListIngestionDestinationsResult.h>
#include <aws/appfabric/model/ListIngestionsRequest.h>
#include <aws/appfabric/model/ListIngestionsResult.h>
#include <aws/appfabric/model/ListTagsForResourceRequest.h>
#include <aws/appfabric/model/ListTagsForResourceResult.h>
#include <aws/appfabric/model/Oauth2Credential.h>
#include <aws/appfabric/model/Persona.h>
#include <aws/appfabric/model/ProcessingConfiguration.h>
#include <aws/appfabric/model/ResourceNotFoundException.h>
#include <aws/appfabric/model/ResultStatus.h>
#include <aws/appfabric/model/S3Bucket.h>
#include <aws/appfabric/model/Schema.h>
#include <aws/appfabric/model/ServiceQuotaExceededException.h>
#include <aws/appfabric/model/StartIngestionRequest.h>
#include <aws/appfabric/model/StartIngestionResult.h>
#include <aws/appfabric/model/StartUserAccessTasksRequest.h>
#include <aws/appfabric/model/StartUserAccessTasksResult.h>
#include <aws/appfabric/model/StopIngestionRequest.h>
#include <aws/appfabric/model/StopIngestionResult.h>
#include <aws/appfabric/model/Tag.h>
#include <aws/appfabric/model/TagResourceRequest.h>
#include <aws/appfabric/model/TagResourceResult.h>
#include <aws/appfabric/model/TaskError.h>
#include <aws/appfabric/model/Tenant.h>
#include <aws/appfabric/model/ThrottlingException.h>
#include <aws/appfabric/model/UntagResourceRequest.h>
#include <aws/appfabric/model/UntagResourceResult.h>
#include <aws/appfabric/model/UpdateAppAuthorizationRequest.h>
#include <aws/appfabric/model/UpdateAppAuthorizationResult.h>
#include <aws/appfabric/model/UpdateIngestionDestinationRequest.h>
#include <aws/appfabric/model/UpdateIngestionDestinationResult.h>
#include <aws/appfabric/model/UserAccessResultItem.h>
#include <aws/appfabric/model/UserAccessTaskItem.h>
#include <aws/appfabric/model/ValidationException.h>
#include <aws/appfabric/model/ValidationExceptionField.h>
#include <aws/appfabric/model/ValidationExceptionReason.h>

using AppFabricIncludeTest = ::testing::Test;

TEST_F(AppFabricIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::AppFabric::AppFabricClient>("AppFabricIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
