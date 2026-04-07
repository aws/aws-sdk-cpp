/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/s3files/S3FilesClient.h>
#include <aws/s3files/S3FilesEndpointProvider.h>
#include <aws/s3files/S3FilesEndpointRules.h>
#include <aws/s3files/S3FilesErrorMarshaller.h>
#include <aws/s3files/S3FilesErrors.h>
#include <aws/s3files/S3FilesRequest.h>
#include <aws/s3files/S3FilesServiceClientModel.h>
#include <aws/s3files/S3Files_EXPORTS.h>
#include <aws/s3files/model/ConflictException.h>
#include <aws/s3files/model/CreateAccessPointRequest.h>
#include <aws/s3files/model/CreateAccessPointResult.h>
#include <aws/s3files/model/CreateFileSystemRequest.h>
#include <aws/s3files/model/CreateFileSystemResult.h>
#include <aws/s3files/model/CreateMountTargetRequest.h>
#include <aws/s3files/model/CreateMountTargetResult.h>
#include <aws/s3files/model/CreationPermissions.h>
#include <aws/s3files/model/DeleteAccessPointRequest.h>
#include <aws/s3files/model/DeleteFileSystemPolicyRequest.h>
#include <aws/s3files/model/DeleteFileSystemRequest.h>
#include <aws/s3files/model/DeleteMountTargetRequest.h>
#include <aws/s3files/model/ExpirationDataRule.h>
#include <aws/s3files/model/GetAccessPointRequest.h>
#include <aws/s3files/model/GetAccessPointResult.h>
#include <aws/s3files/model/GetFileSystemPolicyRequest.h>
#include <aws/s3files/model/GetFileSystemPolicyResult.h>
#include <aws/s3files/model/GetFileSystemRequest.h>
#include <aws/s3files/model/GetFileSystemResult.h>
#include <aws/s3files/model/GetMountTargetRequest.h>
#include <aws/s3files/model/GetMountTargetResult.h>
#include <aws/s3files/model/GetSynchronizationConfigurationRequest.h>
#include <aws/s3files/model/GetSynchronizationConfigurationResult.h>
#include <aws/s3files/model/ImportDataRule.h>
#include <aws/s3files/model/ImportTrigger.h>
#include <aws/s3files/model/InternalServerException.h>
#include <aws/s3files/model/IpAddressType.h>
#include <aws/s3files/model/LifeCycleState.h>
#include <aws/s3files/model/ListAccessPointsDescription.h>
#include <aws/s3files/model/ListAccessPointsRequest.h>
#include <aws/s3files/model/ListAccessPointsResult.h>
#include <aws/s3files/model/ListFileSystemsDescription.h>
#include <aws/s3files/model/ListFileSystemsRequest.h>
#include <aws/s3files/model/ListFileSystemsResult.h>
#include <aws/s3files/model/ListMountTargetsDescription.h>
#include <aws/s3files/model/ListMountTargetsRequest.h>
#include <aws/s3files/model/ListMountTargetsResult.h>
#include <aws/s3files/model/ListTagsForResourceRequest.h>
#include <aws/s3files/model/ListTagsForResourceResult.h>
#include <aws/s3files/model/PosixUser.h>
#include <aws/s3files/model/PutFileSystemPolicyRequest.h>
#include <aws/s3files/model/PutFileSystemPolicyResult.h>
#include <aws/s3files/model/PutSynchronizationConfigurationRequest.h>
#include <aws/s3files/model/PutSynchronizationConfigurationResult.h>
#include <aws/s3files/model/ResourceNotFoundException.h>
#include <aws/s3files/model/RootDirectory.h>
#include <aws/s3files/model/ServiceQuotaExceededException.h>
#include <aws/s3files/model/Tag.h>
#include <aws/s3files/model/TagResourceRequest.h>
#include <aws/s3files/model/ThrottlingException.h>
#include <aws/s3files/model/UntagResourceRequest.h>
#include <aws/s3files/model/UpdateMountTargetRequest.h>
#include <aws/s3files/model/UpdateMountTargetResult.h>
#include <aws/s3files/model/ValidationException.h>

using S3FilesIncludeTest = ::testing::Test;

TEST_F(S3FilesIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::S3Files::S3FilesClient>("S3FilesIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
