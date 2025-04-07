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
#include <aws/medialive/model/CreateChannelPlacementGroupResult.h>
#include <aws/medialive/model/CreateCloudWatchAlarmTemplateResult.h>
#include <aws/medialive/model/CreateCloudWatchAlarmTemplateGroupResult.h>
#include <aws/medialive/model/CreateClusterResult.h>
#include <aws/medialive/model/CreateEventBridgeRuleTemplateResult.h>
#include <aws/medialive/model/CreateEventBridgeRuleTemplateGroupResult.h>
#include <aws/medialive/model/CreateInputResult.h>
#include <aws/medialive/model/CreateInputSecurityGroupResult.h>
#include <aws/medialive/model/CreateMultiplexResult.h>
#include <aws/medialive/model/CreateMultiplexProgramResult.h>
#include <aws/medialive/model/CreateNetworkResult.h>
#include <aws/medialive/model/CreateNodeResult.h>
#include <aws/medialive/model/CreateNodeRegistrationScriptSdkResult.h>
#include <aws/medialive/model/CreatePartnerInputResult.h>
#include <aws/medialive/model/CreateSdiSourceResult.h>
#include <aws/medialive/model/CreateSignalMapResult.h>
#include <aws/medialive/model/DeleteChannelResult.h>
#include <aws/medialive/model/DeleteChannelPlacementGroupResult.h>
#include <aws/medialive/model/DeleteClusterResult.h>
#include <aws/medialive/model/DeleteInputResult.h>
#include <aws/medialive/model/DeleteInputSecurityGroupResult.h>
#include <aws/medialive/model/DeleteMultiplexResult.h>
#include <aws/medialive/model/DeleteMultiplexProgramResult.h>
#include <aws/medialive/model/DeleteNetworkResult.h>
#include <aws/medialive/model/DeleteNodeResult.h>
#include <aws/medialive/model/DeleteReservationResult.h>
#include <aws/medialive/model/DeleteScheduleResult.h>
#include <aws/medialive/model/DeleteSdiSourceResult.h>
#include <aws/medialive/model/DescribeAccountConfigurationResult.h>
#include <aws/medialive/model/DescribeChannelResult.h>
#include <aws/medialive/model/DescribeChannelPlacementGroupSdkResult.h>
#include <aws/medialive/model/DescribeClusterSdkResult.h>
#include <aws/medialive/model/DescribeInputResult.h>
#include <aws/medialive/model/DescribeInputDeviceResult.h>
#include <aws/medialive/model/DescribeInputDeviceThumbnailResult.h>
#include <aws/medialive/model/DescribeInputSecurityGroupResult.h>
#include <aws/medialive/model/DescribeMultiplexResult.h>
#include <aws/medialive/model/DescribeMultiplexProgramResult.h>
#include <aws/medialive/model/DescribeNetworkSdkResult.h>
#include <aws/medialive/model/DescribeNodeSdkResult.h>
#include <aws/medialive/model/DescribeOfferingResult.h>
#include <aws/medialive/model/DescribeReservationResult.h>
#include <aws/medialive/model/DescribeScheduleResult.h>
#include <aws/medialive/model/DescribeSdiSourceResult.h>
#include <aws/medialive/model/DescribeThumbnailsResult.h>
#include <aws/medialive/model/GetCloudWatchAlarmTemplateResult.h>
#include <aws/medialive/model/GetCloudWatchAlarmTemplateGroupResult.h>
#include <aws/medialive/model/GetEventBridgeRuleTemplateResult.h>
#include <aws/medialive/model/GetEventBridgeRuleTemplateGroupResult.h>
#include <aws/medialive/model/GetSignalMapResult.h>
#include <aws/medialive/model/ListChannelPlacementGroupsSdkResult.h>
#include <aws/medialive/model/ListChannelsResult.h>
#include <aws/medialive/model/ListCloudWatchAlarmTemplateGroupsResult.h>
#include <aws/medialive/model/ListCloudWatchAlarmTemplatesResult.h>
#include <aws/medialive/model/ListClustersSdkResult.h>
#include <aws/medialive/model/ListEventBridgeRuleTemplateGroupsResult.h>
#include <aws/medialive/model/ListEventBridgeRuleTemplatesResult.h>
#include <aws/medialive/model/ListInputDeviceTransfersResult.h>
#include <aws/medialive/model/ListInputDevicesResult.h>
#include <aws/medialive/model/ListInputSecurityGroupsResult.h>
#include <aws/medialive/model/ListInputsResult.h>
#include <aws/medialive/model/ListMultiplexProgramsResult.h>
#include <aws/medialive/model/ListMultiplexesResult.h>
#include <aws/medialive/model/ListNetworksSdkResult.h>
#include <aws/medialive/model/ListNodesSdkResult.h>
#include <aws/medialive/model/ListOfferingsResult.h>
#include <aws/medialive/model/ListReservationsResult.h>
#include <aws/medialive/model/ListSdiSourcesResult.h>
#include <aws/medialive/model/ListSignalMapsResult.h>
#include <aws/medialive/model/ListTagsForResourceResult.h>
#include <aws/medialive/model/ListVersionsResult.h>
#include <aws/medialive/model/PurchaseOfferingResult.h>
#include <aws/medialive/model/RebootInputDeviceResult.h>
#include <aws/medialive/model/RejectInputDeviceTransferResult.h>
#include <aws/medialive/model/RestartChannelPipelinesResult.h>
#include <aws/medialive/model/StartChannelResult.h>
#include <aws/medialive/model/StartDeleteMonitorDeploymentResult.h>
#include <aws/medialive/model/StartInputDeviceResult.h>
#include <aws/medialive/model/StartInputDeviceMaintenanceWindowResult.h>
#include <aws/medialive/model/StartMonitorDeploymentResult.h>
#include <aws/medialive/model/StartMultiplexResult.h>
#include <aws/medialive/model/StartUpdateSignalMapResult.h>
#include <aws/medialive/model/StopChannelResult.h>
#include <aws/medialive/model/StopInputDeviceResult.h>
#include <aws/medialive/model/StopMultiplexResult.h>
#include <aws/medialive/model/TransferInputDeviceResult.h>
#include <aws/medialive/model/UpdateAccountConfigurationResult.h>
#include <aws/medialive/model/UpdateChannelResult.h>
#include <aws/medialive/model/UpdateChannelClassResult.h>
#include <aws/medialive/model/UpdateChannelPlacementGroupResult.h>
#include <aws/medialive/model/UpdateCloudWatchAlarmTemplateResult.h>
#include <aws/medialive/model/UpdateCloudWatchAlarmTemplateGroupResult.h>
#include <aws/medialive/model/UpdateClusterSdkResult.h>
#include <aws/medialive/model/UpdateEventBridgeRuleTemplateResult.h>
#include <aws/medialive/model/UpdateEventBridgeRuleTemplateGroupResult.h>
#include <aws/medialive/model/UpdateInputResult.h>
#include <aws/medialive/model/UpdateInputDeviceResult.h>
#include <aws/medialive/model/UpdateInputSecurityGroupResult.h>
#include <aws/medialive/model/UpdateMultiplexResult.h>
#include <aws/medialive/model/UpdateMultiplexProgramResult.h>
#include <aws/medialive/model/UpdateNetworkSdkResult.h>
#include <aws/medialive/model/UpdateNodeResult.h>
#include <aws/medialive/model/UpdateNodeStateResult.h>
#include <aws/medialive/model/UpdateReservationResult.h>
#include <aws/medialive/model/UpdateSdiSourceResult.h>
#include <aws/medialive/model/ListCloudWatchAlarmTemplateGroupsRequest.h>
#include <aws/medialive/model/BatchStartRequest.h>
#include <aws/medialive/model/ListCloudWatchAlarmTemplatesRequest.h>
#include <aws/medialive/model/ListInputDevicesRequest.h>
#include <aws/medialive/model/CreateInputRequest.h>
#include <aws/medialive/model/ListNetworksRequest.h>
#include <aws/medialive/model/BatchDeleteRequest.h>
#include <aws/medialive/model/ListEventBridgeRuleTemplatesRequest.h>
#include <aws/medialive/model/CreateNetworkRequest.h>
#include <aws/medialive/model/CreateChannelRequest.h>
#include <aws/medialive/model/ListClustersRequest.h>
#include <aws/medialive/model/ListMultiplexesRequest.h>
#include <aws/medialive/model/DescribeAccountConfigurationRequest.h>
#include <aws/medialive/model/ListInputSecurityGroupsRequest.h>
#include <aws/medialive/model/ListSdiSourcesRequest.h>
#include <aws/medialive/model/UpdateAccountConfigurationRequest.h>
#include <aws/medialive/model/CreateSdiSourceRequest.h>
#include <aws/medialive/model/ClaimDeviceRequest.h>
#include <aws/medialive/model/BatchStopRequest.h>
#include <aws/medialive/model/ListOfferingsRequest.h>
#include <aws/medialive/model/ListChannelsRequest.h>
#include <aws/medialive/model/ListInputsRequest.h>
#include <aws/medialive/model/ListVersionsRequest.h>
#include <aws/medialive/model/ListReservationsRequest.h>
#include <aws/medialive/model/ListEventBridgeRuleTemplateGroupsRequest.h>
#include <aws/medialive/model/ListSignalMapsRequest.h>
#include <aws/medialive/model/CreateInputSecurityGroupRequest.h>
#include <aws/medialive/model/CreateClusterRequest.h>
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
    using MediaLiveClientConfiguration = Aws::Client::GenericClientConfiguration;
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
      class CreateChannelPlacementGroupRequest;
      class CreateCloudWatchAlarmTemplateRequest;
      class CreateCloudWatchAlarmTemplateGroupRequest;
      class CreateClusterRequest;
      class CreateEventBridgeRuleTemplateRequest;
      class CreateEventBridgeRuleTemplateGroupRequest;
      class CreateInputRequest;
      class CreateInputSecurityGroupRequest;
      class CreateMultiplexRequest;
      class CreateMultiplexProgramRequest;
      class CreateNetworkRequest;
      class CreateNodeRequest;
      class CreateNodeRegistrationScriptRequest;
      class CreatePartnerInputRequest;
      class CreateSdiSourceRequest;
      class CreateSignalMapRequest;
      class CreateTagsRequest;
      class DeleteChannelRequest;
      class DeleteChannelPlacementGroupRequest;
      class DeleteCloudWatchAlarmTemplateRequest;
      class DeleteCloudWatchAlarmTemplateGroupRequest;
      class DeleteClusterRequest;
      class DeleteEventBridgeRuleTemplateRequest;
      class DeleteEventBridgeRuleTemplateGroupRequest;
      class DeleteInputRequest;
      class DeleteInputSecurityGroupRequest;
      class DeleteMultiplexRequest;
      class DeleteMultiplexProgramRequest;
      class DeleteNetworkRequest;
      class DeleteNodeRequest;
      class DeleteReservationRequest;
      class DeleteScheduleRequest;
      class DeleteSdiSourceRequest;
      class DeleteSignalMapRequest;
      class DeleteTagsRequest;
      class DescribeAccountConfigurationRequest;
      class DescribeChannelRequest;
      class DescribeChannelPlacementGroupRequest;
      class DescribeClusterRequest;
      class DescribeInputRequest;
      class DescribeInputDeviceRequest;
      class DescribeInputDeviceThumbnailRequest;
      class DescribeInputSecurityGroupRequest;
      class DescribeMultiplexRequest;
      class DescribeMultiplexProgramRequest;
      class DescribeNetworkRequest;
      class DescribeNodeRequest;
      class DescribeOfferingRequest;
      class DescribeReservationRequest;
      class DescribeScheduleRequest;
      class DescribeSdiSourceRequest;
      class DescribeThumbnailsRequest;
      class GetCloudWatchAlarmTemplateRequest;
      class GetCloudWatchAlarmTemplateGroupRequest;
      class GetEventBridgeRuleTemplateRequest;
      class GetEventBridgeRuleTemplateGroupRequest;
      class GetSignalMapRequest;
      class ListChannelPlacementGroupsRequest;
      class ListChannelsRequest;
      class ListCloudWatchAlarmTemplateGroupsRequest;
      class ListCloudWatchAlarmTemplatesRequest;
      class ListClustersRequest;
      class ListEventBridgeRuleTemplateGroupsRequest;
      class ListEventBridgeRuleTemplatesRequest;
      class ListInputDeviceTransfersRequest;
      class ListInputDevicesRequest;
      class ListInputSecurityGroupsRequest;
      class ListInputsRequest;
      class ListMultiplexProgramsRequest;
      class ListMultiplexesRequest;
      class ListNetworksRequest;
      class ListNodesRequest;
      class ListOfferingsRequest;
      class ListReservationsRequest;
      class ListSdiSourcesRequest;
      class ListSignalMapsRequest;
      class ListTagsForResourceRequest;
      class ListVersionsRequest;
      class PurchaseOfferingRequest;
      class RebootInputDeviceRequest;
      class RejectInputDeviceTransferRequest;
      class RestartChannelPipelinesRequest;
      class StartChannelRequest;
      class StartDeleteMonitorDeploymentRequest;
      class StartInputDeviceRequest;
      class StartInputDeviceMaintenanceWindowRequest;
      class StartMonitorDeploymentRequest;
      class StartMultiplexRequest;
      class StartUpdateSignalMapRequest;
      class StopChannelRequest;
      class StopInputDeviceRequest;
      class StopMultiplexRequest;
      class TransferInputDeviceRequest;
      class UpdateAccountConfigurationRequest;
      class UpdateChannelRequest;
      class UpdateChannelClassRequest;
      class UpdateChannelPlacementGroupRequest;
      class UpdateCloudWatchAlarmTemplateRequest;
      class UpdateCloudWatchAlarmTemplateGroupRequest;
      class UpdateClusterRequest;
      class UpdateEventBridgeRuleTemplateRequest;
      class UpdateEventBridgeRuleTemplateGroupRequest;
      class UpdateInputRequest;
      class UpdateInputDeviceRequest;
      class UpdateInputSecurityGroupRequest;
      class UpdateMultiplexRequest;
      class UpdateMultiplexProgramRequest;
      class UpdateNetworkRequest;
      class UpdateNodeRequest;
      class UpdateNodeStateRequest;
      class UpdateReservationRequest;
      class UpdateSdiSourceRequest;
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
      typedef Aws::Utils::Outcome<CreateChannelPlacementGroupResult, MediaLiveError> CreateChannelPlacementGroupOutcome;
      typedef Aws::Utils::Outcome<CreateCloudWatchAlarmTemplateResult, MediaLiveError> CreateCloudWatchAlarmTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateCloudWatchAlarmTemplateGroupResult, MediaLiveError> CreateCloudWatchAlarmTemplateGroupOutcome;
      typedef Aws::Utils::Outcome<CreateClusterResult, MediaLiveError> CreateClusterOutcome;
      typedef Aws::Utils::Outcome<CreateEventBridgeRuleTemplateResult, MediaLiveError> CreateEventBridgeRuleTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateEventBridgeRuleTemplateGroupResult, MediaLiveError> CreateEventBridgeRuleTemplateGroupOutcome;
      typedef Aws::Utils::Outcome<CreateInputResult, MediaLiveError> CreateInputOutcome;
      typedef Aws::Utils::Outcome<CreateInputSecurityGroupResult, MediaLiveError> CreateInputSecurityGroupOutcome;
      typedef Aws::Utils::Outcome<CreateMultiplexResult, MediaLiveError> CreateMultiplexOutcome;
      typedef Aws::Utils::Outcome<CreateMultiplexProgramResult, MediaLiveError> CreateMultiplexProgramOutcome;
      typedef Aws::Utils::Outcome<CreateNetworkResult, MediaLiveError> CreateNetworkOutcome;
      typedef Aws::Utils::Outcome<CreateNodeResult, MediaLiveError> CreateNodeOutcome;
      typedef Aws::Utils::Outcome<CreateNodeRegistrationScriptSdkResult, MediaLiveError> CreateNodeRegistrationScriptOutcome;
      typedef Aws::Utils::Outcome<CreatePartnerInputResult, MediaLiveError> CreatePartnerInputOutcome;
      typedef Aws::Utils::Outcome<CreateSdiSourceResult, MediaLiveError> CreateSdiSourceOutcome;
      typedef Aws::Utils::Outcome<CreateSignalMapResult, MediaLiveError> CreateSignalMapOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MediaLiveError> CreateTagsOutcome;
      typedef Aws::Utils::Outcome<DeleteChannelResult, MediaLiveError> DeleteChannelOutcome;
      typedef Aws::Utils::Outcome<DeleteChannelPlacementGroupResult, MediaLiveError> DeleteChannelPlacementGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MediaLiveError> DeleteCloudWatchAlarmTemplateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MediaLiveError> DeleteCloudWatchAlarmTemplateGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteClusterResult, MediaLiveError> DeleteClusterOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MediaLiveError> DeleteEventBridgeRuleTemplateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MediaLiveError> DeleteEventBridgeRuleTemplateGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteInputResult, MediaLiveError> DeleteInputOutcome;
      typedef Aws::Utils::Outcome<DeleteInputSecurityGroupResult, MediaLiveError> DeleteInputSecurityGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteMultiplexResult, MediaLiveError> DeleteMultiplexOutcome;
      typedef Aws::Utils::Outcome<DeleteMultiplexProgramResult, MediaLiveError> DeleteMultiplexProgramOutcome;
      typedef Aws::Utils::Outcome<DeleteNetworkResult, MediaLiveError> DeleteNetworkOutcome;
      typedef Aws::Utils::Outcome<DeleteNodeResult, MediaLiveError> DeleteNodeOutcome;
      typedef Aws::Utils::Outcome<DeleteReservationResult, MediaLiveError> DeleteReservationOutcome;
      typedef Aws::Utils::Outcome<DeleteScheduleResult, MediaLiveError> DeleteScheduleOutcome;
      typedef Aws::Utils::Outcome<DeleteSdiSourceResult, MediaLiveError> DeleteSdiSourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MediaLiveError> DeleteSignalMapOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MediaLiveError> DeleteTagsOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountConfigurationResult, MediaLiveError> DescribeAccountConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeChannelResult, MediaLiveError> DescribeChannelOutcome;
      typedef Aws::Utils::Outcome<DescribeChannelPlacementGroupSdkResult, MediaLiveError> DescribeChannelPlacementGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeClusterSdkResult, MediaLiveError> DescribeClusterOutcome;
      typedef Aws::Utils::Outcome<DescribeInputResult, MediaLiveError> DescribeInputOutcome;
      typedef Aws::Utils::Outcome<DescribeInputDeviceResult, MediaLiveError> DescribeInputDeviceOutcome;
      typedef Aws::Utils::Outcome<DescribeInputDeviceThumbnailResult, MediaLiveError> DescribeInputDeviceThumbnailOutcome;
      typedef Aws::Utils::Outcome<DescribeInputSecurityGroupResult, MediaLiveError> DescribeInputSecurityGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeMultiplexResult, MediaLiveError> DescribeMultiplexOutcome;
      typedef Aws::Utils::Outcome<DescribeMultiplexProgramResult, MediaLiveError> DescribeMultiplexProgramOutcome;
      typedef Aws::Utils::Outcome<DescribeNetworkSdkResult, MediaLiveError> DescribeNetworkOutcome;
      typedef Aws::Utils::Outcome<DescribeNodeSdkResult, MediaLiveError> DescribeNodeOutcome;
      typedef Aws::Utils::Outcome<DescribeOfferingResult, MediaLiveError> DescribeOfferingOutcome;
      typedef Aws::Utils::Outcome<DescribeReservationResult, MediaLiveError> DescribeReservationOutcome;
      typedef Aws::Utils::Outcome<DescribeScheduleResult, MediaLiveError> DescribeScheduleOutcome;
      typedef Aws::Utils::Outcome<DescribeSdiSourceResult, MediaLiveError> DescribeSdiSourceOutcome;
      typedef Aws::Utils::Outcome<DescribeThumbnailsResult, MediaLiveError> DescribeThumbnailsOutcome;
      typedef Aws::Utils::Outcome<GetCloudWatchAlarmTemplateResult, MediaLiveError> GetCloudWatchAlarmTemplateOutcome;
      typedef Aws::Utils::Outcome<GetCloudWatchAlarmTemplateGroupResult, MediaLiveError> GetCloudWatchAlarmTemplateGroupOutcome;
      typedef Aws::Utils::Outcome<GetEventBridgeRuleTemplateResult, MediaLiveError> GetEventBridgeRuleTemplateOutcome;
      typedef Aws::Utils::Outcome<GetEventBridgeRuleTemplateGroupResult, MediaLiveError> GetEventBridgeRuleTemplateGroupOutcome;
      typedef Aws::Utils::Outcome<GetSignalMapResult, MediaLiveError> GetSignalMapOutcome;
      typedef Aws::Utils::Outcome<ListChannelPlacementGroupsSdkResult, MediaLiveError> ListChannelPlacementGroupsOutcome;
      typedef Aws::Utils::Outcome<ListChannelsResult, MediaLiveError> ListChannelsOutcome;
      typedef Aws::Utils::Outcome<ListCloudWatchAlarmTemplateGroupsResult, MediaLiveError> ListCloudWatchAlarmTemplateGroupsOutcome;
      typedef Aws::Utils::Outcome<ListCloudWatchAlarmTemplatesResult, MediaLiveError> ListCloudWatchAlarmTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListClustersSdkResult, MediaLiveError> ListClustersOutcome;
      typedef Aws::Utils::Outcome<ListEventBridgeRuleTemplateGroupsResult, MediaLiveError> ListEventBridgeRuleTemplateGroupsOutcome;
      typedef Aws::Utils::Outcome<ListEventBridgeRuleTemplatesResult, MediaLiveError> ListEventBridgeRuleTemplatesOutcome;
      typedef Aws::Utils::Outcome<ListInputDeviceTransfersResult, MediaLiveError> ListInputDeviceTransfersOutcome;
      typedef Aws::Utils::Outcome<ListInputDevicesResult, MediaLiveError> ListInputDevicesOutcome;
      typedef Aws::Utils::Outcome<ListInputSecurityGroupsResult, MediaLiveError> ListInputSecurityGroupsOutcome;
      typedef Aws::Utils::Outcome<ListInputsResult, MediaLiveError> ListInputsOutcome;
      typedef Aws::Utils::Outcome<ListMultiplexProgramsResult, MediaLiveError> ListMultiplexProgramsOutcome;
      typedef Aws::Utils::Outcome<ListMultiplexesResult, MediaLiveError> ListMultiplexesOutcome;
      typedef Aws::Utils::Outcome<ListNetworksSdkResult, MediaLiveError> ListNetworksOutcome;
      typedef Aws::Utils::Outcome<ListNodesSdkResult, MediaLiveError> ListNodesOutcome;
      typedef Aws::Utils::Outcome<ListOfferingsResult, MediaLiveError> ListOfferingsOutcome;
      typedef Aws::Utils::Outcome<ListReservationsResult, MediaLiveError> ListReservationsOutcome;
      typedef Aws::Utils::Outcome<ListSdiSourcesResult, MediaLiveError> ListSdiSourcesOutcome;
      typedef Aws::Utils::Outcome<ListSignalMapsResult, MediaLiveError> ListSignalMapsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, MediaLiveError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListVersionsResult, MediaLiveError> ListVersionsOutcome;
      typedef Aws::Utils::Outcome<PurchaseOfferingResult, MediaLiveError> PurchaseOfferingOutcome;
      typedef Aws::Utils::Outcome<RebootInputDeviceResult, MediaLiveError> RebootInputDeviceOutcome;
      typedef Aws::Utils::Outcome<RejectInputDeviceTransferResult, MediaLiveError> RejectInputDeviceTransferOutcome;
      typedef Aws::Utils::Outcome<RestartChannelPipelinesResult, MediaLiveError> RestartChannelPipelinesOutcome;
      typedef Aws::Utils::Outcome<StartChannelResult, MediaLiveError> StartChannelOutcome;
      typedef Aws::Utils::Outcome<StartDeleteMonitorDeploymentResult, MediaLiveError> StartDeleteMonitorDeploymentOutcome;
      typedef Aws::Utils::Outcome<StartInputDeviceResult, MediaLiveError> StartInputDeviceOutcome;
      typedef Aws::Utils::Outcome<StartInputDeviceMaintenanceWindowResult, MediaLiveError> StartInputDeviceMaintenanceWindowOutcome;
      typedef Aws::Utils::Outcome<StartMonitorDeploymentResult, MediaLiveError> StartMonitorDeploymentOutcome;
      typedef Aws::Utils::Outcome<StartMultiplexResult, MediaLiveError> StartMultiplexOutcome;
      typedef Aws::Utils::Outcome<StartUpdateSignalMapResult, MediaLiveError> StartUpdateSignalMapOutcome;
      typedef Aws::Utils::Outcome<StopChannelResult, MediaLiveError> StopChannelOutcome;
      typedef Aws::Utils::Outcome<StopInputDeviceResult, MediaLiveError> StopInputDeviceOutcome;
      typedef Aws::Utils::Outcome<StopMultiplexResult, MediaLiveError> StopMultiplexOutcome;
      typedef Aws::Utils::Outcome<TransferInputDeviceResult, MediaLiveError> TransferInputDeviceOutcome;
      typedef Aws::Utils::Outcome<UpdateAccountConfigurationResult, MediaLiveError> UpdateAccountConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateChannelResult, MediaLiveError> UpdateChannelOutcome;
      typedef Aws::Utils::Outcome<UpdateChannelClassResult, MediaLiveError> UpdateChannelClassOutcome;
      typedef Aws::Utils::Outcome<UpdateChannelPlacementGroupResult, MediaLiveError> UpdateChannelPlacementGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateCloudWatchAlarmTemplateResult, MediaLiveError> UpdateCloudWatchAlarmTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateCloudWatchAlarmTemplateGroupResult, MediaLiveError> UpdateCloudWatchAlarmTemplateGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateClusterSdkResult, MediaLiveError> UpdateClusterOutcome;
      typedef Aws::Utils::Outcome<UpdateEventBridgeRuleTemplateResult, MediaLiveError> UpdateEventBridgeRuleTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateEventBridgeRuleTemplateGroupResult, MediaLiveError> UpdateEventBridgeRuleTemplateGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateInputResult, MediaLiveError> UpdateInputOutcome;
      typedef Aws::Utils::Outcome<UpdateInputDeviceResult, MediaLiveError> UpdateInputDeviceOutcome;
      typedef Aws::Utils::Outcome<UpdateInputSecurityGroupResult, MediaLiveError> UpdateInputSecurityGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateMultiplexResult, MediaLiveError> UpdateMultiplexOutcome;
      typedef Aws::Utils::Outcome<UpdateMultiplexProgramResult, MediaLiveError> UpdateMultiplexProgramOutcome;
      typedef Aws::Utils::Outcome<UpdateNetworkSdkResult, MediaLiveError> UpdateNetworkOutcome;
      typedef Aws::Utils::Outcome<UpdateNodeResult, MediaLiveError> UpdateNodeOutcome;
      typedef Aws::Utils::Outcome<UpdateNodeStateResult, MediaLiveError> UpdateNodeStateOutcome;
      typedef Aws::Utils::Outcome<UpdateReservationResult, MediaLiveError> UpdateReservationOutcome;
      typedef Aws::Utils::Outcome<UpdateSdiSourceResult, MediaLiveError> UpdateSdiSourceOutcome;
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
      typedef std::future<CreateChannelPlacementGroupOutcome> CreateChannelPlacementGroupOutcomeCallable;
      typedef std::future<CreateCloudWatchAlarmTemplateOutcome> CreateCloudWatchAlarmTemplateOutcomeCallable;
      typedef std::future<CreateCloudWatchAlarmTemplateGroupOutcome> CreateCloudWatchAlarmTemplateGroupOutcomeCallable;
      typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
      typedef std::future<CreateEventBridgeRuleTemplateOutcome> CreateEventBridgeRuleTemplateOutcomeCallable;
      typedef std::future<CreateEventBridgeRuleTemplateGroupOutcome> CreateEventBridgeRuleTemplateGroupOutcomeCallable;
      typedef std::future<CreateInputOutcome> CreateInputOutcomeCallable;
      typedef std::future<CreateInputSecurityGroupOutcome> CreateInputSecurityGroupOutcomeCallable;
      typedef std::future<CreateMultiplexOutcome> CreateMultiplexOutcomeCallable;
      typedef std::future<CreateMultiplexProgramOutcome> CreateMultiplexProgramOutcomeCallable;
      typedef std::future<CreateNetworkOutcome> CreateNetworkOutcomeCallable;
      typedef std::future<CreateNodeOutcome> CreateNodeOutcomeCallable;
      typedef std::future<CreateNodeRegistrationScriptOutcome> CreateNodeRegistrationScriptOutcomeCallable;
      typedef std::future<CreatePartnerInputOutcome> CreatePartnerInputOutcomeCallable;
      typedef std::future<CreateSdiSourceOutcome> CreateSdiSourceOutcomeCallable;
      typedef std::future<CreateSignalMapOutcome> CreateSignalMapOutcomeCallable;
      typedef std::future<CreateTagsOutcome> CreateTagsOutcomeCallable;
      typedef std::future<DeleteChannelOutcome> DeleteChannelOutcomeCallable;
      typedef std::future<DeleteChannelPlacementGroupOutcome> DeleteChannelPlacementGroupOutcomeCallable;
      typedef std::future<DeleteCloudWatchAlarmTemplateOutcome> DeleteCloudWatchAlarmTemplateOutcomeCallable;
      typedef std::future<DeleteCloudWatchAlarmTemplateGroupOutcome> DeleteCloudWatchAlarmTemplateGroupOutcomeCallable;
      typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
      typedef std::future<DeleteEventBridgeRuleTemplateOutcome> DeleteEventBridgeRuleTemplateOutcomeCallable;
      typedef std::future<DeleteEventBridgeRuleTemplateGroupOutcome> DeleteEventBridgeRuleTemplateGroupOutcomeCallable;
      typedef std::future<DeleteInputOutcome> DeleteInputOutcomeCallable;
      typedef std::future<DeleteInputSecurityGroupOutcome> DeleteInputSecurityGroupOutcomeCallable;
      typedef std::future<DeleteMultiplexOutcome> DeleteMultiplexOutcomeCallable;
      typedef std::future<DeleteMultiplexProgramOutcome> DeleteMultiplexProgramOutcomeCallable;
      typedef std::future<DeleteNetworkOutcome> DeleteNetworkOutcomeCallable;
      typedef std::future<DeleteNodeOutcome> DeleteNodeOutcomeCallable;
      typedef std::future<DeleteReservationOutcome> DeleteReservationOutcomeCallable;
      typedef std::future<DeleteScheduleOutcome> DeleteScheduleOutcomeCallable;
      typedef std::future<DeleteSdiSourceOutcome> DeleteSdiSourceOutcomeCallable;
      typedef std::future<DeleteSignalMapOutcome> DeleteSignalMapOutcomeCallable;
      typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
      typedef std::future<DescribeAccountConfigurationOutcome> DescribeAccountConfigurationOutcomeCallable;
      typedef std::future<DescribeChannelOutcome> DescribeChannelOutcomeCallable;
      typedef std::future<DescribeChannelPlacementGroupOutcome> DescribeChannelPlacementGroupOutcomeCallable;
      typedef std::future<DescribeClusterOutcome> DescribeClusterOutcomeCallable;
      typedef std::future<DescribeInputOutcome> DescribeInputOutcomeCallable;
      typedef std::future<DescribeInputDeviceOutcome> DescribeInputDeviceOutcomeCallable;
      typedef std::future<DescribeInputDeviceThumbnailOutcome> DescribeInputDeviceThumbnailOutcomeCallable;
      typedef std::future<DescribeInputSecurityGroupOutcome> DescribeInputSecurityGroupOutcomeCallable;
      typedef std::future<DescribeMultiplexOutcome> DescribeMultiplexOutcomeCallable;
      typedef std::future<DescribeMultiplexProgramOutcome> DescribeMultiplexProgramOutcomeCallable;
      typedef std::future<DescribeNetworkOutcome> DescribeNetworkOutcomeCallable;
      typedef std::future<DescribeNodeOutcome> DescribeNodeOutcomeCallable;
      typedef std::future<DescribeOfferingOutcome> DescribeOfferingOutcomeCallable;
      typedef std::future<DescribeReservationOutcome> DescribeReservationOutcomeCallable;
      typedef std::future<DescribeScheduleOutcome> DescribeScheduleOutcomeCallable;
      typedef std::future<DescribeSdiSourceOutcome> DescribeSdiSourceOutcomeCallable;
      typedef std::future<DescribeThumbnailsOutcome> DescribeThumbnailsOutcomeCallable;
      typedef std::future<GetCloudWatchAlarmTemplateOutcome> GetCloudWatchAlarmTemplateOutcomeCallable;
      typedef std::future<GetCloudWatchAlarmTemplateGroupOutcome> GetCloudWatchAlarmTemplateGroupOutcomeCallable;
      typedef std::future<GetEventBridgeRuleTemplateOutcome> GetEventBridgeRuleTemplateOutcomeCallable;
      typedef std::future<GetEventBridgeRuleTemplateGroupOutcome> GetEventBridgeRuleTemplateGroupOutcomeCallable;
      typedef std::future<GetSignalMapOutcome> GetSignalMapOutcomeCallable;
      typedef std::future<ListChannelPlacementGroupsOutcome> ListChannelPlacementGroupsOutcomeCallable;
      typedef std::future<ListChannelsOutcome> ListChannelsOutcomeCallable;
      typedef std::future<ListCloudWatchAlarmTemplateGroupsOutcome> ListCloudWatchAlarmTemplateGroupsOutcomeCallable;
      typedef std::future<ListCloudWatchAlarmTemplatesOutcome> ListCloudWatchAlarmTemplatesOutcomeCallable;
      typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
      typedef std::future<ListEventBridgeRuleTemplateGroupsOutcome> ListEventBridgeRuleTemplateGroupsOutcomeCallable;
      typedef std::future<ListEventBridgeRuleTemplatesOutcome> ListEventBridgeRuleTemplatesOutcomeCallable;
      typedef std::future<ListInputDeviceTransfersOutcome> ListInputDeviceTransfersOutcomeCallable;
      typedef std::future<ListInputDevicesOutcome> ListInputDevicesOutcomeCallable;
      typedef std::future<ListInputSecurityGroupsOutcome> ListInputSecurityGroupsOutcomeCallable;
      typedef std::future<ListInputsOutcome> ListInputsOutcomeCallable;
      typedef std::future<ListMultiplexProgramsOutcome> ListMultiplexProgramsOutcomeCallable;
      typedef std::future<ListMultiplexesOutcome> ListMultiplexesOutcomeCallable;
      typedef std::future<ListNetworksOutcome> ListNetworksOutcomeCallable;
      typedef std::future<ListNodesOutcome> ListNodesOutcomeCallable;
      typedef std::future<ListOfferingsOutcome> ListOfferingsOutcomeCallable;
      typedef std::future<ListReservationsOutcome> ListReservationsOutcomeCallable;
      typedef std::future<ListSdiSourcesOutcome> ListSdiSourcesOutcomeCallable;
      typedef std::future<ListSignalMapsOutcome> ListSignalMapsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListVersionsOutcome> ListVersionsOutcomeCallable;
      typedef std::future<PurchaseOfferingOutcome> PurchaseOfferingOutcomeCallable;
      typedef std::future<RebootInputDeviceOutcome> RebootInputDeviceOutcomeCallable;
      typedef std::future<RejectInputDeviceTransferOutcome> RejectInputDeviceTransferOutcomeCallable;
      typedef std::future<RestartChannelPipelinesOutcome> RestartChannelPipelinesOutcomeCallable;
      typedef std::future<StartChannelOutcome> StartChannelOutcomeCallable;
      typedef std::future<StartDeleteMonitorDeploymentOutcome> StartDeleteMonitorDeploymentOutcomeCallable;
      typedef std::future<StartInputDeviceOutcome> StartInputDeviceOutcomeCallable;
      typedef std::future<StartInputDeviceMaintenanceWindowOutcome> StartInputDeviceMaintenanceWindowOutcomeCallable;
      typedef std::future<StartMonitorDeploymentOutcome> StartMonitorDeploymentOutcomeCallable;
      typedef std::future<StartMultiplexOutcome> StartMultiplexOutcomeCallable;
      typedef std::future<StartUpdateSignalMapOutcome> StartUpdateSignalMapOutcomeCallable;
      typedef std::future<StopChannelOutcome> StopChannelOutcomeCallable;
      typedef std::future<StopInputDeviceOutcome> StopInputDeviceOutcomeCallable;
      typedef std::future<StopMultiplexOutcome> StopMultiplexOutcomeCallable;
      typedef std::future<TransferInputDeviceOutcome> TransferInputDeviceOutcomeCallable;
      typedef std::future<UpdateAccountConfigurationOutcome> UpdateAccountConfigurationOutcomeCallable;
      typedef std::future<UpdateChannelOutcome> UpdateChannelOutcomeCallable;
      typedef std::future<UpdateChannelClassOutcome> UpdateChannelClassOutcomeCallable;
      typedef std::future<UpdateChannelPlacementGroupOutcome> UpdateChannelPlacementGroupOutcomeCallable;
      typedef std::future<UpdateCloudWatchAlarmTemplateOutcome> UpdateCloudWatchAlarmTemplateOutcomeCallable;
      typedef std::future<UpdateCloudWatchAlarmTemplateGroupOutcome> UpdateCloudWatchAlarmTemplateGroupOutcomeCallable;
      typedef std::future<UpdateClusterOutcome> UpdateClusterOutcomeCallable;
      typedef std::future<UpdateEventBridgeRuleTemplateOutcome> UpdateEventBridgeRuleTemplateOutcomeCallable;
      typedef std::future<UpdateEventBridgeRuleTemplateGroupOutcome> UpdateEventBridgeRuleTemplateGroupOutcomeCallable;
      typedef std::future<UpdateInputOutcome> UpdateInputOutcomeCallable;
      typedef std::future<UpdateInputDeviceOutcome> UpdateInputDeviceOutcomeCallable;
      typedef std::future<UpdateInputSecurityGroupOutcome> UpdateInputSecurityGroupOutcomeCallable;
      typedef std::future<UpdateMultiplexOutcome> UpdateMultiplexOutcomeCallable;
      typedef std::future<UpdateMultiplexProgramOutcome> UpdateMultiplexProgramOutcomeCallable;
      typedef std::future<UpdateNetworkOutcome> UpdateNetworkOutcomeCallable;
      typedef std::future<UpdateNodeOutcome> UpdateNodeOutcomeCallable;
      typedef std::future<UpdateNodeStateOutcome> UpdateNodeStateOutcomeCallable;
      typedef std::future<UpdateReservationOutcome> UpdateReservationOutcomeCallable;
      typedef std::future<UpdateSdiSourceOutcome> UpdateSdiSourceOutcomeCallable;
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
    typedef std::function<void(const MediaLiveClient*, const Model::CreateChannelPlacementGroupRequest&, const Model::CreateChannelPlacementGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelPlacementGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateCloudWatchAlarmTemplateRequest&, const Model::CreateCloudWatchAlarmTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCloudWatchAlarmTemplateResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateCloudWatchAlarmTemplateGroupRequest&, const Model::CreateCloudWatchAlarmTemplateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCloudWatchAlarmTemplateGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateEventBridgeRuleTemplateRequest&, const Model::CreateEventBridgeRuleTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventBridgeRuleTemplateResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateEventBridgeRuleTemplateGroupRequest&, const Model::CreateEventBridgeRuleTemplateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventBridgeRuleTemplateGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateInputRequest&, const Model::CreateInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInputResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateInputSecurityGroupRequest&, const Model::CreateInputSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInputSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateMultiplexRequest&, const Model::CreateMultiplexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMultiplexResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateMultiplexProgramRequest&, const Model::CreateMultiplexProgramOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMultiplexProgramResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateNetworkRequest&, const Model::CreateNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateNodeRequest&, const Model::CreateNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNodeResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateNodeRegistrationScriptRequest&, const Model::CreateNodeRegistrationScriptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNodeRegistrationScriptResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreatePartnerInputRequest&, const Model::CreatePartnerInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePartnerInputResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateSdiSourceRequest&, const Model::CreateSdiSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSdiSourceResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateSignalMapRequest&, const Model::CreateSignalMapOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSignalMapResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::CreateTagsRequest&, const Model::CreateTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTagsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteChannelRequest&, const Model::DeleteChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteChannelPlacementGroupRequest&, const Model::DeleteChannelPlacementGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelPlacementGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteCloudWatchAlarmTemplateRequest&, const Model::DeleteCloudWatchAlarmTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCloudWatchAlarmTemplateResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteCloudWatchAlarmTemplateGroupRequest&, const Model::DeleteCloudWatchAlarmTemplateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCloudWatchAlarmTemplateGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteEventBridgeRuleTemplateRequest&, const Model::DeleteEventBridgeRuleTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventBridgeRuleTemplateResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteEventBridgeRuleTemplateGroupRequest&, const Model::DeleteEventBridgeRuleTemplateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventBridgeRuleTemplateGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteInputRequest&, const Model::DeleteInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInputResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteInputSecurityGroupRequest&, const Model::DeleteInputSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInputSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteMultiplexRequest&, const Model::DeleteMultiplexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMultiplexResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteMultiplexProgramRequest&, const Model::DeleteMultiplexProgramOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMultiplexProgramResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteNetworkRequest&, const Model::DeleteNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteNodeRequest&, const Model::DeleteNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNodeResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteReservationRequest&, const Model::DeleteReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReservationResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteScheduleRequest&, const Model::DeleteScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScheduleResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteSdiSourceRequest&, const Model::DeleteSdiSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSdiSourceResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteSignalMapRequest&, const Model::DeleteSignalMapOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSignalMapResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeAccountConfigurationRequest&, const Model::DescribeAccountConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountConfigurationResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeChannelRequest&, const Model::DescribeChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeChannelPlacementGroupRequest&, const Model::DescribeChannelPlacementGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelPlacementGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeClusterRequest&, const Model::DescribeClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeInputRequest&, const Model::DescribeInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInputResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeInputDeviceRequest&, const Model::DescribeInputDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInputDeviceResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeInputDeviceThumbnailRequest&, Model::DescribeInputDeviceThumbnailOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInputDeviceThumbnailResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeInputSecurityGroupRequest&, const Model::DescribeInputSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInputSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeMultiplexRequest&, const Model::DescribeMultiplexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMultiplexResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeMultiplexProgramRequest&, const Model::DescribeMultiplexProgramOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMultiplexProgramResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeNetworkRequest&, const Model::DescribeNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNetworkResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeNodeRequest&, const Model::DescribeNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNodeResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeOfferingRequest&, const Model::DescribeOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOfferingResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeReservationRequest&, const Model::DescribeReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservationResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeScheduleRequest&, const Model::DescribeScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScheduleResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeSdiSourceRequest&, const Model::DescribeSdiSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSdiSourceResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::DescribeThumbnailsRequest&, const Model::DescribeThumbnailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeThumbnailsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::GetCloudWatchAlarmTemplateRequest&, const Model::GetCloudWatchAlarmTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudWatchAlarmTemplateResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::GetCloudWatchAlarmTemplateGroupRequest&, const Model::GetCloudWatchAlarmTemplateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudWatchAlarmTemplateGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::GetEventBridgeRuleTemplateRequest&, const Model::GetEventBridgeRuleTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventBridgeRuleTemplateResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::GetEventBridgeRuleTemplateGroupRequest&, const Model::GetEventBridgeRuleTemplateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventBridgeRuleTemplateGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::GetSignalMapRequest&, const Model::GetSignalMapOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSignalMapResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListChannelPlacementGroupsRequest&, const Model::ListChannelPlacementGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelPlacementGroupsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListChannelsRequest&, const Model::ListChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListCloudWatchAlarmTemplateGroupsRequest&, const Model::ListCloudWatchAlarmTemplateGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCloudWatchAlarmTemplateGroupsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListCloudWatchAlarmTemplatesRequest&, const Model::ListCloudWatchAlarmTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCloudWatchAlarmTemplatesResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListEventBridgeRuleTemplateGroupsRequest&, const Model::ListEventBridgeRuleTemplateGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventBridgeRuleTemplateGroupsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListEventBridgeRuleTemplatesRequest&, const Model::ListEventBridgeRuleTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventBridgeRuleTemplatesResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListInputDeviceTransfersRequest&, const Model::ListInputDeviceTransfersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInputDeviceTransfersResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListInputDevicesRequest&, const Model::ListInputDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInputDevicesResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListInputSecurityGroupsRequest&, const Model::ListInputSecurityGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInputSecurityGroupsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListInputsRequest&, const Model::ListInputsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInputsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListMultiplexProgramsRequest&, const Model::ListMultiplexProgramsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMultiplexProgramsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListMultiplexesRequest&, const Model::ListMultiplexesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMultiplexesResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListNetworksRequest&, const Model::ListNetworksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNetworksResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListNodesRequest&, const Model::ListNodesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNodesResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListOfferingsRequest&, const Model::ListOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOfferingsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListReservationsRequest&, const Model::ListReservationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReservationsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListSdiSourcesRequest&, const Model::ListSdiSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSdiSourcesResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListSignalMapsRequest&, const Model::ListSignalMapsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSignalMapsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::ListVersionsRequest&, const Model::ListVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVersionsResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::PurchaseOfferingRequest&, const Model::PurchaseOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseOfferingResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::RebootInputDeviceRequest&, const Model::RebootInputDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootInputDeviceResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::RejectInputDeviceTransferRequest&, const Model::RejectInputDeviceTransferOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectInputDeviceTransferResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::RestartChannelPipelinesRequest&, const Model::RestartChannelPipelinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestartChannelPipelinesResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::StartChannelRequest&, const Model::StartChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::StartDeleteMonitorDeploymentRequest&, const Model::StartDeleteMonitorDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDeleteMonitorDeploymentResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::StartInputDeviceRequest&, const Model::StartInputDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartInputDeviceResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::StartInputDeviceMaintenanceWindowRequest&, const Model::StartInputDeviceMaintenanceWindowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartInputDeviceMaintenanceWindowResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::StartMonitorDeploymentRequest&, const Model::StartMonitorDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMonitorDeploymentResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::StartMultiplexRequest&, const Model::StartMultiplexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMultiplexResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::StartUpdateSignalMapRequest&, const Model::StartUpdateSignalMapOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartUpdateSignalMapResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::StopChannelRequest&, const Model::StopChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::StopInputDeviceRequest&, const Model::StopInputDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopInputDeviceResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::StopMultiplexRequest&, const Model::StopMultiplexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopMultiplexResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::TransferInputDeviceRequest&, const Model::TransferInputDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TransferInputDeviceResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateAccountConfigurationRequest&, const Model::UpdateAccountConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccountConfigurationResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateChannelRequest&, const Model::UpdateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateChannelClassRequest&, const Model::UpdateChannelClassOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelClassResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateChannelPlacementGroupRequest&, const Model::UpdateChannelPlacementGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelPlacementGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateCloudWatchAlarmTemplateRequest&, const Model::UpdateCloudWatchAlarmTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCloudWatchAlarmTemplateResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateCloudWatchAlarmTemplateGroupRequest&, const Model::UpdateCloudWatchAlarmTemplateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCloudWatchAlarmTemplateGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateClusterRequest&, const Model::UpdateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClusterResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateEventBridgeRuleTemplateRequest&, const Model::UpdateEventBridgeRuleTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEventBridgeRuleTemplateResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateEventBridgeRuleTemplateGroupRequest&, const Model::UpdateEventBridgeRuleTemplateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEventBridgeRuleTemplateGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateInputRequest&, const Model::UpdateInputOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInputResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateInputDeviceRequest&, const Model::UpdateInputDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInputDeviceResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateInputSecurityGroupRequest&, const Model::UpdateInputSecurityGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInputSecurityGroupResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateMultiplexRequest&, const Model::UpdateMultiplexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMultiplexResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateMultiplexProgramRequest&, const Model::UpdateMultiplexProgramOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMultiplexProgramResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateNetworkRequest&, const Model::UpdateNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNetworkResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateNodeRequest&, const Model::UpdateNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNodeResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateNodeStateRequest&, const Model::UpdateNodeStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNodeStateResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateReservationRequest&, const Model::UpdateReservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReservationResponseReceivedHandler;
    typedef std::function<void(const MediaLiveClient*, const Model::UpdateSdiSourceRequest&, const Model::UpdateSdiSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSdiSourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MediaLive
} // namespace Aws
