/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/mediaconnect/MediaConnectErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/mediaconnect/MediaConnectEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MediaConnectClient header */
#include <aws/mediaconnect/model/AddBridgeOutputsResult.h>
#include <aws/mediaconnect/model/AddBridgeSourcesResult.h>
#include <aws/mediaconnect/model/AddFlowMediaStreamsResult.h>
#include <aws/mediaconnect/model/AddFlowOutputsResult.h>
#include <aws/mediaconnect/model/AddFlowSourcesResult.h>
#include <aws/mediaconnect/model/AddFlowVpcInterfacesResult.h>
#include <aws/mediaconnect/model/CreateBridgeResult.h>
#include <aws/mediaconnect/model/CreateFlowResult.h>
#include <aws/mediaconnect/model/CreateGatewayResult.h>
#include <aws/mediaconnect/model/DeleteBridgeResult.h>
#include <aws/mediaconnect/model/DeleteFlowResult.h>
#include <aws/mediaconnect/model/DeleteGatewayResult.h>
#include <aws/mediaconnect/model/DeregisterGatewayInstanceResult.h>
#include <aws/mediaconnect/model/DescribeBridgeResult.h>
#include <aws/mediaconnect/model/DescribeFlowResult.h>
#include <aws/mediaconnect/model/DescribeFlowSourceMetadataResult.h>
#include <aws/mediaconnect/model/DescribeGatewayResult.h>
#include <aws/mediaconnect/model/DescribeGatewayInstanceResult.h>
#include <aws/mediaconnect/model/DescribeOfferingResult.h>
#include <aws/mediaconnect/model/DescribeReservationResult.h>
#include <aws/mediaconnect/model/GrantFlowEntitlementsResult.h>
#include <aws/mediaconnect/model/ListBridgesResult.h>
#include <aws/mediaconnect/model/ListEntitlementsResult.h>
#include <aws/mediaconnect/model/ListFlowsResult.h>
#include <aws/mediaconnect/model/ListGatewayInstancesResult.h>
#include <aws/mediaconnect/model/ListGatewaysResult.h>
#include <aws/mediaconnect/model/ListOfferingsResult.h>
#include <aws/mediaconnect/model/ListReservationsResult.h>
#include <aws/mediaconnect/model/ListTagsForResourceResult.h>
#include <aws/mediaconnect/model/PurchaseOfferingResult.h>
#include <aws/mediaconnect/model/RemoveBridgeOutputResult.h>
#include <aws/mediaconnect/model/RemoveBridgeSourceResult.h>
#include <aws/mediaconnect/model/RemoveFlowMediaStreamResult.h>
#include <aws/mediaconnect/model/RemoveFlowOutputResult.h>
#include <aws/mediaconnect/model/RemoveFlowSourceResult.h>
#include <aws/mediaconnect/model/RemoveFlowVpcInterfaceResult.h>
#include <aws/mediaconnect/model/RevokeFlowEntitlementResult.h>
#include <aws/mediaconnect/model/StartFlowResult.h>
#include <aws/mediaconnect/model/StopFlowResult.h>
#include <aws/mediaconnect/model/UpdateBridgeResult.h>
#include <aws/mediaconnect/model/UpdateBridgeOutputResult.h>
#include <aws/mediaconnect/model/UpdateBridgeSourceResult.h>
#include <aws/mediaconnect/model/UpdateBridgeStateResult.h>
#include <aws/mediaconnect/model/UpdateFlowResult.h>
#include <aws/mediaconnect/model/UpdateFlowEntitlementResult.h>
#include <aws/mediaconnect/model/UpdateFlowMediaStreamResult.h>
#include <aws/mediaconnect/model/UpdateFlowOutputResult.h>
#include <aws/mediaconnect/model/UpdateFlowSourceResult.h>
#include <aws/mediaconnect/model/UpdateGatewayInstanceResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in MediaConnectClient header */

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

  namespace MediaConnect
  {
    using MediaConnectClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MediaConnectEndpointProviderBase = Aws::MediaConnect::Endpoint::MediaConnectEndpointProviderBase;
    using MediaConnectEndpointProvider = Aws::MediaConnect::Endpoint::MediaConnectEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MediaConnectClient header */
      class AddBridgeOutputsRequest;
      class AddBridgeSourcesRequest;
      class AddFlowMediaStreamsRequest;
      class AddFlowOutputsRequest;
      class AddFlowSourcesRequest;
      class AddFlowVpcInterfacesRequest;
      class CreateBridgeRequest;
      class CreateFlowRequest;
      class CreateGatewayRequest;
      class DeleteBridgeRequest;
      class DeleteFlowRequest;
      class DeleteGatewayRequest;
      class DeregisterGatewayInstanceRequest;
      class DescribeBridgeRequest;
      class DescribeFlowRequest;
      class DescribeFlowSourceMetadataRequest;
      class DescribeGatewayRequest;
      class DescribeGatewayInstanceRequest;
      class DescribeOfferingRequest;
      class DescribeReservationRequest;
      class GrantFlowEntitlementsRequest;
      class ListBridgesRequest;
      class ListEntitlementsRequest;
      class ListFlowsRequest;
      class ListGatewayInstancesRequest;
      class ListGatewaysRequest;
      class ListOfferingsRequest;
      class ListReservationsRequest;
      class ListTagsForResourceRequest;
      class PurchaseOfferingRequest;
      class RemoveBridgeOutputRequest;
      class RemoveBridgeSourceRequest;
      class RemoveFlowMediaStreamRequest;
      class RemoveFlowOutputRequest;
      class RemoveFlowSourceRequest;
      class RemoveFlowVpcInterfaceRequest;
      class RevokeFlowEntitlementRequest;
      class StartFlowRequest;
      class StopFlowRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateBridgeRequest;
      class UpdateBridgeOutputRequest;
      class UpdateBridgeSourceRequest;
      class UpdateBridgeStateRequest;
      class UpdateFlowRequest;
      class UpdateFlowEntitlementRequest;
      class UpdateFlowMediaStreamRequest;
      class UpdateFlowOutputRequest;
      class UpdateFlowSourceRequest;
      class UpdateGatewayInstanceRequest;
      /* End of service model forward declarations required in MediaConnectClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddBridgeOutputsResult, MediaConnectError> AddBridgeOutputsOutcome;
      typedef Aws::Utils::Outcome<AddBridgeSourcesResult, MediaConnectError> AddBridgeSourcesOutcome;
      typedef Aws::Utils::Outcome<AddFlowMediaStreamsResult, MediaConnectError> AddFlowMediaStreamsOutcome;
      typedef Aws::Utils::Outcome<AddFlowOutputsResult, MediaConnectError> AddFlowOutputsOutcome;
      typedef Aws::Utils::Outcome<AddFlowSourcesResult, MediaConnectError> AddFlowSourcesOutcome;
      typedef Aws::Utils::Outcome<AddFlowVpcInterfacesResult, MediaConnectError> AddFlowVpcInterfacesOutcome;
      typedef Aws::Utils::Outcome<CreateBridgeResult, MediaConnectError> CreateBridgeOutcome;
      typedef Aws::Utils::Outcome<CreateFlowResult, MediaConnectError> CreateFlowOutcome;
      typedef Aws::Utils::Outcome<CreateGatewayResult, MediaConnectError> CreateGatewayOutcome;
      typedef Aws::Utils::Outcome<DeleteBridgeResult, MediaConnectError> DeleteBridgeOutcome;
      typedef Aws::Utils::Outcome<DeleteFlowResult, MediaConnectError> DeleteFlowOutcome;
      typedef Aws::Utils::Outcome<DeleteGatewayResult, MediaConnectError> DeleteGatewayOutcome;
      typedef Aws::Utils::Outcome<DeregisterGatewayInstanceResult, MediaConnectError> DeregisterGatewayInstanceOutcome;
      typedef Aws::Utils::Outcome<DescribeBridgeResult, MediaConnectError> DescribeBridgeOutcome;
      typedef Aws::Utils::Outcome<DescribeFlowResult, MediaConnectError> DescribeFlowOutcome;
      typedef Aws::Utils::Outcome<DescribeFlowSourceMetadataResult, MediaConnectError> DescribeFlowSourceMetadataOutcome;
      typedef Aws::Utils::Outcome<DescribeGatewayResult, MediaConnectError> DescribeGatewayOutcome;
      typedef Aws::Utils::Outcome<DescribeGatewayInstanceResult, MediaConnectError> DescribeGatewayInstanceOutcome;
      typedef Aws::Utils::Outcome<DescribeOfferingResult, MediaConnectError> DescribeOfferingOutcome;
      typedef Aws::Utils::Outcome<DescribeReservationResult, MediaConnectError> DescribeReservationOutcome;
      typedef Aws::Utils::Outcome<GrantFlowEntitlementsResult, MediaConnectError> GrantFlowEntitlementsOutcome;
      typedef Aws::Utils::Outcome<ListBridgesResult, MediaConnectError> ListBridgesOutcome;
      typedef Aws::Utils::Outcome<ListEntitlementsResult, MediaConnectError> ListEntitlementsOutcome;
      typedef Aws::Utils::Outcome<ListFlowsResult, MediaConnectError> ListFlowsOutcome;
      typedef Aws::Utils::Outcome<ListGatewayInstancesResult, MediaConnectError> ListGatewayInstancesOutcome;
      typedef Aws::Utils::Outcome<ListGatewaysResult, MediaConnectError> ListGatewaysOutcome;
      typedef Aws::Utils::Outcome<ListOfferingsResult, MediaConnectError> ListOfferingsOutcome;
      typedef Aws::Utils::Outcome<ListReservationsResult, MediaConnectError> ListReservationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, MediaConnectError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PurchaseOfferingResult, MediaConnectError> PurchaseOfferingOutcome;
      typedef Aws::Utils::Outcome<RemoveBridgeOutputResult, MediaConnectError> RemoveBridgeOutputOutcome;
      typedef Aws::Utils::Outcome<RemoveBridgeSourceResult, MediaConnectError> RemoveBridgeSourceOutcome;
      typedef Aws::Utils::Outcome<RemoveFlowMediaStreamResult, MediaConnectError> RemoveFlowMediaStreamOutcome;
      typedef Aws::Utils::Outcome<RemoveFlowOutputResult, MediaConnectError> RemoveFlowOutputOutcome;
      typedef Aws::Utils::Outcome<RemoveFlowSourceResult, MediaConnectError> RemoveFlowSourceOutcome;
      typedef Aws::Utils::Outcome<RemoveFlowVpcInterfaceResult, MediaConnectError> RemoveFlowVpcInterfaceOutcome;
      typedef Aws::Utils::Outcome<RevokeFlowEntitlementResult, MediaConnectError> RevokeFlowEntitlementOutcome;
      typedef Aws::Utils::Outcome<StartFlowResult, MediaConnectError> StartFlowOutcome;
      typedef Aws::Utils::Outcome<StopFlowResult, MediaConnectError> StopFlowOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MediaConnectError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MediaConnectError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateBridgeResult, MediaConnectError> UpdateBridgeOutcome;
      typedef Aws::Utils::Outcome<UpdateBridgeOutputResult, MediaConnectError> UpdateBridgeOutputOutcome;
      typedef Aws::Utils::Outcome<UpdateBridgeSourceResult, MediaConnectError> UpdateBridgeSourceOutcome;
      typedef Aws::Utils::Outcome<UpdateBridgeStateResult, MediaConnectError> UpdateBridgeStateOutcome;
      typedef Aws::Utils::Outcome<UpdateFlowResult, MediaConnectError> UpdateFlowOutcome;
      typedef Aws::Utils::Outcome<UpdateFlowEntitlementResult, MediaConnectError> UpdateFlowEntitlementOutcome;
      typedef Aws::Utils::Outcome<UpdateFlowMediaStreamResult, MediaConnectError> UpdateFlowMediaStreamOutcome;
      typedef Aws::Utils::Outcome<UpdateFlowOutputResult, MediaConnectError> UpdateFlowOutputOutcome;
      typedef Aws::Utils::Outcome<UpdateFlowSourceResult, MediaConnectError> UpdateFlowSourceOutcome;
      typedef Aws::Utils::Outcome<UpdateGatewayInstanceResult, MediaConnectError> UpdateGatewayInstanceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddBridgeOutputsOutcome> AddBridgeOutputsOutcomeCallable;
      typedef std::future<AddBridgeSourcesOutcome> AddBridgeSourcesOutcomeCallable;
      typedef std::future<AddFlowMediaStreamsOutcome> AddFlowMediaStreamsOutcomeCallable;
      typedef std::future<AddFlowOutputsOutcome> AddFlowOutputsOutcomeCallable;
      typedef std::future<AddFlowSourcesOutcome> AddFlowSourcesOutcomeCallable;
      typedef std::future<AddFlowVpcInterfacesOutcome> AddFlowVpcInterfacesOutcomeCallable;
      typedef std::future<CreateBridgeOutcome> CreateBridgeOutcomeCallable;
      typedef std::future<CreateFlowOutcome> CreateFlowOutcomeCallable;
      typedef std::future<CreateGatewayOutcome> CreateGatewayOutcomeCallable;
      typedef std::future<DeleteBridgeOutcome> DeleteBridgeOutcomeCallable;
      typedef std::future<DeleteFlowOutcome> DeleteFlowOutcomeCallable;
      typedef std::future<DeleteGatewayOutcome> DeleteGatewayOutcomeCallable;
      typedef std::future<DeregisterGatewayInstanceOutcome> DeregisterGatewayInstanceOutcomeCallable;
      typedef std::future<DescribeBridgeOutcome> DescribeBridgeOutcomeCallable;
      typedef std::future<DescribeFlowOutcome> DescribeFlowOutcomeCallable;
      typedef std::future<DescribeFlowSourceMetadataOutcome> DescribeFlowSourceMetadataOutcomeCallable;
      typedef std::future<DescribeGatewayOutcome> DescribeGatewayOutcomeCallable;
      typedef std::future<DescribeGatewayInstanceOutcome> DescribeGatewayInstanceOutcomeCallable;
      typedef std::future<DescribeOfferingOutcome> DescribeOfferingOutcomeCallable;
      typedef std::future<DescribeReservationOutcome> DescribeReservationOutcomeCallable;
      typedef std::future<GrantFlowEntitlementsOutcome> GrantFlowEntitlementsOutcomeCallable;
      typedef std::future<ListBridgesOutcome> ListBridgesOutcomeCallable;
      typedef std::future<ListEntitlementsOutcome> ListEntitlementsOutcomeCallable;
      typedef std::future<ListFlowsOutcome> ListFlowsOutcomeCallable;
      typedef std::future<ListGatewayInstancesOutcome> ListGatewayInstancesOutcomeCallable;
      typedef std::future<ListGatewaysOutcome> ListGatewaysOutcomeCallable;
      typedef std::future<ListOfferingsOutcome> ListOfferingsOutcomeCallable;
      typedef std::future<ListReservationsOutcome> ListReservationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PurchaseOfferingOutcome> PurchaseOfferingOutcomeCallable;
      typedef std::future<RemoveBridgeOutputOutcome> RemoveBridgeOutputOutcomeCallable;
      typedef std::future<RemoveBridgeSourceOutcome> RemoveBridgeSourceOutcomeCallable;
      typedef std::future<RemoveFlowMediaStreamOutcome> RemoveFlowMediaStreamOutcomeCallable;
      typedef std::future<RemoveFlowOutputOutcome> RemoveFlowOutputOutcomeCallable;
      typedef std::future<RemoveFlowSourceOutcome> RemoveFlowSourceOutcomeCallable;
      typedef std::future<RemoveFlowVpcInterfaceOutcome> RemoveFlowVpcInterfaceOutcomeCallable;
      typedef std::future<RevokeFlowEntitlementOutcome> RevokeFlowEntitlementOutcomeCallable;
      typedef std::future<StartFlowOutcome> StartFlowOutcomeCallable;
      typedef std::future<StopFlowOutcome> StopFlowOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateBridgeOutcome> UpdateBridgeOutcomeCallable;
      typedef std::future<UpdateBridgeOutputOutcome> UpdateBridgeOutputOutcomeCallable;
      typedef std::future<UpdateBridgeSourceOutcome> UpdateBridgeSourceOutcomeCallable;
      typedef std::future<UpdateBridgeStateOutcome> UpdateBridgeStateOutcomeCallable;
      typedef std::future<UpdateFlowOutcome> UpdateFlowOutcomeCallable;
      typedef std::future<UpdateFlowEntitlementOutcome> UpdateFlowEntitlementOutcomeCallable;
      typedef std::future<UpdateFlowMediaStreamOutcome> UpdateFlowMediaStreamOutcomeCallable;
      typedef std::future<UpdateFlowOutputOutcome> UpdateFlowOutputOutcomeCallable;
      typedef std::future<UpdateFlowSourceOutcome> UpdateFlowSourceOutcomeCallable;
      typedef std::future<UpdateGatewayInstanceOutcome> UpdateGatewayInstanceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MediaConnectClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MediaConnectClient*, const Model::AddBridgeOutputsRequest&, const Model::AddBridgeOutputsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddBridgeOutputsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::AddBridgeSourcesRequest&, const Model::AddBridgeSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddBridgeSourcesResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::AddFlowMediaStreamsRequest&, const Model::AddFlowMediaStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddFlowMediaStreamsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::AddFlowOutputsRequest&, const Model::AddFlowOutputsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddFlowOutputsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::AddFlowSourcesRequest&, const Model::AddFlowSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddFlowSourcesResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::AddFlowVpcInterfacesRequest&, const Model::AddFlowVpcInterfacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddFlowVpcInterfacesResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::CreateBridgeRequest&, const Model::CreateBridgeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBridgeResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::CreateFlowRequest&, const Model::CreateFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFlowResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::CreateGatewayRequest&, const Model::CreateGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGatewayResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::DeleteBridgeRequest&, const Model::DeleteBridgeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBridgeResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::DeleteFlowRequest&, const Model::DeleteFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFlowResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::DeleteGatewayRequest&, const Model::DeleteGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGatewayResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::DeregisterGatewayInstanceRequest&, const Model::DeregisterGatewayInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterGatewayInstanceResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::DescribeBridgeRequest&, const Model::DescribeBridgeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBridgeResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::DescribeFlowRequest&, const Model::DescribeFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFlowResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::DescribeFlowSourceMetadataRequest&, const Model::DescribeFlowSourceMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFlowSourceMetadataResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::DescribeGatewayRequest&, const Model::DescribeGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGatewayResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::DescribeGatewayInstanceRequest&, const Model::DescribeGatewayInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGatewayInstanceResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::DescribeOfferingRequest&, const Model::DescribeOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOfferingResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::DescribeReservationRequest&, const Model::DescribeReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservationResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::GrantFlowEntitlementsRequest&, const Model::GrantFlowEntitlementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GrantFlowEntitlementsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::ListBridgesRequest&, const Model::ListBridgesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBridgesResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::ListEntitlementsRequest&, const Model::ListEntitlementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntitlementsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::ListFlowsRequest&, const Model::ListFlowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFlowsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::ListGatewayInstancesRequest&, const Model::ListGatewayInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGatewayInstancesResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::ListGatewaysRequest&, const Model::ListGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGatewaysResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::ListOfferingsRequest&, const Model::ListOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOfferingsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::ListReservationsRequest&, const Model::ListReservationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReservationsResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::PurchaseOfferingRequest&, const Model::PurchaseOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseOfferingResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::RemoveBridgeOutputRequest&, const Model::RemoveBridgeOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveBridgeOutputResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::RemoveBridgeSourceRequest&, const Model::RemoveBridgeSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveBridgeSourceResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::RemoveFlowMediaStreamRequest&, const Model::RemoveFlowMediaStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveFlowMediaStreamResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::RemoveFlowOutputRequest&, const Model::RemoveFlowOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveFlowOutputResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::RemoveFlowSourceRequest&, const Model::RemoveFlowSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveFlowSourceResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::RemoveFlowVpcInterfaceRequest&, const Model::RemoveFlowVpcInterfaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveFlowVpcInterfaceResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::RevokeFlowEntitlementRequest&, const Model::RevokeFlowEntitlementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeFlowEntitlementResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::StartFlowRequest&, const Model::StartFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFlowResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::StopFlowRequest&, const Model::StopFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopFlowResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UpdateBridgeRequest&, const Model::UpdateBridgeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBridgeResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UpdateBridgeOutputRequest&, const Model::UpdateBridgeOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBridgeOutputResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UpdateBridgeSourceRequest&, const Model::UpdateBridgeSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBridgeSourceResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UpdateBridgeStateRequest&, const Model::UpdateBridgeStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBridgeStateResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UpdateFlowRequest&, const Model::UpdateFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFlowResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UpdateFlowEntitlementRequest&, const Model::UpdateFlowEntitlementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFlowEntitlementResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UpdateFlowMediaStreamRequest&, const Model::UpdateFlowMediaStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFlowMediaStreamResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UpdateFlowOutputRequest&, const Model::UpdateFlowOutputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFlowOutputResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UpdateFlowSourceRequest&, const Model::UpdateFlowSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFlowSourceResponseReceivedHandler;
    typedef std::function<void(const MediaConnectClient*, const Model::UpdateGatewayInstanceRequest&, const Model::UpdateGatewayInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGatewayInstanceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MediaConnect
} // namespace Aws
