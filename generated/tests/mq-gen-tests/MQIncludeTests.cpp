/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/mq/MQClient.h>
#include <aws/mq/MQEndpointProvider.h>
#include <aws/mq/MQEndpointRules.h>
#include <aws/mq/MQErrorMarshaller.h>
#include <aws/mq/MQErrors.h>
#include <aws/mq/MQRequest.h>
#include <aws/mq/MQServiceClientModel.h>
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/model/ActionRequired.h>
#include <aws/mq/model/AuthenticationStrategy.h>
#include <aws/mq/model/AvailabilityZone.h>
#include <aws/mq/model/BadRequestException.h>
#include <aws/mq/model/BrokerEngineType.h>
#include <aws/mq/model/BrokerInstance.h>
#include <aws/mq/model/BrokerInstanceOption.h>
#include <aws/mq/model/BrokerState.h>
#include <aws/mq/model/BrokerStorageType.h>
#include <aws/mq/model/BrokerSummary.h>
#include <aws/mq/model/ChangeType.h>
#include <aws/mq/model/Configuration.h>
#include <aws/mq/model/ConfigurationId.h>
#include <aws/mq/model/ConfigurationRevision.h>
#include <aws/mq/model/Configurations.h>
#include <aws/mq/model/ConflictException.h>
#include <aws/mq/model/CreateBrokerRequest.h>
#include <aws/mq/model/CreateBrokerResult.h>
#include <aws/mq/model/CreateConfigurationRequest.h>
#include <aws/mq/model/CreateConfigurationResult.h>
#include <aws/mq/model/CreateTagsRequest.h>
#include <aws/mq/model/CreateUserRequest.h>
#include <aws/mq/model/CreateUserResult.h>
#include <aws/mq/model/DataReplicationCounterpart.h>
#include <aws/mq/model/DataReplicationMetadataOutput.h>
#include <aws/mq/model/DataReplicationMode.h>
#include <aws/mq/model/DayOfWeek.h>
#include <aws/mq/model/DeleteBrokerRequest.h>
#include <aws/mq/model/DeleteBrokerResult.h>
#include <aws/mq/model/DeleteConfigurationRequest.h>
#include <aws/mq/model/DeleteConfigurationResult.h>
#include <aws/mq/model/DeleteTagsRequest.h>
#include <aws/mq/model/DeleteUserRequest.h>
#include <aws/mq/model/DeleteUserResult.h>
#include <aws/mq/model/DeploymentMode.h>
#include <aws/mq/model/DescribeBrokerEngineTypesRequest.h>
#include <aws/mq/model/DescribeBrokerEngineTypesResult.h>
#include <aws/mq/model/DescribeBrokerInstanceOptionsRequest.h>
#include <aws/mq/model/DescribeBrokerInstanceOptionsResult.h>
#include <aws/mq/model/DescribeBrokerRequest.h>
#include <aws/mq/model/DescribeBrokerResult.h>
#include <aws/mq/model/DescribeConfigurationRequest.h>
#include <aws/mq/model/DescribeConfigurationResult.h>
#include <aws/mq/model/DescribeConfigurationRevisionRequest.h>
#include <aws/mq/model/DescribeConfigurationRevisionResult.h>
#include <aws/mq/model/DescribeUserRequest.h>
#include <aws/mq/model/DescribeUserResult.h>
#include <aws/mq/model/EncryptionOptions.h>
#include <aws/mq/model/EngineType.h>
#include <aws/mq/model/EngineVersion.h>
#include <aws/mq/model/ForbiddenException.h>
#include <aws/mq/model/InternalServerErrorException.h>
#include <aws/mq/model/LdapServerMetadataInput.h>
#include <aws/mq/model/LdapServerMetadataOutput.h>
#include <aws/mq/model/ListBrokersRequest.h>
#include <aws/mq/model/ListBrokersResult.h>
#include <aws/mq/model/ListConfigurationRevisionsRequest.h>
#include <aws/mq/model/ListConfigurationRevisionsResult.h>
#include <aws/mq/model/ListConfigurationsRequest.h>
#include <aws/mq/model/ListConfigurationsResult.h>
#include <aws/mq/model/ListTagsRequest.h>
#include <aws/mq/model/ListTagsResult.h>
#include <aws/mq/model/ListUsersRequest.h>
#include <aws/mq/model/ListUsersResult.h>
#include <aws/mq/model/Logs.h>
#include <aws/mq/model/LogsSummary.h>
#include <aws/mq/model/NotFoundException.h>
#include <aws/mq/model/PendingLogs.h>
#include <aws/mq/model/PromoteMode.h>
#include <aws/mq/model/PromoteRequest.h>
#include <aws/mq/model/PromoteResult.h>
#include <aws/mq/model/RebootBrokerRequest.h>
#include <aws/mq/model/RebootBrokerResult.h>
#include <aws/mq/model/SanitizationWarning.h>
#include <aws/mq/model/SanitizationWarningReason.h>
#include <aws/mq/model/UnauthorizedException.h>
#include <aws/mq/model/UpdateBrokerRequest.h>
#include <aws/mq/model/UpdateBrokerResult.h>
#include <aws/mq/model/UpdateConfigurationRequest.h>
#include <aws/mq/model/UpdateConfigurationResult.h>
#include <aws/mq/model/UpdateUserRequest.h>
#include <aws/mq/model/UpdateUserResult.h>
#include <aws/mq/model/User.h>
#include <aws/mq/model/UserPendingChanges.h>
#include <aws/mq/model/UserSummary.h>
#include <aws/mq/model/WeeklyStartTime.h>

using MQIncludeTest = ::testing::Test;

TEST_F(MQIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::MQ::MQClient>("MQIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
