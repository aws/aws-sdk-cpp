/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/docdb-elastic/DocDBElasticClient.h>
#include <aws/docdb-elastic/DocDBElasticEndpointProvider.h>
#include <aws/docdb-elastic/DocDBElasticEndpointRules.h>
#include <aws/docdb-elastic/DocDBElasticErrorMarshaller.h>
#include <aws/docdb-elastic/DocDBElasticErrors.h>
#include <aws/docdb-elastic/DocDBElasticRequest.h>
#include <aws/docdb-elastic/DocDBElasticServiceClientModel.h>
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/docdb-elastic/model/ApplyPendingMaintenanceActionRequest.h>
#include <aws/docdb-elastic/model/ApplyPendingMaintenanceActionResult.h>
#include <aws/docdb-elastic/model/Auth.h>
#include <aws/docdb-elastic/model/Cluster.h>
#include <aws/docdb-elastic/model/ClusterInList.h>
#include <aws/docdb-elastic/model/ClusterSnapshot.h>
#include <aws/docdb-elastic/model/ClusterSnapshotInList.h>
#include <aws/docdb-elastic/model/ConflictException.h>
#include <aws/docdb-elastic/model/CopyClusterSnapshotRequest.h>
#include <aws/docdb-elastic/model/CopyClusterSnapshotResult.h>
#include <aws/docdb-elastic/model/CreateClusterRequest.h>
#include <aws/docdb-elastic/model/CreateClusterResult.h>
#include <aws/docdb-elastic/model/CreateClusterSnapshotRequest.h>
#include <aws/docdb-elastic/model/CreateClusterSnapshotResult.h>
#include <aws/docdb-elastic/model/DeleteClusterRequest.h>
#include <aws/docdb-elastic/model/DeleteClusterResult.h>
#include <aws/docdb-elastic/model/DeleteClusterSnapshotRequest.h>
#include <aws/docdb-elastic/model/DeleteClusterSnapshotResult.h>
#include <aws/docdb-elastic/model/GetClusterRequest.h>
#include <aws/docdb-elastic/model/GetClusterResult.h>
#include <aws/docdb-elastic/model/GetClusterSnapshotRequest.h>
#include <aws/docdb-elastic/model/GetClusterSnapshotResult.h>
#include <aws/docdb-elastic/model/GetPendingMaintenanceActionRequest.h>
#include <aws/docdb-elastic/model/GetPendingMaintenanceActionResult.h>
#include <aws/docdb-elastic/model/ListClusterSnapshotsRequest.h>
#include <aws/docdb-elastic/model/ListClusterSnapshotsResult.h>
#include <aws/docdb-elastic/model/ListClustersRequest.h>
#include <aws/docdb-elastic/model/ListClustersResult.h>
#include <aws/docdb-elastic/model/ListPendingMaintenanceActionsRequest.h>
#include <aws/docdb-elastic/model/ListPendingMaintenanceActionsResult.h>
#include <aws/docdb-elastic/model/ListTagsForResourceRequest.h>
#include <aws/docdb-elastic/model/ListTagsForResourceResult.h>
#include <aws/docdb-elastic/model/OptInType.h>
#include <aws/docdb-elastic/model/PendingMaintenanceActionDetails.h>
#include <aws/docdb-elastic/model/ResourceNotFoundException.h>
#include <aws/docdb-elastic/model/ResourcePendingMaintenanceAction.h>
#include <aws/docdb-elastic/model/RestoreClusterFromSnapshotRequest.h>
#include <aws/docdb-elastic/model/RestoreClusterFromSnapshotResult.h>
#include <aws/docdb-elastic/model/Shard.h>
#include <aws/docdb-elastic/model/SnapshotType.h>
#include <aws/docdb-elastic/model/StartClusterRequest.h>
#include <aws/docdb-elastic/model/StartClusterResult.h>
#include <aws/docdb-elastic/model/Status.h>
#include <aws/docdb-elastic/model/StopClusterRequest.h>
#include <aws/docdb-elastic/model/StopClusterResult.h>
#include <aws/docdb-elastic/model/TagResourceRequest.h>
#include <aws/docdb-elastic/model/TagResourceResult.h>
#include <aws/docdb-elastic/model/ThrottlingException.h>
#include <aws/docdb-elastic/model/UntagResourceRequest.h>
#include <aws/docdb-elastic/model/UntagResourceResult.h>
#include <aws/docdb-elastic/model/UpdateClusterRequest.h>
#include <aws/docdb-elastic/model/UpdateClusterResult.h>
#include <aws/docdb-elastic/model/ValidationException.h>
#include <aws/docdb-elastic/model/ValidationExceptionField.h>
#include <aws/docdb-elastic/model/ValidationExceptionReason.h>

using DocDBElasticIncludeTest = ::testing::Test;

TEST_F(DocDBElasticIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::DocDBElastic::DocDBElasticClient>("DocDBElasticIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
