/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/secretsmanager/SecretsManagerClient.h>
#include <aws/secretsmanager/SecretsManagerEndpointProvider.h>
#include <aws/secretsmanager/SecretsManagerEndpointRules.h>
#include <aws/secretsmanager/SecretsManagerErrorMarshaller.h>
#include <aws/secretsmanager/SecretsManagerErrors.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/secretsmanager/SecretsManagerServiceClientModel.h>
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/model/APIErrorType.h>
#include <aws/secretsmanager/model/BatchGetSecretValueRequest.h>
#include <aws/secretsmanager/model/BatchGetSecretValueResult.h>
#include <aws/secretsmanager/model/CancelRotateSecretRequest.h>
#include <aws/secretsmanager/model/CancelRotateSecretResult.h>
#include <aws/secretsmanager/model/CreateSecretRequest.h>
#include <aws/secretsmanager/model/CreateSecretResult.h>
#include <aws/secretsmanager/model/DeleteResourcePolicyRequest.h>
#include <aws/secretsmanager/model/DeleteResourcePolicyResult.h>
#include <aws/secretsmanager/model/DeleteSecretRequest.h>
#include <aws/secretsmanager/model/DeleteSecretResult.h>
#include <aws/secretsmanager/model/DescribeSecretRequest.h>
#include <aws/secretsmanager/model/DescribeSecretResult.h>
#include <aws/secretsmanager/model/Filter.h>
#include <aws/secretsmanager/model/FilterNameStringType.h>
#include <aws/secretsmanager/model/GetRandomPasswordRequest.h>
#include <aws/secretsmanager/model/GetRandomPasswordResult.h>
#include <aws/secretsmanager/model/GetResourcePolicyRequest.h>
#include <aws/secretsmanager/model/GetResourcePolicyResult.h>
#include <aws/secretsmanager/model/GetSecretValueRequest.h>
#include <aws/secretsmanager/model/GetSecretValueResult.h>
#include <aws/secretsmanager/model/ListSecretVersionIdsRequest.h>
#include <aws/secretsmanager/model/ListSecretVersionIdsResult.h>
#include <aws/secretsmanager/model/ListSecretsRequest.h>
#include <aws/secretsmanager/model/ListSecretsResult.h>
#include <aws/secretsmanager/model/PutResourcePolicyRequest.h>
#include <aws/secretsmanager/model/PutResourcePolicyResult.h>
#include <aws/secretsmanager/model/PutSecretValueRequest.h>
#include <aws/secretsmanager/model/PutSecretValueResult.h>
#include <aws/secretsmanager/model/RemoveRegionsFromReplicationRequest.h>
#include <aws/secretsmanager/model/RemoveRegionsFromReplicationResult.h>
#include <aws/secretsmanager/model/ReplicaRegionType.h>
#include <aws/secretsmanager/model/ReplicateSecretToRegionsRequest.h>
#include <aws/secretsmanager/model/ReplicateSecretToRegionsResult.h>
#include <aws/secretsmanager/model/ReplicationStatusType.h>
#include <aws/secretsmanager/model/RestoreSecretRequest.h>
#include <aws/secretsmanager/model/RestoreSecretResult.h>
#include <aws/secretsmanager/model/RotateSecretRequest.h>
#include <aws/secretsmanager/model/RotateSecretResult.h>
#include <aws/secretsmanager/model/RotationRulesType.h>
#include <aws/secretsmanager/model/SecretListEntry.h>
#include <aws/secretsmanager/model/SecretValueEntry.h>
#include <aws/secretsmanager/model/SecretVersionsListEntry.h>
#include <aws/secretsmanager/model/SortOrderType.h>
#include <aws/secretsmanager/model/StatusType.h>
#include <aws/secretsmanager/model/StopReplicationToReplicaRequest.h>
#include <aws/secretsmanager/model/StopReplicationToReplicaResult.h>
#include <aws/secretsmanager/model/Tag.h>
#include <aws/secretsmanager/model/TagResourceRequest.h>
#include <aws/secretsmanager/model/UntagResourceRequest.h>
#include <aws/secretsmanager/model/UpdateSecretRequest.h>
#include <aws/secretsmanager/model/UpdateSecretResult.h>
#include <aws/secretsmanager/model/UpdateSecretVersionStageRequest.h>
#include <aws/secretsmanager/model/UpdateSecretVersionStageResult.h>
#include <aws/secretsmanager/model/ValidateResourcePolicyRequest.h>
#include <aws/secretsmanager/model/ValidateResourcePolicyResult.h>
#include <aws/secretsmanager/model/ValidationErrorsEntry.h>

using SecretsManagerIncludeTest = ::testing::Test;

TEST_F(SecretsManagerIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SecretsManager::SecretsManagerClient>("SecretsManagerIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
