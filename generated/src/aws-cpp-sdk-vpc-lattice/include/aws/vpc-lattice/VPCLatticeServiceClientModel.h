/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/vpc-lattice/VPCLatticeErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/vpc-lattice/VPCLatticeEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in VPCLatticeClient header */
#include <aws/vpc-lattice/model/BatchUpdateRuleResult.h>
#include <aws/vpc-lattice/model/CreateAccessLogSubscriptionResult.h>
#include <aws/vpc-lattice/model/CreateListenerResult.h>
#include <aws/vpc-lattice/model/CreateResourceConfigurationResult.h>
#include <aws/vpc-lattice/model/CreateResourceGatewayResult.h>
#include <aws/vpc-lattice/model/CreateRuleResult.h>
#include <aws/vpc-lattice/model/CreateServiceResult.h>
#include <aws/vpc-lattice/model/CreateServiceNetworkResult.h>
#include <aws/vpc-lattice/model/CreateServiceNetworkResourceAssociationResult.h>
#include <aws/vpc-lattice/model/CreateServiceNetworkServiceAssociationResult.h>
#include <aws/vpc-lattice/model/CreateServiceNetworkVpcAssociationResult.h>
#include <aws/vpc-lattice/model/CreateTargetGroupResult.h>
#include <aws/vpc-lattice/model/DeleteAccessLogSubscriptionResult.h>
#include <aws/vpc-lattice/model/DeleteAuthPolicyResult.h>
#include <aws/vpc-lattice/model/DeleteListenerResult.h>
#include <aws/vpc-lattice/model/DeleteResourceConfigurationResult.h>
#include <aws/vpc-lattice/model/DeleteResourceEndpointAssociationResult.h>
#include <aws/vpc-lattice/model/DeleteResourceGatewayResult.h>
#include <aws/vpc-lattice/model/DeleteResourcePolicyResult.h>
#include <aws/vpc-lattice/model/DeleteRuleResult.h>
#include <aws/vpc-lattice/model/DeleteServiceResult.h>
#include <aws/vpc-lattice/model/DeleteServiceNetworkResult.h>
#include <aws/vpc-lattice/model/DeleteServiceNetworkResourceAssociationResult.h>
#include <aws/vpc-lattice/model/DeleteServiceNetworkServiceAssociationResult.h>
#include <aws/vpc-lattice/model/DeleteServiceNetworkVpcAssociationResult.h>
#include <aws/vpc-lattice/model/DeleteTargetGroupResult.h>
#include <aws/vpc-lattice/model/DeregisterTargetsResult.h>
#include <aws/vpc-lattice/model/GetAccessLogSubscriptionResult.h>
#include <aws/vpc-lattice/model/GetAuthPolicyResult.h>
#include <aws/vpc-lattice/model/GetListenerResult.h>
#include <aws/vpc-lattice/model/GetResourceConfigurationResult.h>
#include <aws/vpc-lattice/model/GetResourceGatewayResult.h>
#include <aws/vpc-lattice/model/GetResourcePolicyResult.h>
#include <aws/vpc-lattice/model/GetRuleResult.h>
#include <aws/vpc-lattice/model/GetServiceResult.h>
#include <aws/vpc-lattice/model/GetServiceNetworkResult.h>
#include <aws/vpc-lattice/model/GetServiceNetworkResourceAssociationResult.h>
#include <aws/vpc-lattice/model/GetServiceNetworkServiceAssociationResult.h>
#include <aws/vpc-lattice/model/GetServiceNetworkVpcAssociationResult.h>
#include <aws/vpc-lattice/model/GetTargetGroupResult.h>
#include <aws/vpc-lattice/model/ListAccessLogSubscriptionsResult.h>
#include <aws/vpc-lattice/model/ListListenersResult.h>
#include <aws/vpc-lattice/model/ListResourceConfigurationsResult.h>
#include <aws/vpc-lattice/model/ListResourceEndpointAssociationsResult.h>
#include <aws/vpc-lattice/model/ListResourceGatewaysResult.h>
#include <aws/vpc-lattice/model/ListRulesResult.h>
#include <aws/vpc-lattice/model/ListServiceNetworkResourceAssociationsResult.h>
#include <aws/vpc-lattice/model/ListServiceNetworkServiceAssociationsResult.h>
#include <aws/vpc-lattice/model/ListServiceNetworkVpcAssociationsResult.h>
#include <aws/vpc-lattice/model/ListServiceNetworkVpcEndpointAssociationsResult.h>
#include <aws/vpc-lattice/model/ListServiceNetworksResult.h>
#include <aws/vpc-lattice/model/ListServicesResult.h>
#include <aws/vpc-lattice/model/ListTagsForResourceResult.h>
#include <aws/vpc-lattice/model/ListTargetGroupsResult.h>
#include <aws/vpc-lattice/model/ListTargetsResult.h>
#include <aws/vpc-lattice/model/PutAuthPolicyResult.h>
#include <aws/vpc-lattice/model/PutResourcePolicyResult.h>
#include <aws/vpc-lattice/model/RegisterTargetsResult.h>
#include <aws/vpc-lattice/model/TagResourceResult.h>
#include <aws/vpc-lattice/model/UntagResourceResult.h>
#include <aws/vpc-lattice/model/UpdateAccessLogSubscriptionResult.h>
#include <aws/vpc-lattice/model/UpdateListenerResult.h>
#include <aws/vpc-lattice/model/UpdateResourceConfigurationResult.h>
#include <aws/vpc-lattice/model/UpdateResourceGatewayResult.h>
#include <aws/vpc-lattice/model/UpdateRuleResult.h>
#include <aws/vpc-lattice/model/UpdateServiceResult.h>
#include <aws/vpc-lattice/model/UpdateServiceNetworkResult.h>
#include <aws/vpc-lattice/model/UpdateServiceNetworkVpcAssociationResult.h>
#include <aws/vpc-lattice/model/UpdateTargetGroupResult.h>
#include <aws/vpc-lattice/model/ListServiceNetworksRequest.h>
#include <aws/vpc-lattice/model/ListServicesRequest.h>
#include <aws/vpc-lattice/model/ListResourceConfigurationsRequest.h>
#include <aws/vpc-lattice/model/ListResourceGatewaysRequest.h>
#include <aws/vpc-lattice/model/ListTargetGroupsRequest.h>
#include <aws/vpc-lattice/model/ListServiceNetworkServiceAssociationsRequest.h>
#include <aws/vpc-lattice/model/ListServiceNetworkResourceAssociationsRequest.h>
#include <aws/vpc-lattice/model/ListServiceNetworkVpcAssociationsRequest.h>
/* End of service model headers required in VPCLatticeClient header */

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

  namespace VPCLattice
  {
    using VPCLatticeClientConfiguration = Aws::Client::GenericClientConfiguration;
    using VPCLatticeEndpointProviderBase = Aws::VPCLattice::Endpoint::VPCLatticeEndpointProviderBase;
    using VPCLatticeEndpointProvider = Aws::VPCLattice::Endpoint::VPCLatticeEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in VPCLatticeClient header */
      class BatchUpdateRuleRequest;
      class CreateAccessLogSubscriptionRequest;
      class CreateListenerRequest;
      class CreateResourceConfigurationRequest;
      class CreateResourceGatewayRequest;
      class CreateRuleRequest;
      class CreateServiceRequest;
      class CreateServiceNetworkRequest;
      class CreateServiceNetworkResourceAssociationRequest;
      class CreateServiceNetworkServiceAssociationRequest;
      class CreateServiceNetworkVpcAssociationRequest;
      class CreateTargetGroupRequest;
      class DeleteAccessLogSubscriptionRequest;
      class DeleteAuthPolicyRequest;
      class DeleteListenerRequest;
      class DeleteResourceConfigurationRequest;
      class DeleteResourceEndpointAssociationRequest;
      class DeleteResourceGatewayRequest;
      class DeleteResourcePolicyRequest;
      class DeleteRuleRequest;
      class DeleteServiceRequest;
      class DeleteServiceNetworkRequest;
      class DeleteServiceNetworkResourceAssociationRequest;
      class DeleteServiceNetworkServiceAssociationRequest;
      class DeleteServiceNetworkVpcAssociationRequest;
      class DeleteTargetGroupRequest;
      class DeregisterTargetsRequest;
      class GetAccessLogSubscriptionRequest;
      class GetAuthPolicyRequest;
      class GetListenerRequest;
      class GetResourceConfigurationRequest;
      class GetResourceGatewayRequest;
      class GetResourcePolicyRequest;
      class GetRuleRequest;
      class GetServiceRequest;
      class GetServiceNetworkRequest;
      class GetServiceNetworkResourceAssociationRequest;
      class GetServiceNetworkServiceAssociationRequest;
      class GetServiceNetworkVpcAssociationRequest;
      class GetTargetGroupRequest;
      class ListAccessLogSubscriptionsRequest;
      class ListListenersRequest;
      class ListResourceConfigurationsRequest;
      class ListResourceEndpointAssociationsRequest;
      class ListResourceGatewaysRequest;
      class ListRulesRequest;
      class ListServiceNetworkResourceAssociationsRequest;
      class ListServiceNetworkServiceAssociationsRequest;
      class ListServiceNetworkVpcAssociationsRequest;
      class ListServiceNetworkVpcEndpointAssociationsRequest;
      class ListServiceNetworksRequest;
      class ListServicesRequest;
      class ListTagsForResourceRequest;
      class ListTargetGroupsRequest;
      class ListTargetsRequest;
      class PutAuthPolicyRequest;
      class PutResourcePolicyRequest;
      class RegisterTargetsRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAccessLogSubscriptionRequest;
      class UpdateListenerRequest;
      class UpdateResourceConfigurationRequest;
      class UpdateResourceGatewayRequest;
      class UpdateRuleRequest;
      class UpdateServiceRequest;
      class UpdateServiceNetworkRequest;
      class UpdateServiceNetworkVpcAssociationRequest;
      class UpdateTargetGroupRequest;
      /* End of service model forward declarations required in VPCLatticeClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchUpdateRuleResult, VPCLatticeError> BatchUpdateRuleOutcome;
      typedef Aws::Utils::Outcome<CreateAccessLogSubscriptionResult, VPCLatticeError> CreateAccessLogSubscriptionOutcome;
      typedef Aws::Utils::Outcome<CreateListenerResult, VPCLatticeError> CreateListenerOutcome;
      typedef Aws::Utils::Outcome<CreateResourceConfigurationResult, VPCLatticeError> CreateResourceConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateResourceGatewayResult, VPCLatticeError> CreateResourceGatewayOutcome;
      typedef Aws::Utils::Outcome<CreateRuleResult, VPCLatticeError> CreateRuleOutcome;
      typedef Aws::Utils::Outcome<CreateServiceResult, VPCLatticeError> CreateServiceOutcome;
      typedef Aws::Utils::Outcome<CreateServiceNetworkResult, VPCLatticeError> CreateServiceNetworkOutcome;
      typedef Aws::Utils::Outcome<CreateServiceNetworkResourceAssociationResult, VPCLatticeError> CreateServiceNetworkResourceAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateServiceNetworkServiceAssociationResult, VPCLatticeError> CreateServiceNetworkServiceAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateServiceNetworkVpcAssociationResult, VPCLatticeError> CreateServiceNetworkVpcAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateTargetGroupResult, VPCLatticeError> CreateTargetGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteAccessLogSubscriptionResult, VPCLatticeError> DeleteAccessLogSubscriptionOutcome;
      typedef Aws::Utils::Outcome<DeleteAuthPolicyResult, VPCLatticeError> DeleteAuthPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteListenerResult, VPCLatticeError> DeleteListenerOutcome;
      typedef Aws::Utils::Outcome<DeleteResourceConfigurationResult, VPCLatticeError> DeleteResourceConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteResourceEndpointAssociationResult, VPCLatticeError> DeleteResourceEndpointAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteResourceGatewayResult, VPCLatticeError> DeleteResourceGatewayOutcome;
      typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, VPCLatticeError> DeleteResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteRuleResult, VPCLatticeError> DeleteRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteServiceResult, VPCLatticeError> DeleteServiceOutcome;
      typedef Aws::Utils::Outcome<DeleteServiceNetworkResult, VPCLatticeError> DeleteServiceNetworkOutcome;
      typedef Aws::Utils::Outcome<DeleteServiceNetworkResourceAssociationResult, VPCLatticeError> DeleteServiceNetworkResourceAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteServiceNetworkServiceAssociationResult, VPCLatticeError> DeleteServiceNetworkServiceAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteServiceNetworkVpcAssociationResult, VPCLatticeError> DeleteServiceNetworkVpcAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteTargetGroupResult, VPCLatticeError> DeleteTargetGroupOutcome;
      typedef Aws::Utils::Outcome<DeregisterTargetsResult, VPCLatticeError> DeregisterTargetsOutcome;
      typedef Aws::Utils::Outcome<GetAccessLogSubscriptionResult, VPCLatticeError> GetAccessLogSubscriptionOutcome;
      typedef Aws::Utils::Outcome<GetAuthPolicyResult, VPCLatticeError> GetAuthPolicyOutcome;
      typedef Aws::Utils::Outcome<GetListenerResult, VPCLatticeError> GetListenerOutcome;
      typedef Aws::Utils::Outcome<GetResourceConfigurationResult, VPCLatticeError> GetResourceConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetResourceGatewayResult, VPCLatticeError> GetResourceGatewayOutcome;
      typedef Aws::Utils::Outcome<GetResourcePolicyResult, VPCLatticeError> GetResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<GetRuleResult, VPCLatticeError> GetRuleOutcome;
      typedef Aws::Utils::Outcome<GetServiceResult, VPCLatticeError> GetServiceOutcome;
      typedef Aws::Utils::Outcome<GetServiceNetworkResult, VPCLatticeError> GetServiceNetworkOutcome;
      typedef Aws::Utils::Outcome<GetServiceNetworkResourceAssociationResult, VPCLatticeError> GetServiceNetworkResourceAssociationOutcome;
      typedef Aws::Utils::Outcome<GetServiceNetworkServiceAssociationResult, VPCLatticeError> GetServiceNetworkServiceAssociationOutcome;
      typedef Aws::Utils::Outcome<GetServiceNetworkVpcAssociationResult, VPCLatticeError> GetServiceNetworkVpcAssociationOutcome;
      typedef Aws::Utils::Outcome<GetTargetGroupResult, VPCLatticeError> GetTargetGroupOutcome;
      typedef Aws::Utils::Outcome<ListAccessLogSubscriptionsResult, VPCLatticeError> ListAccessLogSubscriptionsOutcome;
      typedef Aws::Utils::Outcome<ListListenersResult, VPCLatticeError> ListListenersOutcome;
      typedef Aws::Utils::Outcome<ListResourceConfigurationsResult, VPCLatticeError> ListResourceConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListResourceEndpointAssociationsResult, VPCLatticeError> ListResourceEndpointAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListResourceGatewaysResult, VPCLatticeError> ListResourceGatewaysOutcome;
      typedef Aws::Utils::Outcome<ListRulesResult, VPCLatticeError> ListRulesOutcome;
      typedef Aws::Utils::Outcome<ListServiceNetworkResourceAssociationsResult, VPCLatticeError> ListServiceNetworkResourceAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListServiceNetworkServiceAssociationsResult, VPCLatticeError> ListServiceNetworkServiceAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListServiceNetworkVpcAssociationsResult, VPCLatticeError> ListServiceNetworkVpcAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListServiceNetworkVpcEndpointAssociationsResult, VPCLatticeError> ListServiceNetworkVpcEndpointAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListServiceNetworksResult, VPCLatticeError> ListServiceNetworksOutcome;
      typedef Aws::Utils::Outcome<ListServicesResult, VPCLatticeError> ListServicesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, VPCLatticeError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTargetGroupsResult, VPCLatticeError> ListTargetGroupsOutcome;
      typedef Aws::Utils::Outcome<ListTargetsResult, VPCLatticeError> ListTargetsOutcome;
      typedef Aws::Utils::Outcome<PutAuthPolicyResult, VPCLatticeError> PutAuthPolicyOutcome;
      typedef Aws::Utils::Outcome<PutResourcePolicyResult, VPCLatticeError> PutResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<RegisterTargetsResult, VPCLatticeError> RegisterTargetsOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, VPCLatticeError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, VPCLatticeError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAccessLogSubscriptionResult, VPCLatticeError> UpdateAccessLogSubscriptionOutcome;
      typedef Aws::Utils::Outcome<UpdateListenerResult, VPCLatticeError> UpdateListenerOutcome;
      typedef Aws::Utils::Outcome<UpdateResourceConfigurationResult, VPCLatticeError> UpdateResourceConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateResourceGatewayResult, VPCLatticeError> UpdateResourceGatewayOutcome;
      typedef Aws::Utils::Outcome<UpdateRuleResult, VPCLatticeError> UpdateRuleOutcome;
      typedef Aws::Utils::Outcome<UpdateServiceResult, VPCLatticeError> UpdateServiceOutcome;
      typedef Aws::Utils::Outcome<UpdateServiceNetworkResult, VPCLatticeError> UpdateServiceNetworkOutcome;
      typedef Aws::Utils::Outcome<UpdateServiceNetworkVpcAssociationResult, VPCLatticeError> UpdateServiceNetworkVpcAssociationOutcome;
      typedef Aws::Utils::Outcome<UpdateTargetGroupResult, VPCLatticeError> UpdateTargetGroupOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchUpdateRuleOutcome> BatchUpdateRuleOutcomeCallable;
      typedef std::future<CreateAccessLogSubscriptionOutcome> CreateAccessLogSubscriptionOutcomeCallable;
      typedef std::future<CreateListenerOutcome> CreateListenerOutcomeCallable;
      typedef std::future<CreateResourceConfigurationOutcome> CreateResourceConfigurationOutcomeCallable;
      typedef std::future<CreateResourceGatewayOutcome> CreateResourceGatewayOutcomeCallable;
      typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
      typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
      typedef std::future<CreateServiceNetworkOutcome> CreateServiceNetworkOutcomeCallable;
      typedef std::future<CreateServiceNetworkResourceAssociationOutcome> CreateServiceNetworkResourceAssociationOutcomeCallable;
      typedef std::future<CreateServiceNetworkServiceAssociationOutcome> CreateServiceNetworkServiceAssociationOutcomeCallable;
      typedef std::future<CreateServiceNetworkVpcAssociationOutcome> CreateServiceNetworkVpcAssociationOutcomeCallable;
      typedef std::future<CreateTargetGroupOutcome> CreateTargetGroupOutcomeCallable;
      typedef std::future<DeleteAccessLogSubscriptionOutcome> DeleteAccessLogSubscriptionOutcomeCallable;
      typedef std::future<DeleteAuthPolicyOutcome> DeleteAuthPolicyOutcomeCallable;
      typedef std::future<DeleteListenerOutcome> DeleteListenerOutcomeCallable;
      typedef std::future<DeleteResourceConfigurationOutcome> DeleteResourceConfigurationOutcomeCallable;
      typedef std::future<DeleteResourceEndpointAssociationOutcome> DeleteResourceEndpointAssociationOutcomeCallable;
      typedef std::future<DeleteResourceGatewayOutcome> DeleteResourceGatewayOutcomeCallable;
      typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
      typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
      typedef std::future<DeleteServiceOutcome> DeleteServiceOutcomeCallable;
      typedef std::future<DeleteServiceNetworkOutcome> DeleteServiceNetworkOutcomeCallable;
      typedef std::future<DeleteServiceNetworkResourceAssociationOutcome> DeleteServiceNetworkResourceAssociationOutcomeCallable;
      typedef std::future<DeleteServiceNetworkServiceAssociationOutcome> DeleteServiceNetworkServiceAssociationOutcomeCallable;
      typedef std::future<DeleteServiceNetworkVpcAssociationOutcome> DeleteServiceNetworkVpcAssociationOutcomeCallable;
      typedef std::future<DeleteTargetGroupOutcome> DeleteTargetGroupOutcomeCallable;
      typedef std::future<DeregisterTargetsOutcome> DeregisterTargetsOutcomeCallable;
      typedef std::future<GetAccessLogSubscriptionOutcome> GetAccessLogSubscriptionOutcomeCallable;
      typedef std::future<GetAuthPolicyOutcome> GetAuthPolicyOutcomeCallable;
      typedef std::future<GetListenerOutcome> GetListenerOutcomeCallable;
      typedef std::future<GetResourceConfigurationOutcome> GetResourceConfigurationOutcomeCallable;
      typedef std::future<GetResourceGatewayOutcome> GetResourceGatewayOutcomeCallable;
      typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
      typedef std::future<GetRuleOutcome> GetRuleOutcomeCallable;
      typedef std::future<GetServiceOutcome> GetServiceOutcomeCallable;
      typedef std::future<GetServiceNetworkOutcome> GetServiceNetworkOutcomeCallable;
      typedef std::future<GetServiceNetworkResourceAssociationOutcome> GetServiceNetworkResourceAssociationOutcomeCallable;
      typedef std::future<GetServiceNetworkServiceAssociationOutcome> GetServiceNetworkServiceAssociationOutcomeCallable;
      typedef std::future<GetServiceNetworkVpcAssociationOutcome> GetServiceNetworkVpcAssociationOutcomeCallable;
      typedef std::future<GetTargetGroupOutcome> GetTargetGroupOutcomeCallable;
      typedef std::future<ListAccessLogSubscriptionsOutcome> ListAccessLogSubscriptionsOutcomeCallable;
      typedef std::future<ListListenersOutcome> ListListenersOutcomeCallable;
      typedef std::future<ListResourceConfigurationsOutcome> ListResourceConfigurationsOutcomeCallable;
      typedef std::future<ListResourceEndpointAssociationsOutcome> ListResourceEndpointAssociationsOutcomeCallable;
      typedef std::future<ListResourceGatewaysOutcome> ListResourceGatewaysOutcomeCallable;
      typedef std::future<ListRulesOutcome> ListRulesOutcomeCallable;
      typedef std::future<ListServiceNetworkResourceAssociationsOutcome> ListServiceNetworkResourceAssociationsOutcomeCallable;
      typedef std::future<ListServiceNetworkServiceAssociationsOutcome> ListServiceNetworkServiceAssociationsOutcomeCallable;
      typedef std::future<ListServiceNetworkVpcAssociationsOutcome> ListServiceNetworkVpcAssociationsOutcomeCallable;
      typedef std::future<ListServiceNetworkVpcEndpointAssociationsOutcome> ListServiceNetworkVpcEndpointAssociationsOutcomeCallable;
      typedef std::future<ListServiceNetworksOutcome> ListServiceNetworksOutcomeCallable;
      typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTargetGroupsOutcome> ListTargetGroupsOutcomeCallable;
      typedef std::future<ListTargetsOutcome> ListTargetsOutcomeCallable;
      typedef std::future<PutAuthPolicyOutcome> PutAuthPolicyOutcomeCallable;
      typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
      typedef std::future<RegisterTargetsOutcome> RegisterTargetsOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAccessLogSubscriptionOutcome> UpdateAccessLogSubscriptionOutcomeCallable;
      typedef std::future<UpdateListenerOutcome> UpdateListenerOutcomeCallable;
      typedef std::future<UpdateResourceConfigurationOutcome> UpdateResourceConfigurationOutcomeCallable;
      typedef std::future<UpdateResourceGatewayOutcome> UpdateResourceGatewayOutcomeCallable;
      typedef std::future<UpdateRuleOutcome> UpdateRuleOutcomeCallable;
      typedef std::future<UpdateServiceOutcome> UpdateServiceOutcomeCallable;
      typedef std::future<UpdateServiceNetworkOutcome> UpdateServiceNetworkOutcomeCallable;
      typedef std::future<UpdateServiceNetworkVpcAssociationOutcome> UpdateServiceNetworkVpcAssociationOutcomeCallable;
      typedef std::future<UpdateTargetGroupOutcome> UpdateTargetGroupOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class VPCLatticeClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const VPCLatticeClient*, const Model::BatchUpdateRuleRequest&, const Model::BatchUpdateRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateRuleResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::CreateAccessLogSubscriptionRequest&, const Model::CreateAccessLogSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessLogSubscriptionResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::CreateListenerRequest&, const Model::CreateListenerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateListenerResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::CreateResourceConfigurationRequest&, const Model::CreateResourceConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceConfigurationResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::CreateResourceGatewayRequest&, const Model::CreateResourceGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceGatewayResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::CreateRuleRequest&, const Model::CreateRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRuleResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::CreateServiceRequest&, const Model::CreateServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::CreateServiceNetworkRequest&, const Model::CreateServiceNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceNetworkResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::CreateServiceNetworkResourceAssociationRequest&, const Model::CreateServiceNetworkResourceAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceNetworkResourceAssociationResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::CreateServiceNetworkServiceAssociationRequest&, const Model::CreateServiceNetworkServiceAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceNetworkServiceAssociationResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::CreateServiceNetworkVpcAssociationRequest&, const Model::CreateServiceNetworkVpcAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceNetworkVpcAssociationResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::CreateTargetGroupRequest&, const Model::CreateTargetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTargetGroupResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::DeleteAccessLogSubscriptionRequest&, const Model::DeleteAccessLogSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessLogSubscriptionResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::DeleteAuthPolicyRequest&, const Model::DeleteAuthPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAuthPolicyResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::DeleteListenerRequest&, const Model::DeleteListenerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteListenerResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::DeleteResourceConfigurationRequest&, const Model::DeleteResourceConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceConfigurationResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::DeleteResourceEndpointAssociationRequest&, const Model::DeleteResourceEndpointAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceEndpointAssociationResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::DeleteResourceGatewayRequest&, const Model::DeleteResourceGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceGatewayResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::DeleteRuleRequest&, const Model::DeleteRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::DeleteServiceRequest&, const Model::DeleteServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::DeleteServiceNetworkRequest&, const Model::DeleteServiceNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceNetworkResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::DeleteServiceNetworkResourceAssociationRequest&, const Model::DeleteServiceNetworkResourceAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceNetworkResourceAssociationResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::DeleteServiceNetworkServiceAssociationRequest&, const Model::DeleteServiceNetworkServiceAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceNetworkServiceAssociationResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::DeleteServiceNetworkVpcAssociationRequest&, const Model::DeleteServiceNetworkVpcAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceNetworkVpcAssociationResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::DeleteTargetGroupRequest&, const Model::DeleteTargetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTargetGroupResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::DeregisterTargetsRequest&, const Model::DeregisterTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterTargetsResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::GetAccessLogSubscriptionRequest&, const Model::GetAccessLogSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccessLogSubscriptionResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::GetAuthPolicyRequest&, const Model::GetAuthPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAuthPolicyResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::GetListenerRequest&, const Model::GetListenerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetListenerResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::GetResourceConfigurationRequest&, const Model::GetResourceConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceConfigurationResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::GetResourceGatewayRequest&, const Model::GetResourceGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceGatewayResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::GetResourcePolicyRequest&, const Model::GetResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::GetRuleRequest&, const Model::GetRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRuleResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::GetServiceRequest&, const Model::GetServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::GetServiceNetworkRequest&, const Model::GetServiceNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceNetworkResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::GetServiceNetworkResourceAssociationRequest&, const Model::GetServiceNetworkResourceAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceNetworkResourceAssociationResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::GetServiceNetworkServiceAssociationRequest&, const Model::GetServiceNetworkServiceAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceNetworkServiceAssociationResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::GetServiceNetworkVpcAssociationRequest&, const Model::GetServiceNetworkVpcAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceNetworkVpcAssociationResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::GetTargetGroupRequest&, const Model::GetTargetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTargetGroupResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::ListAccessLogSubscriptionsRequest&, const Model::ListAccessLogSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessLogSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::ListListenersRequest&, const Model::ListListenersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListListenersResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::ListResourceConfigurationsRequest&, const Model::ListResourceConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceConfigurationsResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::ListResourceEndpointAssociationsRequest&, const Model::ListResourceEndpointAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceEndpointAssociationsResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::ListResourceGatewaysRequest&, const Model::ListResourceGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceGatewaysResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::ListRulesRequest&, const Model::ListRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRulesResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::ListServiceNetworkResourceAssociationsRequest&, const Model::ListServiceNetworkResourceAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceNetworkResourceAssociationsResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::ListServiceNetworkServiceAssociationsRequest&, const Model::ListServiceNetworkServiceAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceNetworkServiceAssociationsResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::ListServiceNetworkVpcAssociationsRequest&, const Model::ListServiceNetworkVpcAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceNetworkVpcAssociationsResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::ListServiceNetworkVpcEndpointAssociationsRequest&, const Model::ListServiceNetworkVpcEndpointAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceNetworkVpcEndpointAssociationsResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::ListServiceNetworksRequest&, const Model::ListServiceNetworksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceNetworksResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::ListServicesRequest&, const Model::ListServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServicesResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::ListTargetGroupsRequest&, const Model::ListTargetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTargetGroupsResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::ListTargetsRequest&, const Model::ListTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTargetsResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::PutAuthPolicyRequest&, const Model::PutAuthPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAuthPolicyResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::RegisterTargetsRequest&, const Model::RegisterTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterTargetsResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::UpdateAccessLogSubscriptionRequest&, const Model::UpdateAccessLogSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccessLogSubscriptionResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::UpdateListenerRequest&, const Model::UpdateListenerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateListenerResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::UpdateResourceConfigurationRequest&, const Model::UpdateResourceConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceConfigurationResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::UpdateResourceGatewayRequest&, const Model::UpdateResourceGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceGatewayResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::UpdateRuleRequest&, const Model::UpdateRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRuleResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::UpdateServiceRequest&, const Model::UpdateServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::UpdateServiceNetworkRequest&, const Model::UpdateServiceNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceNetworkResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::UpdateServiceNetworkVpcAssociationRequest&, const Model::UpdateServiceNetworkVpcAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceNetworkVpcAssociationResponseReceivedHandler;
    typedef std::function<void(const VPCLatticeClient*, const Model::UpdateTargetGroupRequest&, const Model::UpdateTargetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTargetGroupResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace VPCLattice
} // namespace Aws
