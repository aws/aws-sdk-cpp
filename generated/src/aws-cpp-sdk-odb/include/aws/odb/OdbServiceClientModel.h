/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/OdbEndpointProvider.h>
#include <aws/odb/OdbErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in OdbClient header */
#include <aws/odb/model/AcceptMarketplaceRegistrationResult.h>
#include <aws/odb/model/AssociateIamRoleToResourceResult.h>
#include <aws/odb/model/CreateAutonomousDatabaseBackupResult.h>
#include <aws/odb/model/CreateAutonomousDatabaseRequest.h>
#include <aws/odb/model/CreateAutonomousDatabaseResult.h>
#include <aws/odb/model/CreateAutonomousDatabaseWalletResult.h>
#include <aws/odb/model/CreateCloudAutonomousVmClusterResult.h>
#include <aws/odb/model/CreateCloudExadataInfrastructureResult.h>
#include <aws/odb/model/CreateCloudVmClusterResult.h>
#include <aws/odb/model/CreateOdbNetworkResult.h>
#include <aws/odb/model/CreateOdbPeeringConnectionResult.h>
#include <aws/odb/model/DeleteAutonomousDatabaseBackupResult.h>
#include <aws/odb/model/DeleteAutonomousDatabaseResult.h>
#include <aws/odb/model/DeleteCloudAutonomousVmClusterResult.h>
#include <aws/odb/model/DeleteCloudExadataInfrastructureResult.h>
#include <aws/odb/model/DeleteCloudVmClusterResult.h>
#include <aws/odb/model/DeleteOdbNetworkResult.h>
#include <aws/odb/model/DeleteOdbPeeringConnectionResult.h>
#include <aws/odb/model/DisassociateIamRoleFromResourceResult.h>
#include <aws/odb/model/FailoverAutonomousDatabaseResult.h>
#include <aws/odb/model/GetAutonomousDatabaseBackupResult.h>
#include <aws/odb/model/GetAutonomousDatabaseResult.h>
#include <aws/odb/model/GetAutonomousDatabaseWalletDetailsResult.h>
#include <aws/odb/model/GetCloudAutonomousVmClusterResult.h>
#include <aws/odb/model/GetCloudExadataInfrastructureResult.h>
#include <aws/odb/model/GetCloudExadataInfrastructureUnallocatedResourcesResult.h>
#include <aws/odb/model/GetCloudVmClusterResult.h>
#include <aws/odb/model/GetDbNodeResult.h>
#include <aws/odb/model/GetDbServerResult.h>
#include <aws/odb/model/GetOciOnboardingStatusRequest.h>
#include <aws/odb/model/GetOciOnboardingStatusResult.h>
#include <aws/odb/model/GetOdbNetworkResult.h>
#include <aws/odb/model/GetOdbPeeringConnectionResult.h>
#include <aws/odb/model/InitializeServiceRequest.h>
#include <aws/odb/model/InitializeServiceResult.h>
#include <aws/odb/model/ListAutonomousDatabaseBackupsResult.h>
#include <aws/odb/model/ListAutonomousDatabaseCharacterSetsRequest.h>
#include <aws/odb/model/ListAutonomousDatabaseCharacterSetsResult.h>
#include <aws/odb/model/ListAutonomousDatabaseClonesResult.h>
#include <aws/odb/model/ListAutonomousDatabasePeersResult.h>
#include <aws/odb/model/ListAutonomousDatabaseVersionsRequest.h>
#include <aws/odb/model/ListAutonomousDatabaseVersionsResult.h>
#include <aws/odb/model/ListAutonomousDatabasesRequest.h>
#include <aws/odb/model/ListAutonomousDatabasesResult.h>
#include <aws/odb/model/ListAutonomousVirtualMachinesResult.h>
#include <aws/odb/model/ListCloudAutonomousVmClustersRequest.h>
#include <aws/odb/model/ListCloudAutonomousVmClustersResult.h>
#include <aws/odb/model/ListCloudExadataInfrastructuresRequest.h>
#include <aws/odb/model/ListCloudExadataInfrastructuresResult.h>
#include <aws/odb/model/ListCloudVmClustersRequest.h>
#include <aws/odb/model/ListCloudVmClustersResult.h>
#include <aws/odb/model/ListDbNodesResult.h>
#include <aws/odb/model/ListDbServersResult.h>
#include <aws/odb/model/ListDbSystemShapesRequest.h>
#include <aws/odb/model/ListDbSystemShapesResult.h>
#include <aws/odb/model/ListGiVersionsRequest.h>
#include <aws/odb/model/ListGiVersionsResult.h>
#include <aws/odb/model/ListOdbNetworksRequest.h>
#include <aws/odb/model/ListOdbNetworksResult.h>
#include <aws/odb/model/ListOdbPeeringConnectionsRequest.h>
#include <aws/odb/model/ListOdbPeeringConnectionsResult.h>
#include <aws/odb/model/ListSystemVersionsResult.h>
#include <aws/odb/model/ListTagsForResourceResult.h>
#include <aws/odb/model/RebootAutonomousDatabaseResult.h>
#include <aws/odb/model/RebootDbNodeResult.h>
#include <aws/odb/model/RestoreAutonomousDatabaseResult.h>
#include <aws/odb/model/ShrinkAutonomousDatabaseResult.h>
#include <aws/odb/model/StartAutonomousDatabaseResult.h>
#include <aws/odb/model/StartDbNodeResult.h>
#include <aws/odb/model/StopAutonomousDatabaseResult.h>
#include <aws/odb/model/StopDbNodeResult.h>
#include <aws/odb/model/SwitchoverAutonomousDatabaseResult.h>
#include <aws/odb/model/TagResourceResult.h>
#include <aws/odb/model/UntagResourceResult.h>
#include <aws/odb/model/UpdateAutonomousDatabaseBackupResult.h>
#include <aws/odb/model/UpdateAutonomousDatabaseResult.h>
#include <aws/odb/model/UpdateCloudExadataInfrastructureResult.h>
#include <aws/odb/model/UpdateOdbNetworkResult.h>
#include <aws/odb/model/UpdateOdbPeeringConnectionResult.h>
/* End of service model headers required in OdbClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace odb {
using OdbClientConfiguration = Aws::Client::GenericClientConfiguration;
using OdbEndpointProviderBase = Aws::odb::Endpoint::OdbEndpointProviderBase;
using OdbEndpointProvider = Aws::odb::Endpoint::OdbEndpointProvider;

namespace Model {
/* Service model forward declarations required in OdbClient header */
class AcceptMarketplaceRegistrationRequest;
class AssociateIamRoleToResourceRequest;
class CreateAutonomousDatabaseRequest;
class CreateAutonomousDatabaseBackupRequest;
class CreateAutonomousDatabaseWalletRequest;
class CreateCloudAutonomousVmClusterRequest;
class CreateCloudExadataInfrastructureRequest;
class CreateCloudVmClusterRequest;
class CreateOdbNetworkRequest;
class CreateOdbPeeringConnectionRequest;
class DeleteAutonomousDatabaseRequest;
class DeleteAutonomousDatabaseBackupRequest;
class DeleteCloudAutonomousVmClusterRequest;
class DeleteCloudExadataInfrastructureRequest;
class DeleteCloudVmClusterRequest;
class DeleteOdbNetworkRequest;
class DeleteOdbPeeringConnectionRequest;
class DisassociateIamRoleFromResourceRequest;
class FailoverAutonomousDatabaseRequest;
class GetAutonomousDatabaseRequest;
class GetAutonomousDatabaseBackupRequest;
class GetAutonomousDatabaseWalletDetailsRequest;
class GetCloudAutonomousVmClusterRequest;
class GetCloudExadataInfrastructureRequest;
class GetCloudExadataInfrastructureUnallocatedResourcesRequest;
class GetCloudVmClusterRequest;
class GetDbNodeRequest;
class GetDbServerRequest;
class GetOciOnboardingStatusRequest;
class GetOdbNetworkRequest;
class GetOdbPeeringConnectionRequest;
class InitializeServiceRequest;
class ListAutonomousDatabaseBackupsRequest;
class ListAutonomousDatabaseCharacterSetsRequest;
class ListAutonomousDatabaseClonesRequest;
class ListAutonomousDatabasePeersRequest;
class ListAutonomousDatabaseVersionsRequest;
class ListAutonomousDatabasesRequest;
class ListAutonomousVirtualMachinesRequest;
class ListCloudAutonomousVmClustersRequest;
class ListCloudExadataInfrastructuresRequest;
class ListCloudVmClustersRequest;
class ListDbNodesRequest;
class ListDbServersRequest;
class ListDbSystemShapesRequest;
class ListGiVersionsRequest;
class ListOdbNetworksRequest;
class ListOdbPeeringConnectionsRequest;
class ListSystemVersionsRequest;
class ListTagsForResourceRequest;
class RebootAutonomousDatabaseRequest;
class RebootDbNodeRequest;
class RestoreAutonomousDatabaseRequest;
class ShrinkAutonomousDatabaseRequest;
class StartAutonomousDatabaseRequest;
class StartDbNodeRequest;
class StopAutonomousDatabaseRequest;
class StopDbNodeRequest;
class SwitchoverAutonomousDatabaseRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateAutonomousDatabaseRequest;
class UpdateAutonomousDatabaseBackupRequest;
class UpdateCloudExadataInfrastructureRequest;
class UpdateOdbNetworkRequest;
class UpdateOdbPeeringConnectionRequest;
/* End of service model forward declarations required in OdbClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<AcceptMarketplaceRegistrationResult, OdbError> AcceptMarketplaceRegistrationOutcome;
typedef Aws::Utils::Outcome<AssociateIamRoleToResourceResult, OdbError> AssociateIamRoleToResourceOutcome;
typedef Aws::Utils::Outcome<CreateAutonomousDatabaseResult, OdbError> CreateAutonomousDatabaseOutcome;
typedef Aws::Utils::Outcome<CreateAutonomousDatabaseBackupResult, OdbError> CreateAutonomousDatabaseBackupOutcome;
typedef Aws::Utils::Outcome<CreateAutonomousDatabaseWalletResult, OdbError> CreateAutonomousDatabaseWalletOutcome;
typedef Aws::Utils::Outcome<CreateCloudAutonomousVmClusterResult, OdbError> CreateCloudAutonomousVmClusterOutcome;
typedef Aws::Utils::Outcome<CreateCloudExadataInfrastructureResult, OdbError> CreateCloudExadataInfrastructureOutcome;
typedef Aws::Utils::Outcome<CreateCloudVmClusterResult, OdbError> CreateCloudVmClusterOutcome;
typedef Aws::Utils::Outcome<CreateOdbNetworkResult, OdbError> CreateOdbNetworkOutcome;
typedef Aws::Utils::Outcome<CreateOdbPeeringConnectionResult, OdbError> CreateOdbPeeringConnectionOutcome;
typedef Aws::Utils::Outcome<DeleteAutonomousDatabaseResult, OdbError> DeleteAutonomousDatabaseOutcome;
typedef Aws::Utils::Outcome<DeleteAutonomousDatabaseBackupResult, OdbError> DeleteAutonomousDatabaseBackupOutcome;
typedef Aws::Utils::Outcome<DeleteCloudAutonomousVmClusterResult, OdbError> DeleteCloudAutonomousVmClusterOutcome;
typedef Aws::Utils::Outcome<DeleteCloudExadataInfrastructureResult, OdbError> DeleteCloudExadataInfrastructureOutcome;
typedef Aws::Utils::Outcome<DeleteCloudVmClusterResult, OdbError> DeleteCloudVmClusterOutcome;
typedef Aws::Utils::Outcome<DeleteOdbNetworkResult, OdbError> DeleteOdbNetworkOutcome;
typedef Aws::Utils::Outcome<DeleteOdbPeeringConnectionResult, OdbError> DeleteOdbPeeringConnectionOutcome;
typedef Aws::Utils::Outcome<DisassociateIamRoleFromResourceResult, OdbError> DisassociateIamRoleFromResourceOutcome;
typedef Aws::Utils::Outcome<FailoverAutonomousDatabaseResult, OdbError> FailoverAutonomousDatabaseOutcome;
typedef Aws::Utils::Outcome<GetAutonomousDatabaseResult, OdbError> GetAutonomousDatabaseOutcome;
typedef Aws::Utils::Outcome<GetAutonomousDatabaseBackupResult, OdbError> GetAutonomousDatabaseBackupOutcome;
typedef Aws::Utils::Outcome<GetAutonomousDatabaseWalletDetailsResult, OdbError> GetAutonomousDatabaseWalletDetailsOutcome;
typedef Aws::Utils::Outcome<GetCloudAutonomousVmClusterResult, OdbError> GetCloudAutonomousVmClusterOutcome;
typedef Aws::Utils::Outcome<GetCloudExadataInfrastructureResult, OdbError> GetCloudExadataInfrastructureOutcome;
typedef Aws::Utils::Outcome<GetCloudExadataInfrastructureUnallocatedResourcesResult, OdbError>
    GetCloudExadataInfrastructureUnallocatedResourcesOutcome;
typedef Aws::Utils::Outcome<GetCloudVmClusterResult, OdbError> GetCloudVmClusterOutcome;
typedef Aws::Utils::Outcome<GetDbNodeResult, OdbError> GetDbNodeOutcome;
typedef Aws::Utils::Outcome<GetDbServerResult, OdbError> GetDbServerOutcome;
typedef Aws::Utils::Outcome<GetOciOnboardingStatusResult, OdbError> GetOciOnboardingStatusOutcome;
typedef Aws::Utils::Outcome<GetOdbNetworkResult, OdbError> GetOdbNetworkOutcome;
typedef Aws::Utils::Outcome<GetOdbPeeringConnectionResult, OdbError> GetOdbPeeringConnectionOutcome;
typedef Aws::Utils::Outcome<InitializeServiceResult, OdbError> InitializeServiceOutcome;
typedef Aws::Utils::Outcome<ListAutonomousDatabaseBackupsResult, OdbError> ListAutonomousDatabaseBackupsOutcome;
typedef Aws::Utils::Outcome<ListAutonomousDatabaseCharacterSetsResult, OdbError> ListAutonomousDatabaseCharacterSetsOutcome;
typedef Aws::Utils::Outcome<ListAutonomousDatabaseClonesResult, OdbError> ListAutonomousDatabaseClonesOutcome;
typedef Aws::Utils::Outcome<ListAutonomousDatabasePeersResult, OdbError> ListAutonomousDatabasePeersOutcome;
typedef Aws::Utils::Outcome<ListAutonomousDatabaseVersionsResult, OdbError> ListAutonomousDatabaseVersionsOutcome;
typedef Aws::Utils::Outcome<ListAutonomousDatabasesResult, OdbError> ListAutonomousDatabasesOutcome;
typedef Aws::Utils::Outcome<ListAutonomousVirtualMachinesResult, OdbError> ListAutonomousVirtualMachinesOutcome;
typedef Aws::Utils::Outcome<ListCloudAutonomousVmClustersResult, OdbError> ListCloudAutonomousVmClustersOutcome;
typedef Aws::Utils::Outcome<ListCloudExadataInfrastructuresResult, OdbError> ListCloudExadataInfrastructuresOutcome;
typedef Aws::Utils::Outcome<ListCloudVmClustersResult, OdbError> ListCloudVmClustersOutcome;
typedef Aws::Utils::Outcome<ListDbNodesResult, OdbError> ListDbNodesOutcome;
typedef Aws::Utils::Outcome<ListDbServersResult, OdbError> ListDbServersOutcome;
typedef Aws::Utils::Outcome<ListDbSystemShapesResult, OdbError> ListDbSystemShapesOutcome;
typedef Aws::Utils::Outcome<ListGiVersionsResult, OdbError> ListGiVersionsOutcome;
typedef Aws::Utils::Outcome<ListOdbNetworksResult, OdbError> ListOdbNetworksOutcome;
typedef Aws::Utils::Outcome<ListOdbPeeringConnectionsResult, OdbError> ListOdbPeeringConnectionsOutcome;
typedef Aws::Utils::Outcome<ListSystemVersionsResult, OdbError> ListSystemVersionsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, OdbError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<RebootAutonomousDatabaseResult, OdbError> RebootAutonomousDatabaseOutcome;
typedef Aws::Utils::Outcome<RebootDbNodeResult, OdbError> RebootDbNodeOutcome;
typedef Aws::Utils::Outcome<RestoreAutonomousDatabaseResult, OdbError> RestoreAutonomousDatabaseOutcome;
typedef Aws::Utils::Outcome<ShrinkAutonomousDatabaseResult, OdbError> ShrinkAutonomousDatabaseOutcome;
typedef Aws::Utils::Outcome<StartAutonomousDatabaseResult, OdbError> StartAutonomousDatabaseOutcome;
typedef Aws::Utils::Outcome<StartDbNodeResult, OdbError> StartDbNodeOutcome;
typedef Aws::Utils::Outcome<StopAutonomousDatabaseResult, OdbError> StopAutonomousDatabaseOutcome;
typedef Aws::Utils::Outcome<StopDbNodeResult, OdbError> StopDbNodeOutcome;
typedef Aws::Utils::Outcome<SwitchoverAutonomousDatabaseResult, OdbError> SwitchoverAutonomousDatabaseOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, OdbError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, OdbError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateAutonomousDatabaseResult, OdbError> UpdateAutonomousDatabaseOutcome;
typedef Aws::Utils::Outcome<UpdateAutonomousDatabaseBackupResult, OdbError> UpdateAutonomousDatabaseBackupOutcome;
typedef Aws::Utils::Outcome<UpdateCloudExadataInfrastructureResult, OdbError> UpdateCloudExadataInfrastructureOutcome;
typedef Aws::Utils::Outcome<UpdateOdbNetworkResult, OdbError> UpdateOdbNetworkOutcome;
typedef Aws::Utils::Outcome<UpdateOdbPeeringConnectionResult, OdbError> UpdateOdbPeeringConnectionOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AcceptMarketplaceRegistrationOutcome> AcceptMarketplaceRegistrationOutcomeCallable;
typedef std::future<AssociateIamRoleToResourceOutcome> AssociateIamRoleToResourceOutcomeCallable;
typedef std::future<CreateAutonomousDatabaseOutcome> CreateAutonomousDatabaseOutcomeCallable;
typedef std::future<CreateAutonomousDatabaseBackupOutcome> CreateAutonomousDatabaseBackupOutcomeCallable;
typedef std::future<CreateAutonomousDatabaseWalletOutcome> CreateAutonomousDatabaseWalletOutcomeCallable;
typedef std::future<CreateCloudAutonomousVmClusterOutcome> CreateCloudAutonomousVmClusterOutcomeCallable;
typedef std::future<CreateCloudExadataInfrastructureOutcome> CreateCloudExadataInfrastructureOutcomeCallable;
typedef std::future<CreateCloudVmClusterOutcome> CreateCloudVmClusterOutcomeCallable;
typedef std::future<CreateOdbNetworkOutcome> CreateOdbNetworkOutcomeCallable;
typedef std::future<CreateOdbPeeringConnectionOutcome> CreateOdbPeeringConnectionOutcomeCallable;
typedef std::future<DeleteAutonomousDatabaseOutcome> DeleteAutonomousDatabaseOutcomeCallable;
typedef std::future<DeleteAutonomousDatabaseBackupOutcome> DeleteAutonomousDatabaseBackupOutcomeCallable;
typedef std::future<DeleteCloudAutonomousVmClusterOutcome> DeleteCloudAutonomousVmClusterOutcomeCallable;
typedef std::future<DeleteCloudExadataInfrastructureOutcome> DeleteCloudExadataInfrastructureOutcomeCallable;
typedef std::future<DeleteCloudVmClusterOutcome> DeleteCloudVmClusterOutcomeCallable;
typedef std::future<DeleteOdbNetworkOutcome> DeleteOdbNetworkOutcomeCallable;
typedef std::future<DeleteOdbPeeringConnectionOutcome> DeleteOdbPeeringConnectionOutcomeCallable;
typedef std::future<DisassociateIamRoleFromResourceOutcome> DisassociateIamRoleFromResourceOutcomeCallable;
typedef std::future<FailoverAutonomousDatabaseOutcome> FailoverAutonomousDatabaseOutcomeCallable;
typedef std::future<GetAutonomousDatabaseOutcome> GetAutonomousDatabaseOutcomeCallable;
typedef std::future<GetAutonomousDatabaseBackupOutcome> GetAutonomousDatabaseBackupOutcomeCallable;
typedef std::future<GetAutonomousDatabaseWalletDetailsOutcome> GetAutonomousDatabaseWalletDetailsOutcomeCallable;
typedef std::future<GetCloudAutonomousVmClusterOutcome> GetCloudAutonomousVmClusterOutcomeCallable;
typedef std::future<GetCloudExadataInfrastructureOutcome> GetCloudExadataInfrastructureOutcomeCallable;
typedef std::future<GetCloudExadataInfrastructureUnallocatedResourcesOutcome>
    GetCloudExadataInfrastructureUnallocatedResourcesOutcomeCallable;
typedef std::future<GetCloudVmClusterOutcome> GetCloudVmClusterOutcomeCallable;
typedef std::future<GetDbNodeOutcome> GetDbNodeOutcomeCallable;
typedef std::future<GetDbServerOutcome> GetDbServerOutcomeCallable;
typedef std::future<GetOciOnboardingStatusOutcome> GetOciOnboardingStatusOutcomeCallable;
typedef std::future<GetOdbNetworkOutcome> GetOdbNetworkOutcomeCallable;
typedef std::future<GetOdbPeeringConnectionOutcome> GetOdbPeeringConnectionOutcomeCallable;
typedef std::future<InitializeServiceOutcome> InitializeServiceOutcomeCallable;
typedef std::future<ListAutonomousDatabaseBackupsOutcome> ListAutonomousDatabaseBackupsOutcomeCallable;
typedef std::future<ListAutonomousDatabaseCharacterSetsOutcome> ListAutonomousDatabaseCharacterSetsOutcomeCallable;
typedef std::future<ListAutonomousDatabaseClonesOutcome> ListAutonomousDatabaseClonesOutcomeCallable;
typedef std::future<ListAutonomousDatabasePeersOutcome> ListAutonomousDatabasePeersOutcomeCallable;
typedef std::future<ListAutonomousDatabaseVersionsOutcome> ListAutonomousDatabaseVersionsOutcomeCallable;
typedef std::future<ListAutonomousDatabasesOutcome> ListAutonomousDatabasesOutcomeCallable;
typedef std::future<ListAutonomousVirtualMachinesOutcome> ListAutonomousVirtualMachinesOutcomeCallable;
typedef std::future<ListCloudAutonomousVmClustersOutcome> ListCloudAutonomousVmClustersOutcomeCallable;
typedef std::future<ListCloudExadataInfrastructuresOutcome> ListCloudExadataInfrastructuresOutcomeCallable;
typedef std::future<ListCloudVmClustersOutcome> ListCloudVmClustersOutcomeCallable;
typedef std::future<ListDbNodesOutcome> ListDbNodesOutcomeCallable;
typedef std::future<ListDbServersOutcome> ListDbServersOutcomeCallable;
typedef std::future<ListDbSystemShapesOutcome> ListDbSystemShapesOutcomeCallable;
typedef std::future<ListGiVersionsOutcome> ListGiVersionsOutcomeCallable;
typedef std::future<ListOdbNetworksOutcome> ListOdbNetworksOutcomeCallable;
typedef std::future<ListOdbPeeringConnectionsOutcome> ListOdbPeeringConnectionsOutcomeCallable;
typedef std::future<ListSystemVersionsOutcome> ListSystemVersionsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<RebootAutonomousDatabaseOutcome> RebootAutonomousDatabaseOutcomeCallable;
typedef std::future<RebootDbNodeOutcome> RebootDbNodeOutcomeCallable;
typedef std::future<RestoreAutonomousDatabaseOutcome> RestoreAutonomousDatabaseOutcomeCallable;
typedef std::future<ShrinkAutonomousDatabaseOutcome> ShrinkAutonomousDatabaseOutcomeCallable;
typedef std::future<StartAutonomousDatabaseOutcome> StartAutonomousDatabaseOutcomeCallable;
typedef std::future<StartDbNodeOutcome> StartDbNodeOutcomeCallable;
typedef std::future<StopAutonomousDatabaseOutcome> StopAutonomousDatabaseOutcomeCallable;
typedef std::future<StopDbNodeOutcome> StopDbNodeOutcomeCallable;
typedef std::future<SwitchoverAutonomousDatabaseOutcome> SwitchoverAutonomousDatabaseOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateAutonomousDatabaseOutcome> UpdateAutonomousDatabaseOutcomeCallable;
typedef std::future<UpdateAutonomousDatabaseBackupOutcome> UpdateAutonomousDatabaseBackupOutcomeCallable;
typedef std::future<UpdateCloudExadataInfrastructureOutcome> UpdateCloudExadataInfrastructureOutcomeCallable;
typedef std::future<UpdateOdbNetworkOutcome> UpdateOdbNetworkOutcomeCallable;
typedef std::future<UpdateOdbPeeringConnectionOutcome> UpdateOdbPeeringConnectionOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class OdbClient;

/* Service model async handlers definitions */
typedef std::function<void(const OdbClient*, const Model::AcceptMarketplaceRegistrationRequest&,
                           const Model::AcceptMarketplaceRegistrationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AcceptMarketplaceRegistrationResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::AssociateIamRoleToResourceRequest&,
                           const Model::AssociateIamRoleToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AssociateIamRoleToResourceResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::CreateAutonomousDatabaseRequest&, const Model::CreateAutonomousDatabaseOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAutonomousDatabaseResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::CreateAutonomousDatabaseBackupRequest&,
                           const Model::CreateAutonomousDatabaseBackupOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAutonomousDatabaseBackupResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::CreateAutonomousDatabaseWalletRequest&,
                           const Model::CreateAutonomousDatabaseWalletOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAutonomousDatabaseWalletResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::CreateCloudAutonomousVmClusterRequest&,
                           const Model::CreateCloudAutonomousVmClusterOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateCloudAutonomousVmClusterResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::CreateCloudExadataInfrastructureRequest&,
                           const Model::CreateCloudExadataInfrastructureOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateCloudExadataInfrastructureResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::CreateCloudVmClusterRequest&, const Model::CreateCloudVmClusterOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateCloudVmClusterResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::CreateOdbNetworkRequest&, const Model::CreateOdbNetworkOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateOdbNetworkResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::CreateOdbPeeringConnectionRequest&,
                           const Model::CreateOdbPeeringConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateOdbPeeringConnectionResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::DeleteAutonomousDatabaseRequest&, const Model::DeleteAutonomousDatabaseOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteAutonomousDatabaseResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::DeleteAutonomousDatabaseBackupRequest&,
                           const Model::DeleteAutonomousDatabaseBackupOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteAutonomousDatabaseBackupResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::DeleteCloudAutonomousVmClusterRequest&,
                           const Model::DeleteCloudAutonomousVmClusterOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteCloudAutonomousVmClusterResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::DeleteCloudExadataInfrastructureRequest&,
                           const Model::DeleteCloudExadataInfrastructureOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteCloudExadataInfrastructureResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::DeleteCloudVmClusterRequest&, const Model::DeleteCloudVmClusterOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteCloudVmClusterResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::DeleteOdbNetworkRequest&, const Model::DeleteOdbNetworkOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteOdbNetworkResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::DeleteOdbPeeringConnectionRequest&,
                           const Model::DeleteOdbPeeringConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteOdbPeeringConnectionResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::DisassociateIamRoleFromResourceRequest&,
                           const Model::DisassociateIamRoleFromResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DisassociateIamRoleFromResourceResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::FailoverAutonomousDatabaseRequest&,
                           const Model::FailoverAutonomousDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    FailoverAutonomousDatabaseResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::GetAutonomousDatabaseRequest&, const Model::GetAutonomousDatabaseOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAutonomousDatabaseResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::GetAutonomousDatabaseBackupRequest&,
                           const Model::GetAutonomousDatabaseBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAutonomousDatabaseBackupResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::GetAutonomousDatabaseWalletDetailsRequest&,
                           const Model::GetAutonomousDatabaseWalletDetailsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAutonomousDatabaseWalletDetailsResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::GetCloudAutonomousVmClusterRequest&,
                           const Model::GetCloudAutonomousVmClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetCloudAutonomousVmClusterResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::GetCloudExadataInfrastructureRequest&,
                           const Model::GetCloudExadataInfrastructureOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetCloudExadataInfrastructureResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::GetCloudExadataInfrastructureUnallocatedResourcesRequest&,
                           const Model::GetCloudExadataInfrastructureUnallocatedResourcesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetCloudExadataInfrastructureUnallocatedResourcesResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::GetCloudVmClusterRequest&, const Model::GetCloudVmClusterOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetCloudVmClusterResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::GetDbNodeRequest&, const Model::GetDbNodeOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDbNodeResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::GetDbServerRequest&, const Model::GetDbServerOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDbServerResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::GetOciOnboardingStatusRequest&, const Model::GetOciOnboardingStatusOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetOciOnboardingStatusResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::GetOdbNetworkRequest&, const Model::GetOdbNetworkOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetOdbNetworkResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::GetOdbPeeringConnectionRequest&, const Model::GetOdbPeeringConnectionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetOdbPeeringConnectionResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::InitializeServiceRequest&, const Model::InitializeServiceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    InitializeServiceResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::ListAutonomousDatabaseBackupsRequest&,
                           const Model::ListAutonomousDatabaseBackupsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAutonomousDatabaseBackupsResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::ListAutonomousDatabaseCharacterSetsRequest&,
                           const Model::ListAutonomousDatabaseCharacterSetsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAutonomousDatabaseCharacterSetsResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::ListAutonomousDatabaseClonesRequest&,
                           const Model::ListAutonomousDatabaseClonesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAutonomousDatabaseClonesResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::ListAutonomousDatabasePeersRequest&,
                           const Model::ListAutonomousDatabasePeersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAutonomousDatabasePeersResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::ListAutonomousDatabaseVersionsRequest&,
                           const Model::ListAutonomousDatabaseVersionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAutonomousDatabaseVersionsResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::ListAutonomousDatabasesRequest&, const Model::ListAutonomousDatabasesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAutonomousDatabasesResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::ListAutonomousVirtualMachinesRequest&,
                           const Model::ListAutonomousVirtualMachinesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAutonomousVirtualMachinesResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::ListCloudAutonomousVmClustersRequest&,
                           const Model::ListCloudAutonomousVmClustersOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListCloudAutonomousVmClustersResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::ListCloudExadataInfrastructuresRequest&,
                           const Model::ListCloudExadataInfrastructuresOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListCloudExadataInfrastructuresResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::ListCloudVmClustersRequest&, const Model::ListCloudVmClustersOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListCloudVmClustersResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::ListDbNodesRequest&, const Model::ListDbNodesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDbNodesResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::ListDbServersRequest&, const Model::ListDbServersOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDbServersResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::ListDbSystemShapesRequest&, const Model::ListDbSystemShapesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListDbSystemShapesResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::ListGiVersionsRequest&, const Model::ListGiVersionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListGiVersionsResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::ListOdbNetworksRequest&, const Model::ListOdbNetworksOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListOdbNetworksResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::ListOdbPeeringConnectionsRequest&, const Model::ListOdbPeeringConnectionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListOdbPeeringConnectionsResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::ListSystemVersionsRequest&, const Model::ListSystemVersionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListSystemVersionsResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::RebootAutonomousDatabaseRequest&, const Model::RebootAutonomousDatabaseOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RebootAutonomousDatabaseResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::RebootDbNodeRequest&, const Model::RebootDbNodeOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RebootDbNodeResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::RestoreAutonomousDatabaseRequest&, const Model::RestoreAutonomousDatabaseOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RestoreAutonomousDatabaseResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::ShrinkAutonomousDatabaseRequest&, const Model::ShrinkAutonomousDatabaseOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ShrinkAutonomousDatabaseResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::StartAutonomousDatabaseRequest&, const Model::StartAutonomousDatabaseOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartAutonomousDatabaseResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::StartDbNodeRequest&, const Model::StartDbNodeOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartDbNodeResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::StopAutonomousDatabaseRequest&, const Model::StopAutonomousDatabaseOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StopAutonomousDatabaseResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::StopDbNodeRequest&, const Model::StopDbNodeOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StopDbNodeResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::SwitchoverAutonomousDatabaseRequest&,
                           const Model::SwitchoverAutonomousDatabaseOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SwitchoverAutonomousDatabaseResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::UpdateAutonomousDatabaseRequest&, const Model::UpdateAutonomousDatabaseOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateAutonomousDatabaseResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::UpdateAutonomousDatabaseBackupRequest&,
                           const Model::UpdateAutonomousDatabaseBackupOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateAutonomousDatabaseBackupResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::UpdateCloudExadataInfrastructureRequest&,
                           const Model::UpdateCloudExadataInfrastructureOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateCloudExadataInfrastructureResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::UpdateOdbNetworkRequest&, const Model::UpdateOdbNetworkOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateOdbNetworkResponseReceivedHandler;
typedef std::function<void(const OdbClient*, const Model::UpdateOdbPeeringConnectionRequest&,
                           const Model::UpdateOdbPeeringConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateOdbPeeringConnectionResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace odb
}  // namespace Aws
