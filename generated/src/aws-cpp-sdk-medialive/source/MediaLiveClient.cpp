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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptInputDeviceTransferOutcome(result.GetResultWithOwnership())
                            : AcceptInputDeviceTransferOutcome(std::move(result.GetError()));
}

BatchDeleteOutcome MediaLiveClient::BatchDelete(const BatchDeleteRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/batch/delete");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeleteOutcome(result.GetResultWithOwnership()) : BatchDeleteOutcome(std::move(result.GetError()));
}

BatchStartOutcome MediaLiveClient::BatchStart(const BatchStartRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/batch/start");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchStartOutcome(result.GetResultWithOwnership()) : BatchStartOutcome(std::move(result.GetError()));
}

BatchStopOutcome MediaLiveClient::BatchStop(const BatchStopRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/batch/stop");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchStopOutcome(result.GetResultWithOwnership()) : BatchStopOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? BatchUpdateScheduleOutcome(result.GetResultWithOwnership())
                            : BatchUpdateScheduleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelInputDeviceTransferOutcome(result.GetResultWithOwnership())
                            : CancelInputDeviceTransferOutcome(std::move(result.GetError()));
}

ClaimDeviceOutcome MediaLiveClient::ClaimDevice(const ClaimDeviceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/claimDevice");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ClaimDeviceOutcome(result.GetResultWithOwnership()) : ClaimDeviceOutcome(std::move(result.GetError()));
}

CreateChannelOutcome MediaLiveClient::CreateChannel(const CreateChannelRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/channels");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateChannelOutcome(result.GetResultWithOwnership()) : CreateChannelOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateChannelPlacementGroupOutcome(result.GetResultWithOwnership())
                            : CreateChannelPlacementGroupOutcome(std::move(result.GetError()));
}

CreateCloudWatchAlarmTemplateOutcome MediaLiveClient::CreateCloudWatchAlarmTemplate(
    const CreateCloudWatchAlarmTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/cloudwatch-alarm-templates");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCloudWatchAlarmTemplateOutcome(result.GetResultWithOwnership())
                            : CreateCloudWatchAlarmTemplateOutcome(std::move(result.GetError()));
}

CreateCloudWatchAlarmTemplateGroupOutcome MediaLiveClient::CreateCloudWatchAlarmTemplateGroup(
    const CreateCloudWatchAlarmTemplateGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/cloudwatch-alarm-template-groups");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCloudWatchAlarmTemplateGroupOutcome(result.GetResultWithOwnership())
                            : CreateCloudWatchAlarmTemplateGroupOutcome(std::move(result.GetError()));
}

CreateClusterOutcome MediaLiveClient::CreateCluster(const CreateClusterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/clusters");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateClusterOutcome(result.GetResultWithOwnership()) : CreateClusterOutcome(std::move(result.GetError()));
}

CreateEventBridgeRuleTemplateOutcome MediaLiveClient::CreateEventBridgeRuleTemplate(
    const CreateEventBridgeRuleTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/eventbridge-rule-templates");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEventBridgeRuleTemplateOutcome(result.GetResultWithOwnership())
                            : CreateEventBridgeRuleTemplateOutcome(std::move(result.GetError()));
}

CreateEventBridgeRuleTemplateGroupOutcome MediaLiveClient::CreateEventBridgeRuleTemplateGroup(
    const CreateEventBridgeRuleTemplateGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/eventbridge-rule-template-groups");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEventBridgeRuleTemplateGroupOutcome(result.GetResultWithOwnership())
                            : CreateEventBridgeRuleTemplateGroupOutcome(std::move(result.GetError()));
}

CreateInputOutcome MediaLiveClient::CreateInput(const CreateInputRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInputOutcome(result.GetResultWithOwnership()) : CreateInputOutcome(std::move(result.GetError()));
}

CreateInputSecurityGroupOutcome MediaLiveClient::CreateInputSecurityGroup(const CreateInputSecurityGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputSecurityGroups");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInputSecurityGroupOutcome(result.GetResultWithOwnership())
                            : CreateInputSecurityGroupOutcome(std::move(result.GetError()));
}

CreateMultiplexOutcome MediaLiveClient::CreateMultiplex(const CreateMultiplexRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/multiplexes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMultiplexOutcome(result.GetResultWithOwnership())
                            : CreateMultiplexOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMultiplexProgramOutcome(result.GetResultWithOwnership())
                            : CreateMultiplexProgramOutcome(std::move(result.GetError()));
}

CreateNetworkOutcome MediaLiveClient::CreateNetwork(const CreateNetworkRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/networks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNetworkOutcome(result.GetResultWithOwnership()) : CreateNetworkOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNodeOutcome(result.GetResultWithOwnership()) : CreateNodeOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNodeRegistrationScriptOutcome(result.GetResultWithOwnership())
                            : CreateNodeRegistrationScriptOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePartnerInputOutcome(result.GetResultWithOwnership())
                            : CreatePartnerInputOutcome(std::move(result.GetError()));
}

