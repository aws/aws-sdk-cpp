/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/cloudhsmv2/CloudHSMV2Client.h>
#include <aws/cloudhsmv2/CloudHSMV2EndpointProvider.h>
#include <aws/cloudhsmv2/CloudHSMV2EndpointRules.h>
#include <aws/cloudhsmv2/CloudHSMV2ErrorMarshaller.h>
#include <aws/cloudhsmv2/CloudHSMV2Errors.h>
#include <aws/cloudhsmv2/CloudHSMV2Request.h>
#include <aws/cloudhsmv2/CloudHSMV2ServiceClientModel.h>
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/model/Backup.h>
#include <aws/cloudhsmv2/model/BackupPolicy.h>
#include <aws/cloudhsmv2/model/BackupRetentionPolicy.h>
#include <aws/cloudhsmv2/model/BackupRetentionType.h>
#include <aws/cloudhsmv2/model/BackupState.h>
#include <aws/cloudhsmv2/model/Certificates.h>
#include <aws/cloudhsmv2/model/Cluster.h>
#include <aws/cloudhsmv2/model/ClusterMode.h>
#include <aws/cloudhsmv2/model/ClusterState.h>
#include <aws/cloudhsmv2/model/CopyBackupToRegionRequest.h>
#include <aws/cloudhsmv2/model/CopyBackupToRegionResult.h>
#include <aws/cloudhsmv2/model/CreateClusterRequest.h>
#include <aws/cloudhsmv2/model/CreateClusterResult.h>
#include <aws/cloudhsmv2/model/CreateHsmRequest.h>
#include <aws/cloudhsmv2/model/CreateHsmResult.h>
#include <aws/cloudhsmv2/model/DeleteBackupRequest.h>
#include <aws/cloudhsmv2/model/DeleteBackupResult.h>
#include <aws/cloudhsmv2/model/DeleteClusterRequest.h>
#include <aws/cloudhsmv2/model/DeleteClusterResult.h>
#include <aws/cloudhsmv2/model/DeleteHsmRequest.h>
#include <aws/cloudhsmv2/model/DeleteHsmResult.h>
#include <aws/cloudhsmv2/model/DeleteResourcePolicyRequest.h>
#include <aws/cloudhsmv2/model/DeleteResourcePolicyResult.h>
#include <aws/cloudhsmv2/model/DescribeBackupsRequest.h>
#include <aws/cloudhsmv2/model/DescribeBackupsResult.h>
#include <aws/cloudhsmv2/model/DescribeClustersRequest.h>
#include <aws/cloudhsmv2/model/DescribeClustersResult.h>
#include <aws/cloudhsmv2/model/DestinationBackup.h>
#include <aws/cloudhsmv2/model/GetResourcePolicyRequest.h>
#include <aws/cloudhsmv2/model/GetResourcePolicyResult.h>
#include <aws/cloudhsmv2/model/Hsm.h>
#include <aws/cloudhsmv2/model/HsmState.h>
#include <aws/cloudhsmv2/model/InitializeClusterRequest.h>
#include <aws/cloudhsmv2/model/InitializeClusterResult.h>
#include <aws/cloudhsmv2/model/ListTagsRequest.h>
#include <aws/cloudhsmv2/model/ListTagsResult.h>
#include <aws/cloudhsmv2/model/ModifyBackupAttributesRequest.h>
#include <aws/cloudhsmv2/model/ModifyBackupAttributesResult.h>
#include <aws/cloudhsmv2/model/ModifyClusterRequest.h>
#include <aws/cloudhsmv2/model/ModifyClusterResult.h>
#include <aws/cloudhsmv2/model/NetworkType.h>
#include <aws/cloudhsmv2/model/PutResourcePolicyRequest.h>
#include <aws/cloudhsmv2/model/PutResourcePolicyResult.h>
#include <aws/cloudhsmv2/model/RestoreBackupRequest.h>
#include <aws/cloudhsmv2/model/RestoreBackupResult.h>
#include <aws/cloudhsmv2/model/Tag.h>
#include <aws/cloudhsmv2/model/TagResourceRequest.h>
#include <aws/cloudhsmv2/model/TagResourceResult.h>
#include <aws/cloudhsmv2/model/UntagResourceRequest.h>
#include <aws/cloudhsmv2/model/UntagResourceResult.h>

using CloudHSMV2IncludeTest = ::testing::Test;

TEST_F(CloudHSMV2IncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::CloudHSMV2::CloudHSMV2Client>("CloudHSMV2IncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
