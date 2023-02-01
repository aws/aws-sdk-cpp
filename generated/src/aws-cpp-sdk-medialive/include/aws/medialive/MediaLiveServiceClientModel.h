/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/medialive/MediaLiveErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/medialive/MediaLiveEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MediaLiveClient header */
#include <aws/medialive/model/AcceptInputDeviceTransferResult.h>
#include <aws/medialive/model/BatchDeleteResult.h>
#include <aws/medialive/model/BatchStartResult.h>
#include <aws/medialive/model/BatchStopResult.h>
#include <aws/medialive/model/BatchUpdateScheduleResult.h>
#include <aws/medialive/model/CancelInputDeviceTransferResult.h>
#include <aws/medialive/model/ClaimDeviceResult.h>
#include <aws/medialive/model/CreateChannelResult.h>
#include <aws/medialive/model/CreateInputResult.h>
#include <aws/medialive/model/CreateInputSecurityGroupResult.h>
#include <aws/medialive/model/CreateMultiplexResult.h>
#include <aws/medialive/model/CreateMultiplexProgramResult.h>
#include <aws/medialive/model/CreatePartnerInputResult.h>
#include <aws/medialive/model/DeleteChannelResult.h>
#include <aws/medialive/model/DeleteInputResult.h>
#include <aws/medialive/model/DeleteInputSecurityGroupResult.h>
#include <aws/medialive/model/DeleteMultiplexResult.h>
#include <aws/medialive/model/DeleteMultiplexProgramResult.h>
#include <aws/medialive/model/DeleteReservationResult.h>
#include <aws/medialive/model/DeleteScheduleResult.h>
#include <aws/medialive/model/DescribeChannelResult.h>
#include <aws/medialive/model/DescribeInputResult.h>
#include <aws/medialive/model/DescribeInputDeviceResult.h>
#include <aws/medialive/model/DescribeInputDeviceThumbnailResult.h>
#include <aws/medialive/model/DescribeInputSecurityGroupResult.h>
#include <aws/medialive/model/DescribeMultiplexResult.h>
#include <aws/medialive/model/DescribeMultiplexProgramResult.h>
#include <aws/medialive/model/DescribeOfferingResult.h>
#include <aws/medialive/model/DescribeReservationResult.h>
#include <aws/medialive/model/DescribeScheduleResult.h>
#include <aws/medialive/model/ListChannelsResult.h>
#include <aws/medialive/model/ListInputDeviceTransfersResult.h>
#include <aws/medialive/model/ListInputDevicesResult.h>
#include <aws/medialive/model/ListInputSecurityGroupsResult.h>
#include <aws/medialive/model/ListInputsResult.h>
#include <aws/medialive/model/ListMultiplexProgramsResult.h>
#include <aws/medialive/model/ListMultiplexesResult.h>
#include <aws/medialive/model/ListOfferingsResult.h>
#include <aws/medialive/model/ListReservationsResult.h>
#include <aws/medialive/model/ListTagsForResourceResult.h>
#include <aws/medialive/model/PurchaseOfferingResult.h>
#include <aws/medialive/model/RebootInputDeviceResult.h>
#include <aws/medialive/model/RejectInputDeviceTransferResult.h>
#include <aws/medialive/model/StartChannelResult.h>
#include <aws/medialive/model/StartInputDeviceMaintenanceWindowResult.h>
#include <aws/medialive/model/StartMultiplexResult.h>
#include <aws/medialive/model/StopChannelResult.h>
#include <aws/medialive/model/StopMultiplexResult.h>
#include <aws/medialive/model/TransferInputDeviceResult.h>
#include <aws/medialive/model/UpdateChannelResult.h>
#include <aws/medialive/model/UpdateChannelClassResult.h>
#include <aws/medialive/model/UpdateInputResult.h>
#include <aws/medialive/model/UpdateInputDeviceResult.h>
#include <aws/medialive/model/UpdateInputSecurityGroupResult.h>
#include <aws/medialive/model/UpdateMultiplexResult.h>
#include <aws/medialive/model/UpdateMultiplexProgramResult.h>
#include <aws/medialive/model/UpdateReservationResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in MediaLiveClient header */

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

  namespace MediaLive
  {
    using MediaLiveClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MediaLiveEndpointProviderBase = Aws::MediaLive::Endpoint::MediaLiveEndpointProviderBase;
    using MediaLiveEndpointProvider = Aws::MediaLive::Endpoint::MediaLiveEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MediaLiveClient header */
      class AcceptInputDeviceTransferRequest;
      class BatchDeleteRequest;
      class BatchStartRequest;
      class BatchStopRequest;
      class BatchUpdateScheduleRequest;
      class CancelInputDeviceTransferRequest;
      class ClaimDeviceRequest;
      class CreateChannelRequest;
      class CreateInputRequest;
      class CreateInputSecurityGroupRequest;
      class CreateMultiplexRequest;
      class CreateMultiplexProgramRequest;
      class CreatePartnerInputRequest;
      class CreateTagsRequest;
      class DeleteChannelRequest;
      class DeleteInputRequest;
      class DeleteInputSecurityGroupRequest;
      class DeleteMultiplexRequest;
      class DeleteMultiplexProgramRequest;
      class DeleteReservationRequest;
      class DeleteScheduleRequest;
      class DeleteTagsRequest;
      class DescribeChannelRequest;
      class DescribeInputRequest;
      class DescribeInputDeviceRequest;
      class DescribeInputDeviceThumbnailRequest;
      class DescribeInputSecurityGroupRequest;
      class DescribeMultiplexRequest;
      class DescribeMultiplexProgramRequest;
      class DescribeOfferingRequest;
      class DescribeReservationRequest;
      class DescribeScheduleRequest;
      class ListChannelsRequest;
      class ListInputDeviceTransfersRequest;
      class ListInputDevicesRequest;
      class ListInputSecurityGroupsRequest;
      class ListInputsRequest;
      class ListMultiplexProgramsRequest;
      class ListMultiplexesRequest;
      class ListOfferingsRequest;
      class ListReservationsRequest;
      class ListTagsForResourceRequest;
      class PurchaseOfferingRequest;
      class RebootInputDeviceRequest;
      class RejectInputDeviceTransferRequest;
      class StartChannelRequest;
      class StartInputDeviceMaintenanceWindowRequest;
      class StartMultiplexRequest;
      class StopChannelRequest;
      class StopMultiplexRequest;
      class TransferInputDeviceRequest;
      class UpdateChannelRequest;
      class UpdateChannelClassRequest;
      class UpdateInputRequest;
      class UpdateInputDeviceRequest;
      class UpdateInputSecurityGroupRequest;
      class UpdateMultiplexRequest;
      class UpdateMultiplexProgramRequest;
      class UpdateReservationRequest;
      /* End of service model forward declarations required in MediaLiveClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptInputDeviceTransferResult, MediaLiveError> AcceptInputDeviceTransferOutcome;
      typedef Aws::Utils::Outcome<BatchDeleteResult, MediaLiveError> BatchDeleteOutcome;
      typedef Aws::Utils::Outcome<BatchStartResult, MediaLiveError> BatchStartOutcome;
      typedef Aws::Utils::Outcome<BatchStopResult, MediaLiveError> BatchStopOutcome;
      typedef Aws::Utils::Outcome<BatchUpdateScheduleResult, MediaLiveError> BatchUpdateScheduleOutcome;
      typedef Aws::Utils::Outcome<CancelInputDeviceTransferResult, MediaLiveError> CancelInputDeviceTransferOutcome;
      typedef Aws::Utils::Outcome<ClaimDeviceResult, MediaLiveError> ClaimDeviceOutcome;
      typedef Aws::Utils::Outcome<CreateChannelResult, MediaLiveError> CreateChannelOutcome;
      typedef Aws::Utils::Outcome<CreateInputResult, MediaLiveError> CreateInputOutcome;
      typedef Aws::Utils::Outcome<CreateInputSecurityGroupResult, MediaLiveError> CreateInputSecurityGroupOutcome;
      typedef Aws::Utils::Outcome<CreateMultiplexResult, MediaLiveError> CreateMultiplexOutcome;
      typedef Aws::Utils::Outcome<CreateMultiplexProgramResult, MediaLiveError> CreateMultiplexProgramOutcome;
      typedef Aws::Utils::Outcome<CreatePartnerInputResult, MediaLiveError> CreatePartnerInputOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MediaLiveError> CreateTagsOutcome;
      typedef Aws::Utils::Outcome<DeleteChannelResult, MediaLiveError> DeleteChannelOutcome;
      typedef Aws::Utils::Outcome<DeleteInputResult, MediaLiveError> DeleteInputOutcome;
      typedef Aws::Utils::Outcome<DeleteInputSecurityGroupResult, MediaLiveError> DeleteInputSecurityGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteMultiplexResult, MediaLiveError> DeleteMultiplexOutcome;
      typedef Aws::Utils::Outcome<DeleteMultiplexProgramResult, MediaLiveError> DeleteMultiplexProgramOutcome;
      typedef Aws::Utils::Outcome<DeleteReservationResult, MediaLiveError> DeleteReservationOutcome;
      typedef Aws::Utils::Outcome<DeleteScheduleResult, MediaLiveError> DeleteScheduleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MediaLiveError> DeleteTagsOutcome;
      typedef Aws::Utils::Outcome<DescribeChannelResult, MediaLiveError> DescribeChannelOutcome;
      typedef Aws::Utils::Outcome<DescribeInputResult, MediaLiveError> DescribeInputOutcome;
      typedef Aws::Utils::Outcome<DescribeInputDeviceResult, MediaLiveError> DescribeInputDeviceOutcome;
      typedef Aws::Utils::Outcome<DescribeInputDeviceThumbnailResult, MediaLiveError> DescribeInputDeviceThumbnailOutcome;
      typedef Aws::Utils::Outcome<DescribeInputSecurityGroupResult, MediaLiveError> DescribeInputSecurityGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeMultiplexResult, MediaLiveError> DescribeMultiplexOutcome;
      typedef Aws::Utils::Outcome<DescribeMultiplexProgramResult, MediaLiveError> DescribeMultiplexProgramOutcome;
      typedef Aws::Utils::Outcome<DescribeOfferingResult, MediaLiveError> DescribeOfferingOutcome;
      typedef Aws::Utils::Outcome<DescribeReservationResult, MediaLiveError> DescribeReservationOutcome;
      typedef Aws::Utils::Outcome<DescribeScheduleResult, MediaLiveError> DescribeScheduleOutcome;
      typedef Aws::Utils::Outcome<ListChannelsResult, MediaLiveError> ListChannelsOutcome;
      typedef Aws::Utils::Outcome<ListInputDeviceTransfersResult, MediaLiveError> ListInputDeviceTransfersOutcome;
      typedef Aws::Utils::Outcome<ListInputDevicesResult, MediaLiveError> ListInputDevicesOutcome;
      typedef Aws::Utils::Outcome<ListInputSecurityGroupsResult, MediaLiveError> ListInputSecurityGroupsOutcome;
      typedef Aws::Utils::Outcome<ListInputsResult, MediaLiveError> ListInputsOutcome;
      typedef Aws::Utils::Outcome<ListMultiplexProgramsResult, MediaLiveError> ListMultiplexProgramsOutcome;
      typedef Aws::Utils::Outcome<ListMultiplexesResult, MediaLiveError> ListMultiplexesOutcome;
      typedef Aws::Utils::Outcome<ListOfferingsResult, MediaLiveError> ListOfferingsOutcome;
      typedef Aws::Utils::Outcome<ListReservationsResult, MediaLiveError> ListReservationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, MediaLiveError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PurchaseOfferingResult, MediaLiveError> PurchaseOfferingOutcome;
      typedef Aws::Utils::Outcome<RebootInputDeviceResult, MediaLiveError> RebootInputDeviceOutcome;
      typedef Aws::Utils::Outcome<RejectInputDeviceTransferResult, MediaLiveError> RejectInputDeviceTransferOutcome;
      typedef Aws::Utils::Outcome<StartChannelResult, MediaLiveError> StartChannelOutcome;
      typedef Aws::Utils::Outcome<StartInputDeviceMaintenanceWindowResult, MediaLiveError> StartInputDeviceMaintenanceWindowOutcome;
      typedef Aws::Utils::Outcome<StartMultiplexResult, MediaLiveError> StartMultiplexOutcome;
      typedef Aws::Utils::Outcome<StopChannelResult, MediaLiveError> StopChannelOutcome;
      typedef Aws::Utils::Outcome<StopMultiplexResult, MediaLiveError> StopMultiplexOutcome;
      typedef Aws::Utils::Outcome<TransferInputDeviceResult, MediaLiveError> TransferInputDeviceOutcome;
      typedef Aws::Utils::Outcome<UpdateChannelResult, MediaLiveError> UpdateChannelOutcome;
      typedef Aws::Utils::Outcome<UpdateChannelClassResult, MediaLiveError> UpdateChannelClassOutcome;
      typedef Aws::Utils::Outcome<UpdateInputResult, MediaLiveError> UpdateInputOutcome;
      typedef Aws::Utils::Outcome<UpdateInputDeviceResult, MediaLiveError> UpdateInputDeviceOutcome;
      typedef Aws::Utils::Outcome<UpdateInputSecurityGroupResult, MediaLiveError> UpdateInputSecurityGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateMultiplexResult, MediaLiveError> UpdateMultiplexOutcome;
      typedef Aws::Utils::Outcome<UpdateMultiplexProgramResult, MediaLiveError> UpdateMultiplexProgramOutcome;
      typedef Aws::Utils::Outcome<UpdateReservationResult, MediaLiveError> UpdateReservationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptInputDeviceTransferOutcome> AcceptInputDeviceTransferOutcomeCallable;
      typedef std::future<BatchDeleteOutcome> BatchDeleteOutcomeCallable;
      typedef std::future<BatchStartOutcome> BatchStartOutcomeCallable;
      typedef std::future<BatchStopOutcome> BatchStopOutcomeCallable;
      typedef std::future<BatchUpdateScheduleOutcome> BatchUpdateScheduleOutcomeCallable;
      typedef std::future<CancelInputDeviceTransferOutcome> CancelInputDeviceTransferOutcomeCallable;
      typedef std::future<ClaimDeviceOutcome> ClaimDeviceOutcomeCallable;
      typedef std::future<CreateChannelOutcome> CreateChannelOutcomeCallable;
      typedef std::future<CreateInputOutcome> CreateInputOutcomeCallable;
      typedef std::future<CreateInputSecurityGroupOutcome> CreateInputSecurityGroupOutcomeCallable;
      typedef std::future<CreateMultiplexOutcome> CreateMultiplexOutcomeCallable;
      typedef std::future<CreateMultiplexProgramOutcome> CreateMultiplexProgramOutcomeCallable;
      typedef std::future<CreatePartnerInputOutcome> CreatePartnerInputOutcomeCallable;
      typedef std::future<CreateTagsOutcome> CreateTagsOutcomeCallable;
      typedef std::future<DeleteChannelOutcome> DeleteChannelOutcomeCallable;
      typedef std::future<DeleteInputOutcome> DeleteInputOutcomeCallable;
      typedef std::future<DeleteInputSecurityGroupOutcome> DeleteInputSecurityGroupOutcomeCallable;
      typedef std::future<DeleteMultiplexOutcome> DeleteMultiplexOutcomeCallable;
      typedef std::future<DeleteMultiplexProgramOutcome> DeleteMultiplexProgramOutcomeCallable;
      typedef std::future<DeleteReservationOutcome> DeleteReservationOutcomeCallable;
      typedef std::future<DeleteScheduleOutcome> DeleteScheduleOutcomeCallable;
      typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
      typedef std::future<DescribeChannelOutcome> DescribeChannelOutcomeCallable;
      typedef std::future<DescribeInputOutcome> DescribeInputOutcomeCallable;
      typedef std::future<DescribeInputDeviceOutcome> DescribeInputDeviceOutcomeCallable;
      typedef std::future<DescribeInputDeviceThumbnailOutcome> DescribeInputDeviceThumbnailOutcomeCallable;
      typedef std::future<DescribeInputSecurityGroupOutcome> DescribeInputSecurityGroupOutcomeCallable;
      typedef std::future<DescribeMultiplexOutcome> DescribeMultiplexOutcomeCallable;
      typedef std::future<DescribeMultiplexProgramOutcome> DescribeMultiplexProgramOutcomeCallable;
      typedef std::future<DescribeOfferingOutcome> DescribeOfferingOutcomeCallable;
      typedef std::future<DescribeReservationOutcome> DescribeReservationOutcomeCallable;
      typedef std::future<DescribeScheduleOutcome> DescribeScheduleOutcomeCallable;
      typedef std::future<ListChannelsOutcome> ListChannelsOutcomeCallable;
      typedef std::future<ListInputDeviceTransfersOutcome> ListInputDeviceTransfersOutcomeCallable;
      typedef std::future<ListInputDevicesOutcome> ListInputDevicesOutcomeCallable;
      typedef std::future<ListInputSecurityGroupsOutcome> ListInputSecurityGroupsOutcomeCallable;
      typedef std::future<ListInputsOutcome> ListInputsOutcomeCallable;
      typedef std::future<ListMultiplexProgramsOutcome> ListMultiplexProgramsOutcomeCallable;
      typedef std::future<ListMultiplexesOutcome> ListMultiplexesOutcomeCallable;
      typedef std::future<ListOfferingsOutcome> ListOfferingsOutcomeCallable;
      typedef std::future<ListReservationsOutcome> ListReservationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PurchaseOfferingOutcome> PurchaseOfferingOutcomeCallable;
      typedef std::future<RebootInputDeviceOutcome> RebootInputDeviceOutcomeCallable;
      typedef std::future<RejectInputDeviceTransferOutcome> RejectInputDeviceTransferOutcomeCallable;
      typedef std::future<StartChannelOutcome> StartChannelOutcomeCallable;
      typedef std::future<StartInputDeviceMaintenanceWindowOutcome> StartInputDeviceMaintenanceWindowOutcomeCallable;
      typedef std::future<StartMultiplexOutcome> StartMultiplexOutcomeCallable;
      typedef std::future<StopChannelOutcome> StopChannelOutcomeCallable;
      typedef std::future<StopMultiplexOutcome> StopMultiplexOutcomeCallable;
      typedef std::future<TransferInputDeviceOutcome> TransferInputDeviceOutcomeCallable;
      typedef std::future<UpdateChannelOutcome> UpdateChannelOutcomeCallable;
      typedef std::future<UpdateChannelClassOutcome> UpdateChannelClassOutcomeCallable;
      typedef std::future<UpdateInputOutcome> UpdateInputOutcomeCallable;
      typedef std::future<UpdateInputDeviceOutcome> UpdateInputDeviceOutcomeCallable;
      typedef std::future<UpdateInputSecurityGroupOutcome> UpdateInputSecurityGroupOutcomeCallable;
      typedef std::future<UpdateMultiplexOutcome> UpdateMultiplexOutcomeCallable;
      typedef std::future<UpdateMultiplexProgramOutcome> UpdateMultiplexProgramOutcomeCallable;
      typedef std::future<UpdateReservationOutcome> UpdateReservationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MediaLiveClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MediaLiveClient*, const Model::AcceptInputDeviceTransferRequest&, const Model::AcceptInputDeviceTransferOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptInputDeviceTransferResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::BatchDeleteRequest&, const Model::BatchDeleteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::BatchStartRequest&, const Model::BatchStartOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchStartResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::BatchStopRequest&, const Model::BatchStopOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchStopResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::BatchUpdateScheduleRequest&, const Model::BatchUpdateScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateScheduleResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CancelInputDeviceTransferRequest&, const Model::CancelInputDeviceTransferOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelInputDeviceTransferResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ClaimDeviceRequest&, const Model::ClaimDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ClaimDeviceResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateChannelRequest&, const Model::CreateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateInputRequest&, const Model::CreateInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInputResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateInputSecurityGroupRequest&, const Model::CreateInputSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInputSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateMultiplexRequest&, const Model::CreateMultiplexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMultiplexResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateMultiplexProgramRequest&, const Model::CreateMultiplexProgramOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMultiplexProgramResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreatePartnerInputRequest&, const Model::CreatePartnerInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePartnerInputResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateTagsRequest&, const Model::CreateTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTagsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteChannelRequest&, const Model::DeleteChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteInputRequest&, const Model::DeleteInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInputResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteInputSecurityGroupRequest&, const Model::DeleteInputSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInputSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteMultiplexRequest&, const Model::DeleteMultiplexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMultiplexResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteMultiplexProgramRequest&, const Model::DeleteMultiplexProgramOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMultiplexProgramResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteReservationRequest&, const Model::DeleteReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReservationResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteScheduleRequest&, const Model::DeleteScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScheduleResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeChannelRequest&, const Model::DescribeChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeInputRequest&, const Model::DescribeInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInputResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeInputDeviceRequest&, const Model::DescribeInputDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInputDeviceResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeInputDeviceThumbnailRequest&, Model::DescribeInputDeviceThumbnailOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInputDeviceThumbnailResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeInputSecurityGroupRequest&, const Model::DescribeInputSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInputSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeMultiplexRequest&, const Model::DescribeMultiplexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMultiplexResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeMultiplexProgramRequest&, const Model::DescribeMultiplexProgramOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMultiplexProgramResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeOfferingRequest&, const Model::DescribeOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOfferingResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeReservationRequest&, const Model::DescribeReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservationResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeScheduleRequest&, const Model::DescribeScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScheduleResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListChannelsRequest&, const Model::ListChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListInputDeviceTransfersRequest&, const Model::ListInputDeviceTransfersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInputDeviceTransfersResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListInputDevicesRequest&, const Model::ListInputDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInputDevicesResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListInputSecurityGroupsRequest&, const Model::ListInputSecurityGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInputSecurityGroupsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListInputsRequest&, const Model::ListInputsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInputsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListMultiplexProgramsRequest&, const Model::ListMultiplexProgramsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMultiplexProgramsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListMultiplexesRequest&, const Model::ListMultiplexesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMultiplexesResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListOfferingsRequest&, const Model::ListOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOfferingsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListReservationsRequest&, const Model::ListReservationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReservationsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::PurchaseOfferingRequest&, const Model::PurchaseOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseOfferingResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::RebootInputDeviceRequest&, const Model::RebootInputDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootInputDeviceResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::RejectInputDeviceTransferRequest&, const Model::RejectInputDeviceTransferOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectInputDeviceTransferResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::StartChannelRequest&, const Model::StartChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::StartInputDeviceMaintenanceWindowRequest&, const Model::StartInputDeviceMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartInputDeviceMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::StartMultiplexRequest&, const Model::StartMultiplexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMultiplexResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::StopChannelRequest&, const Model::StopChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::StopMultiplexRequest&, const Model::StopMultiplexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopMultiplexResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::TransferInputDeviceRequest&, const Model::TransferInputDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TransferInputDeviceResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateChannelRequest&, const Model::UpdateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateChannelClassRequest&, const Model::UpdateChannelClassOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelClassResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateInputRequest&, const Model::UpdateInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInputResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateInputDeviceRequest&, const Model::UpdateInputDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInputDeviceResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateInputSecurityGroupRequest&, const Model::UpdateInputSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInputSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateMultiplexRequest&, const Model::UpdateMultiplexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMultiplexResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateMultiplexProgramRequest&, const Model::UpdateMultiplexProgramOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMultiplexProgramResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateReservationRequest&, const Model::UpdateReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReservationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MediaLive
} // namespace Aws
