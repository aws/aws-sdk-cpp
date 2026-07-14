/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace odb {

template <typename DerivedClient>
class OdbPaginationBase {
 public:
  /**
   * Create a paginator for ListAutonomousDatabaseBackups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutonomousDatabaseBackupsRequest,
                                    Pagination::ListAutonomousDatabaseBackupsPaginationTraits<DerivedClient>>
  ListAutonomousDatabaseBackupsPaginator(const Model::ListAutonomousDatabaseBackupsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutonomousDatabaseBackupsRequest,
                                             Pagination::ListAutonomousDatabaseBackupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAutonomousDatabaseCharacterSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutonomousDatabaseCharacterSetsRequest,
                                    Pagination::ListAutonomousDatabaseCharacterSetsPaginationTraits<DerivedClient>>
  ListAutonomousDatabaseCharacterSetsPaginator(const Model::ListAutonomousDatabaseCharacterSetsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutonomousDatabaseCharacterSetsRequest,
                                             Pagination::ListAutonomousDatabaseCharacterSetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAutonomousDatabaseClones operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutonomousDatabaseClonesRequest,
                                    Pagination::ListAutonomousDatabaseClonesPaginationTraits<DerivedClient>>
  ListAutonomousDatabaseClonesPaginator(const Model::ListAutonomousDatabaseClonesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutonomousDatabaseClonesRequest,
                                             Pagination::ListAutonomousDatabaseClonesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAutonomousDatabasePeers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutonomousDatabasePeersRequest,
                                    Pagination::ListAutonomousDatabasePeersPaginationTraits<DerivedClient>>
  ListAutonomousDatabasePeersPaginator(const Model::ListAutonomousDatabasePeersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutonomousDatabasePeersRequest,
                                             Pagination::ListAutonomousDatabasePeersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAutonomousDatabases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutonomousDatabasesRequest,
                                    Pagination::ListAutonomousDatabasesPaginationTraits<DerivedClient>>
  ListAutonomousDatabasesPaginator(const Model::ListAutonomousDatabasesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutonomousDatabasesRequest,
                                             Pagination::ListAutonomousDatabasesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAutonomousDatabaseVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutonomousDatabaseVersionsRequest,
                                    Pagination::ListAutonomousDatabaseVersionsPaginationTraits<DerivedClient>>
  ListAutonomousDatabaseVersionsPaginator(const Model::ListAutonomousDatabaseVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutonomousDatabaseVersionsRequest,
                                             Pagination::ListAutonomousDatabaseVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAutonomousVirtualMachines operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutonomousVirtualMachinesRequest,
                                    Pagination::ListAutonomousVirtualMachinesPaginationTraits<DerivedClient>>
  ListAutonomousVirtualMachinesPaginator(const Model::ListAutonomousVirtualMachinesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutonomousVirtualMachinesRequest,
                                             Pagination::ListAutonomousVirtualMachinesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCloudAutonomousVmClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCloudAutonomousVmClustersRequest,
                                    Pagination::ListCloudAutonomousVmClustersPaginationTraits<DerivedClient>>
  ListCloudAutonomousVmClustersPaginator(const Model::ListCloudAutonomousVmClustersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCloudAutonomousVmClustersRequest,
                                             Pagination::ListCloudAutonomousVmClustersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCloudExadataInfrastructures operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCloudExadataInfrastructuresRequest,
                                    Pagination::ListCloudExadataInfrastructuresPaginationTraits<DerivedClient>>
  ListCloudExadataInfrastructuresPaginator(const Model::ListCloudExadataInfrastructuresRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCloudExadataInfrastructuresRequest,
                                             Pagination::ListCloudExadataInfrastructuresPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCloudVmClusters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCloudVmClustersRequest,
                                    Pagination::ListCloudVmClustersPaginationTraits<DerivedClient>>
  ListCloudVmClustersPaginator(const Model::ListCloudVmClustersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCloudVmClustersRequest,
                                             Pagination::ListCloudVmClustersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDbNodes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDbNodesRequest, Pagination::ListDbNodesPaginationTraits<DerivedClient>>
  ListDbNodesPaginator(const Model::ListDbNodesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDbNodesRequest,
                                             Pagination::ListDbNodesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListDbServers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDbServersRequest, Pagination::ListDbServersPaginationTraits<DerivedClient>>
  ListDbServersPaginator(const Model::ListDbServersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDbServersRequest,
                                             Pagination::ListDbServersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListDbSystemShapes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDbSystemShapesRequest,
                                    Pagination::ListDbSystemShapesPaginationTraits<DerivedClient>>
  ListDbSystemShapesPaginator(const Model::ListDbSystemShapesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDbSystemShapesRequest,
                                             Pagination::ListDbSystemShapesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGiVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGiVersionsRequest, Pagination::ListGiVersionsPaginationTraits<DerivedClient>>
  ListGiVersionsPaginator(const Model::ListGiVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGiVersionsRequest,
                                             Pagination::ListGiVersionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListOdbNetworks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOdbNetworksRequest,
                                    Pagination::ListOdbNetworksPaginationTraits<DerivedClient>>
  ListOdbNetworksPaginator(const Model::ListOdbNetworksRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOdbNetworksRequest,
                                             Pagination::ListOdbNetworksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListOdbPeeringConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOdbPeeringConnectionsRequest,
                                    Pagination::ListOdbPeeringConnectionsPaginationTraits<DerivedClient>>
  ListOdbPeeringConnectionsPaginator(const Model::ListOdbPeeringConnectionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOdbPeeringConnectionsRequest,
                                             Pagination::ListOdbPeeringConnectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSystemVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSystemVersionsRequest,
                                    Pagination::ListSystemVersionsPaginationTraits<DerivedClient>>
  ListSystemVersionsPaginator(const Model::ListSystemVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSystemVersionsRequest,
                                             Pagination::ListSystemVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace odb
}  // namespace Aws
