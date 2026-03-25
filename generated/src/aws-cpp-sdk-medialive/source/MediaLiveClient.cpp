/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/medialive/MediaLiveClient.h>
#include <aws/medialive/MediaLiveEndpointProvider.h>
#include <aws/medialive/MediaLiveErrorMarshaller.h>
#include <aws/medialive/model/AcceptInputDeviceTransferRequest.h>
#include <aws/medialive/model/BatchDeleteRequest.h>
#include <aws/medialive/model/BatchStartRequest.h>
#include <aws/medialive/model/BatchStopRequest.h>
#include <aws/medialive/model/BatchUpdateScheduleRequest.h>
#include <aws/medialive/model/CancelInputDeviceTransferRequest.h>
#include <aws/medialive/model/ClaimDeviceRequest.h>
#include <aws/medialive/model/CreateChannelPlacementGroupRequest.h>
#include <aws/medialive/model/CreateChannelRequest.h>
#include <aws/medialive/model/CreateCloudWatchAlarmTemplateGroupRequest.h>
#include <aws/medialive/model/CreateCloudWatchAlarmTemplateRequest.h>
#include <aws/medialive/model/CreateClusterRequest.h>
#include <aws/medialive/model/CreateEventBridgeRuleTemplateGroupRequest.h>
#include <aws/medialive/model/CreateEventBridgeRuleTemplateRequest.h>
#include <aws/medialive/model/CreateInputRequest.h>
#include <aws/medialive/model/CreateInputSecurityGroupRequest.h>
#include <aws/medialive/model/CreateMultiplexProgramRequest.h>
#include <aws/medialive/model/CreateMultiplexRequest.h>
#include <aws/medialive/model/CreateNetworkRequest.h>
#include <aws/medialive/model/CreateNodeRegistrationScriptRequest.h>
#include <aws/medialive/model/CreateNodeRequest.h>
#include <aws/medialive/model/CreatePartnerInputRequest.h>
#include <aws/medialive/model/CreateSdiSourceRequest.h>
#include <aws/medialive/model/CreateSignalMapRequest.h>
#include <aws/medialive/model/CreateTagsRequest.h>
#include <aws/medialive/model/DeleteChannelPlacementGroupRequest.h>
#include <aws/medialive/model/DeleteChannelRequest.h>
#include <aws/medialive/model/DeleteCloudWatchAlarmTemplateGroupRequest.h>
#include <aws/medialive/model/DeleteCloudWatchAlarmTemplateRequest.h>
#include <aws/medialive/model/DeleteClusterRequest.h>
#include <aws/medialive/model/DeleteEventBridgeRuleTemplateGroupRequest.h>
#include <aws/medialive/model/DeleteEventBridgeRuleTemplateRequest.h>
#include <aws/medialive/model/DeleteInputRequest.h>
#include <aws/medialive/model/DeleteInputSecurityGroupRequest.h>
#include <aws/medialive/model/DeleteMultiplexProgramRequest.h>
#include <aws/medialive/model/DeleteMultiplexRequest.h>
#include <aws/medialive/model/DeleteNetworkRequest.h>
#include <aws/medialive/model/DeleteNodeRequest.h>
#include <aws/medialive/model/DeleteReservationRequest.h>
#include <aws/medialive/model/DeleteScheduleRequest.h>
#include <aws/medialive/model/DeleteSdiSourceRequest.h>
#include <aws/medialive/model/DeleteSignalMapRequest.h>
#include <aws/medialive/model/DeleteTagsRequest.h>
#include <aws/medialive/model/DescribeAccountConfigurationRequest.h>
#include <aws/medialive/model/DescribeChannelPlacementGroupRequest.h>
#include <aws/medialive/model/DescribeChannelRequest.h>
#include <aws/medialive/model/DescribeClusterRequest.h>
#include <aws/medialive/model/DescribeInputDeviceRequest.h>
#include <aws/medialive/model/DescribeInputDeviceThumbnailRequest.h>
#include <aws/medialive/model/DescribeInputRequest.h>
#include <aws/medialive/model/DescribeInputSecurityGroupRequest.h>
#include <aws/medialive/model/DescribeMultiplexProgramRequest.h>
#include <aws/medialive/model/DescribeMultiplexRequest.h>
#include <aws/medialive/model/DescribeNetworkRequest.h>
#include <aws/medialive/model/DescribeNodeRequest.h>
#include <aws/medialive/model/DescribeOfferingRequest.h>
#include <aws/medialive/model/DescribeReservationRequest.h>
#include <aws/medialive/model/DescribeScheduleRequest.h>
#include <aws/medialive/model/DescribeSdiSourceRequest.h>
#include <aws/medialive/model/DescribeThumbnailsRequest.h>
#include <aws/medialive/model/GetCloudWatchAlarmTemplateGroupRequest.h>
#include <aws/medialive/model/GetCloudWatchAlarmTemplateRequest.h>
#include <aws/medialive/model/GetEventBridgeRuleTemplateGroupRequest.h>
#include <aws/medialive/model/GetEventBridgeRuleTemplateRequest.h>
#include <aws/medialive/model/GetSignalMapRequest.h>
#include <aws/medialive/model/ListAlertsRequest.h>
#include <aws/medialive/model/ListChannelPlacementGroupsRequest.h>
#include <aws/medialive/model/ListChannelsRequest.h>
#include <aws/medialive/model/ListCloudWatchAlarmTemplateGroupsRequest.h>
#include <aws/medialive/model/ListCloudWatchAlarmTemplatesRequest.h>
#include <aws/medialive/model/ListClusterAlertsRequest.h>
#include <aws/medialive/model/ListClustersRequest.h>
#include <aws/medialive/model/ListEventBridgeRuleTemplateGroupsRequest.h>
#include <aws/medialive/model/ListEventBridgeRuleTemplatesRequest.h>
#include <aws/medialive/model/ListInputDeviceTransfersRequest.h>
#include <aws/medialive/model/ListInputDevicesRequest.h>
#include <aws/medialive/model/ListInputSecurityGroupsRequest.h>
#include <aws/medialive/model/ListInputsRequest.h>
#include <aws/medialive/model/ListMultiplexAlertsRequest.h>
#include <aws/medialive/model/ListMultiplexProgramsRequest.h>
#include <aws/medialive/model/ListMultiplexesRequest.h>
#include <aws/medialive/model/ListNetworksRequest.h>
#include <aws/medialive/model/ListNodesRequest.h>
#include <aws/medialive/model/ListOfferingsRequest.h>
#include <aws/medialive/model/ListReservationsRequest.h>
#include <aws/medialive/model/ListSdiSourcesRequest.h>
#include <aws/medialive/model/ListSignalMapsRequest.h>
#include <aws/medialive/model/ListTagsForResourceRequest.h>
#include <aws/medialive/model/ListVersionsRequest.h>
#include <aws/medialive/model/PurchaseOfferingRequest.h>
#include <aws/medialive/model/RebootInputDeviceRequest.h>
#include <aws/medialive/model/RejectInputDeviceTransferRequest.h>
#include <aws/medialive/model/RestartChannelPipelinesRequest.h>
#include <aws/medialive/model/StartChannelRequest.h>
#include <aws/medialive/model/StartDeleteMonitorDeploymentRequest.h>
#include <aws/medialive/model/StartInputDeviceMaintenanceWindowRequest.h>
#include <aws/medialive/model/StartInputDeviceRequest.h>
#include <aws/medialive/model/StartMonitorDeploymentRequest.h>
#include <aws/medialive/model/StartMultiplexRequest.h>
#include <aws/medialive/model/StartUpdateSignalMapRequest.h>
#include <aws/medialive/model/StopChannelRequest.h>
#include <aws/medialive/model/StopInputDeviceRequest.h>
#include <aws/medialive/model/StopMultiplexRequest.h>
#include <aws/medialive/model/TransferInputDeviceRequest.h>
#include <aws/medialive/model/UpdateAccountConfigurationRequest.h>
#include <aws/medialive/model/UpdateChannelClassRequest.h>
#include <aws/medialive/model/UpdateChannelPlacementGroupRequest.h>
#include <aws/medialive/model/UpdateChannelRequest.h>
#include <aws/medialive/model/UpdateCloudWatchAlarmTemplateGroupRequest.h>
#include <aws/medialive/model/UpdateCloudWatchAlarmTemplateRequest.h>
#include <aws/medialive/model/UpdateClusterRequest.h>
#include <aws/medialive/model/UpdateEventBridgeRuleTemplateGroupRequest.h>
#include <aws/medialive/model/UpdateEventBridgeRuleTemplateRequest.h>
#include <aws/medialive/model/UpdateInputDeviceRequest.h>
#include <aws/medialive/model/UpdateInputRequest.h>
#include <aws/medialive/model/UpdateInputSecurityGroupRequest.h>
#include <aws/medialive/model/UpdateMultiplexProgramRequest.h>
#include <aws/medialive/model/UpdateMultiplexRequest.h>
#include <aws/medialive/model/UpdateNetworkRequest.h>
#include <aws/medialive/model/UpdateNodeRequest.h>
#include <aws/medialive/model/UpdateNodeStateRequest.h>
#include <aws/medialive/model/UpdateReservationRequest.h>
#include <aws/medialive/model/UpdateSdiSourceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MediaLive;
using namespace Aws::MediaLive::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace MediaLive {
const char SERVICE_NAME[] = "medialive";
const char ALLOCATION_TAG[] = "MediaLiveClient";
}  // namespace MediaLive
}  // namespace Aws
const char* MediaLiveClient::GetServiceName() { return SERVICE_NAME; }
const char* MediaLiveClient::GetAllocationTag() { return ALLOCATION_TAG; }