CreateSdiSourceOutcome MediaLiveClient::CreateSdiSource(const CreateSdiSourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/sdiSources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSdiSourceOutcome(result.GetResultWithOwnership())
                            : CreateSdiSourceOutcome(std::move(result.GetError()));
}

CreateSignalMapOutcome MediaLiveClient::CreateSignalMap(const CreateSignalMapRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/signal-maps");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSignalMapOutcome(result.GetResultWithOwnership())
                            : CreateSignalMapOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTagsOutcome(result.GetResultWithOwnership()) : CreateTagsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteChannelOutcome(result.GetResultWithOwnership()) : DeleteChannelOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteChannelPlacementGroupOutcome(result.GetResultWithOwnership())
                            : DeleteChannelPlacementGroupOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCloudWatchAlarmTemplateOutcome(result.GetResultWithOwnership())
                            : DeleteCloudWatchAlarmTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCloudWatchAlarmTemplateGroupOutcome(result.GetResultWithOwnership())
                            : DeleteCloudWatchAlarmTemplateGroupOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteClusterOutcome(result.GetResultWithOwnership()) : DeleteClusterOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteEventBridgeRuleTemplateOutcome(result.GetResultWithOwnership())
                            : DeleteEventBridgeRuleTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteEventBridgeRuleTemplateGroupOutcome(result.GetResultWithOwnership())
                            : DeleteEventBridgeRuleTemplateGroupOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteInputOutcome(result.GetResultWithOwnership()) : DeleteInputOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteInputSecurityGroupOutcome(result.GetResultWithOwnership())
                            : DeleteInputSecurityGroupOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMultiplexOutcome(result.GetResultWithOwnership())
                            : DeleteMultiplexOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMultiplexProgramOutcome(result.GetResultWithOwnership())
                            : DeleteMultiplexProgramOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteNetworkOutcome(result.GetResultWithOwnership()) : DeleteNetworkOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteNodeOutcome(result.GetResultWithOwnership()) : DeleteNodeOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteReservationOutcome(result.GetResultWithOwnership())
                            : DeleteReservationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteScheduleOutcome(result.GetResultWithOwnership()) : DeleteScheduleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSdiSourceOutcome(result.GetResultWithOwnership())
                            : DeleteSdiSourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSignalMapOutcome(result.GetResultWithOwnership())
                            : DeleteSignalMapOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTagsOutcome(result.GetResultWithOwnership()) : DeleteTagsOutcome(std::move(result.GetError()));
}

DescribeAccountConfigurationOutcome MediaLiveClient::DescribeAccountConfiguration(
    const DescribeAccountConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/accountConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeAccountConfigurationOutcome(result.GetResultWithOwnership())
                            : DescribeAccountConfigurationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeChannelOutcome(result.GetResultWithOwnership())
                            : DescribeChannelOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeChannelPlacementGroupOutcome(result.GetResultWithOwnership())
                            : DescribeChannelPlacementGroupOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeClusterOutcome(result.GetResultWithOwnership())
                            : DescribeClusterOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeInputOutcome(result.GetResultWithOwnership()) : DescribeInputOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeInputDeviceOutcome(result.GetResultWithOwnership())
                            : DescribeInputDeviceOutcome(std::move(result.GetError()));
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
        return result.IsSuccess() ? DescribeInputDeviceThumbnailOutcome(result.GetResultWithOwnership())
                                  : DescribeInputDeviceThumbnailOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeInputSecurityGroupOutcome(result.GetResultWithOwnership())
                            : DescribeInputSecurityGroupOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeMultiplexOutcome(result.GetResultWithOwnership())
                            : DescribeMultiplexOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeMultiplexProgramOutcome(result.GetResultWithOwnership())
                            : DescribeMultiplexProgramOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeNetworkOutcome(result.GetResultWithOwnership())
                            : DescribeNetworkOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeNodeOutcome(result.GetResultWithOwnership()) : DescribeNodeOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeOfferingOutcome(result.GetResultWithOwnership())
                            : DescribeOfferingOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeReservationOutcome(result.GetResultWithOwnership())
                            : DescribeReservationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeScheduleOutcome(result.GetResultWithOwnership())
                            : DescribeScheduleOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeSdiSourceOutcome(result.GetResultWithOwnership())
                            : DescribeSdiSourceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeThumbnailsOutcome(result.GetResultWithOwnership())
                            : DescribeThumbnailsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCloudWatchAlarmTemplateOutcome(result.GetResultWithOwnership())
                            : GetCloudWatchAlarmTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCloudWatchAlarmTemplateGroupOutcome(result.GetResultWithOwnership())
                            : GetCloudWatchAlarmTemplateGroupOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetEventBridgeRuleTemplateOutcome(result.GetResultWithOwnership())
                            : GetEventBridgeRuleTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetEventBridgeRuleTemplateGroupOutcome(result.GetResultWithOwnership())
                            : GetEventBridgeRuleTemplateGroupOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSignalMapOutcome(result.GetResultWithOwnership()) : GetSignalMapOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAlertsOutcome(result.GetResultWithOwnership()) : ListAlertsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListChannelPlacementGroupsOutcome(result.GetResultWithOwnership())
                            : ListChannelPlacementGroupsOutcome(std::move(result.GetError()));
}

