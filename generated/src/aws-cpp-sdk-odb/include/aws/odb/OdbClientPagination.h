/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/odb/OdbClient.h>
#include <aws/odb/model/ListAutonomousDatabaseBackupsPaginationTraits.h>
#include <aws/odb/model/ListAutonomousDatabaseCharacterSetsPaginationTraits.h>
#include <aws/odb/model/ListAutonomousDatabaseClonesPaginationTraits.h>
#include <aws/odb/model/ListAutonomousDatabasePeersPaginationTraits.h>
#include <aws/odb/model/ListAutonomousDatabaseVersionsPaginationTraits.h>
#include <aws/odb/model/ListAutonomousDatabasesPaginationTraits.h>
#include <aws/odb/model/ListAutonomousVirtualMachinesPaginationTraits.h>
#include <aws/odb/model/ListCloudAutonomousVmClustersPaginationTraits.h>
#include <aws/odb/model/ListCloudExadataInfrastructuresPaginationTraits.h>
#include <aws/odb/model/ListCloudVmClustersPaginationTraits.h>
#include <aws/odb/model/ListDbNodesPaginationTraits.h>
#include <aws/odb/model/ListDbServersPaginationTraits.h>
#include <aws/odb/model/ListDbSystemShapesPaginationTraits.h>
#include <aws/odb/model/ListGiVersionsPaginationTraits.h>
#include <aws/odb/model/ListOdbNetworksPaginationTraits.h>
#include <aws/odb/model/ListOdbPeeringConnectionsPaginationTraits.h>
#include <aws/odb/model/ListSystemVersionsPaginationTraits.h>

namespace Aws {
namespace odb {

using ListAutonomousDatabaseBackupsPaginator =
    Aws::Utils::Pagination::Paginator<OdbClient, Model::ListAutonomousDatabaseBackupsRequest,
                                      Pagination::ListAutonomousDatabaseBackupsPaginationTraits<OdbClient>>;
using ListAutonomousDatabaseCharacterSetsPaginator =
    Aws::Utils::Pagination::Paginator<OdbClient, Model::ListAutonomousDatabaseCharacterSetsRequest,
                                      Pagination::ListAutonomousDatabaseCharacterSetsPaginationTraits<OdbClient>>;
using ListAutonomousDatabaseClonesPaginator =
    Aws::Utils::Pagination::Paginator<OdbClient, Model::ListAutonomousDatabaseClonesRequest,
                                      Pagination::ListAutonomousDatabaseClonesPaginationTraits<OdbClient>>;
using ListAutonomousDatabasePeersPaginator =
    Aws::Utils::Pagination::Paginator<OdbClient, Model::ListAutonomousDatabasePeersRequest,
                                      Pagination::ListAutonomousDatabasePeersPaginationTraits<OdbClient>>;
using ListAutonomousDatabasesPaginator = Aws::Utils::Pagination::Paginator<OdbClient, Model::ListAutonomousDatabasesRequest,
                                                                           Pagination::ListAutonomousDatabasesPaginationTraits<OdbClient>>;
using ListAutonomousDatabaseVersionsPaginator =
    Aws::Utils::Pagination::Paginator<OdbClient, Model::ListAutonomousDatabaseVersionsRequest,
                                      Pagination::ListAutonomousDatabaseVersionsPaginationTraits<OdbClient>>;
using ListAutonomousVirtualMachinesPaginator =
    Aws::Utils::Pagination::Paginator<OdbClient, Model::ListAutonomousVirtualMachinesRequest,
                                      Pagination::ListAutonomousVirtualMachinesPaginationTraits<OdbClient>>;
using ListCloudAutonomousVmClustersPaginator =
    Aws::Utils::Pagination::Paginator<OdbClient, Model::ListCloudAutonomousVmClustersRequest,
                                      Pagination::ListCloudAutonomousVmClustersPaginationTraits<OdbClient>>;
using ListCloudExadataInfrastructuresPaginator =
    Aws::Utils::Pagination::Paginator<OdbClient, Model::ListCloudExadataInfrastructuresRequest,
                                      Pagination::ListCloudExadataInfrastructuresPaginationTraits<OdbClient>>;
using ListCloudVmClustersPaginator = Aws::Utils::Pagination::Paginator<OdbClient, Model::ListCloudVmClustersRequest,
                                                                       Pagination::ListCloudVmClustersPaginationTraits<OdbClient>>;
using ListDbNodesPaginator =
    Aws::Utils::Pagination::Paginator<OdbClient, Model::ListDbNodesRequest, Pagination::ListDbNodesPaginationTraits<OdbClient>>;
using ListDbServersPaginator =
    Aws::Utils::Pagination::Paginator<OdbClient, Model::ListDbServersRequest, Pagination::ListDbServersPaginationTraits<OdbClient>>;
using ListDbSystemShapesPaginator = Aws::Utils::Pagination::Paginator<OdbClient, Model::ListDbSystemShapesRequest,
                                                                      Pagination::ListDbSystemShapesPaginationTraits<OdbClient>>;
using ListGiVersionsPaginator =
    Aws::Utils::Pagination::Paginator<OdbClient, Model::ListGiVersionsRequest, Pagination::ListGiVersionsPaginationTraits<OdbClient>>;
using ListOdbNetworksPaginator =
    Aws::Utils::Pagination::Paginator<OdbClient, Model::ListOdbNetworksRequest, Pagination::ListOdbNetworksPaginationTraits<OdbClient>>;
using ListOdbPeeringConnectionsPaginator =
    Aws::Utils::Pagination::Paginator<OdbClient, Model::ListOdbPeeringConnectionsRequest,
                                      Pagination::ListOdbPeeringConnectionsPaginationTraits<OdbClient>>;
using ListSystemVersionsPaginator = Aws::Utils::Pagination::Paginator<OdbClient, Model::ListSystemVersionsRequest,
                                                                      Pagination::ListSystemVersionsPaginationTraits<OdbClient>>;

}  // namespace odb
}  // namespace Aws
