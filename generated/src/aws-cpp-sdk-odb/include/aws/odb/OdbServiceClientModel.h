/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/odb/OdbErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/odb/OdbEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in OdbClient header */
#include <aws/odb/model/AcceptMarketplaceRegistrationResult.h>
#include <aws/odb/model/CreateCloudAutonomousVmClusterResult.h>
#include <aws/odb/model/CreateCloudExadataInfrastructureResult.h>
#include <aws/odb/model/CreateCloudVmClusterResult.h>
#include <aws/odb/model/CreateOdbNetworkResult.h>
#include <aws/odb/model/CreateOdbPeeringConnectionResult.h>
#include <aws/odb/model/DeleteCloudAutonomousVmClusterResult.h>
#include <aws/odb/model/DeleteCloudExadataInfrastructureResult.h>
#include <aws/odb/model/DeleteCloudVmClusterResult.h>
#include <aws/odb/model/DeleteOdbNetworkResult.h>
#include <aws/odb/model/DeleteOdbPeeringConnectionResult.h>
#include <aws/odb/model/GetCloudAutonomousVmClusterResult.h>
#include <aws/odb/model/GetCloudExadataInfrastructureResult.h>
#include <aws/odb/model/GetCloudExadataInfrastructureUnallocatedResourcesResult.h>
#include <aws/odb/model/GetCloudVmClusterResult.h>
#include <aws/odb/model/GetDbNodeResult.h>
#include <aws/odb/model/GetDbServerResult.h>
#include <aws/odb/model/GetOciOnboardingStatusResult.h>
#include <aws/odb/model/GetOdbNetworkResult.h>
#include <aws/odb/model/GetOdbPeeringConnectionResult.h>
#include <aws/odb/model/InitializeServiceResult.h>
#include <aws/odb/model/ListAutonomousVirtualMachinesResult.h>
#include <aws/odb/model/ListCloudAutonomousVmClustersResult.h>
#include <aws/odb/model/ListCloudExadataInfrastructuresResult.h>
#include <aws/odb/model/ListCloudVmClustersResult.h>
#include <aws/odb/model/ListDbNodesResult.h>
#include <aws/odb/model/ListDbServersResult.h>
#include <aws/odb/model/ListDbSystemShapesResult.h>
#include <aws/odb/model/ListGiVersionsResult.h>
#include <aws/odb/model/ListOdbNetworksResult.h>
#include <aws/odb/model/ListOdbPeeringConnectionsResult.h>
#include <aws/odb/model/ListSystemVersionsResult.h>
#include <aws/odb/model/ListTagsForResourceResult.h>
#include <aws/odb/model/RebootDbNodeResult.h>
#include <aws/odb/model/StartDbNodeResult.h>
#include <aws/odb/model/StopDbNodeResult.h>
#include <aws/odb/model/TagResourceResult.h>
#include <aws/odb/model/UntagResourceResult.h>
#include <aws/odb/model/UpdateCloudExadataInfrastructureResult.h>
#include <aws/odb/model/UpdateOdbNetworkResult.h>
#include <aws/odb/model/ListCloudVmClustersRequest.h>
#include <aws/odb/model/ListOdbNetworksRequest.h>
#include <aws/odb/model/ListDbSystemShapesRequest.h>
#include <aws/odb/model/InitializeServiceRequest.h>
#include <aws/odb/model/ListCloudExadataInfrastructuresRequest.h>
#include <aws/odb/model/ListGiVersionsRequest.h>
#include <aws/odb/model/ListOdbPeeringConnectionsRequest.h>
#include <aws/odb/model/GetOciOnboardingStatusRequest.h>
#include <aws/odb/model/ListCloudAutonomousVmClustersRequest.h>
/* End of service model headers required in OdbClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace odb
  {
    using OdbClientConfiguration = Aws::Client::GenericClientConfiguration;
    using OdbEndpointProviderBase = Aws::odb::Endpoint::OdbEndpointProviderBase;
    using OdbEndpointProvider = Aws::odb::Endpoint::OdbEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in OdbClient header */
      class AcceptMarketplaceRegistrationRequest;
      class CreateCloudAutonomousVmClusterRequest;
      class CreateCloudExadataInfrastructureRequest;
      class CreateCloudVmClusterRequest;
      class CreateOdbNetworkRequest;
      class CreateOdbPeeringConnectionRequest;
      class DeleteCloudAutonomousVmClusterRequest;
      class DeleteCloudExadataInfrastructureRequest;
      class DeleteCloudVmClusterRequest;
      class DeleteOdbNetworkRequest;
      class DeleteOdbPeeringConnectionRequest;
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
      class RebootDbNodeRequest;
      class StartDbNodeRequest;
      class StopDbNodeRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateCloudExadataInfrastructureRequest;
      class UpdateOdbNetworkRequest;
      /* End of service model forward declarations required in OdbClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptMarketplaceRegistrationResult, OdbError> AcceptMarketplaceRegistrationOutcome;
      typedef Aws::Utils::Outcome<CreateCloudAutonomousVmClusterResult, OdbError> CreateCloudAutonomousVmClusterOutcome;
      typedef Aws::Utils::Outcome<CreateCloudExadataInfrastructureResult, OdbError> CreateCloudExadataInfrastructureOutcome;
      typedef Aws::Utils::Outcome<CreateCloudVmClusterResult, OdbError> CreateCloudVmClusterOutcome;
      typedef Aws::Utils::Outcome<CreateOdbNetworkResult, OdbError> CreateOdbNetworkOutcome;
      typedef Aws::Utils::Outcome<CreateOdbPeeringConnectionResult, OdbError> CreateOdbPeeringConnectionOutcome;
      typedef Aws::Utils::Outcome<DeleteCloudAutonomousVmClusterResult, OdbError> DeleteCloudAutonomousVmClusterOutcome;
      typedef Aws::Utils::Outcome<DeleteCloudExadataInfrastructureResult, OdbError> DeleteCloudExadataInfrastructureOutcome;
      typedef Aws::Utils::Outcome<DeleteCloudVmClusterResult, OdbError> DeleteCloudVmClusterOutcome;
      typedef Aws::Utils::Outcome<DeleteOdbNetworkResult, OdbError> DeleteOdbNetworkOutcome;
      typedef Aws::Utils::Outcome<DeleteOdbPeeringConnectionResult, OdbError> DeleteOdbPeeringConnectionOutcome;
      typedef Aws::Utils::Outcome<GetCloudAutonomousVmClusterResult, OdbError> GetCloudAutonomousVmClusterOutcome;
      typedef Aws::Utils::Outcome<GetCloudExadataInfrastructureResult, OdbError> GetCloudExadataInfrastructureOutcome;
      typedef Aws::Utils::Outcome<GetCloudExadataInfrastructureUnallocatedResourcesResult, OdbError> GetCloudExadataInfrastructureUnallocatedResourcesOutcome;
      typedef Aws::Utils::Outcome<GetCloudVmClusterResult, OdbError> GetCloudVmClusterOutcome;
      typedef Aws::Utils::Outcome<GetDbNodeResult, OdbError> GetDbNodeOutcome;
      typedef Aws::Utils::Outcome<GetDbServerResult, OdbError> GetDbServerOutcome;
      typedef Aws::Utils::Outcome<GetOciOnboardingStatusResult, OdbError> GetOciOnboardingStatusOutcome;
      typedef Aws::Utils::Outcome<GetOdbNetworkResult, OdbError> GetOdbNetworkOutcome;
      typedef Aws::Utils::Outcome<GetOdbPeeringConnectionResult, OdbError> GetOdbPeeringConnectionOutcome;
      typedef Aws::Utils::Outcome<InitializeServiceResult, OdbError> InitializeServiceOutcome;
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
      typedef Aws::Utils::Outcome<RebootDbNodeResult, OdbError> RebootDbNodeOutcome;
      typedef Aws::Utils::Outcome<StartDbNodeResult, OdbError> StartDbNodeOutcome;
      typedef Aws::Utils::Outcome<StopDbNodeResult, OdbError> StopDbNodeOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, OdbError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, OdbError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateCloudExadataInfrastructureResult, OdbError> UpdateCloudExadataInfrastructureOutcome;
      typedef Aws::Utils::Outcome<UpdateOdbNetworkResult, OdbError> UpdateOdbNetworkOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptMarketplaceRegistrationOutcome> AcceptMarketplaceRegistrationOutcomeCallable;
      typedef std::future<CreateCloudAutonomousVmClusterOutcome> CreateCloudAutonomousVmClusterOutcomeCallable;
      typedef std::future<CreateCloudExadataInfrastructureOutcome> CreateCloudExadataInfrastructureOutcomeCallable;
      typedef std::future<CreateCloudVmClusterOutcome> CreateCloudVmClusterOutcomeCallable;
      typedef std::future<CreateOdbNetworkOutcome> CreateOdbNetworkOutcomeCallable;
      typedef std::future<CreateOdbPeeringConnectionOutcome> CreateOdbPeeringConnectionOutcomeCallable;
      typedef std::future<DeleteCloudAutonomousVmClusterOutcome> DeleteCloudAutonomousVmClusterOutcomeCallable;
      typedef std::future<DeleteCloudExadataInfrastructureOutcome> DeleteCloudExadataInfrastructureOutcomeCallable;
      typedef std::future<DeleteCloudVmClusterOutcome> DeleteCloudVmClusterOutcomeCallable;
      typedef std::future<DeleteOdbNetworkOutcome> DeleteOdbNetworkOutcomeCallable;
      typedef std::future<DeleteOdbPeeringConnectionOutcome> DeleteOdbPeeringConnectionOutcomeCallable;
      typedef std::future<GetCloudAutonomousVmClusterOutcome> GetCloudAutonomousVmClusterOutcomeCallable;
      typedef std::future<GetCloudExadataInfrastructureOutcome> GetCloudExadataInfrastructureOutcomeCallable;
      typedef std::future<GetCloudExadataInfrastructureUnallocatedResourcesOutcome> GetCloudExadataInfrastructureUnallocatedResourcesOutcomeCallable;
      typedef std::future<GetCloudVmClusterOutcome> GetCloudVmClusterOutcomeCallable;
      typedef std::future<GetDbNodeOutcome> GetDbNodeOutcomeCallable;
      typedef std::future<GetDbServerOutcome> GetDbServerOutcomeCallable;
      typedef std::future<GetOciOnboardingStatusOutcome> GetOciOnboardingStatusOutcomeCallable;
      typedef std::future<GetOdbNetworkOutcome> GetOdbNetworkOutcomeCallable;
      typedef std::future<GetOdbPeeringConnectionOutcome> GetOdbPeeringConnectionOutcomeCallable;
      typedef std::future<InitializeServiceOutcome> InitializeServiceOutcomeCallable;
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
      typedef std::future<RebootDbNodeOutcome> RebootDbNodeOutcomeCallable;
      typedef std::future<StartDbNodeOutcome> StartDbNodeOutcomeCallable;
      typedef std::future<StopDbNodeOutcome> StopDbNodeOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateCloudExadataInfrastructureOutcome> UpdateCloudExadataInfrastructureOutcomeCallable;
      typedef std::future<UpdateOdbNetworkOutcome> UpdateOdbNetworkOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class OdbClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const OdbClient*, const Model::AcceptMarketplaceRegistrationRequest&, const Model::AcceptMarketplaceRegistrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptMarketplaceRegistrationResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::CreateCloudAutonomousVmClusterRequest&, const Model::CreateCloudAutonomousVmClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCloudAutonomousVmClusterResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::CreateCloudExadataInfrastructureRequest&, const Model::CreateCloudExadataInfrastructureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCloudExadataInfrastructureResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::CreateCloudVmClusterRequest&, const Model::CreateCloudVmClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCloudVmClusterResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::CreateOdbNetworkRequest&, const Model::CreateOdbNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOdbNetworkResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::CreateOdbPeeringConnectionRequest&, const Model::CreateOdbPeeringConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOdbPeeringConnectionResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::DeleteCloudAutonomousVmClusterRequest&, const Model::DeleteCloudAutonomousVmClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCloudAutonomousVmClusterResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::DeleteCloudExadataInfrastructureRequest&, const Model::DeleteCloudExadataInfrastructureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCloudExadataInfrastructureResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::DeleteCloudVmClusterRequest&, const Model::DeleteCloudVmClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCloudVmClusterResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::DeleteOdbNetworkRequest&, const Model::DeleteOdbNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOdbNetworkResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::DeleteOdbPeeringConnectionRequest&, const Model::DeleteOdbPeeringConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOdbPeeringConnectionResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::GetCloudAutonomousVmClusterRequest&, const Model::GetCloudAutonomousVmClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudAutonomousVmClusterResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::GetCloudExadataInfrastructureRequest&, const Model::GetCloudExadataInfrastructureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudExadataInfrastructureResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::GetCloudExadataInfrastructureUnallocatedResourcesRequest&, const Model::GetCloudExadataInfrastructureUnallocatedResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudExadataInfrastructureUnallocatedResourcesResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::GetCloudVmClusterRequest&, const Model::GetCloudVmClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudVmClusterResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::GetDbNodeRequest&, const Model::GetDbNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDbNodeResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::GetDbServerRequest&, const Model::GetDbServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDbServerResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::GetOciOnboardingStatusRequest&, const Model::GetOciOnboardingStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOciOnboardingStatusResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::GetOdbNetworkRequest&, const Model::GetOdbNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOdbNetworkResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::GetOdbPeeringConnectionRequest&, const Model::GetOdbPeeringConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOdbPeeringConnectionResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::InitializeServiceRequest&, const Model::InitializeServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InitializeServiceResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::ListAutonomousVirtualMachinesRequest&, const Model::ListAutonomousVirtualMachinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAutonomousVirtualMachinesResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::ListCloudAutonomousVmClustersRequest&, const Model::ListCloudAutonomousVmClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCloudAutonomousVmClustersResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::ListCloudExadataInfrastructuresRequest&, const Model::ListCloudExadataInfrastructuresOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCloudExadataInfrastructuresResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::ListCloudVmClustersRequest&, const Model::ListCloudVmClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCloudVmClustersResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::ListDbNodesRequest&, const Model::ListDbNodesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDbNodesResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::ListDbServersRequest&, const Model::ListDbServersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDbServersResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::ListDbSystemShapesRequest&, const Model::ListDbSystemShapesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDbSystemShapesResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::ListGiVersionsRequest&, const Model::ListGiVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGiVersionsResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::ListOdbNetworksRequest&, const Model::ListOdbNetworksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOdbNetworksResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::ListOdbPeeringConnectionsRequest&, const Model::ListOdbPeeringConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOdbPeeringConnectionsResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::ListSystemVersionsRequest&, const Model::ListSystemVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSystemVersionsResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::RebootDbNodeRequest&, const Model::RebootDbNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootDbNodeResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::StartDbNodeRequest&, const Model::StartDbNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDbNodeResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::StopDbNodeRequest&, const Model::StopDbNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDbNodeResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::UpdateCloudExadataInfrastructureRequest&, const Model::UpdateCloudExadataInfrastructureOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCloudExadataInfrastructureResponseReceivedHandler;
    typedef std::function<void(const OdbClient*, const Model::UpdateOdbNetworkRequest&, const Model::UpdateOdbNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOdbNetworkResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace odb
} // namespace Aws
