/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>


#include <aws/medialive/MediaLiveClient.h>
#include <aws/medialive/MediaLiveErrorMarshaller.h>
#include <aws/medialive/MediaLiveEndpointProvider.h>
#include <aws/medialive/model/AcceptInputDeviceTransferRequest.h>
#include <aws/medialive/model/BatchDeleteRequest.h>
#include <aws/medialive/model/BatchStartRequest.h>
#include <aws/medialive/model/BatchStopRequest.h>
#include <aws/medialive/model/BatchUpdateScheduleRequest.h>
#include <aws/medialive/model/CancelInputDeviceTransferRequest.h>
#include <aws/medialive/model/ClaimDeviceRequest.h>
#include <aws/medialive/model/CreateChannelRequest.h>
#include <aws/medialive/model/CreateChannelPlacementGroupRequest.h>
#include <aws/medialive/model/CreateCloudWatchAlarmTemplateRequest.h>
#include <aws/medialive/model/CreateCloudWatchAlarmTemplateGroupRequest.h>
#include <aws/medialive/model/CreateClusterRequest.h>
#include <aws/medialive/model/CreateEventBridgeRuleTemplateRequest.h>
#include <aws/medialive/model/CreateEventBridgeRuleTemplateGroupRequest.h>
#include <aws/medialive/model/CreateInputRequest.h>
#include <aws/medialive/model/CreateInputSecurityGroupRequest.h>
#include <aws/medialive/model/CreateMultiplexRequest.h>
#include <aws/medialive/model/CreateMultiplexProgramRequest.h>
#include <aws/medialive/model/CreateNetworkRequest.h>
#include <aws/medialive/model/CreateNodeRequest.h>
#include <aws/medialive/model/CreateNodeRegistrationScriptRequest.h>
#include <aws/medialive/model/CreatePartnerInputRequest.h>
#include <aws/medialive/model/CreateSignalMapRequest.h>
#include <aws/medialive/model/CreateTagsRequest.h>
#include <aws/medialive/model/DeleteChannelRequest.h>
#include <aws/medialive/model/DeleteChannelPlacementGroupRequest.h>
#include <aws/medialive/model/DeleteCloudWatchAlarmTemplateRequest.h>
#include <aws/medialive/model/DeleteCloudWatchAlarmTemplateGroupRequest.h>
#include <aws/medialive/model/DeleteClusterRequest.h>
#include <aws/medialive/model/DeleteEventBridgeRuleTemplateRequest.h>
#include <aws/medialive/model/DeleteEventBridgeRuleTemplateGroupRequest.h>
#include <aws/medialive/model/DeleteInputRequest.h>
#include <aws/medialive/model/DeleteInputSecurityGroupRequest.h>
#include <aws/medialive/model/DeleteMultiplexRequest.h>
#include <aws/medialive/model/DeleteMultiplexProgramRequest.h>
#include <aws/medialive/model/DeleteNetworkRequest.h>
#include <aws/medialive/model/DeleteNodeRequest.h>
#include <aws/medialive/model/DeleteReservationRequest.h>
#include <aws/medialive/model/DeleteScheduleRequest.h>
#include <aws/medialive/model/DeleteSignalMapRequest.h>
#include <aws/medialive/model/DeleteTagsRequest.h>
#include <aws/medialive/model/DescribeAccountConfigurationRequest.h>
#include <aws/medialive/model/DescribeChannelRequest.h>
#include <aws/medialive/model/DescribeChannelPlacementGroupRequest.h>
#include <aws/medialive/model/DescribeClusterRequest.h>
#include <aws/medialive/model/DescribeInputRequest.h>
#include <aws/medialive/model/DescribeInputDeviceRequest.h>
#include <aws/medialive/model/DescribeInputDeviceThumbnailRequest.h>
#include <aws/medialive/model/DescribeInputSecurityGroupRequest.h>
#include <aws/medialive/model/DescribeMultiplexRequest.h>
#include <aws/medialive/model/DescribeMultiplexProgramRequest.h>
#include <aws/medialive/model/DescribeNetworkRequest.h>
#include <aws/medialive/model/DescribeNodeRequest.h>
#include <aws/medialive/model/DescribeOfferingRequest.h>
#include <aws/medialive/model/DescribeReservationRequest.h>
#include <aws/medialive/model/DescribeScheduleRequest.h>
#include <aws/medialive/model/DescribeThumbnailsRequest.h>
#include <aws/medialive/model/GetCloudWatchAlarmTemplateRequest.h>
#include <aws/medialive/model/GetCloudWatchAlarmTemplateGroupRequest.h>
#include <aws/medialive/model/GetEventBridgeRuleTemplateRequest.h>
#include <aws/medialive/model/GetEventBridgeRuleTemplateGroupRequest.h>
#include <aws/medialive/model/GetSignalMapRequest.h>
#include <aws/medialive/model/ListChannelPlacementGroupsRequest.h>
#include <aws/medialive/model/ListChannelsRequest.h>
#include <aws/medialive/model/ListCloudWatchAlarmTemplateGroupsRequest.h>
#include <aws/medialive/model/ListCloudWatchAlarmTemplatesRequest.h>
#include <aws/medialive/model/ListClustersRequest.h>
#include <aws/medialive/model/ListEventBridgeRuleTemplateGroupsRequest.h>
#include <aws/medialive/model/ListEventBridgeRuleTemplatesRequest.h>
#include <aws/medialive/model/ListInputDeviceTransfersRequest.h>
#include <aws/medialive/model/ListInputDevicesRequest.h>
#include <aws/medialive/model/ListInputSecurityGroupsRequest.h>
#include <aws/medialive/model/ListInputsRequest.h>
#include <aws/medialive/model/ListMultiplexProgramsRequest.h>
#include <aws/medialive/model/ListMultiplexesRequest.h>
#include <aws/medialive/model/ListNetworksRequest.h>
#include <aws/medialive/model/ListNodesRequest.h>
#include <aws/medialive/model/ListOfferingsRequest.h>
#include <aws/medialive/model/ListReservationsRequest.h>
#include <aws/medialive/model/ListSignalMapsRequest.h>
#include <aws/medialive/model/ListTagsForResourceRequest.h>
#include <aws/medialive/model/ListVersionsRequest.h>
#include <aws/medialive/model/PurchaseOfferingRequest.h>
#include <aws/medialive/model/RebootInputDeviceRequest.h>
#include <aws/medialive/model/RejectInputDeviceTransferRequest.h>
#include <aws/medialive/model/RestartChannelPipelinesRequest.h>
#include <aws/medialive/model/StartChannelRequest.h>
#include <aws/medialive/model/StartDeleteMonitorDeploymentRequest.h>
#include <aws/medialive/model/StartInputDeviceRequest.h>
#include <aws/medialive/model/StartInputDeviceMaintenanceWindowRequest.h>
#include <aws/medialive/model/StartMonitorDeploymentRequest.h>
#include <aws/medialive/model/StartMultiplexRequest.h>
#include <aws/medialive/model/StartUpdateSignalMapRequest.h>
#include <aws/medialive/model/StopChannelRequest.h>
#include <aws/medialive/model/StopInputDeviceRequest.h>
#include <aws/medialive/model/StopMultiplexRequest.h>
#include <aws/medialive/model/TransferInputDeviceRequest.h>
#include <aws/medialive/model/UpdateAccountConfigurationRequest.h>
#include <aws/medialive/model/UpdateChannelRequest.h>
#include <aws/medialive/model/UpdateChannelClassRequest.h>
#include <aws/medialive/model/UpdateChannelPlacementGroupRequest.h>
#include <aws/medialive/model/UpdateCloudWatchAlarmTemplateRequest.h>
#include <aws/medialive/model/UpdateCloudWatchAlarmTemplateGroupRequest.h>
#include <aws/medialive/model/UpdateClusterRequest.h>
#include <aws/medialive/model/UpdateEventBridgeRuleTemplateRequest.h>
#include <aws/medialive/model/UpdateEventBridgeRuleTemplateGroupRequest.h>
#include <aws/medialive/model/UpdateInputRequest.h>
#include <aws/medialive/model/UpdateInputDeviceRequest.h>
#include <aws/medialive/model/UpdateInputSecurityGroupRequest.h>
#include <aws/medialive/model/UpdateMultiplexRequest.h>
#include <aws/medialive/model/UpdateMultiplexProgramRequest.h>
#include <aws/medialive/model/UpdateNetworkRequest.h>
#include <aws/medialive/model/UpdateNodeRequest.h>
#include <aws/medialive/model/UpdateNodeStateRequest.h>
#include <aws/medialive/model/UpdateReservationRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MediaLive;
using namespace Aws::MediaLive::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace MediaLive
  {
    const char ALLOCATION_TAG[] = "MediaLiveClient";
    const char SERVICE_NAME[] = "medialive";
  }
}
const char* MediaLiveClient::GetServiceName() {return SERVICE_NAME;}
const char* MediaLiveClient::GetAllocationTag() {return ALLOCATION_TAG;}