ListChannelsOutcome MediaLiveClient::ListChannels(const ListChannelsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/channels");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListChannelsOutcome(result.GetResultWithOwnership()) : ListChannelsOutcome(std::move(result.GetError()));
}

ListCloudWatchAlarmTemplateGroupsOutcome MediaLiveClient::ListCloudWatchAlarmTemplateGroups(
    const ListCloudWatchAlarmTemplateGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/cloudwatch-alarm-template-groups");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCloudWatchAlarmTemplateGroupsOutcome(result.GetResultWithOwnership())
                            : ListCloudWatchAlarmTemplateGroupsOutcome(std::move(result.GetError()));
}

ListCloudWatchAlarmTemplatesOutcome MediaLiveClient::ListCloudWatchAlarmTemplates(
    const ListCloudWatchAlarmTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/cloudwatch-alarm-templates");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCloudWatchAlarmTemplatesOutcome(result.GetResultWithOwnership())
                            : ListCloudWatchAlarmTemplatesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListClusterAlertsOutcome(result.GetResultWithOwnership())
                            : ListClusterAlertsOutcome(std::move(result.GetError()));
}

ListClustersOutcome MediaLiveClient::ListClusters(const ListClustersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/clusters");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListClustersOutcome(result.GetResultWithOwnership()) : ListClustersOutcome(std::move(result.GetError()));
}

ListEventBridgeRuleTemplateGroupsOutcome MediaLiveClient::ListEventBridgeRuleTemplateGroups(
    const ListEventBridgeRuleTemplateGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/eventbridge-rule-template-groups");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListEventBridgeRuleTemplateGroupsOutcome(result.GetResultWithOwnership())
                            : ListEventBridgeRuleTemplateGroupsOutcome(std::move(result.GetError()));
}

ListEventBridgeRuleTemplatesOutcome MediaLiveClient::ListEventBridgeRuleTemplates(
    const ListEventBridgeRuleTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/eventbridge-rule-templates");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListEventBridgeRuleTemplatesOutcome(result.GetResultWithOwnership())
                            : ListEventBridgeRuleTemplatesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListInputDeviceTransfersOutcome(result.GetResultWithOwnership())
                            : ListInputDeviceTransfersOutcome(std::move(result.GetError()));
}

ListInputDevicesOutcome MediaLiveClient::ListInputDevices(const ListInputDevicesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputDevices");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListInputDevicesOutcome(result.GetResultWithOwnership())
                            : ListInputDevicesOutcome(std::move(result.GetError()));
}

ListInputSecurityGroupsOutcome MediaLiveClient::ListInputSecurityGroups(const ListInputSecurityGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputSecurityGroups");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListInputSecurityGroupsOutcome(result.GetResultWithOwnership())
                            : ListInputSecurityGroupsOutcome(std::move(result.GetError()));
}

ListInputsOutcome MediaLiveClient::ListInputs(const ListInputsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/inputs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListInputsOutcome(result.GetResultWithOwnership()) : ListInputsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMultiplexAlertsOutcome(result.GetResultWithOwnership())
                            : ListMultiplexAlertsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMultiplexProgramsOutcome(result.GetResultWithOwnership())
                            : ListMultiplexProgramsOutcome(std::move(result.GetError()));
}

ListMultiplexesOutcome MediaLiveClient::ListMultiplexes(const ListMultiplexesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/multiplexes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMultiplexesOutcome(result.GetResultWithOwnership())
                            : ListMultiplexesOutcome(std::move(result.GetError()));
}

ListNetworksOutcome MediaLiveClient::ListNetworks(const ListNetworksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/networks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListNetworksOutcome(result.GetResultWithOwnership()) : ListNetworksOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListNodesOutcome(result.GetResultWithOwnership()) : ListNodesOutcome(std::move(result.GetError()));
}

ListOfferingsOutcome MediaLiveClient::ListOfferings(const ListOfferingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/offerings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListOfferingsOutcome(result.GetResultWithOwnership()) : ListOfferingsOutcome(std::move(result.GetError()));
}

