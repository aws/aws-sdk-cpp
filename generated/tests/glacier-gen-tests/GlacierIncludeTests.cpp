/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/glacier/GlacierClient.h>
#include <aws/glacier/GlacierEndpointProvider.h>
#include <aws/glacier/GlacierEndpointRules.h>
#include <aws/glacier/GlacierErrorMarshaller.h>
#include <aws/glacier/GlacierErrors.h>
#include <aws/glacier/GlacierRequest.h>
#include <aws/glacier/GlacierServiceClientModel.h>
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/model/AbortMultipartUploadRequest.h>
#include <aws/glacier/model/AbortVaultLockRequest.h>
#include <aws/glacier/model/ActionCode.h>
#include <aws/glacier/model/AddTagsToVaultRequest.h>
#include <aws/glacier/model/CSVInput.h>
#include <aws/glacier/model/CSVOutput.h>
#include <aws/glacier/model/CannedACL.h>
#include <aws/glacier/model/CompleteMultipartUploadRequest.h>
#include <aws/glacier/model/CompleteMultipartUploadResult.h>
#include <aws/glacier/model/CompleteVaultLockRequest.h>
#include <aws/glacier/model/CreateVaultRequest.h>
#include <aws/glacier/model/CreateVaultResult.h>
#include <aws/glacier/model/DataRetrievalPolicy.h>
#include <aws/glacier/model/DataRetrievalRule.h>
#include <aws/glacier/model/DeleteArchiveRequest.h>
#include <aws/glacier/model/DeleteVaultAccessPolicyRequest.h>
#include <aws/glacier/model/DeleteVaultNotificationsRequest.h>
#include <aws/glacier/model/DeleteVaultRequest.h>
#include <aws/glacier/model/DescribeJobRequest.h>
#include <aws/glacier/model/DescribeJobResult.h>
#include <aws/glacier/model/DescribeVaultOutput.h>
#include <aws/glacier/model/DescribeVaultRequest.h>
#include <aws/glacier/model/DescribeVaultResult.h>
#include <aws/glacier/model/Encryption.h>
#include <aws/glacier/model/EncryptionType.h>
#include <aws/glacier/model/ExpressionType.h>
#include <aws/glacier/model/FileHeaderInfo.h>
#include <aws/glacier/model/GetDataRetrievalPolicyRequest.h>
#include <aws/glacier/model/GetDataRetrievalPolicyResult.h>
#include <aws/glacier/model/GetJobOutputRequest.h>
#include <aws/glacier/model/GetJobOutputResult.h>
#include <aws/glacier/model/GetVaultAccessPolicyRequest.h>
#include <aws/glacier/model/GetVaultAccessPolicyResult.h>
#include <aws/glacier/model/GetVaultLockRequest.h>
#include <aws/glacier/model/GetVaultLockResult.h>
#include <aws/glacier/model/GetVaultNotificationsRequest.h>
#include <aws/glacier/model/GetVaultNotificationsResult.h>
#include <aws/glacier/model/GlacierJobDescription.h>
#include <aws/glacier/model/Grant.h>
#include <aws/glacier/model/Grantee.h>
#include <aws/glacier/model/InitiateJobRequest.h>
#include <aws/glacier/model/InitiateJobResult.h>
#include <aws/glacier/model/InitiateMultipartUploadRequest.h>
#include <aws/glacier/model/InitiateMultipartUploadResult.h>
#include <aws/glacier/model/InitiateVaultLockRequest.h>
#include <aws/glacier/model/InitiateVaultLockResult.h>
#include <aws/glacier/model/InputSerialization.h>
#include <aws/glacier/model/InsufficientCapacityException.h>
#include <aws/glacier/model/InvalidParameterValueException.h>
#include <aws/glacier/model/InventoryRetrievalJobDescription.h>
#include <aws/glacier/model/InventoryRetrievalJobInput.h>
#include <aws/glacier/model/JobParameters.h>
#include <aws/glacier/model/LimitExceededException.h>
#include <aws/glacier/model/ListJobsRequest.h>
#include <aws/glacier/model/ListJobsResult.h>
#include <aws/glacier/model/ListMultipartUploadsRequest.h>
#include <aws/glacier/model/ListMultipartUploadsResult.h>
#include <aws/glacier/model/ListPartsRequest.h>
#include <aws/glacier/model/ListPartsResult.h>
#include <aws/glacier/model/ListProvisionedCapacityRequest.h>
#include <aws/glacier/model/ListProvisionedCapacityResult.h>
#include <aws/glacier/model/ListTagsForVaultRequest.h>
#include <aws/glacier/model/ListTagsForVaultResult.h>
#include <aws/glacier/model/ListVaultsRequest.h>
#include <aws/glacier/model/ListVaultsResult.h>
#include <aws/glacier/model/MissingParameterValueException.h>
#include <aws/glacier/model/OutputLocation.h>
#include <aws/glacier/model/OutputSerialization.h>
#include <aws/glacier/model/PartListElement.h>
#include <aws/glacier/model/Permission.h>
#include <aws/glacier/model/PolicyEnforcedException.h>
#include <aws/glacier/model/ProvisionedCapacityDescription.h>
#include <aws/glacier/model/PurchaseProvisionedCapacityRequest.h>
#include <aws/glacier/model/PurchaseProvisionedCapacityResult.h>
#include <aws/glacier/model/QuoteFields.h>
#include <aws/glacier/model/RemoveTagsFromVaultRequest.h>
#include <aws/glacier/model/RequestTimeoutException.h>
#include <aws/glacier/model/ResourceNotFoundException.h>
#include <aws/glacier/model/S3Location.h>
#include <aws/glacier/model/SelectParameters.h>
#include <aws/glacier/model/ServiceUnavailableException.h>
#include <aws/glacier/model/SetDataRetrievalPolicyRequest.h>
#include <aws/glacier/model/SetVaultAccessPolicyRequest.h>
#include <aws/glacier/model/SetVaultNotificationsRequest.h>
#include <aws/glacier/model/StatusCode.h>
#include <aws/glacier/model/StorageClass.h>
#include <aws/glacier/model/Type.h>
#include <aws/glacier/model/UploadArchiveRequest.h>
#include <aws/glacier/model/UploadArchiveResult.h>
#include <aws/glacier/model/UploadListElement.h>
#include <aws/glacier/model/UploadMultipartPartRequest.h>
#include <aws/glacier/model/UploadMultipartPartResult.h>
#include <aws/glacier/model/VaultAccessPolicy.h>
#include <aws/glacier/model/VaultLockPolicy.h>
#include <aws/glacier/model/VaultNotificationConfig.h>

using GlacierIncludeTest = ::testing::Test;

TEST_F(GlacierIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Glacier::GlacierClient>("GlacierIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
