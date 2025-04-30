/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/securitylake/SecurityLakeClient.h>
#include <aws/securitylake/SecurityLakeEndpointProvider.h>
#include <aws/securitylake/SecurityLakeEndpointRules.h>
#include <aws/securitylake/SecurityLakeErrorMarshaller.h>
#include <aws/securitylake/SecurityLakeErrors.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/securitylake/SecurityLakeServiceClientModel.h>
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/AccessDeniedException.h>
#include <aws/securitylake/model/AccessType.h>
#include <aws/securitylake/model/AwsIdentity.h>
#include <aws/securitylake/model/AwsLogSourceConfiguration.h>
#include <aws/securitylake/model/AwsLogSourceName.h>
#include <aws/securitylake/model/AwsLogSourceResource.h>
#include <aws/securitylake/model/ConflictException.h>
#include <aws/securitylake/model/CreateAwsLogSourceRequest.h>
#include <aws/securitylake/model/CreateAwsLogSourceResult.h>
#include <aws/securitylake/model/CreateCustomLogSourceRequest.h>
#include <aws/securitylake/model/CreateCustomLogSourceResult.h>
#include <aws/securitylake/model/CreateDataLakeExceptionSubscriptionRequest.h>
#include <aws/securitylake/model/CreateDataLakeExceptionSubscriptionResult.h>
#include <aws/securitylake/model/CreateDataLakeOrganizationConfigurationRequest.h>
#include <aws/securitylake/model/CreateDataLakeOrganizationConfigurationResult.h>
#include <aws/securitylake/model/CreateDataLakeRequest.h>
#include <aws/securitylake/model/CreateDataLakeResult.h>
#include <aws/securitylake/model/CreateSubscriberNotificationRequest.h>
#include <aws/securitylake/model/CreateSubscriberNotificationResult.h>
#include <aws/securitylake/model/CreateSubscriberRequest.h>
#include <aws/securitylake/model/CreateSubscriberResult.h>
#include <aws/securitylake/model/CustomLogSourceAttributes.h>
#include <aws/securitylake/model/CustomLogSourceConfiguration.h>
#include <aws/securitylake/model/CustomLogSourceCrawlerConfiguration.h>
#include <aws/securitylake/model/CustomLogSourceProvider.h>
#include <aws/securitylake/model/CustomLogSourceResource.h>
#include <aws/securitylake/model/DataLakeAutoEnableNewAccountConfiguration.h>
#include <aws/securitylake/model/DataLakeConfiguration.h>
#include <aws/securitylake/model/DataLakeEncryptionConfiguration.h>
#include <aws/securitylake/model/DataLakeException.h>
#include <aws/securitylake/model/DataLakeLifecycleConfiguration.h>
#include <aws/securitylake/model/DataLakeLifecycleExpiration.h>
#include <aws/securitylake/model/DataLakeLifecycleTransition.h>
#include <aws/securitylake/model/DataLakeReplicationConfiguration.h>
#include <aws/securitylake/model/DataLakeResource.h>
#include <aws/securitylake/model/DataLakeSource.h>
#include <aws/securitylake/model/DataLakeSourceStatus.h>
#include <aws/securitylake/model/DataLakeStatus.h>
#include <aws/securitylake/model/DataLakeUpdateException.h>
#include <aws/securitylake/model/DataLakeUpdateStatus.h>
#include <aws/securitylake/model/DeleteAwsLogSourceRequest.h>
#include <aws/securitylake/model/DeleteAwsLogSourceResult.h>
#include <aws/securitylake/model/DeleteCustomLogSourceRequest.h>
#include <aws/securitylake/model/DeleteCustomLogSourceResult.h>
#include <aws/securitylake/model/DeleteDataLakeExceptionSubscriptionRequest.h>
#include <aws/securitylake/model/DeleteDataLakeExceptionSubscriptionResult.h>
#include <aws/securitylake/model/DeleteDataLakeOrganizationConfigurationRequest.h>
#include <aws/securitylake/model/DeleteDataLakeOrganizationConfigurationResult.h>
#include <aws/securitylake/model/DeleteDataLakeRequest.h>
#include <aws/securitylake/model/DeleteDataLakeResult.h>
#include <aws/securitylake/model/DeleteSubscriberNotificationRequest.h>
#include <aws/securitylake/model/DeleteSubscriberNotificationResult.h>
#include <aws/securitylake/model/DeleteSubscriberRequest.h>
#include <aws/securitylake/model/DeleteSubscriberResult.h>
#include <aws/securitylake/model/DeregisterDataLakeDelegatedAdministratorRequest.h>
#include <aws/securitylake/model/DeregisterDataLakeDelegatedAdministratorResult.h>
#include <aws/securitylake/model/GetDataLakeExceptionSubscriptionRequest.h>
#include <aws/securitylake/model/GetDataLakeExceptionSubscriptionResult.h>
#include <aws/securitylake/model/GetDataLakeOrganizationConfigurationRequest.h>
#include <aws/securitylake/model/GetDataLakeOrganizationConfigurationResult.h>
#include <aws/securitylake/model/GetDataLakeSourcesRequest.h>
#include <aws/securitylake/model/GetDataLakeSourcesResult.h>
#include <aws/securitylake/model/GetSubscriberRequest.h>
#include <aws/securitylake/model/GetSubscriberResult.h>
#include <aws/securitylake/model/HttpMethod.h>
#include <aws/securitylake/model/HttpsNotificationConfiguration.h>
#include <aws/securitylake/model/ListDataLakeExceptionsRequest.h>
#include <aws/securitylake/model/ListDataLakeExceptionsResult.h>
#include <aws/securitylake/model/ListDataLakesRequest.h>
#include <aws/securitylake/model/ListDataLakesResult.h>
#include <aws/securitylake/model/ListLogSourcesRequest.h>
#include <aws/securitylake/model/ListLogSourcesResult.h>
#include <aws/securitylake/model/ListSubscribersRequest.h>
#include <aws/securitylake/model/ListSubscribersResult.h>
#include <aws/securitylake/model/ListTagsForResourceRequest.h>
#include <aws/securitylake/model/ListTagsForResourceResult.h>
#include <aws/securitylake/model/LogSource.h>
#include <aws/securitylake/model/LogSourceResource.h>
#include <aws/securitylake/model/NotificationConfiguration.h>
#include <aws/securitylake/model/RegisterDataLakeDelegatedAdministratorRequest.h>
#include <aws/securitylake/model/RegisterDataLakeDelegatedAdministratorResult.h>
#include <aws/securitylake/model/ResourceNotFoundException.h>
#include <aws/securitylake/model/SourceCollectionStatus.h>
#include <aws/securitylake/model/SqsNotificationConfiguration.h>
#include <aws/securitylake/model/SubscriberResource.h>
#include <aws/securitylake/model/SubscriberStatus.h>
#include <aws/securitylake/model/Tag.h>
#include <aws/securitylake/model/TagResourceRequest.h>
#include <aws/securitylake/model/TagResourceResult.h>
#include <aws/securitylake/model/ThrottlingException.h>
#include <aws/securitylake/model/UntagResourceRequest.h>
#include <aws/securitylake/model/UntagResourceResult.h>
#include <aws/securitylake/model/UpdateDataLakeExceptionSubscriptionRequest.h>
#include <aws/securitylake/model/UpdateDataLakeExceptionSubscriptionResult.h>
#include <aws/securitylake/model/UpdateDataLakeRequest.h>
#include <aws/securitylake/model/UpdateDataLakeResult.h>
#include <aws/securitylake/model/UpdateSubscriberNotificationRequest.h>
#include <aws/securitylake/model/UpdateSubscriberNotificationResult.h>
#include <aws/securitylake/model/UpdateSubscriberRequest.h>
#include <aws/securitylake/model/UpdateSubscriberResult.h>

using SecurityLakeIncludeTest = ::testing::Test;

TEST_F(SecurityLakeIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SecurityLake::SecurityLakeClient>("SecurityLakeIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