ListReservationsOutcome MediaLiveClient::ListReservations(const ListReservationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/reservations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListReservationsOutcome(result.GetResultWithOwnership())
                            : ListReservationsOutcome(std::move(result.GetError()));
}

ListSdiSourcesOutcome MediaLiveClient::ListSdiSources(const ListSdiSourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/sdiSources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSdiSourcesOutcome(result.GetResultWithOwnership()) : ListSdiSourcesOutcome(std::move(result.GetError()));
}

ListSignalMapsOutcome MediaLiveClient::ListSignalMaps(const ListSignalMapsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/signal-maps");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSignalMapsOutcome(result.GetResultWithOwnership()) : ListSignalMapsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListVersionsOutcome MediaLiveClient::ListVersions(const ListVersionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/versions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListVersionsOutcome(result.GetResultWithOwnership()) : ListVersionsOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PurchaseOfferingOutcome(result.GetResultWithOwnership())
                            : PurchaseOfferingOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RebootInputDeviceOutcome(result.GetResultWithOwnership())
                            : RebootInputDeviceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RejectInputDeviceTransferOutcome(result.GetResultWithOwnership())
                            : RejectInputDeviceTransferOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestartChannelPipelinesOutcome(result.GetResultWithOwnership())
                            : RestartChannelPipelinesOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartChannelOutcome(result.GetResultWithOwnership()) : StartChannelOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? StartDeleteMonitorDeploymentOutcome(result.GetResultWithOwnership())
                            : StartDeleteMonitorDeploymentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartInputDeviceOutcome(result.GetResultWithOwnership())
                            : StartInputDeviceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartInputDeviceMaintenanceWindowOutcome(result.GetResultWithOwnership())
                            : StartInputDeviceMaintenanceWindowOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartMonitorDeploymentOutcome(result.GetResultWithOwnership())
                            : StartMonitorDeploymentOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartMultiplexOutcome(result.GetResultWithOwnership()) : StartMultiplexOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? StartUpdateSignalMapOutcome(result.GetResultWithOwnership())
                            : StartUpdateSignalMapOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopChannelOutcome(result.GetResultWithOwnership()) : StopChannelOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopInputDeviceOutcome(result.GetResultWithOwnership())
                            : StopInputDeviceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopMultiplexOutcome(result.GetResultWithOwnership()) : StopMultiplexOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TransferInputDeviceOutcome(result.GetResultWithOwnership())
                            : TransferInputDeviceOutcome(std::move(result.GetError()));
}

UpdateAccountConfigurationOutcome MediaLiveClient::UpdateAccountConfiguration(const UpdateAccountConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/prod/accountConfiguration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAccountConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateAccountConfigurationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateChannelOutcome(result.GetResultWithOwnership()) : UpdateChannelOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateChannelClassOutcome(result.GetResultWithOwnership())
                            : UpdateChannelClassOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateChannelPlacementGroupOutcome(result.GetResultWithOwnership())
                            : UpdateChannelPlacementGroupOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateCloudWatchAlarmTemplateOutcome(result.GetResultWithOwnership())
                            : UpdateCloudWatchAlarmTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateCloudWatchAlarmTemplateGroupOutcome(result.GetResultWithOwnership())
                            : UpdateCloudWatchAlarmTemplateGroupOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateClusterOutcome(result.GetResultWithOwnership()) : UpdateClusterOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateEventBridgeRuleTemplateOutcome(result.GetResultWithOwnership())
                            : UpdateEventBridgeRuleTemplateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateEventBridgeRuleTemplateGroupOutcome(result.GetResultWithOwnership())
                            : UpdateEventBridgeRuleTemplateGroupOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateInputOutcome(result.GetResultWithOwnership()) : UpdateInputOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateInputDeviceOutcome(result.GetResultWithOwnership())
                            : UpdateInputDeviceOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateInputSecurityGroupOutcome(result.GetResultWithOwnership())
                            : UpdateInputSecurityGroupOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateMultiplexOutcome(result.GetResultWithOwnership())
                            : UpdateMultiplexOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateMultiplexProgramOutcome(result.GetResultWithOwnership())
                            : UpdateMultiplexProgramOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateNetworkOutcome(result.GetResultWithOwnership()) : UpdateNetworkOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateNodeOutcome(result.GetResultWithOwnership()) : UpdateNodeOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateNodeStateOutcome(result.GetResultWithOwnership())
                            : UpdateNodeStateOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateReservationOutcome(result.GetResultWithOwnership())
                            : UpdateReservationOutcome(std::move(result.GetError()));
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateSdiSourceOutcome(result.GetResultWithOwnership())
                            : UpdateSdiSourceOutcome(std::move(result.GetError()));
}
