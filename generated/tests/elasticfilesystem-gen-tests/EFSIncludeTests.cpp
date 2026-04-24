/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/elasticfilesystem/EFSClient.h>
#include <aws/elasticfilesystem/EFSEndpointProvider.h>
#include <aws/elasticfilesystem/EFSEndpointRules.h>
#include <aws/elasticfilesystem/EFSErrorMarshaller.h>
#include <aws/elasticfilesystem/EFSErrors.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/elasticfilesystem/EFSServiceClientModel.h>
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/model/AccessPointAlreadyExists.h>
#include <aws/elasticfilesystem/model/AccessPointDescription.h>
#include <aws/elasticfilesystem/model/AccessPointLimitExceeded.h>
#include <aws/elasticfilesystem/model/AccessPointNotFound.h>
#include <aws/elasticfilesystem/model/AvailabilityZonesMismatch.h>
#include <aws/elasticfilesystem/model/BackupPolicy.h>
#include <aws/elasticfilesystem/model/BadRequest.h>
#include <aws/elasticfilesystem/model/ConflictException.h>
#include <aws/elasticfilesystem/model/CreateAccessPointRequest.h>
#include <aws/elasticfilesystem/model/CreateAccessPointResult.h>
#include <aws/elasticfilesystem/model/CreateFileSystemRequest.h>
#include <aws/elasticfilesystem/model/CreateFileSystemResult.h>
#include <aws/elasticfilesystem/model/CreateMountTargetRequest.h>
#include <aws/elasticfilesystem/model/CreateMountTargetResult.h>
#include <aws/elasticfilesystem/model/CreateReplicationConfigurationRequest.h>
#include <aws/elasticfilesystem/model/CreateReplicationConfigurationResult.h>
#include <aws/elasticfilesystem/model/CreationInfo.h>
#include <aws/elasticfilesystem/model/DeleteAccessPointRequest.h>
#include <aws/elasticfilesystem/model/DeleteFileSystemPolicyRequest.h>
#include <aws/elasticfilesystem/model/DeleteFileSystemRequest.h>
#include <aws/elasticfilesystem/model/DeleteMountTargetRequest.h>
#include <aws/elasticfilesystem/model/DeleteReplicationConfigurationRequest.h>
#include <aws/elasticfilesystem/model/DeletionMode.h>
#include <aws/elasticfilesystem/model/DependencyTimeout.h>
#include <aws/elasticfilesystem/model/DescribeAccessPointsRequest.h>
#include <aws/elasticfilesystem/model/DescribeAccessPointsResult.h>
#include <aws/elasticfilesystem/model/DescribeAccountPreferencesRequest.h>
#include <aws/elasticfilesystem/model/DescribeAccountPreferencesResult.h>
#include <aws/elasticfilesystem/model/DescribeBackupPolicyRequest.h>
#include <aws/elasticfilesystem/model/DescribeBackupPolicyResult.h>
#include <aws/elasticfilesystem/model/DescribeFileSystemPolicyRequest.h>
#include <aws/elasticfilesystem/model/DescribeFileSystemPolicyResult.h>
#include <aws/elasticfilesystem/model/DescribeFileSystemsRequest.h>
#include <aws/elasticfilesystem/model/DescribeFileSystemsResult.h>
#include <aws/elasticfilesystem/model/DescribeLifecycleConfigurationRequest.h>
#include <aws/elasticfilesystem/model/DescribeLifecycleConfigurationResult.h>
#include <aws/elasticfilesystem/model/DescribeMountTargetSecurityGroupsRequest.h>
#include <aws/elasticfilesystem/model/DescribeMountTargetSecurityGroupsResult.h>
#include <aws/elasticfilesystem/model/DescribeMountTargetsRequest.h>
#include <aws/elasticfilesystem/model/DescribeMountTargetsResult.h>
#include <aws/elasticfilesystem/model/DescribeReplicationConfigurationsRequest.h>
#include <aws/elasticfilesystem/model/DescribeReplicationConfigurationsResult.h>
#include <aws/elasticfilesystem/model/Destination.h>
#include <aws/elasticfilesystem/model/DestinationToCreate.h>
#include <aws/elasticfilesystem/model/FileSystemAlreadyExists.h>
#include <aws/elasticfilesystem/model/FileSystemDescription.h>
#include <aws/elasticfilesystem/model/FileSystemInUse.h>
#include <aws/elasticfilesystem/model/FileSystemLimitExceeded.h>
#include <aws/elasticfilesystem/model/FileSystemNotFound.h>
#include <aws/elasticfilesystem/model/FileSystemProtectionDescription.h>
#include <aws/elasticfilesystem/model/FileSystemSize.h>
#include <aws/elasticfilesystem/model/IncorrectFileSystemLifeCycleState.h>
#include <aws/elasticfilesystem/model/IncorrectMountTargetState.h>
#include <aws/elasticfilesystem/model/InsufficientThroughputCapacity.h>
#include <aws/elasticfilesystem/model/InternalServerError.h>
#include <aws/elasticfilesystem/model/InvalidPolicyException.h>
#include <aws/elasticfilesystem/model/IpAddressInUse.h>
#include <aws/elasticfilesystem/model/IpAddressType.h>
#include <aws/elasticfilesystem/model/LifeCycleState.h>
#include <aws/elasticfilesystem/model/LifecyclePolicy.h>
#include <aws/elasticfilesystem/model/ListTagsForResourceRequest.h>
#include <aws/elasticfilesystem/model/ListTagsForResourceResult.h>
#include <aws/elasticfilesystem/model/ModifyMountTargetSecurityGroupsRequest.h>
#include <aws/elasticfilesystem/model/MountTargetConflict.h>
#include <aws/elasticfilesystem/model/MountTargetDescription.h>
#include <aws/elasticfilesystem/model/MountTargetNotFound.h>
#include <aws/elasticfilesystem/model/NetworkInterfaceLimitExceeded.h>
#include <aws/elasticfilesystem/model/NoFreeAddressesInSubnet.h>
#include <aws/elasticfilesystem/model/PerformanceMode.h>
#include <aws/elasticfilesystem/model/PolicyNotFound.h>
#include <aws/elasticfilesystem/model/PosixUser.h>
#include <aws/elasticfilesystem/model/PutAccountPreferencesRequest.h>
#include <aws/elasticfilesystem/model/PutAccountPreferencesResult.h>
#include <aws/elasticfilesystem/model/PutBackupPolicyRequest.h>
#include <aws/elasticfilesystem/model/PutBackupPolicyResult.h>
#include <aws/elasticfilesystem/model/PutFileSystemPolicyRequest.h>
#include <aws/elasticfilesystem/model/PutFileSystemPolicyResult.h>
#include <aws/elasticfilesystem/model/PutLifecycleConfigurationRequest.h>
#include <aws/elasticfilesystem/model/PutLifecycleConfigurationResult.h>
#include <aws/elasticfilesystem/model/ReplicationAlreadyExists.h>
#include <aws/elasticfilesystem/model/ReplicationConfigurationDescription.h>
#include <aws/elasticfilesystem/model/ReplicationNotFound.h>
#include <aws/elasticfilesystem/model/ReplicationOverwriteProtection.h>
#include <aws/elasticfilesystem/model/ReplicationStatus.h>
#include <aws/elasticfilesystem/model/Resource.h>
#include <aws/elasticfilesystem/model/ResourceIdPreference.h>
#include <aws/elasticfilesystem/model/ResourceIdType.h>
#include <aws/elasticfilesystem/model/RootDirectory.h>
#include <aws/elasticfilesystem/model/SecurityGroupLimitExceeded.h>
#include <aws/elasticfilesystem/model/SecurityGroupNotFound.h>
#include <aws/elasticfilesystem/model/Status.h>
#include <aws/elasticfilesystem/model/SubnetNotFound.h>
#include <aws/elasticfilesystem/model/Tag.h>
#include <aws/elasticfilesystem/model/TagResourceRequest.h>
#include <aws/elasticfilesystem/model/ThrottlingException.h>
#include <aws/elasticfilesystem/model/ThroughputLimitExceeded.h>
#include <aws/elasticfilesystem/model/ThroughputMode.h>
#include <aws/elasticfilesystem/model/TooManyRequests.h>
#include <aws/elasticfilesystem/model/TransitionToArchiveRules.h>
#include <aws/elasticfilesystem/model/TransitionToIARules.h>
#include <aws/elasticfilesystem/model/TransitionToPrimaryStorageClassRules.h>
#include <aws/elasticfilesystem/model/UnsupportedAvailabilityZone.h>
#include <aws/elasticfilesystem/model/UntagResourceRequest.h>
#include <aws/elasticfilesystem/model/UpdateFileSystemProtectionRequest.h>
#include <aws/elasticfilesystem/model/UpdateFileSystemProtectionResult.h>
#include <aws/elasticfilesystem/model/UpdateFileSystemRequest.h>
#include <aws/elasticfilesystem/model/UpdateFileSystemResult.h>
#include <aws/elasticfilesystem/model/ValidationException.h>

using EFSIncludeTest = ::testing::Test;

TEST_F(EFSIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::EFS::EFSClient>("EFSIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