MediaLiveClient::MediaLiveClient(const MediaLive::MediaLiveClientConfiguration& clientConfiguration,
                           std::shared_ptr<MediaLiveEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "MediaLive",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MediaLiveErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<MediaLiveEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

MediaLiveClient::MediaLiveClient(const AWSCredentials& credentials,
                           std::shared_ptr<MediaLiveEndpointProviderBase> endpointProvider,
                           const MediaLive::MediaLiveClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "MediaLive",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MediaLiveErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<MediaLiveEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

MediaLiveClient::MediaLiveClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<MediaLiveEndpointProviderBase> endpointProvider,
                           const MediaLive::MediaLiveClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "MediaLive",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MediaLiveErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<MediaLiveEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
MediaLiveClient::MediaLiveClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "MediaLive",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<MediaLiveErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<MediaLiveEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

MediaLiveClient::MediaLiveClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "MediaLive",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MediaLiveErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<MediaLiveEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

MediaLiveClient::MediaLiveClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "MediaLive",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MediaLiveErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<MediaLiveEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

MediaLiveClient::~MediaLiveClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<MediaLiveEndpointProviderBase>& MediaLiveClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void MediaLiveClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
AcceptInputDeviceTransferOutcome MediaLiveClient::AcceptInputDeviceTransfer(const AcceptInputDeviceTransferRequest& request) const
{
  AWS_OPERATION_GUARD(AcceptInputDeviceTransfer);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptInputDeviceTransfer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AcceptInputDeviceTransfer", "Required field: InputDeviceId, is not set");
    return AcceptInputDeviceTransferOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AcceptInputDeviceTransfer, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AcceptInputDeviceTransfer, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AcceptInputDeviceTransfer",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AcceptInputDeviceTransferOutcome>(
    [&]()-> AcceptInputDeviceTransferOutcome {
      return AcceptInputDeviceTransferOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputDevices/");
      resolvedEndpoint.AddPathSegment(request.GetInputDeviceId());
      resolvedEndpoint.AddPathSegments("/accept");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchDeleteOutcome MediaLiveClient::BatchDelete(const BatchDeleteRequest& request) const
{
  AWS_OPERATION_GUARD(BatchDelete);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDelete, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchDelete, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchDelete, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchDelete",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchDeleteOutcome>(
    [&]()-> BatchDeleteOutcome {
      return BatchDeleteOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/batch/delete");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchStartOutcome MediaLiveClient::BatchStart(const BatchStartRequest& request) const
{
  AWS_OPERATION_GUARD(BatchStart);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchStart, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchStart, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchStart, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchStart",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchStartOutcome>(
    [&]()-> BatchStartOutcome {
      return BatchStartOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/batch/start");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchStopOutcome MediaLiveClient::BatchStop(const BatchStopRequest& request) const
{
  AWS_OPERATION_GUARD(BatchStop);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchStop, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchStop, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchStop, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchStop",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchStopOutcome>(
    [&]()-> BatchStopOutcome {
      return BatchStopOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/batch/stop");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

BatchUpdateScheduleOutcome MediaLiveClient::BatchUpdateSchedule(const BatchUpdateScheduleRequest& request) const
{
  AWS_OPERATION_GUARD(BatchUpdateSchedule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchUpdateSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchUpdateSchedule", "Required field: ChannelId, is not set");
    return BatchUpdateScheduleOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchUpdateSchedule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchUpdateSchedule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchUpdateSchedule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchUpdateScheduleOutcome>(
    [&]()-> BatchUpdateScheduleOutcome {
      return BatchUpdateScheduleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/channels/");
      resolvedEndpoint.AddPathSegment(request.GetChannelId());
      resolvedEndpoint.AddPathSegments("/schedule");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CancelInputDeviceTransferOutcome MediaLiveClient::CancelInputDeviceTransfer(const CancelInputDeviceTransferRequest& request) const
{
  AWS_OPERATION_GUARD(CancelInputDeviceTransfer);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelInputDeviceTransfer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelInputDeviceTransfer", "Required field: InputDeviceId, is not set");
    return CancelInputDeviceTransferOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CancelInputDeviceTransfer, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CancelInputDeviceTransfer, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CancelInputDeviceTransfer",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CancelInputDeviceTransferOutcome>(
    [&]()-> CancelInputDeviceTransferOutcome {
      return CancelInputDeviceTransferOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputDevices/");
      resolvedEndpoint.AddPathSegment(request.GetInputDeviceId());
      resolvedEndpoint.AddPathSegments("/cancel");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ClaimDeviceOutcome MediaLiveClient::ClaimDevice(const ClaimDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(ClaimDevice);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ClaimDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ClaimDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ClaimDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ClaimDevice",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ClaimDeviceOutcome>(
    [&]()-> ClaimDeviceOutcome {
      return ClaimDeviceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/claimDevice");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateChannelOutcome MediaLiveClient::CreateChannel(const CreateChannelRequest& request) const
{
  AWS_OPERATION_GUARD(CreateChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateChannel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateChannelOutcome>(
    [&]()-> CreateChannelOutcome {
      return CreateChannelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/channels");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateChannelPlacementGroupOutcome MediaLiveClient::CreateChannelPlacementGroup(const CreateChannelPlacementGroupRequest& request) const
{
  AWS_OPERATION_GUARD(CreateChannelPlacementGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateChannelPlacementGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChannelPlacementGroup", "Required field: ClusterId, is not set");
    return CreateChannelPlacementGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateChannelPlacementGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateChannelPlacementGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateChannelPlacementGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateChannelPlacementGroupOutcome>(
    [&]()-> CreateChannelPlacementGroupOutcome {
      return CreateChannelPlacementGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterId());
      resolvedEndpoint.AddPathSegments("/channelplacementgroups");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateCloudWatchAlarmTemplateOutcome MediaLiveClient::CreateCloudWatchAlarmTemplate(const CreateCloudWatchAlarmTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(CreateCloudWatchAlarmTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCloudWatchAlarmTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateCloudWatchAlarmTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateCloudWatchAlarmTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateCloudWatchAlarmTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateCloudWatchAlarmTemplateOutcome>(
    [&]()-> CreateCloudWatchAlarmTemplateOutcome {
      return CreateCloudWatchAlarmTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/cloudwatch-alarm-templates");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateCloudWatchAlarmTemplateGroupOutcome MediaLiveClient::CreateCloudWatchAlarmTemplateGroup(const CreateCloudWatchAlarmTemplateGroupRequest& request) const
{
  AWS_OPERATION_GUARD(CreateCloudWatchAlarmTemplateGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCloudWatchAlarmTemplateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateCloudWatchAlarmTemplateGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateCloudWatchAlarmTemplateGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateCloudWatchAlarmTemplateGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateCloudWatchAlarmTemplateGroupOutcome>(
    [&]()-> CreateCloudWatchAlarmTemplateGroupOutcome {
      return CreateCloudWatchAlarmTemplateGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/cloudwatch-alarm-template-groups");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateClusterOutcome MediaLiveClient::CreateCluster(const CreateClusterRequest& request) const
{
  AWS_OPERATION_GUARD(CreateCluster);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateCluster",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateClusterOutcome>(
    [&]()-> CreateClusterOutcome {
      return CreateClusterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/clusters");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateEventBridgeRuleTemplateOutcome MediaLiveClient::CreateEventBridgeRuleTemplate(const CreateEventBridgeRuleTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(CreateEventBridgeRuleTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEventBridgeRuleTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateEventBridgeRuleTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateEventBridgeRuleTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateEventBridgeRuleTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateEventBridgeRuleTemplateOutcome>(
    [&]()-> CreateEventBridgeRuleTemplateOutcome {
      return CreateEventBridgeRuleTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/eventbridge-rule-templates");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateEventBridgeRuleTemplateGroupOutcome MediaLiveClient::CreateEventBridgeRuleTemplateGroup(const CreateEventBridgeRuleTemplateGroupRequest& request) const
{
  AWS_OPERATION_GUARD(CreateEventBridgeRuleTemplateGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEventBridgeRuleTemplateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateEventBridgeRuleTemplateGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateEventBridgeRuleTemplateGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateEventBridgeRuleTemplateGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateEventBridgeRuleTemplateGroupOutcome>(
    [&]()-> CreateEventBridgeRuleTemplateGroupOutcome {
      return CreateEventBridgeRuleTemplateGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/eventbridge-rule-template-groups");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateInputOutcome MediaLiveClient::CreateInput(const CreateInputRequest& request) const
{
  AWS_OPERATION_GUARD(CreateInput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateInput",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateInputOutcome>(
    [&]()-> CreateInputOutcome {
      return CreateInputOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateInputSecurityGroupOutcome MediaLiveClient::CreateInputSecurityGroup(const CreateInputSecurityGroupRequest& request) const
{
  AWS_OPERATION_GUARD(CreateInputSecurityGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInputSecurityGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateInputSecurityGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateInputSecurityGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateInputSecurityGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateInputSecurityGroupOutcome>(
    [&]()-> CreateInputSecurityGroupOutcome {
      return CreateInputSecurityGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputSecurityGroups");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMultiplexOutcome MediaLiveClient::CreateMultiplex(const CreateMultiplexRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMultiplex);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMultiplex, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateMultiplex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMultiplex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMultiplex",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMultiplexOutcome>(
    [&]()-> CreateMultiplexOutcome {
      return CreateMultiplexOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/multiplexes");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateMultiplexProgramOutcome MediaLiveClient::CreateMultiplexProgram(const CreateMultiplexProgramRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMultiplexProgram);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMultiplexProgram, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MultiplexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMultiplexProgram", "Required field: MultiplexId, is not set");
    return CreateMultiplexProgramOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MultiplexId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateMultiplexProgram, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMultiplexProgram, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMultiplexProgram",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMultiplexProgramOutcome>(
    [&]()-> CreateMultiplexProgramOutcome {
      return CreateMultiplexProgramOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/multiplexes/");
      resolvedEndpoint.AddPathSegment(request.GetMultiplexId());
      resolvedEndpoint.AddPathSegments("/programs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateNetworkOutcome MediaLiveClient::CreateNetwork(const CreateNetworkRequest& request) const
{
  AWS_OPERATION_GUARD(CreateNetwork);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateNetwork, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateNetwork, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateNetwork",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateNetworkOutcome>(
    [&]()-> CreateNetworkOutcome {
      return CreateNetworkOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/networks");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateNodeOutcome MediaLiveClient::CreateNode(const CreateNodeRequest& request) const
{
  AWS_OPERATION_GUARD(CreateNode);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateNode", "Required field: ClusterId, is not set");
    return CreateNodeOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateNode",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateNodeOutcome>(
    [&]()-> CreateNodeOutcome {
      return CreateNodeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterId());
      resolvedEndpoint.AddPathSegments("/nodes");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateNodeRegistrationScriptOutcome MediaLiveClient::CreateNodeRegistrationScript(const CreateNodeRegistrationScriptRequest& request) const
{
  AWS_OPERATION_GUARD(CreateNodeRegistrationScript);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNodeRegistrationScript, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateNodeRegistrationScript", "Required field: ClusterId, is not set");
    return CreateNodeRegistrationScriptOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateNodeRegistrationScript, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateNodeRegistrationScript, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateNodeRegistrationScript",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateNodeRegistrationScriptOutcome>(
    [&]()-> CreateNodeRegistrationScriptOutcome {
      return CreateNodeRegistrationScriptOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterId());
      resolvedEndpoint.AddPathSegments("/nodeRegistrationScript");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreatePartnerInputOutcome MediaLiveClient::CreatePartnerInput(const CreatePartnerInputRequest& request) const
{
  AWS_OPERATION_GUARD(CreatePartnerInput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePartnerInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreatePartnerInput", "Required field: InputId, is not set");
    return CreatePartnerInputOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreatePartnerInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreatePartnerInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreatePartnerInput",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreatePartnerInputOutcome>(
    [&]()-> CreatePartnerInputOutcome {
      return CreatePartnerInputOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputs/");
      resolvedEndpoint.AddPathSegment(request.GetInputId());
      resolvedEndpoint.AddPathSegments("/partners");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSignalMapOutcome MediaLiveClient::CreateSignalMap(const CreateSignalMapRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSignalMap);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSignalMap, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateSignalMap, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateSignalMap, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateSignalMap",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateSignalMapOutcome>(
    [&]()-> CreateSignalMapOutcome {
      return CreateSignalMapOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/signal-maps");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTagsOutcome MediaLiveClient::CreateTags(const CreateTagsRequest& request) const
{
  AWS_OPERATION_GUARD(CreateTags);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTags", "Required field: ResourceArn, is not set");
    return CreateTagsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateTags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateTags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateTags",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateTagsOutcome>(
    [&]()-> CreateTagsOutcome {
      return CreateTagsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteChannelOutcome MediaLiveClient::DeleteChannel(const DeleteChannelRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChannelId, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteChannel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteChannelOutcome>(
    [&]()-> DeleteChannelOutcome {
      return DeleteChannelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/channels/");
      resolvedEndpoint.AddPathSegment(request.GetChannelId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteChannelPlacementGroupOutcome MediaLiveClient::DeleteChannelPlacementGroup(const DeleteChannelPlacementGroupRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteChannelPlacementGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteChannelPlacementGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelPlacementGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelPlacementGroup", "Required field: ChannelPlacementGroupId, is not set");
    return DeleteChannelPlacementGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelPlacementGroupId]", false));
  }
  if (!request.ClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelPlacementGroup", "Required field: ClusterId, is not set");
    return DeleteChannelPlacementGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteChannelPlacementGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteChannelPlacementGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteChannelPlacementGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteChannelPlacementGroupOutcome>(
    [&]()-> DeleteChannelPlacementGroupOutcome {
      return DeleteChannelPlacementGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterId());
      resolvedEndpoint.AddPathSegments("/channelplacementgroups/");
      resolvedEndpoint.AddPathSegment(request.GetChannelPlacementGroupId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteCloudWatchAlarmTemplateOutcome MediaLiveClient::DeleteCloudWatchAlarmTemplate(const DeleteCloudWatchAlarmTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteCloudWatchAlarmTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCloudWatchAlarmTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCloudWatchAlarmTemplate", "Required field: Identifier, is not set");
    return DeleteCloudWatchAlarmTemplateOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteCloudWatchAlarmTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteCloudWatchAlarmTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteCloudWatchAlarmTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteCloudWatchAlarmTemplateOutcome>(
    [&]()-> DeleteCloudWatchAlarmTemplateOutcome {
      return DeleteCloudWatchAlarmTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/cloudwatch-alarm-templates/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteCloudWatchAlarmTemplateGroupOutcome MediaLiveClient::DeleteCloudWatchAlarmTemplateGroup(const DeleteCloudWatchAlarmTemplateGroupRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteCloudWatchAlarmTemplateGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCloudWatchAlarmTemplateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCloudWatchAlarmTemplateGroup", "Required field: Identifier, is not set");
    return DeleteCloudWatchAlarmTemplateGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteCloudWatchAlarmTemplateGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteCloudWatchAlarmTemplateGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteCloudWatchAlarmTemplateGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteCloudWatchAlarmTemplateGroupOutcome>(
    [&]()-> DeleteCloudWatchAlarmTemplateGroupOutcome {
      return DeleteCloudWatchAlarmTemplateGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/cloudwatch-alarm-template-groups/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteClusterOutcome MediaLiveClient::DeleteCluster(const DeleteClusterRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteCluster);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCluster", "Required field: ClusterId, is not set");
    return DeleteClusterOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteCluster",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteClusterOutcome>(
    [&]()-> DeleteClusterOutcome {
      return DeleteClusterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteEventBridgeRuleTemplateOutcome MediaLiveClient::DeleteEventBridgeRuleTemplate(const DeleteEventBridgeRuleTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteEventBridgeRuleTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEventBridgeRuleTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEventBridgeRuleTemplate", "Required field: Identifier, is not set");
    return DeleteEventBridgeRuleTemplateOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteEventBridgeRuleTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteEventBridgeRuleTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteEventBridgeRuleTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteEventBridgeRuleTemplateOutcome>(
    [&]()-> DeleteEventBridgeRuleTemplateOutcome {
      return DeleteEventBridgeRuleTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/eventbridge-rule-templates/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteEventBridgeRuleTemplateGroupOutcome MediaLiveClient::DeleteEventBridgeRuleTemplateGroup(const DeleteEventBridgeRuleTemplateGroupRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteEventBridgeRuleTemplateGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEventBridgeRuleTemplateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEventBridgeRuleTemplateGroup", "Required field: Identifier, is not set");
    return DeleteEventBridgeRuleTemplateGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteEventBridgeRuleTemplateGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteEventBridgeRuleTemplateGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteEventBridgeRuleTemplateGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteEventBridgeRuleTemplateGroupOutcome>(
    [&]()-> DeleteEventBridgeRuleTemplateGroupOutcome {
      return DeleteEventBridgeRuleTemplateGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/eventbridge-rule-template-groups/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteInputOutcome MediaLiveClient::DeleteInput(const DeleteInputRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteInput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInput", "Required field: InputId, is not set");
    return DeleteInputOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteInput",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteInputOutcome>(
    [&]()-> DeleteInputOutcome {
      return DeleteInputOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputs/");
      resolvedEndpoint.AddPathSegment(request.GetInputId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteInputSecurityGroupOutcome MediaLiveClient::DeleteInputSecurityGroup(const DeleteInputSecurityGroupRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteInputSecurityGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInputSecurityGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputSecurityGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInputSecurityGroup", "Required field: InputSecurityGroupId, is not set");
    return DeleteInputSecurityGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputSecurityGroupId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteInputSecurityGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteInputSecurityGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteInputSecurityGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteInputSecurityGroupOutcome>(
    [&]()-> DeleteInputSecurityGroupOutcome {
      return DeleteInputSecurityGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputSecurityGroups/");
      resolvedEndpoint.AddPathSegment(request.GetInputSecurityGroupId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMultiplexOutcome MediaLiveClient::DeleteMultiplex(const DeleteMultiplexRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMultiplex);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMultiplex, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MultiplexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMultiplex", "Required field: MultiplexId, is not set");
    return DeleteMultiplexOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MultiplexId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteMultiplex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMultiplex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMultiplex",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMultiplexOutcome>(
    [&]()-> DeleteMultiplexOutcome {
      return DeleteMultiplexOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/multiplexes/");
      resolvedEndpoint.AddPathSegment(request.GetMultiplexId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMultiplexProgramOutcome MediaLiveClient::DeleteMultiplexProgram(const DeleteMultiplexProgramRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMultiplexProgram);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMultiplexProgram, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MultiplexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMultiplexProgram", "Required field: MultiplexId, is not set");
    return DeleteMultiplexProgramOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MultiplexId]", false));
  }
  if (!request.ProgramNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMultiplexProgram", "Required field: ProgramName, is not set");
    return DeleteMultiplexProgramOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProgramName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteMultiplexProgram, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMultiplexProgram, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMultiplexProgram",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMultiplexProgramOutcome>(
    [&]()-> DeleteMultiplexProgramOutcome {
      return DeleteMultiplexProgramOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/multiplexes/");
      resolvedEndpoint.AddPathSegment(request.GetMultiplexId());
      resolvedEndpoint.AddPathSegments("/programs/");
      resolvedEndpoint.AddPathSegment(request.GetProgramName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteNetworkOutcome MediaLiveClient::DeleteNetwork(const DeleteNetworkRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteNetwork);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNetwork", "Required field: NetworkId, is not set");
    return DeleteNetworkOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteNetwork, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteNetwork, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteNetwork",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteNetworkOutcome>(
    [&]()-> DeleteNetworkOutcome {
      return DeleteNetworkOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/networks/");
      resolvedEndpoint.AddPathSegment(request.GetNetworkId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteNodeOutcome MediaLiveClient::DeleteNode(const DeleteNodeRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteNode);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNode", "Required field: ClusterId, is not set");
    return DeleteNodeOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterId]", false));
  }
  if (!request.NodeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNode", "Required field: NodeId, is not set");
    return DeleteNodeOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NodeId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteNode",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteNodeOutcome>(
    [&]()-> DeleteNodeOutcome {
      return DeleteNodeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterId());
      resolvedEndpoint.AddPathSegments("/nodes/");
      resolvedEndpoint.AddPathSegment(request.GetNodeId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteReservationOutcome MediaLiveClient::DeleteReservation(const DeleteReservationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteReservation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReservationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteReservation", "Required field: ReservationId, is not set");
    return DeleteReservationOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReservationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteReservation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteReservation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteReservation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteReservationOutcome>(
    [&]()-> DeleteReservationOutcome {
      return DeleteReservationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/reservations/");
      resolvedEndpoint.AddPathSegment(request.GetReservationId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteScheduleOutcome MediaLiveClient::DeleteSchedule(const DeleteScheduleRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSchedule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSchedule", "Required field: ChannelId, is not set");
    return DeleteScheduleOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteSchedule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteSchedule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteSchedule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteScheduleOutcome>(
    [&]()-> DeleteScheduleOutcome {
      return DeleteScheduleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/channels/");
      resolvedEndpoint.AddPathSegment(request.GetChannelId());
      resolvedEndpoint.AddPathSegments("/schedule");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSignalMapOutcome MediaLiveClient::DeleteSignalMap(const DeleteSignalMapRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSignalMap);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSignalMap, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSignalMap", "Required field: Identifier, is not set");
    return DeleteSignalMapOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteSignalMap, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteSignalMap, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteSignalMap",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteSignalMapOutcome>(
    [&]()-> DeleteSignalMapOutcome {
      return DeleteSignalMapOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/signal-maps/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTagsOutcome MediaLiveClient::DeleteTags(const DeleteTagsRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteTags);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTags", "Required field: ResourceArn, is not set");
    return DeleteTagsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTags", "Required field: TagKeys, is not set");
    return DeleteTagsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteTags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTags",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTagsOutcome>(
    [&]()-> DeleteTagsOutcome {
      return DeleteTagsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeAccountConfigurationOutcome MediaLiveClient::DescribeAccountConfiguration(const DescribeAccountConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeAccountConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeAccountConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeAccountConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeAccountConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeAccountConfigurationOutcome>(
    [&]()-> DescribeAccountConfigurationOutcome {
      return DescribeAccountConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/accountConfiguration");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeChannelOutcome MediaLiveClient::DescribeChannel(const DescribeChannelRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannel", "Required field: ChannelId, is not set");
    return DescribeChannelOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeChannel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeChannelOutcome>(
    [&]()-> DescribeChannelOutcome {
      return DescribeChannelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/channels/");
      resolvedEndpoint.AddPathSegment(request.GetChannelId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeChannelPlacementGroupOutcome MediaLiveClient::DescribeChannelPlacementGroup(const DescribeChannelPlacementGroupRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeChannelPlacementGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeChannelPlacementGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelPlacementGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelPlacementGroup", "Required field: ChannelPlacementGroupId, is not set");
    return DescribeChannelPlacementGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelPlacementGroupId]", false));
  }
  if (!request.ClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChannelPlacementGroup", "Required field: ClusterId, is not set");
    return DescribeChannelPlacementGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeChannelPlacementGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeChannelPlacementGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeChannelPlacementGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeChannelPlacementGroupOutcome>(
    [&]()-> DescribeChannelPlacementGroupOutcome {
      return DescribeChannelPlacementGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterId());
      resolvedEndpoint.AddPathSegments("/channelplacementgroups/");
      resolvedEndpoint.AddPathSegment(request.GetChannelPlacementGroupId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeClusterOutcome MediaLiveClient::DescribeCluster(const DescribeClusterRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeCluster);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCluster", "Required field: ClusterId, is not set");
    return DescribeClusterOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeCluster",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeClusterOutcome>(
    [&]()-> DescribeClusterOutcome {
      return DescribeClusterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeInputOutcome MediaLiveClient::DescribeInput(const DescribeInputRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeInput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInput", "Required field: InputId, is not set");
    return DescribeInputOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeInput",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeInputOutcome>(
    [&]()-> DescribeInputOutcome {
      return DescribeInputOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputs/");
      resolvedEndpoint.AddPathSegment(request.GetInputId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeInputDeviceOutcome MediaLiveClient::DescribeInputDevice(const DescribeInputDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeInputDevice);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInputDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInputDevice", "Required field: InputDeviceId, is not set");
    return DescribeInputDeviceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeInputDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeInputDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeInputDevice",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeInputDeviceOutcome>(
    [&]()-> DescribeInputDeviceOutcome {
      return DescribeInputDeviceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputDevices/");
      resolvedEndpoint.AddPathSegment(request.GetInputDeviceId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeInputDeviceThumbnailOutcome MediaLiveClient::DescribeInputDeviceThumbnail(const DescribeInputDeviceThumbnailRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeInputDeviceThumbnail);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInputDeviceThumbnail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInputDeviceThumbnail", "Required field: InputDeviceId, is not set");
    return DescribeInputDeviceThumbnailOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }
  if (!request.AcceptHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInputDeviceThumbnail", "Required field: Accept, is not set");
    return DescribeInputDeviceThumbnailOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Accept]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeInputDeviceThumbnail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeInputDeviceThumbnail, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeInputDeviceThumbnail",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeInputDeviceThumbnailOutcome>(
    [&]()-> DescribeInputDeviceThumbnailOutcome {
      return DescribeInputDeviceThumbnailOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputDevices/");
      resolvedEndpoint.AddPathSegment(request.GetInputDeviceId());
      resolvedEndpoint.AddPathSegments("/thumbnailData");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeInputSecurityGroupOutcome MediaLiveClient::DescribeInputSecurityGroup(const DescribeInputSecurityGroupRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeInputSecurityGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeInputSecurityGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputSecurityGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeInputSecurityGroup", "Required field: InputSecurityGroupId, is not set");
    return DescribeInputSecurityGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputSecurityGroupId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeInputSecurityGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeInputSecurityGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeInputSecurityGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeInputSecurityGroupOutcome>(
    [&]()-> DescribeInputSecurityGroupOutcome {
      return DescribeInputSecurityGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputSecurityGroups/");
      resolvedEndpoint.AddPathSegment(request.GetInputSecurityGroupId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeMultiplexOutcome MediaLiveClient::DescribeMultiplex(const DescribeMultiplexRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeMultiplex);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMultiplex, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MultiplexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeMultiplex", "Required field: MultiplexId, is not set");
    return DescribeMultiplexOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MultiplexId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeMultiplex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeMultiplex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeMultiplex",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeMultiplexOutcome>(
    [&]()-> DescribeMultiplexOutcome {
      return DescribeMultiplexOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/multiplexes/");
      resolvedEndpoint.AddPathSegment(request.GetMultiplexId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeMultiplexProgramOutcome MediaLiveClient::DescribeMultiplexProgram(const DescribeMultiplexProgramRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeMultiplexProgram);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMultiplexProgram, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MultiplexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeMultiplexProgram", "Required field: MultiplexId, is not set");
    return DescribeMultiplexProgramOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MultiplexId]", false));
  }
  if (!request.ProgramNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeMultiplexProgram", "Required field: ProgramName, is not set");
    return DescribeMultiplexProgramOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProgramName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeMultiplexProgram, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeMultiplexProgram, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeMultiplexProgram",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeMultiplexProgramOutcome>(
    [&]()-> DescribeMultiplexProgramOutcome {
      return DescribeMultiplexProgramOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/multiplexes/");
      resolvedEndpoint.AddPathSegment(request.GetMultiplexId());
      resolvedEndpoint.AddPathSegments("/programs/");
      resolvedEndpoint.AddPathSegment(request.GetProgramName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeNetworkOutcome MediaLiveClient::DescribeNetwork(const DescribeNetworkRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeNetwork);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeNetwork", "Required field: NetworkId, is not set");
    return DescribeNetworkOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeNetwork, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeNetwork, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeNetwork",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeNetworkOutcome>(
    [&]()-> DescribeNetworkOutcome {
      return DescribeNetworkOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/networks/");
      resolvedEndpoint.AddPathSegment(request.GetNetworkId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeNodeOutcome MediaLiveClient::DescribeNode(const DescribeNodeRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeNode);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeNode", "Required field: ClusterId, is not set");
    return DescribeNodeOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterId]", false));
  }
  if (!request.NodeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeNode", "Required field: NodeId, is not set");
    return DescribeNodeOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NodeId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeNode",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeNodeOutcome>(
    [&]()-> DescribeNodeOutcome {
      return DescribeNodeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterId());
      resolvedEndpoint.AddPathSegments("/nodes/");
      resolvedEndpoint.AddPathSegment(request.GetNodeId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeOfferingOutcome MediaLiveClient::DescribeOffering(const DescribeOfferingRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeOffering);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.OfferingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeOffering", "Required field: OfferingId, is not set");
    return DescribeOfferingOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OfferingId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeOffering, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeOffering, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeOffering",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeOfferingOutcome>(
    [&]()-> DescribeOfferingOutcome {
      return DescribeOfferingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/offerings/");
      resolvedEndpoint.AddPathSegment(request.GetOfferingId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeReservationOutcome MediaLiveClient::DescribeReservation(const DescribeReservationRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeReservation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReservationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeReservation", "Required field: ReservationId, is not set");
    return DescribeReservationOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReservationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeReservation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeReservation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeReservation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeReservationOutcome>(
    [&]()-> DescribeReservationOutcome {
      return DescribeReservationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/reservations/");
      resolvedEndpoint.AddPathSegment(request.GetReservationId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeScheduleOutcome MediaLiveClient::DescribeSchedule(const DescribeScheduleRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeSchedule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeSchedule", "Required field: ChannelId, is not set");
    return DescribeScheduleOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeSchedule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeSchedule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeSchedule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeScheduleOutcome>(
    [&]()-> DescribeScheduleOutcome {
      return DescribeScheduleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/channels/");
      resolvedEndpoint.AddPathSegment(request.GetChannelId());
      resolvedEndpoint.AddPathSegments("/schedule");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeThumbnailsOutcome MediaLiveClient::DescribeThumbnails(const DescribeThumbnailsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeThumbnails);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeThumbnails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThumbnails", "Required field: ChannelId, is not set");
    return DescribeThumbnailsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  if (!request.PipelineIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThumbnails", "Required field: PipelineId, is not set");
    return DescribeThumbnailsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PipelineId]", false));
  }
  if (!request.ThumbnailTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThumbnails", "Required field: ThumbnailType, is not set");
    return DescribeThumbnailsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThumbnailType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeThumbnails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeThumbnails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeThumbnails",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeThumbnailsOutcome>(
    [&]()-> DescribeThumbnailsOutcome {
      return DescribeThumbnailsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/channels/");
      resolvedEndpoint.AddPathSegment(request.GetChannelId());
      resolvedEndpoint.AddPathSegments("/thumbnails");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCloudWatchAlarmTemplateOutcome MediaLiveClient::GetCloudWatchAlarmTemplate(const GetCloudWatchAlarmTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(GetCloudWatchAlarmTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCloudWatchAlarmTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCloudWatchAlarmTemplate", "Required field: Identifier, is not set");
    return GetCloudWatchAlarmTemplateOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetCloudWatchAlarmTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCloudWatchAlarmTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCloudWatchAlarmTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCloudWatchAlarmTemplateOutcome>(
    [&]()-> GetCloudWatchAlarmTemplateOutcome {
      return GetCloudWatchAlarmTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/cloudwatch-alarm-templates/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetCloudWatchAlarmTemplateGroupOutcome MediaLiveClient::GetCloudWatchAlarmTemplateGroup(const GetCloudWatchAlarmTemplateGroupRequest& request) const
{
  AWS_OPERATION_GUARD(GetCloudWatchAlarmTemplateGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCloudWatchAlarmTemplateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCloudWatchAlarmTemplateGroup", "Required field: Identifier, is not set");
    return GetCloudWatchAlarmTemplateGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetCloudWatchAlarmTemplateGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetCloudWatchAlarmTemplateGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetCloudWatchAlarmTemplateGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetCloudWatchAlarmTemplateGroupOutcome>(
    [&]()-> GetCloudWatchAlarmTemplateGroupOutcome {
      return GetCloudWatchAlarmTemplateGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/cloudwatch-alarm-template-groups/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEventBridgeRuleTemplateOutcome MediaLiveClient::GetEventBridgeRuleTemplate(const GetEventBridgeRuleTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(GetEventBridgeRuleTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEventBridgeRuleTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEventBridgeRuleTemplate", "Required field: Identifier, is not set");
    return GetEventBridgeRuleTemplateOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetEventBridgeRuleTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEventBridgeRuleTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEventBridgeRuleTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEventBridgeRuleTemplateOutcome>(
    [&]()-> GetEventBridgeRuleTemplateOutcome {
      return GetEventBridgeRuleTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/eventbridge-rule-templates/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEventBridgeRuleTemplateGroupOutcome MediaLiveClient::GetEventBridgeRuleTemplateGroup(const GetEventBridgeRuleTemplateGroupRequest& request) const
{
  AWS_OPERATION_GUARD(GetEventBridgeRuleTemplateGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEventBridgeRuleTemplateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEventBridgeRuleTemplateGroup", "Required field: Identifier, is not set");
    return GetEventBridgeRuleTemplateGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetEventBridgeRuleTemplateGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetEventBridgeRuleTemplateGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetEventBridgeRuleTemplateGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetEventBridgeRuleTemplateGroupOutcome>(
    [&]()-> GetEventBridgeRuleTemplateGroupOutcome {
      return GetEventBridgeRuleTemplateGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/eventbridge-rule-template-groups/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSignalMapOutcome MediaLiveClient::GetSignalMap(const GetSignalMapRequest& request) const
{
  AWS_OPERATION_GUARD(GetSignalMap);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSignalMap, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSignalMap", "Required field: Identifier, is not set");
    return GetSignalMapOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSignalMap, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSignalMap, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSignalMap",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSignalMapOutcome>(
    [&]()-> GetSignalMapOutcome {
      return GetSignalMapOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/signal-maps/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListChannelPlacementGroupsOutcome MediaLiveClient::ListChannelPlacementGroups(const ListChannelPlacementGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListChannelPlacementGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChannelPlacementGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannelPlacementGroups", "Required field: ClusterId, is not set");
    return ListChannelPlacementGroupsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListChannelPlacementGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListChannelPlacementGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListChannelPlacementGroups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListChannelPlacementGroupsOutcome>(
    [&]()-> ListChannelPlacementGroupsOutcome {
      return ListChannelPlacementGroupsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterId());
      resolvedEndpoint.AddPathSegments("/channelplacementgroups");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListChannelsOutcome MediaLiveClient::ListChannels(const ListChannelsRequest& request) const
{
  AWS_OPERATION_GUARD(ListChannels);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChannels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListChannels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListChannels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListChannels",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListChannelsOutcome>(
    [&]()-> ListChannelsOutcome {
      return ListChannelsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/channels");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCloudWatchAlarmTemplateGroupsOutcome MediaLiveClient::ListCloudWatchAlarmTemplateGroups(const ListCloudWatchAlarmTemplateGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCloudWatchAlarmTemplateGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCloudWatchAlarmTemplateGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCloudWatchAlarmTemplateGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCloudWatchAlarmTemplateGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCloudWatchAlarmTemplateGroups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCloudWatchAlarmTemplateGroupsOutcome>(
    [&]()-> ListCloudWatchAlarmTemplateGroupsOutcome {
      return ListCloudWatchAlarmTemplateGroupsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/cloudwatch-alarm-template-groups");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCloudWatchAlarmTemplatesOutcome MediaLiveClient::ListCloudWatchAlarmTemplates(const ListCloudWatchAlarmTemplatesRequest& request) const
{
  AWS_OPERATION_GUARD(ListCloudWatchAlarmTemplates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCloudWatchAlarmTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCloudWatchAlarmTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCloudWatchAlarmTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCloudWatchAlarmTemplates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCloudWatchAlarmTemplatesOutcome>(
    [&]()-> ListCloudWatchAlarmTemplatesOutcome {
      return ListCloudWatchAlarmTemplatesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/cloudwatch-alarm-templates");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListClustersOutcome MediaLiveClient::ListClusters(const ListClustersRequest& request) const
{
  AWS_OPERATION_GUARD(ListClusters);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListClusters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListClusters, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListClusters, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListClusters",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListClustersOutcome>(
    [&]()-> ListClustersOutcome {
      return ListClustersOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/clusters");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEventBridgeRuleTemplateGroupsOutcome MediaLiveClient::ListEventBridgeRuleTemplateGroups(const ListEventBridgeRuleTemplateGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListEventBridgeRuleTemplateGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEventBridgeRuleTemplateGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListEventBridgeRuleTemplateGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEventBridgeRuleTemplateGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEventBridgeRuleTemplateGroups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEventBridgeRuleTemplateGroupsOutcome>(
    [&]()-> ListEventBridgeRuleTemplateGroupsOutcome {
      return ListEventBridgeRuleTemplateGroupsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/eventbridge-rule-template-groups");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEventBridgeRuleTemplatesOutcome MediaLiveClient::ListEventBridgeRuleTemplates(const ListEventBridgeRuleTemplatesRequest& request) const
{
  AWS_OPERATION_GUARD(ListEventBridgeRuleTemplates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEventBridgeRuleTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListEventBridgeRuleTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEventBridgeRuleTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEventBridgeRuleTemplates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEventBridgeRuleTemplatesOutcome>(
    [&]()-> ListEventBridgeRuleTemplatesOutcome {
      return ListEventBridgeRuleTemplatesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/eventbridge-rule-templates");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListInputDeviceTransfersOutcome MediaLiveClient::ListInputDeviceTransfers(const ListInputDeviceTransfersRequest& request) const
{
  AWS_OPERATION_GUARD(ListInputDeviceTransfers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInputDeviceTransfers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TransferTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListInputDeviceTransfers", "Required field: TransferType, is not set");
    return ListInputDeviceTransfersOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TransferType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListInputDeviceTransfers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListInputDeviceTransfers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListInputDeviceTransfers",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListInputDeviceTransfersOutcome>(
    [&]()-> ListInputDeviceTransfersOutcome {
      return ListInputDeviceTransfersOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputDeviceTransfers");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListInputDevicesOutcome MediaLiveClient::ListInputDevices(const ListInputDevicesRequest& request) const
{
  AWS_OPERATION_GUARD(ListInputDevices);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInputDevices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListInputDevices, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListInputDevices, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListInputDevices",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListInputDevicesOutcome>(
    [&]()-> ListInputDevicesOutcome {
      return ListInputDevicesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputDevices");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListInputSecurityGroupsOutcome MediaLiveClient::ListInputSecurityGroups(const ListInputSecurityGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListInputSecurityGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInputSecurityGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListInputSecurityGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListInputSecurityGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListInputSecurityGroups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListInputSecurityGroupsOutcome>(
    [&]()-> ListInputSecurityGroupsOutcome {
      return ListInputSecurityGroupsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputSecurityGroups");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListInputsOutcome MediaLiveClient::ListInputs(const ListInputsRequest& request) const
{
  AWS_OPERATION_GUARD(ListInputs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInputs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListInputs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListInputs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListInputs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListInputsOutcome>(
    [&]()-> ListInputsOutcome {
      return ListInputsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMultiplexProgramsOutcome MediaLiveClient::ListMultiplexPrograms(const ListMultiplexProgramsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMultiplexPrograms);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMultiplexPrograms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MultiplexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMultiplexPrograms", "Required field: MultiplexId, is not set");
    return ListMultiplexProgramsOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MultiplexId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMultiplexPrograms, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMultiplexPrograms, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMultiplexPrograms",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMultiplexProgramsOutcome>(
    [&]()-> ListMultiplexProgramsOutcome {
      return ListMultiplexProgramsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/multiplexes/");
      resolvedEndpoint.AddPathSegment(request.GetMultiplexId());
      resolvedEndpoint.AddPathSegments("/programs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMultiplexesOutcome MediaLiveClient::ListMultiplexes(const ListMultiplexesRequest& request) const
{
  AWS_OPERATION_GUARD(ListMultiplexes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMultiplexes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMultiplexes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMultiplexes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMultiplexes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMultiplexesOutcome>(
    [&]()-> ListMultiplexesOutcome {
      return ListMultiplexesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/multiplexes");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListNetworksOutcome MediaLiveClient::ListNetworks(const ListNetworksRequest& request) const
{
  AWS_OPERATION_GUARD(ListNetworks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNetworks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListNetworks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListNetworks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListNetworks",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListNetworksOutcome>(
    [&]()-> ListNetworksOutcome {
      return ListNetworksOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/networks");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListNodesOutcome MediaLiveClient::ListNodes(const ListNodesRequest& request) const
{
  AWS_OPERATION_GUARD(ListNodes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNodes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListNodes", "Required field: ClusterId, is not set");
    return ListNodesOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListNodes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListNodes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListNodes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListNodesOutcome>(
    [&]()-> ListNodesOutcome {
      return ListNodesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterId());
      resolvedEndpoint.AddPathSegments("/nodes");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListOfferingsOutcome MediaLiveClient::ListOfferings(const ListOfferingsRequest& request) const
{
  AWS_OPERATION_GUARD(ListOfferings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListOfferings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListOfferings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListOfferings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListOfferingsOutcome>(
    [&]()-> ListOfferingsOutcome {
      return ListOfferingsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/offerings");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListReservationsOutcome MediaLiveClient::ListReservations(const ListReservationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListReservations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListReservations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListReservations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListReservations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListReservations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListReservationsOutcome>(
    [&]()-> ListReservationsOutcome {
      return ListReservationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/reservations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSignalMapsOutcome MediaLiveClient::ListSignalMaps(const ListSignalMapsRequest& request) const
{
  AWS_OPERATION_GUARD(ListSignalMaps);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSignalMaps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListSignalMaps, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListSignalMaps, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListSignalMaps",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListSignalMapsOutcome>(
    [&]()-> ListSignalMapsOutcome {
      return ListSignalMapsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/signal-maps");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome MediaLiveClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      return ListTagsForResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListVersionsOutcome MediaLiveClient::ListVersions(const ListVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListVersionsOutcome>(
    [&]()-> ListVersionsOutcome {
      return ListVersionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/versions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PurchaseOfferingOutcome MediaLiveClient::PurchaseOffering(const PurchaseOfferingRequest& request) const
{
  AWS_OPERATION_GUARD(PurchaseOffering);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PurchaseOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.OfferingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PurchaseOffering", "Required field: OfferingId, is not set");
    return PurchaseOfferingOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OfferingId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PurchaseOffering, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PurchaseOffering, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PurchaseOffering",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PurchaseOfferingOutcome>(
    [&]()-> PurchaseOfferingOutcome {
      return PurchaseOfferingOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/offerings/");
      resolvedEndpoint.AddPathSegment(request.GetOfferingId());
      resolvedEndpoint.AddPathSegments("/purchase");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RebootInputDeviceOutcome MediaLiveClient::RebootInputDevice(const RebootInputDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(RebootInputDevice);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RebootInputDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RebootInputDevice", "Required field: InputDeviceId, is not set");
    return RebootInputDeviceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RebootInputDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RebootInputDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RebootInputDevice",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RebootInputDeviceOutcome>(
    [&]()-> RebootInputDeviceOutcome {
      return RebootInputDeviceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputDevices/");
      resolvedEndpoint.AddPathSegment(request.GetInputDeviceId());
      resolvedEndpoint.AddPathSegments("/reboot");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RejectInputDeviceTransferOutcome MediaLiveClient::RejectInputDeviceTransfer(const RejectInputDeviceTransferRequest& request) const
{
  AWS_OPERATION_GUARD(RejectInputDeviceTransfer);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectInputDeviceTransfer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RejectInputDeviceTransfer", "Required field: InputDeviceId, is not set");
    return RejectInputDeviceTransferOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RejectInputDeviceTransfer, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RejectInputDeviceTransfer, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RejectInputDeviceTransfer",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RejectInputDeviceTransferOutcome>(
    [&]()-> RejectInputDeviceTransferOutcome {
      return RejectInputDeviceTransferOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputDevices/");
      resolvedEndpoint.AddPathSegment(request.GetInputDeviceId());
      resolvedEndpoint.AddPathSegments("/reject");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RestartChannelPipelinesOutcome MediaLiveClient::RestartChannelPipelines(const RestartChannelPipelinesRequest& request) const
{
  AWS_OPERATION_GUARD(RestartChannelPipelines);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestartChannelPipelines, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RestartChannelPipelines", "Required field: ChannelId, is not set");
    return RestartChannelPipelinesOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, RestartChannelPipelines, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RestartChannelPipelines, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RestartChannelPipelines",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RestartChannelPipelinesOutcome>(
    [&]()-> RestartChannelPipelinesOutcome {
      return RestartChannelPipelinesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/channels/");
      resolvedEndpoint.AddPathSegment(request.GetChannelId());
      resolvedEndpoint.AddPathSegments("/restartChannelPipelines");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartChannelOutcome MediaLiveClient::StartChannel(const StartChannelRequest& request) const
{
  AWS_OPERATION_GUARD(StartChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartChannel", "Required field: ChannelId, is not set");
    return StartChannelOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartChannel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartChannelOutcome>(
    [&]()-> StartChannelOutcome {
      return StartChannelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/channels/");
      resolvedEndpoint.AddPathSegment(request.GetChannelId());
      resolvedEndpoint.AddPathSegments("/start");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartDeleteMonitorDeploymentOutcome MediaLiveClient::StartDeleteMonitorDeployment(const StartDeleteMonitorDeploymentRequest& request) const
{
  AWS_OPERATION_GUARD(StartDeleteMonitorDeployment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartDeleteMonitorDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDeleteMonitorDeployment", "Required field: Identifier, is not set");
    return StartDeleteMonitorDeploymentOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartDeleteMonitorDeployment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartDeleteMonitorDeployment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartDeleteMonitorDeployment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartDeleteMonitorDeploymentOutcome>(
    [&]()-> StartDeleteMonitorDeploymentOutcome {
      return StartDeleteMonitorDeploymentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/signal-maps/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/monitor-deployment");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartInputDeviceOutcome MediaLiveClient::StartInputDevice(const StartInputDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(StartInputDevice);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartInputDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartInputDevice", "Required field: InputDeviceId, is not set");
    return StartInputDeviceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartInputDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartInputDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartInputDevice",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartInputDeviceOutcome>(
    [&]()-> StartInputDeviceOutcome {
      return StartInputDeviceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputDevices/");
      resolvedEndpoint.AddPathSegment(request.GetInputDeviceId());
      resolvedEndpoint.AddPathSegments("/start");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartInputDeviceMaintenanceWindowOutcome MediaLiveClient::StartInputDeviceMaintenanceWindow(const StartInputDeviceMaintenanceWindowRequest& request) const
{
  AWS_OPERATION_GUARD(StartInputDeviceMaintenanceWindow);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartInputDeviceMaintenanceWindow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartInputDeviceMaintenanceWindow", "Required field: InputDeviceId, is not set");
    return StartInputDeviceMaintenanceWindowOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartInputDeviceMaintenanceWindow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartInputDeviceMaintenanceWindow, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartInputDeviceMaintenanceWindow",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartInputDeviceMaintenanceWindowOutcome>(
    [&]()-> StartInputDeviceMaintenanceWindowOutcome {
      return StartInputDeviceMaintenanceWindowOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputDevices/");
      resolvedEndpoint.AddPathSegment(request.GetInputDeviceId());
      resolvedEndpoint.AddPathSegments("/startInputDeviceMaintenanceWindow");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartMonitorDeploymentOutcome MediaLiveClient::StartMonitorDeployment(const StartMonitorDeploymentRequest& request) const
{
  AWS_OPERATION_GUARD(StartMonitorDeployment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartMonitorDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartMonitorDeployment", "Required field: Identifier, is not set");
    return StartMonitorDeploymentOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartMonitorDeployment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartMonitorDeployment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartMonitorDeployment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartMonitorDeploymentOutcome>(
    [&]()-> StartMonitorDeploymentOutcome {
      return StartMonitorDeploymentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/signal-maps/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      resolvedEndpoint.AddPathSegments("/monitor-deployment");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartMultiplexOutcome MediaLiveClient::StartMultiplex(const StartMultiplexRequest& request) const
{
  AWS_OPERATION_GUARD(StartMultiplex);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartMultiplex, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MultiplexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartMultiplex", "Required field: MultiplexId, is not set");
    return StartMultiplexOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MultiplexId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartMultiplex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartMultiplex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartMultiplex",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartMultiplexOutcome>(
    [&]()-> StartMultiplexOutcome {
      return StartMultiplexOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/multiplexes/");
      resolvedEndpoint.AddPathSegment(request.GetMultiplexId());
      resolvedEndpoint.AddPathSegments("/start");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartUpdateSignalMapOutcome MediaLiveClient::StartUpdateSignalMap(const StartUpdateSignalMapRequest& request) const
{
  AWS_OPERATION_GUARD(StartUpdateSignalMap);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartUpdateSignalMap, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartUpdateSignalMap", "Required field: Identifier, is not set");
    return StartUpdateSignalMapOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartUpdateSignalMap, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartUpdateSignalMap, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartUpdateSignalMap",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartUpdateSignalMapOutcome>(
    [&]()-> StartUpdateSignalMapOutcome {
      return StartUpdateSignalMapOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/signal-maps/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopChannelOutcome MediaLiveClient::StopChannel(const StopChannelRequest& request) const
{
  AWS_OPERATION_GUARD(StopChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopChannel", "Required field: ChannelId, is not set");
    return StopChannelOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StopChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopChannel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopChannelOutcome>(
    [&]()-> StopChannelOutcome {
      return StopChannelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/channels/");
      resolvedEndpoint.AddPathSegment(request.GetChannelId());
      resolvedEndpoint.AddPathSegments("/stop");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopInputDeviceOutcome MediaLiveClient::StopInputDevice(const StopInputDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(StopInputDevice);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopInputDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopInputDevice", "Required field: InputDeviceId, is not set");
    return StopInputDeviceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StopInputDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopInputDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopInputDevice",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopInputDeviceOutcome>(
    [&]()-> StopInputDeviceOutcome {
      return StopInputDeviceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputDevices/");
      resolvedEndpoint.AddPathSegment(request.GetInputDeviceId());
      resolvedEndpoint.AddPathSegments("/stop");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopMultiplexOutcome MediaLiveClient::StopMultiplex(const StopMultiplexRequest& request) const
{
  AWS_OPERATION_GUARD(StopMultiplex);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopMultiplex, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MultiplexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopMultiplex", "Required field: MultiplexId, is not set");
    return StopMultiplexOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MultiplexId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StopMultiplex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopMultiplex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopMultiplex",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopMultiplexOutcome>(
    [&]()-> StopMultiplexOutcome {
      return StopMultiplexOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/multiplexes/");
      resolvedEndpoint.AddPathSegment(request.GetMultiplexId());
      resolvedEndpoint.AddPathSegments("/stop");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TransferInputDeviceOutcome MediaLiveClient::TransferInputDevice(const TransferInputDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(TransferInputDevice);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TransferInputDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TransferInputDevice", "Required field: InputDeviceId, is not set");
    return TransferInputDeviceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TransferInputDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TransferInputDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TransferInputDevice",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TransferInputDeviceOutcome>(
    [&]()-> TransferInputDeviceOutcome {
      return TransferInputDeviceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputDevices/");
      resolvedEndpoint.AddPathSegment(request.GetInputDeviceId());
      resolvedEndpoint.AddPathSegments("/transfer");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAccountConfigurationOutcome MediaLiveClient::UpdateAccountConfiguration(const UpdateAccountConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAccountConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAccountConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateAccountConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAccountConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAccountConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAccountConfigurationOutcome>(
    [&]()-> UpdateAccountConfigurationOutcome {
      return UpdateAccountConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/accountConfiguration");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateChannelOutcome MediaLiveClient::UpdateChannel(const UpdateChannelRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelId, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateChannel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateChannelOutcome>(
    [&]()-> UpdateChannelOutcome {
      return UpdateChannelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/channels/");
      resolvedEndpoint.AddPathSegment(request.GetChannelId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateChannelClassOutcome MediaLiveClient::UpdateChannelClass(const UpdateChannelClassRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateChannelClass);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateChannelClass, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannelClass", "Required field: ChannelId, is not set");
    return UpdateChannelClassOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateChannelClass, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateChannelClass, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateChannelClass",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateChannelClassOutcome>(
    [&]()-> UpdateChannelClassOutcome {
      return UpdateChannelClassOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/channels/");
      resolvedEndpoint.AddPathSegment(request.GetChannelId());
      resolvedEndpoint.AddPathSegments("/channelClass");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateChannelPlacementGroupOutcome MediaLiveClient::UpdateChannelPlacementGroup(const UpdateChannelPlacementGroupRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateChannelPlacementGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateChannelPlacementGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelPlacementGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannelPlacementGroup", "Required field: ChannelPlacementGroupId, is not set");
    return UpdateChannelPlacementGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelPlacementGroupId]", false));
  }
  if (!request.ClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannelPlacementGroup", "Required field: ClusterId, is not set");
    return UpdateChannelPlacementGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateChannelPlacementGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateChannelPlacementGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateChannelPlacementGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateChannelPlacementGroupOutcome>(
    [&]()-> UpdateChannelPlacementGroupOutcome {
      return UpdateChannelPlacementGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterId());
      resolvedEndpoint.AddPathSegments("/channelplacementgroups/");
      resolvedEndpoint.AddPathSegment(request.GetChannelPlacementGroupId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateCloudWatchAlarmTemplateOutcome MediaLiveClient::UpdateCloudWatchAlarmTemplate(const UpdateCloudWatchAlarmTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateCloudWatchAlarmTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCloudWatchAlarmTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCloudWatchAlarmTemplate", "Required field: Identifier, is not set");
    return UpdateCloudWatchAlarmTemplateOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateCloudWatchAlarmTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateCloudWatchAlarmTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateCloudWatchAlarmTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateCloudWatchAlarmTemplateOutcome>(
    [&]()-> UpdateCloudWatchAlarmTemplateOutcome {
      return UpdateCloudWatchAlarmTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/cloudwatch-alarm-templates/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateCloudWatchAlarmTemplateGroupOutcome MediaLiveClient::UpdateCloudWatchAlarmTemplateGroup(const UpdateCloudWatchAlarmTemplateGroupRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateCloudWatchAlarmTemplateGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCloudWatchAlarmTemplateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCloudWatchAlarmTemplateGroup", "Required field: Identifier, is not set");
    return UpdateCloudWatchAlarmTemplateGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateCloudWatchAlarmTemplateGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateCloudWatchAlarmTemplateGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateCloudWatchAlarmTemplateGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateCloudWatchAlarmTemplateGroupOutcome>(
    [&]()-> UpdateCloudWatchAlarmTemplateGroupOutcome {
      return UpdateCloudWatchAlarmTemplateGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/cloudwatch-alarm-template-groups/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateClusterOutcome MediaLiveClient::UpdateCluster(const UpdateClusterRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateCluster);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCluster", "Required field: ClusterId, is not set");
    return UpdateClusterOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateCluster, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateCluster",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateClusterOutcome>(
    [&]()-> UpdateClusterOutcome {
      return UpdateClusterOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateEventBridgeRuleTemplateOutcome MediaLiveClient::UpdateEventBridgeRuleTemplate(const UpdateEventBridgeRuleTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateEventBridgeRuleTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEventBridgeRuleTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEventBridgeRuleTemplate", "Required field: Identifier, is not set");
    return UpdateEventBridgeRuleTemplateOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateEventBridgeRuleTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateEventBridgeRuleTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateEventBridgeRuleTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateEventBridgeRuleTemplateOutcome>(
    [&]()-> UpdateEventBridgeRuleTemplateOutcome {
      return UpdateEventBridgeRuleTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/eventbridge-rule-templates/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateEventBridgeRuleTemplateGroupOutcome MediaLiveClient::UpdateEventBridgeRuleTemplateGroup(const UpdateEventBridgeRuleTemplateGroupRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateEventBridgeRuleTemplateGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEventBridgeRuleTemplateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEventBridgeRuleTemplateGroup", "Required field: Identifier, is not set");
    return UpdateEventBridgeRuleTemplateGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateEventBridgeRuleTemplateGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateEventBridgeRuleTemplateGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateEventBridgeRuleTemplateGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateEventBridgeRuleTemplateGroupOutcome>(
    [&]()-> UpdateEventBridgeRuleTemplateGroupOutcome {
      return UpdateEventBridgeRuleTemplateGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/eventbridge-rule-template-groups/");
      resolvedEndpoint.AddPathSegment(request.GetIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateInputOutcome MediaLiveClient::UpdateInput(const UpdateInputRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateInput);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateInput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateInput", "Required field: InputId, is not set");
    return UpdateInputOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateInput, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateInput",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateInputOutcome>(
    [&]()-> UpdateInputOutcome {
      return UpdateInputOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputs/");
      resolvedEndpoint.AddPathSegment(request.GetInputId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateInputDeviceOutcome MediaLiveClient::UpdateInputDevice(const UpdateInputDeviceRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateInputDevice);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateInputDevice, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputDeviceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateInputDevice", "Required field: InputDeviceId, is not set");
    return UpdateInputDeviceOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputDeviceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateInputDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateInputDevice, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateInputDevice",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateInputDeviceOutcome>(
    [&]()-> UpdateInputDeviceOutcome {
      return UpdateInputDeviceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputDevices/");
      resolvedEndpoint.AddPathSegment(request.GetInputDeviceId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateInputSecurityGroupOutcome MediaLiveClient::UpdateInputSecurityGroup(const UpdateInputSecurityGroupRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateInputSecurityGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateInputSecurityGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.InputSecurityGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateInputSecurityGroup", "Required field: InputSecurityGroupId, is not set");
    return UpdateInputSecurityGroupOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputSecurityGroupId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateInputSecurityGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateInputSecurityGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateInputSecurityGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateInputSecurityGroupOutcome>(
    [&]()-> UpdateInputSecurityGroupOutcome {
      return UpdateInputSecurityGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/inputSecurityGroups/");
      resolvedEndpoint.AddPathSegment(request.GetInputSecurityGroupId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateMultiplexOutcome MediaLiveClient::UpdateMultiplex(const UpdateMultiplexRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateMultiplex);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMultiplex, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MultiplexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMultiplex", "Required field: MultiplexId, is not set");
    return UpdateMultiplexOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MultiplexId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateMultiplex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateMultiplex, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateMultiplex",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateMultiplexOutcome>(
    [&]()-> UpdateMultiplexOutcome {
      return UpdateMultiplexOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/multiplexes/");
      resolvedEndpoint.AddPathSegment(request.GetMultiplexId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateMultiplexProgramOutcome MediaLiveClient::UpdateMultiplexProgram(const UpdateMultiplexProgramRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateMultiplexProgram);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMultiplexProgram, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MultiplexIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMultiplexProgram", "Required field: MultiplexId, is not set");
    return UpdateMultiplexProgramOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MultiplexId]", false));
  }
  if (!request.ProgramNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMultiplexProgram", "Required field: ProgramName, is not set");
    return UpdateMultiplexProgramOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProgramName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateMultiplexProgram, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateMultiplexProgram, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateMultiplexProgram",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateMultiplexProgramOutcome>(
    [&]()-> UpdateMultiplexProgramOutcome {
      return UpdateMultiplexProgramOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/multiplexes/");
      resolvedEndpoint.AddPathSegment(request.GetMultiplexId());
      resolvedEndpoint.AddPathSegments("/programs/");
      resolvedEndpoint.AddPathSegment(request.GetProgramName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateNetworkOutcome MediaLiveClient::UpdateNetwork(const UpdateNetworkRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateNetwork);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateNetwork, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNetwork", "Required field: NetworkId, is not set");
    return UpdateNetworkOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateNetwork, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateNetwork, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateNetwork",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateNetworkOutcome>(
    [&]()-> UpdateNetworkOutcome {
      return UpdateNetworkOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/networks/");
      resolvedEndpoint.AddPathSegment(request.GetNetworkId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateNodeOutcome MediaLiveClient::UpdateNode(const UpdateNodeRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateNode);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateNode, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNode", "Required field: ClusterId, is not set");
    return UpdateNodeOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterId]", false));
  }
  if (!request.NodeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNode", "Required field: NodeId, is not set");
    return UpdateNodeOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NodeId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateNode, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateNode",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateNodeOutcome>(
    [&]()-> UpdateNodeOutcome {
      return UpdateNodeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterId());
      resolvedEndpoint.AddPathSegments("/nodes/");
      resolvedEndpoint.AddPathSegment(request.GetNodeId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateNodeStateOutcome MediaLiveClient::UpdateNodeState(const UpdateNodeStateRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateNodeState);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateNodeState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClusterIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNodeState", "Required field: ClusterId, is not set");
    return UpdateNodeStateOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClusterId]", false));
  }
  if (!request.NodeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNodeState", "Required field: NodeId, is not set");
    return UpdateNodeStateOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NodeId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateNodeState, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateNodeState, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateNodeState",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateNodeStateOutcome>(
    [&]()-> UpdateNodeStateOutcome {
      return UpdateNodeStateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/clusters/");
      resolvedEndpoint.AddPathSegment(request.GetClusterId());
      resolvedEndpoint.AddPathSegments("/nodes/");
      resolvedEndpoint.AddPathSegment(request.GetNodeId());
      resolvedEndpoint.AddPathSegments("/state");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateReservationOutcome MediaLiveClient::UpdateReservation(const UpdateReservationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateReservation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReservationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateReservation", "Required field: ReservationId, is not set");
    return UpdateReservationOutcome(Aws::Client::AWSError<MediaLiveErrors>(MediaLiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReservationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateReservation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateReservation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateReservation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateReservationOutcome>(
    [&]()-> UpdateReservationOutcome {
      return UpdateReservationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/prod/reservations/");
      resolvedEndpoint.AddPathSegment(request.GetReservationId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