MediaLiveClient::MediaLiveClient(const MediaLive::MediaLiveClientConfiguration& clientConfiguration,
                                 std::shared_ptr<MediaLiveEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaLiveErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MediaLiveEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaLiveClient::MediaLiveClient(const AWSCredentials& credentials, std::shared_ptr<MediaLiveEndpointProviderBase> endpointProvider,
                                 const MediaLive::MediaLiveClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaLiveErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MediaLiveEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaLiveClient::MediaLiveClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<MediaLiveEndpointProviderBase> endpointProvider,
                                 const MediaLive::MediaLiveClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaLiveErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MediaLiveEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MediaLiveClient::MediaLiveClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaLiveErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MediaLiveEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaLiveClient::MediaLiveClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaLiveErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MediaLiveEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MediaLiveClient::MediaLiveClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MediaLiveErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MediaLiveEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MediaLiveClient::~MediaLiveClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MediaLiveEndpointProviderBase>& MediaLiveClient::accessEndpointProvider() { return m_endpointProvider; }

void MediaLiveClient::init(const MediaLive::MediaLiveClientConfiguration& config) {
  AWSClient::SetServiceClientName("MediaLive");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "medialive");
}

void MediaLiveClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MediaLiveClient::InvokeOperationOutcome MediaLiveClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AcceptInputDeviceTransferOutcome MediaLiveClient::AcceptInputDeviceTransfer(const AcceptInputDeviceTransferRequest& request) const {
  if (!request.InputDeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AcceptInputDeviceTransfer", "Required field: InputDeviceId, is not set");
    return AcceptInputDeviceTransferOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [InputDeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputDevices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputDeviceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/accept");
  };

  return AcceptInputDeviceTransferOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteOutcome MediaLiveClient::BatchDelete(const BatchDeleteRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/batch/delete");
  };

  return BatchDeleteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchStartOutcome MediaLiveClient::BatchStart(const BatchStartRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/batch/start");
  };

  return BatchStartOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchStopOutcome MediaLiveClient::BatchStop(const BatchStopRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/batch/stop");
  };

  return BatchStopOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchUpdateScheduleOutcome MediaLiveClient::BatchUpdateSchedule(const BatchUpdateScheduleRequest& request) const {
  if (!request.ChannelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchUpdateSchedule", "Required field: ChannelId, is not set");
    return BatchUpdateScheduleOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ChannelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schedule");
  };

  return BatchUpdateScheduleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CancelInputDeviceTransferOutcome MediaLiveClient::CancelInputDeviceTransfer(const CancelInputDeviceTransferRequest& request) const {
  if (!request.InputDeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelInputDeviceTransfer", "Required field: InputDeviceId, is not set");
    return CancelInputDeviceTransferOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [InputDeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputDevices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputDeviceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  };

  return CancelInputDeviceTransferOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ClaimDeviceOutcome MediaLiveClient::ClaimDevice(const ClaimDeviceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/claimDevice");
  };

  return ClaimDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateChannelOutcome MediaLiveClient::CreateChannel(const CreateChannelRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/channels");
  };

  return CreateChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateChannelPlacementGroupOutcome MediaLiveClient::CreateChannelPlacementGroup(const CreateChannelPlacementGroupRequest& request) const {
  if (!request.ClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateChannelPlacementGroup", "Required field: ClusterId, is not set");
    return CreateChannelPlacementGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelplacementgroups");
  };

  return CreateChannelPlacementGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCloudWatchAlarmTemplateOutcome MediaLiveClient::CreateCloudWatchAlarmTemplate(
    const CreateCloudWatchAlarmTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/cloudwatch-alarm-templates");
  };

  return CreateCloudWatchAlarmTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCloudWatchAlarmTemplateGroupOutcome MediaLiveClient::CreateCloudWatchAlarmTemplateGroup(
    const CreateCloudWatchAlarmTemplateGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/cloudwatch-alarm-template-groups");
  };

  return CreateCloudWatchAlarmTemplateGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateClusterOutcome MediaLiveClient::CreateCluster(const CreateClusterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/clusters");
  };

  return CreateClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEventBridgeRuleTemplateOutcome MediaLiveClient::CreateEventBridgeRuleTemplate(
    const CreateEventBridgeRuleTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/eventbridge-rule-templates");
  };

  return CreateEventBridgeRuleTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEventBridgeRuleTemplateGroupOutcome MediaLiveClient::CreateEventBridgeRuleTemplateGroup(
    const CreateEventBridgeRuleTemplateGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/eventbridge-rule-template-groups");
  };

  return CreateEventBridgeRuleTemplateGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateInputOutcome MediaLiveClient::CreateInput(const CreateInputRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputs");
  };

  return CreateInputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateInputSecurityGroupOutcome MediaLiveClient::CreateInputSecurityGroup(const CreateInputSecurityGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputSecurityGroups");
  };

  return CreateInputSecurityGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMultiplexOutcome MediaLiveClient::CreateMultiplex(const CreateMultiplexRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/multiplexes");
  };

  return CreateMultiplexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMultiplexProgramOutcome MediaLiveClient::CreateMultiplexProgram(const CreateMultiplexProgramRequest& request) const {
  if (!request.MultiplexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateMultiplexProgram", "Required field: MultiplexId, is not set");
    return CreateMultiplexProgramOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [MultiplexId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/multiplexes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMultiplexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/programs");
  };

  return CreateMultiplexProgramOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateNetworkOutcome MediaLiveClient::CreateNetwork(const CreateNetworkRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/networks");
  };

  return CreateNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateNodeOutcome MediaLiveClient::CreateNode(const CreateNodeRequest& request) const {
  if (!request.ClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateNode", "Required field: ClusterId, is not set");
    return CreateNodeOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ClusterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/nodes");
  };

  return CreateNodeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateNodeRegistrationScriptOutcome MediaLiveClient::CreateNodeRegistrationScript(
    const CreateNodeRegistrationScriptRequest& request) const {
  if (!request.ClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateNodeRegistrationScript", "Required field: ClusterId, is not set");
    return CreateNodeRegistrationScriptOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/nodeRegistrationScript");
  };

  return CreateNodeRegistrationScriptOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePartnerInputOutcome MediaLiveClient::CreatePartnerInput(const CreatePartnerInputRequest& request) const {
  if (!request.InputIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePartnerInput", "Required field: InputId, is not set");
    return CreatePartnerInputOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InputId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/partners");
  };

  return CreatePartnerInputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSdiSourceOutcome MediaLiveClient::CreateSdiSource(const CreateSdiSourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/sdiSources");
  };

  return CreateSdiSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSignalMapOutcome MediaLiveClient::CreateSignalMap(const CreateSignalMapRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/signal-maps");
  };

  return CreateSignalMapOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTagsOutcome MediaLiveClient::CreateTags(const CreateTagsRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTags", "Required field: ResourceArn, is not set");
    return CreateTagsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return CreateTagsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteChannelOutcome MediaLiveClient::DeleteChannel(const DeleteChannelRequest& request) const {
  if (!request.ChannelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChannelId, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ChannelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelId());
  };

  return DeleteChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteChannelPlacementGroupOutcome MediaLiveClient::DeleteChannelPlacementGroup(const DeleteChannelPlacementGroupRequest& request) const {
  if (!request.ChannelPlacementGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelPlacementGroup", "Required field: ChannelPlacementGroupId, is not set");
    return DeleteChannelPlacementGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelPlacementGroupId]", false));
  }
  if (!request.ClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChannelPlacementGroup", "Required field: ClusterId, is not set");
    return DeleteChannelPlacementGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelplacementgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelPlacementGroupId());
  };

  return DeleteChannelPlacementGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteCloudWatchAlarmTemplateOutcome MediaLiveClient::DeleteCloudWatchAlarmTemplate(
    const DeleteCloudWatchAlarmTemplateRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCloudWatchAlarmTemplate", "Required field: Identifier, is not set");
    return DeleteCloudWatchAlarmTemplateOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/cloudwatch-alarm-templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteCloudWatchAlarmTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteCloudWatchAlarmTemplateGroupOutcome MediaLiveClient::DeleteCloudWatchAlarmTemplateGroup(
    const DeleteCloudWatchAlarmTemplateGroupRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCloudWatchAlarmTemplateGroup", "Required field: Identifier, is not set");
    return DeleteCloudWatchAlarmTemplateGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/cloudwatch-alarm-template-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteCloudWatchAlarmTemplateGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteClusterOutcome MediaLiveClient::DeleteCluster(const DeleteClusterRequest& request) const {
  if (!request.ClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCluster", "Required field: ClusterId, is not set");
    return DeleteClusterOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ClusterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterId());
  };

  return DeleteClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEventBridgeRuleTemplateOutcome MediaLiveClient::DeleteEventBridgeRuleTemplate(
    const DeleteEventBridgeRuleTemplateRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEventBridgeRuleTemplate", "Required field: Identifier, is not set");
    return DeleteEventBridgeRuleTemplateOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/eventbridge-rule-templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteEventBridgeRuleTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEventBridgeRuleTemplateGroupOutcome MediaLiveClient::DeleteEventBridgeRuleTemplateGroup(
    const DeleteEventBridgeRuleTemplateGroupRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEventBridgeRuleTemplateGroup", "Required field: Identifier, is not set");
    return DeleteEventBridgeRuleTemplateGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/eventbridge-rule-template-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteEventBridgeRuleTemplateGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteInputOutcome MediaLiveClient::DeleteInput(const DeleteInputRequest& request) const {
  if (!request.InputIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteInput", "Required field: InputId, is not set");
    return DeleteInputOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [InputId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputId());
  };

  return DeleteInputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteInputSecurityGroupOutcome MediaLiveClient::DeleteInputSecurityGroup(const DeleteInputSecurityGroupRequest& request) const {
  if (!request.InputSecurityGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteInputSecurityGroup", "Required field: InputSecurityGroupId, is not set");
    return DeleteInputSecurityGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [InputSecurityGroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputSecurityGroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputSecurityGroupId());
  };

  return DeleteInputSecurityGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteMultiplexOutcome MediaLiveClient::DeleteMultiplex(const DeleteMultiplexRequest& request) const {
  if (!request.MultiplexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMultiplex", "Required field: MultiplexId, is not set");
    return DeleteMultiplexOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [MultiplexId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/multiplexes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMultiplexId());
  };

  return DeleteMultiplexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteMultiplexProgramOutcome MediaLiveClient::DeleteMultiplexProgram(const DeleteMultiplexProgramRequest& request) const {
  if (!request.MultiplexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMultiplexProgram", "Required field: MultiplexId, is not set");
    return DeleteMultiplexProgramOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [MultiplexId]", false));
  }
  if (!request.ProgramNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMultiplexProgram", "Required field: ProgramName, is not set");
    return DeleteMultiplexProgramOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ProgramName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/multiplexes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMultiplexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/programs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProgramName());
  };

  return DeleteMultiplexProgramOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteNetworkOutcome MediaLiveClient::DeleteNetwork(const DeleteNetworkRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNetwork", "Required field: NetworkId, is not set");
    return DeleteNetworkOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
  };

  return DeleteNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteNodeOutcome MediaLiveClient::DeleteNode(const DeleteNodeRequest& request) const {
  if (!request.ClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNode", "Required field: ClusterId, is not set");
    return DeleteNodeOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ClusterId]", false));
  }
  if (!request.NodeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNode", "Required field: NodeId, is not set");
    return DeleteNodeOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [NodeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/nodes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNodeId());
  };

  return DeleteNodeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteReservationOutcome MediaLiveClient::DeleteReservation(const DeleteReservationRequest& request) const {
  if (!request.ReservationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteReservation", "Required field: ReservationId, is not set");
    return DeleteReservationOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ReservationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/reservations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReservationId());
  };

  return DeleteReservationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteScheduleOutcome MediaLiveClient::DeleteSchedule(const DeleteScheduleRequest& request) const {
  if (!request.ChannelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSchedule", "Required field: ChannelId, is not set");
    return DeleteScheduleOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ChannelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schedule");
  };

  return DeleteScheduleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSdiSourceOutcome MediaLiveClient::DeleteSdiSource(const DeleteSdiSourceRequest& request) const {
  if (!request.SdiSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSdiSource", "Required field: SdiSourceId, is not set");
    return DeleteSdiSourceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SdiSourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/sdiSources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSdiSourceId());
  };

  return DeleteSdiSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteSignalMapOutcome MediaLiveClient::DeleteSignalMap(const DeleteSignalMapRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSignalMap", "Required field: Identifier, is not set");
    return DeleteSignalMapOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/signal-maps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return DeleteSignalMapOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTagsOutcome MediaLiveClient::DeleteTags(const DeleteTagsRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTags", "Required field: ResourceArn, is not set");
    return DeleteTagsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTags", "Required field: TagKeys, is not set");
    return DeleteTagsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return DeleteTagsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeAccountConfigurationOutcome MediaLiveClient::DescribeAccountConfiguration(
    const DescribeAccountConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/accountConfiguration");
  };

  return DescribeAccountConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeChannelOutcome MediaLiveClient::DescribeChannel(const DescribeChannelRequest& request) const {
  if (!request.ChannelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannel", "Required field: ChannelId, is not set");
    return DescribeChannelOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ChannelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelId());
  };

  return DescribeChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeChannelPlacementGroupOutcome MediaLiveClient::DescribeChannelPlacementGroup(
    const DescribeChannelPlacementGroupRequest& request) const {
  if (!request.ChannelPlacementGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannelPlacementGroup", "Required field: ChannelPlacementGroupId, is not set");
    return DescribeChannelPlacementGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelPlacementGroupId]", false));
  }
  if (!request.ClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeChannelPlacementGroup", "Required field: ClusterId, is not set");
    return DescribeChannelPlacementGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelplacementgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelPlacementGroupId());
  };

  return DescribeChannelPlacementGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeClusterOutcome MediaLiveClient::DescribeCluster(const DescribeClusterRequest& request) const {
  if (!request.ClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCluster", "Required field: ClusterId, is not set");
    return DescribeClusterOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ClusterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterId());
  };

  return DescribeClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeInputOutcome MediaLiveClient::DescribeInput(const DescribeInputRequest& request) const {
  if (!request.InputIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeInput", "Required field: InputId, is not set");
    return DescribeInputOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [InputId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputId());
  };

  return DescribeInputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeInputDeviceOutcome MediaLiveClient::DescribeInputDevice(const DescribeInputDeviceRequest& request) const {
  if (!request.InputDeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeInputDevice", "Required field: InputDeviceId, is not set");
    return DescribeInputDeviceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [InputDeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputDevices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputDeviceId());
  };

  return DescribeInputDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeInputDeviceThumbnailOutcome MediaLiveClient::DescribeInputDeviceThumbnail(
    const DescribeInputDeviceThumbnailRequest& request) const {
  AWS_OPERATION_GUARD(DescribeInputDeviceThumbnail);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInputDeviceThumbnail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputDeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeInputDeviceThumbnail", "Required field: InputDeviceId, is not set");
    return DescribeInputDeviceThumbnailOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }
  if (!request.AcceptHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeInputDeviceThumbnail", "Required field: Accept, is not set");
    return DescribeInputDeviceThumbnailOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Accept]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeInputDeviceThumbnail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeInputDeviceThumbnail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeInputDeviceThumbnail",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeInputDeviceThumbnailOutcome>(
      [&]() -> DescribeInputDeviceThumbnailOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeInputDeviceThumbnail, CoreErrors,
                                    CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
        endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputDevices/");
        endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputDeviceId());
        endpointResolutionOutcome.GetResult().AddPathSegments("/thumbnailData");
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET);
        return result.IsSuccess() ? DescribeInputDeviceThumbnailOutcome(DescribeInputDeviceThumbnailResult(result.GetResultWithOwnership()))
                                  : DescribeInputDeviceThumbnailOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeInputSecurityGroupOutcome MediaLiveClient::DescribeInputSecurityGroup(const DescribeInputSecurityGroupRequest& request) const {
  if (!request.InputSecurityGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeInputSecurityGroup", "Required field: InputSecurityGroupId, is not set");
    return DescribeInputSecurityGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputSecurityGroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputSecurityGroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputSecurityGroupId());
  };

  return DescribeInputSecurityGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeMultiplexOutcome MediaLiveClient::DescribeMultiplex(const DescribeMultiplexRequest& request) const {
  if (!request.MultiplexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeMultiplex", "Required field: MultiplexId, is not set");
    return DescribeMultiplexOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [MultiplexId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/multiplexes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMultiplexId());
  };

  return DescribeMultiplexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeMultiplexProgramOutcome MediaLiveClient::DescribeMultiplexProgram(const DescribeMultiplexProgramRequest& request) const {
  if (!request.MultiplexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeMultiplexProgram", "Required field: MultiplexId, is not set");
    return DescribeMultiplexProgramOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [MultiplexId]", false));
  }
  if (!request.ProgramNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeMultiplexProgram", "Required field: ProgramName, is not set");
    return DescribeMultiplexProgramOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [ProgramName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/multiplexes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMultiplexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/programs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProgramName());
  };

  return DescribeMultiplexProgramOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeNetworkOutcome MediaLiveClient::DescribeNetwork(const DescribeNetworkRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeNetwork", "Required field: NetworkId, is not set");
    return DescribeNetworkOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
  };

  return DescribeNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeNodeOutcome MediaLiveClient::DescribeNode(const DescribeNodeRequest& request) const {
  if (!request.ClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeNode", "Required field: ClusterId, is not set");
    return DescribeNodeOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ClusterId]", false));
  }
  if (!request.NodeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeNode", "Required field: NodeId, is not set");
    return DescribeNodeOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [NodeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/nodes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNodeId());
  };

  return DescribeNodeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeOfferingOutcome MediaLiveClient::DescribeOffering(const DescribeOfferingRequest& request) const {
  if (!request.OfferingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeOffering", "Required field: OfferingId, is not set");
    return DescribeOfferingOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [OfferingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/offerings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOfferingId());
  };

  return DescribeOfferingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeReservationOutcome MediaLiveClient::DescribeReservation(const DescribeReservationRequest& request) const {
  if (!request.ReservationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeReservation", "Required field: ReservationId, is not set");
    return DescribeReservationOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ReservationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/reservations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReservationId());
  };

  return DescribeReservationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeScheduleOutcome MediaLiveClient::DescribeSchedule(const DescribeScheduleRequest& request) const {
  if (!request.ChannelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeSchedule", "Required field: ChannelId, is not set");
    return DescribeScheduleOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ChannelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schedule");
  };

  return DescribeScheduleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeSdiSourceOutcome MediaLiveClient::DescribeSdiSource(const DescribeSdiSourceRequest& request) const {
  if (!request.SdiSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeSdiSource", "Required field: SdiSourceId, is not set");
    return DescribeSdiSourceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [SdiSourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/sdiSources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSdiSourceId());
  };

  return DescribeSdiSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeThumbnailsOutcome MediaLiveClient::DescribeThumbnails(const DescribeThumbnailsRequest& request) const {
  if (!request.ChannelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeThumbnails", "Required field: ChannelId, is not set");
    return DescribeThumbnailsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ChannelId]", false));
  }
  if (!request.PipelineIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeThumbnails", "Required field: PipelineId, is not set");
    return DescribeThumbnailsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [PipelineId]", false));
  }
  if (!request.ThumbnailTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeThumbnails", "Required field: ThumbnailType, is not set");
    return DescribeThumbnailsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ThumbnailType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/thumbnails");
  };

  return DescribeThumbnailsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCloudWatchAlarmTemplateOutcome MediaLiveClient::GetCloudWatchAlarmTemplate(const GetCloudWatchAlarmTemplateRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCloudWatchAlarmTemplate", "Required field: Identifier, is not set");
    return GetCloudWatchAlarmTemplateOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/cloudwatch-alarm-templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetCloudWatchAlarmTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCloudWatchAlarmTemplateGroupOutcome MediaLiveClient::GetCloudWatchAlarmTemplateGroup(
    const GetCloudWatchAlarmTemplateGroupRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCloudWatchAlarmTemplateGroup", "Required field: Identifier, is not set");
    return GetCloudWatchAlarmTemplateGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/cloudwatch-alarm-template-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetCloudWatchAlarmTemplateGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEventBridgeRuleTemplateOutcome MediaLiveClient::GetEventBridgeRuleTemplate(const GetEventBridgeRuleTemplateRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEventBridgeRuleTemplate", "Required field: Identifier, is not set");
    return GetEventBridgeRuleTemplateOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/eventbridge-rule-templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetEventBridgeRuleTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEventBridgeRuleTemplateGroupOutcome MediaLiveClient::GetEventBridgeRuleTemplateGroup(
    const GetEventBridgeRuleTemplateGroupRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEventBridgeRuleTemplateGroup", "Required field: Identifier, is not set");
    return GetEventBridgeRuleTemplateGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/eventbridge-rule-template-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetEventBridgeRuleTemplateGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSignalMapOutcome MediaLiveClient::GetSignalMap(const GetSignalMapRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSignalMap", "Required field: Identifier, is not set");
    return GetSignalMapOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/signal-maps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetSignalMapOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAlertsOutcome MediaLiveClient::ListAlerts(const ListAlertsRequest& request) const {
  if (!request.ChannelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAlerts", "Required field: ChannelId, is not set");
    return ListAlertsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ChannelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/alerts");
  };

  return ListAlertsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListChannelPlacementGroupsOutcome MediaLiveClient::ListChannelPlacementGroups(const ListChannelPlacementGroupsRequest& request) const {
  if (!request.ClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChannelPlacementGroups", "Required field: ClusterId, is not set");
    return ListChannelPlacementGroupsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [ClusterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelplacementgroups");
  };

  return ListChannelPlacementGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListChannelsOutcome MediaLiveClient::ListChannels(const ListChannelsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/channels");
  };

  return ListChannelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCloudWatchAlarmTemplateGroupsOutcome MediaLiveClient::ListCloudWatchAlarmTemplateGroups(
    const ListCloudWatchAlarmTemplateGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/cloudwatch-alarm-template-groups");
  };

  return ListCloudWatchAlarmTemplateGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCloudWatchAlarmTemplatesOutcome MediaLiveClient::ListCloudWatchAlarmTemplates(
    const ListCloudWatchAlarmTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/cloudwatch-alarm-templates");
  };

  return ListCloudWatchAlarmTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListClusterAlertsOutcome MediaLiveClient::ListClusterAlerts(const ListClusterAlertsRequest& request) const {
  if (!request.ClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListClusterAlerts", "Required field: ClusterId, is not set");
    return ListClusterAlertsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ClusterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/alerts");
  };

  return ListClusterAlertsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListClustersOutcome MediaLiveClient::ListClusters(const ListClustersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/clusters");
  };

  return ListClustersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEventBridgeRuleTemplateGroupsOutcome MediaLiveClient::ListEventBridgeRuleTemplateGroups(
    const ListEventBridgeRuleTemplateGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/eventbridge-rule-template-groups");
  };

  return ListEventBridgeRuleTemplateGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEventBridgeRuleTemplatesOutcome MediaLiveClient::ListEventBridgeRuleTemplates(
    const ListEventBridgeRuleTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/eventbridge-rule-templates");
  };

  return ListEventBridgeRuleTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListInputDeviceTransfersOutcome MediaLiveClient::ListInputDeviceTransfers(const ListInputDeviceTransfersRequest& request) const {
  if (!request.TransferTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListInputDeviceTransfers", "Required field: TransferType, is not set");
    return ListInputDeviceTransfersOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [TransferType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputDeviceTransfers");
  };

  return ListInputDeviceTransfersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListInputDevicesOutcome MediaLiveClient::ListInputDevices(const ListInputDevicesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputDevices");
  };

  return ListInputDevicesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListInputSecurityGroupsOutcome MediaLiveClient::ListInputSecurityGroups(const ListInputSecurityGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputSecurityGroups");
  };

  return ListInputSecurityGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListInputsOutcome MediaLiveClient::ListInputs(const ListInputsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputs");
  };

  return ListInputsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMultiplexAlertsOutcome MediaLiveClient::ListMultiplexAlerts(const ListMultiplexAlertsRequest& request) const {
  if (!request.MultiplexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMultiplexAlerts", "Required field: MultiplexId, is not set");
    return ListMultiplexAlertsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [MultiplexId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/multiplexes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMultiplexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/alerts");
  };

  return ListMultiplexAlertsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMultiplexProgramsOutcome MediaLiveClient::ListMultiplexPrograms(const ListMultiplexProgramsRequest& request) const {
  if (!request.MultiplexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMultiplexPrograms", "Required field: MultiplexId, is not set");
    return ListMultiplexProgramsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [MultiplexId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/multiplexes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMultiplexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/programs");
  };

  return ListMultiplexProgramsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMultiplexesOutcome MediaLiveClient::ListMultiplexes(const ListMultiplexesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/multiplexes");
  };

  return ListMultiplexesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListNetworksOutcome MediaLiveClient::ListNetworks(const ListNetworksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/networks");
  };

  return ListNetworksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListNodesOutcome MediaLiveClient::ListNodes(const ListNodesRequest& request) const {
  if (!request.ClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListNodes", "Required field: ClusterId, is not set");
    return ListNodesOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ClusterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/nodes");
  };

  return ListNodesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListOfferingsOutcome MediaLiveClient::ListOfferings(const ListOfferingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/offerings");
  };

  return ListOfferingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListReservationsOutcome MediaLiveClient::ListReservations(const ListReservationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/reservations");
  };

  return ListReservationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSdiSourcesOutcome MediaLiveClient::ListSdiSources(const ListSdiSourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/sdiSources");
  };

  return ListSdiSourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSignalMapsOutcome MediaLiveClient::ListSignalMaps(const ListSignalMapsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/signal-maps");
  };

  return ListSignalMapsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome MediaLiveClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListVersionsOutcome MediaLiveClient::ListVersions(const ListVersionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/versions");
  };

  return ListVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PurchaseOfferingOutcome MediaLiveClient::PurchaseOffering(const PurchaseOfferingRequest& request) const {
  if (!request.OfferingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PurchaseOffering", "Required field: OfferingId, is not set");
    return PurchaseOfferingOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [OfferingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/offerings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOfferingId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/purchase");
  };

  return PurchaseOfferingOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RebootInputDeviceOutcome MediaLiveClient::RebootInputDevice(const RebootInputDeviceRequest& request) const {
  if (!request.InputDeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RebootInputDevice", "Required field: InputDeviceId, is not set");
    return RebootInputDeviceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [InputDeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputDevices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputDeviceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reboot");
  };

  return RebootInputDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RejectInputDeviceTransferOutcome MediaLiveClient::RejectInputDeviceTransfer(const RejectInputDeviceTransferRequest& request) const {
  if (!request.InputDeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RejectInputDeviceTransfer", "Required field: InputDeviceId, is not set");
    return RejectInputDeviceTransferOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [InputDeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputDevices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputDeviceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reject");
  };

  return RejectInputDeviceTransferOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RestartChannelPipelinesOutcome MediaLiveClient::RestartChannelPipelines(const RestartChannelPipelinesRequest& request) const {
  if (!request.ChannelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RestartChannelPipelines", "Required field: ChannelId, is not set");
    return RestartChannelPipelinesOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ChannelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/restartChannelPipelines");
  };

  return RestartChannelPipelinesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartChannelOutcome MediaLiveClient::StartChannel(const StartChannelRequest& request) const {
  if (!request.ChannelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartChannel", "Required field: ChannelId, is not set");
    return StartChannelOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ChannelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  };

  return StartChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartDeleteMonitorDeploymentOutcome MediaLiveClient::StartDeleteMonitorDeployment(
    const StartDeleteMonitorDeploymentRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDeleteMonitorDeployment", "Required field: Identifier, is not set");
    return StartDeleteMonitorDeploymentOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/signal-maps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitor-deployment");
  };

  return StartDeleteMonitorDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

StartInputDeviceOutcome MediaLiveClient::StartInputDevice(const StartInputDeviceRequest& request) const {
  if (!request.InputDeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartInputDevice", "Required field: InputDeviceId, is not set");
    return StartInputDeviceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InputDeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputDevices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputDeviceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  };

  return StartInputDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartInputDeviceMaintenanceWindowOutcome MediaLiveClient::StartInputDeviceMaintenanceWindow(
    const StartInputDeviceMaintenanceWindowRequest& request) const {
  if (!request.InputDeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartInputDeviceMaintenanceWindow", "Required field: InputDeviceId, is not set");
    return StartInputDeviceMaintenanceWindowOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputDevices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputDeviceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/startInputDeviceMaintenanceWindow");
  };

  return StartInputDeviceMaintenanceWindowOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMonitorDeploymentOutcome MediaLiveClient::StartMonitorDeployment(const StartMonitorDeploymentRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartMonitorDeployment", "Required field: Identifier, is not set");
    return StartMonitorDeploymentOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/signal-maps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitor-deployment");
  };

  return StartMonitorDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMultiplexOutcome MediaLiveClient::StartMultiplex(const StartMultiplexRequest& request) const {
  if (!request.MultiplexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartMultiplex", "Required field: MultiplexId, is not set");
    return StartMultiplexOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [MultiplexId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/multiplexes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMultiplexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  };

  return StartMultiplexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartUpdateSignalMapOutcome MediaLiveClient::StartUpdateSignalMap(const StartUpdateSignalMapRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartUpdateSignalMap", "Required field: Identifier, is not set");
    return StartUpdateSignalMapOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/signal-maps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return StartUpdateSignalMapOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

StopChannelOutcome MediaLiveClient::StopChannel(const StopChannelRequest& request) const {
  if (!request.ChannelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopChannel", "Required field: ChannelId, is not set");
    return StopChannelOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ChannelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  };

  return StopChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopInputDeviceOutcome MediaLiveClient::StopInputDevice(const StopInputDeviceRequest& request) const {
  if (!request.InputDeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopInputDevice", "Required field: InputDeviceId, is not set");
    return StopInputDeviceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InputDeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputDevices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputDeviceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  };

  return StopInputDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopMultiplexOutcome MediaLiveClient::StopMultiplex(const StopMultiplexRequest& request) const {
  if (!request.MultiplexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopMultiplex", "Required field: MultiplexId, is not set");
    return StopMultiplexOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [MultiplexId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/multiplexes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMultiplexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  };

  return StopMultiplexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TransferInputDeviceOutcome MediaLiveClient::TransferInputDevice(const TransferInputDeviceRequest& request) const {
  if (!request.InputDeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TransferInputDevice", "Required field: InputDeviceId, is not set");
    return TransferInputDeviceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [InputDeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputDevices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputDeviceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/transfer");
  };

  return TransferInputDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAccountConfigurationOutcome MediaLiveClient::UpdateAccountConfiguration(const UpdateAccountConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/accountConfiguration");
  };

  return UpdateAccountConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateChannelOutcome MediaLiveClient::UpdateChannel(const UpdateChannelRequest& request) const {
  if (!request.ChannelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelId, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ChannelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelId());
  };

  return UpdateChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateChannelClassOutcome MediaLiveClient::UpdateChannelClass(const UpdateChannelClassRequest& request) const {
  if (!request.ChannelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannelClass", "Required field: ChannelId, is not set");
    return UpdateChannelClassOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ChannelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelClass");
  };

  return UpdateChannelClassOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateChannelPlacementGroupOutcome MediaLiveClient::UpdateChannelPlacementGroup(const UpdateChannelPlacementGroupRequest& request) const {
  if (!request.ChannelPlacementGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannelPlacementGroup", "Required field: ChannelPlacementGroupId, is not set");
    return UpdateChannelPlacementGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelPlacementGroupId]", false));
  }
  if (!request.ClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateChannelPlacementGroup", "Required field: ClusterId, is not set");
    return UpdateChannelPlacementGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/channelplacementgroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelPlacementGroupId());
  };

  return UpdateChannelPlacementGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateCloudWatchAlarmTemplateOutcome MediaLiveClient::UpdateCloudWatchAlarmTemplate(
    const UpdateCloudWatchAlarmTemplateRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCloudWatchAlarmTemplate", "Required field: Identifier, is not set");
    return UpdateCloudWatchAlarmTemplateOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/cloudwatch-alarm-templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateCloudWatchAlarmTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateCloudWatchAlarmTemplateGroupOutcome MediaLiveClient::UpdateCloudWatchAlarmTemplateGroup(
    const UpdateCloudWatchAlarmTemplateGroupRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCloudWatchAlarmTemplateGroup", "Required field: Identifier, is not set");
    return UpdateCloudWatchAlarmTemplateGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/cloudwatch-alarm-template-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateCloudWatchAlarmTemplateGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateClusterOutcome MediaLiveClient::UpdateCluster(const UpdateClusterRequest& request) const {
  if (!request.ClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCluster", "Required field: ClusterId, is not set");
    return UpdateClusterOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ClusterId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterId());
  };

  return UpdateClusterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateEventBridgeRuleTemplateOutcome MediaLiveClient::UpdateEventBridgeRuleTemplate(
    const UpdateEventBridgeRuleTemplateRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEventBridgeRuleTemplate", "Required field: Identifier, is not set");
    return UpdateEventBridgeRuleTemplateOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/eventbridge-rule-templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateEventBridgeRuleTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateEventBridgeRuleTemplateGroupOutcome MediaLiveClient::UpdateEventBridgeRuleTemplateGroup(
    const UpdateEventBridgeRuleTemplateGroupRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEventBridgeRuleTemplateGroup", "Required field: Identifier, is not set");
    return UpdateEventBridgeRuleTemplateGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(
        MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/eventbridge-rule-template-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateEventBridgeRuleTemplateGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateInputOutcome MediaLiveClient::UpdateInput(const UpdateInputRequest& request) const {
  if (!request.InputIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateInput", "Required field: InputId, is not set");
    return UpdateInputOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [InputId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputId());
  };

  return UpdateInputOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateInputDeviceOutcome MediaLiveClient::UpdateInputDevice(const UpdateInputDeviceRequest& request) const {
  if (!request.InputDeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateInputDevice", "Required field: InputDeviceId, is not set");
    return UpdateInputDeviceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [InputDeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputDevices/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputDeviceId());
  };

  return UpdateInputDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateInputSecurityGroupOutcome MediaLiveClient::UpdateInputSecurityGroup(const UpdateInputSecurityGroupRequest& request) const {
  if (!request.InputSecurityGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateInputSecurityGroup", "Required field: InputSecurityGroupId, is not set");
    return UpdateInputSecurityGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [InputSecurityGroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputSecurityGroups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInputSecurityGroupId());
  };

  return UpdateInputSecurityGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateMultiplexOutcome MediaLiveClient::UpdateMultiplex(const UpdateMultiplexRequest& request) const {
  if (!request.MultiplexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMultiplex", "Required field: MultiplexId, is not set");
    return UpdateMultiplexOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [MultiplexId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/multiplexes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMultiplexId());
  };

  return UpdateMultiplexOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateMultiplexProgramOutcome MediaLiveClient::UpdateMultiplexProgram(const UpdateMultiplexProgramRequest& request) const {
  if (!request.MultiplexIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMultiplexProgram", "Required field: MultiplexId, is not set");
    return UpdateMultiplexProgramOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [MultiplexId]", false));
  }
  if (!request.ProgramNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMultiplexProgram", "Required field: ProgramName, is not set");
    return UpdateMultiplexProgramOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ProgramName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/multiplexes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMultiplexId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/programs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProgramName());
  };

  return UpdateMultiplexProgramOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateNetworkOutcome MediaLiveClient::UpdateNetwork(const UpdateNetworkRequest& request) const {
  if (!request.NetworkIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateNetwork", "Required field: NetworkId, is not set");
    return UpdateNetworkOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [NetworkId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/networks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNetworkId());
  };

  return UpdateNetworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateNodeOutcome MediaLiveClient::UpdateNode(const UpdateNodeRequest& request) const {
  if (!request.ClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateNode", "Required field: ClusterId, is not set");
    return UpdateNodeOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ClusterId]", false));
  }
  if (!request.NodeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateNode", "Required field: NodeId, is not set");
    return UpdateNodeOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [NodeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/nodes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNodeId());
  };

  return UpdateNodeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateNodeStateOutcome MediaLiveClient::UpdateNodeState(const UpdateNodeStateRequest& request) const {
  if (!request.ClusterIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateNodeState", "Required field: ClusterId, is not set");
    return UpdateNodeStateOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ClusterId]", false));
  }
  if (!request.NodeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateNodeState", "Required field: NodeId, is not set");
    return UpdateNodeStateOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [NodeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/clusters/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClusterId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/nodes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNodeId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/state");
  };

  return UpdateNodeStateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateReservationOutcome MediaLiveClient::UpdateReservation(const UpdateReservationRequest& request) const {
  if (!request.ReservationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateReservation", "Required field: ReservationId, is not set");
    return UpdateReservationOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ReservationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/reservations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReservationId());
  };

  return UpdateReservationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateSdiSourceOutcome MediaLiveClient::UpdateSdiSource(const UpdateSdiSourceRequest& request) const {
  if (!request.SdiSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSdiSource", "Required field: SdiSourceId, is not set");
    return UpdateSdiSourceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SdiSourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/sdiSources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSdiSourceId());
  };

  return UpdateSdiSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
