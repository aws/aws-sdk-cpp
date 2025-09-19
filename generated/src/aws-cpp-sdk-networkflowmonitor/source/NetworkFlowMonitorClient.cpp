/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/networkflowmonitor/NetworkFlowMonitorClient.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorErrorMarshaller.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorEndpointProvider.h>
#include <aws/networkflowmonitor/model/CreateMonitorRequest.h>
#include <aws/networkflowmonitor/model/CreateScopeRequest.h>
#include <aws/networkflowmonitor/model/DeleteMonitorRequest.h>
#include <aws/networkflowmonitor/model/DeleteScopeRequest.h>
#include <aws/networkflowmonitor/model/GetMonitorRequest.h>
#include <aws/networkflowmonitor/model/GetQueryResultsMonitorTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/GetQueryResultsWorkloadInsightsTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/GetQueryResultsWorkloadInsightsTopContributorsDataRequest.h>
#include <aws/networkflowmonitor/model/GetQueryStatusMonitorTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/GetQueryStatusWorkloadInsightsTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/GetQueryStatusWorkloadInsightsTopContributorsDataRequest.h>
#include <aws/networkflowmonitor/model/GetScopeRequest.h>
#include <aws/networkflowmonitor/model/ListMonitorsRequest.h>
#include <aws/networkflowmonitor/model/ListScopesRequest.h>
#include <aws/networkflowmonitor/model/ListTagsForResourceRequest.h>
#include <aws/networkflowmonitor/model/StartQueryMonitorTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/StartQueryWorkloadInsightsTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/StartQueryWorkloadInsightsTopContributorsDataRequest.h>
#include <aws/networkflowmonitor/model/StopQueryMonitorTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/StopQueryWorkloadInsightsTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/StopQueryWorkloadInsightsTopContributorsDataRequest.h>
#include <aws/networkflowmonitor/model/TagResourceRequest.h>
#include <aws/networkflowmonitor/model/UntagResourceRequest.h>
#include <aws/networkflowmonitor/model/UpdateMonitorRequest.h>
#include <aws/networkflowmonitor/model/UpdateScopeRequest.h>

#include <smithy/tracing/TracingUtils.h>


using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::NetworkFlowMonitor;
using namespace Aws::NetworkFlowMonitor::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace NetworkFlowMonitor
  {
    const char SERVICE_NAME[] = "networkflowmonitor";
    const char ALLOCATION_TAG[] = "NetworkFlowMonitorClient";
  }
}
const char* NetworkFlowMonitorClient::GetServiceName() {return SERVICE_NAME;}
const char* NetworkFlowMonitorClient::GetAllocationTag() {return ALLOCATION_TAG;}

NetworkFlowMonitorClient::NetworkFlowMonitorClient(const NetworkFlowMonitor::NetworkFlowMonitorClientConfiguration& clientConfiguration,
                                                   std::shared_ptr<NetworkFlowMonitorEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<NetworkFlowMonitorErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NetworkFlowMonitorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

NetworkFlowMonitorClient::NetworkFlowMonitorClient(const AWSCredentials& credentials,
                                                   std::shared_ptr<NetworkFlowMonitorEndpointProviderBase> endpointProvider,
                                                   const NetworkFlowMonitor::NetworkFlowMonitorClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<NetworkFlowMonitorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NetworkFlowMonitorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

NetworkFlowMonitorClient::NetworkFlowMonitorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   std::shared_ptr<NetworkFlowMonitorEndpointProviderBase> endpointProvider,
                                                   const NetworkFlowMonitor::NetworkFlowMonitorClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<NetworkFlowMonitorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NetworkFlowMonitorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  NetworkFlowMonitorClient::NetworkFlowMonitorClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<NetworkFlowMonitorErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_endpointProvider(Aws::MakeShared<NetworkFlowMonitorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

NetworkFlowMonitorClient::NetworkFlowMonitorClient(const AWSCredentials& credentials,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<NetworkFlowMonitorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(Aws::MakeShared<NetworkFlowMonitorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

NetworkFlowMonitorClient::NetworkFlowMonitorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<NetworkFlowMonitorErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(Aws::MakeShared<NetworkFlowMonitorEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
NetworkFlowMonitorClient::~NetworkFlowMonitorClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<NetworkFlowMonitorEndpointProviderBase>& NetworkFlowMonitorClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void NetworkFlowMonitorClient::init(const NetworkFlowMonitor::NetworkFlowMonitorClientConfiguration& config)
{
  AWSClient::SetServiceClientName("NetworkFlowMonitor");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void NetworkFlowMonitorClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateMonitorOutcome NetworkFlowMonitorClient::CreateMonitor(const CreateMonitorRequest& request) const
{
  AWS_OPERATION_GUARD(CreateMonitor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMonitor",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMonitorOutcome>(
    [&]()-> CreateMonitorOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/monitors");
      return CreateMonitorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateScopeOutcome NetworkFlowMonitorClient::CreateScope(const CreateScopeRequest& request) const
{
  AWS_OPERATION_GUARD(CreateScope);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, CreateScope, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateScope, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateScope",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateScopeOutcome>(
    [&]()-> CreateScopeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/scopes");
      return CreateScopeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteMonitorOutcome NetworkFlowMonitorClient::DeleteMonitor(const DeleteMonitorRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteMonitor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MonitorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMonitor", "Required field: MonitorName, is not set");
    return DeleteMonitorOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MonitorName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMonitor",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMonitorOutcome>(
    [&]()-> DeleteMonitorOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/monitors/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
      return DeleteMonitorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteScopeOutcome NetworkFlowMonitorClient::DeleteScope(const DeleteScopeRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteScope);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ScopeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteScope", "Required field: ScopeId, is not set");
    return DeleteScopeOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DeleteScope, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteScope, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteScope",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteScopeOutcome>(
    [&]()-> DeleteScopeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/scopes/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
      return DeleteScopeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetMonitorOutcome NetworkFlowMonitorClient::GetMonitor(const GetMonitorRequest& request) const
{
  AWS_OPERATION_GUARD(GetMonitor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MonitorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMonitor", "Required field: MonitorName, is not set");
    return GetMonitorOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MonitorName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMonitor",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMonitorOutcome>(
    [&]()-> GetMonitorOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/monitors/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
      return GetMonitorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetQueryResultsMonitorTopContributorsOutcome NetworkFlowMonitorClient::GetQueryResultsMonitorTopContributors(const GetQueryResultsMonitorTopContributorsRequest& request) const
{
  AWS_OPERATION_GUARD(GetQueryResultsMonitorTopContributors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetQueryResultsMonitorTopContributors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MonitorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueryResultsMonitorTopContributors", "Required field: MonitorName, is not set");
    return GetQueryResultsMonitorTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MonitorName]", false));
  }
  if (!request.QueryIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueryResultsMonitorTopContributors", "Required field: QueryId, is not set");
    return GetQueryResultsMonitorTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueryId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetQueryResultsMonitorTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetQueryResultsMonitorTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetQueryResultsMonitorTopContributors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetQueryResultsMonitorTopContributorsOutcome>(
    [&]()-> GetQueryResultsMonitorTopContributorsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetQueryResultsMonitorTopContributors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/monitors/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsQueries/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/results");
      return GetQueryResultsMonitorTopContributorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetQueryResultsWorkloadInsightsTopContributorsOutcome NetworkFlowMonitorClient::GetQueryResultsWorkloadInsightsTopContributors(const GetQueryResultsWorkloadInsightsTopContributorsRequest& request) const
{
  AWS_OPERATION_GUARD(GetQueryResultsWorkloadInsightsTopContributors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetQueryResultsWorkloadInsightsTopContributors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ScopeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueryResultsWorkloadInsightsTopContributors", "Required field: ScopeId, is not set");
    return GetQueryResultsWorkloadInsightsTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeId]", false));
  }
  if (!request.QueryIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueryResultsWorkloadInsightsTopContributors", "Required field: QueryId, is not set");
    return GetQueryResultsWorkloadInsightsTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueryId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetQueryResultsWorkloadInsightsTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetQueryResultsWorkloadInsightsTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetQueryResultsWorkloadInsightsTopContributors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetQueryResultsWorkloadInsightsTopContributorsOutcome>(
    [&]()-> GetQueryResultsWorkloadInsightsTopContributorsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetQueryResultsWorkloadInsightsTopContributors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/workloadInsights/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsQueries/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/results");
      return GetQueryResultsWorkloadInsightsTopContributorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetQueryResultsWorkloadInsightsTopContributorsDataOutcome NetworkFlowMonitorClient::GetQueryResultsWorkloadInsightsTopContributorsData(const GetQueryResultsWorkloadInsightsTopContributorsDataRequest& request) const
{
  AWS_OPERATION_GUARD(GetQueryResultsWorkloadInsightsTopContributorsData);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetQueryResultsWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ScopeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueryResultsWorkloadInsightsTopContributorsData", "Required field: ScopeId, is not set");
    return GetQueryResultsWorkloadInsightsTopContributorsDataOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeId]", false));
  }
  if (!request.QueryIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueryResultsWorkloadInsightsTopContributorsData", "Required field: QueryId, is not set");
    return GetQueryResultsWorkloadInsightsTopContributorsDataOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueryId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetQueryResultsWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetQueryResultsWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetQueryResultsWorkloadInsightsTopContributorsData",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetQueryResultsWorkloadInsightsTopContributorsDataOutcome>(
    [&]()-> GetQueryResultsWorkloadInsightsTopContributorsDataOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetQueryResultsWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/workloadInsights/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsDataQueries/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/results");
      return GetQueryResultsWorkloadInsightsTopContributorsDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetQueryStatusMonitorTopContributorsOutcome NetworkFlowMonitorClient::GetQueryStatusMonitorTopContributors(const GetQueryStatusMonitorTopContributorsRequest& request) const
{
  AWS_OPERATION_GUARD(GetQueryStatusMonitorTopContributors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetQueryStatusMonitorTopContributors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MonitorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueryStatusMonitorTopContributors", "Required field: MonitorName, is not set");
    return GetQueryStatusMonitorTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MonitorName]", false));
  }
  if (!request.QueryIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueryStatusMonitorTopContributors", "Required field: QueryId, is not set");
    return GetQueryStatusMonitorTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueryId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetQueryStatusMonitorTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetQueryStatusMonitorTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetQueryStatusMonitorTopContributors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetQueryStatusMonitorTopContributorsOutcome>(
    [&]()-> GetQueryStatusMonitorTopContributorsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetQueryStatusMonitorTopContributors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/monitors/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsQueries/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/status");
      return GetQueryStatusMonitorTopContributorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetQueryStatusWorkloadInsightsTopContributorsOutcome NetworkFlowMonitorClient::GetQueryStatusWorkloadInsightsTopContributors(const GetQueryStatusWorkloadInsightsTopContributorsRequest& request) const
{
  AWS_OPERATION_GUARD(GetQueryStatusWorkloadInsightsTopContributors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetQueryStatusWorkloadInsightsTopContributors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ScopeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueryStatusWorkloadInsightsTopContributors", "Required field: ScopeId, is not set");
    return GetQueryStatusWorkloadInsightsTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeId]", false));
  }
  if (!request.QueryIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueryStatusWorkloadInsightsTopContributors", "Required field: QueryId, is not set");
    return GetQueryStatusWorkloadInsightsTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueryId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetQueryStatusWorkloadInsightsTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetQueryStatusWorkloadInsightsTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetQueryStatusWorkloadInsightsTopContributors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetQueryStatusWorkloadInsightsTopContributorsOutcome>(
    [&]()-> GetQueryStatusWorkloadInsightsTopContributorsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetQueryStatusWorkloadInsightsTopContributors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/workloadInsights/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsQueries/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/status");
      return GetQueryStatusWorkloadInsightsTopContributorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetQueryStatusWorkloadInsightsTopContributorsDataOutcome NetworkFlowMonitorClient::GetQueryStatusWorkloadInsightsTopContributorsData(const GetQueryStatusWorkloadInsightsTopContributorsDataRequest& request) const
{
  AWS_OPERATION_GUARD(GetQueryStatusWorkloadInsightsTopContributorsData);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetQueryStatusWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ScopeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueryStatusWorkloadInsightsTopContributorsData", "Required field: ScopeId, is not set");
    return GetQueryStatusWorkloadInsightsTopContributorsDataOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeId]", false));
  }
  if (!request.QueryIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetQueryStatusWorkloadInsightsTopContributorsData", "Required field: QueryId, is not set");
    return GetQueryStatusWorkloadInsightsTopContributorsDataOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueryId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetQueryStatusWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetQueryStatusWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetQueryStatusWorkloadInsightsTopContributorsData",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetQueryStatusWorkloadInsightsTopContributorsDataOutcome>(
    [&]()-> GetQueryStatusWorkloadInsightsTopContributorsDataOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetQueryStatusWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/workloadInsights/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsDataQueries/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/status");
      return GetQueryStatusWorkloadInsightsTopContributorsDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetScopeOutcome NetworkFlowMonitorClient::GetScope(const GetScopeRequest& request) const
{
  AWS_OPERATION_GUARD(GetScope);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ScopeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetScope", "Required field: ScopeId, is not set");
    return GetScopeOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetScope, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetScope, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetScope",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetScopeOutcome>(
    [&]()-> GetScopeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/scopes/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
      return GetScopeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMonitorsOutcome NetworkFlowMonitorClient::ListMonitors(const ListMonitorsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMonitors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMonitors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListMonitors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMonitors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMonitors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMonitorsOutcome>(
    [&]()-> ListMonitorsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMonitors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/monitors");
      return ListMonitorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListScopesOutcome NetworkFlowMonitorClient::ListScopes(const ListScopesRequest& request) const
{
  AWS_OPERATION_GUARD(ListScopes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListScopes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListScopes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListScopes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListScopes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListScopesOutcome>(
    [&]()-> ListScopesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListScopes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/scopes");
      return ListScopesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome NetworkFlowMonitorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartQueryMonitorTopContributorsOutcome NetworkFlowMonitorClient::StartQueryMonitorTopContributors(const StartQueryMonitorTopContributorsRequest& request) const
{
  AWS_OPERATION_GUARD(StartQueryMonitorTopContributors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartQueryMonitorTopContributors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MonitorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartQueryMonitorTopContributors", "Required field: MonitorName, is not set");
    return StartQueryMonitorTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MonitorName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartQueryMonitorTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartQueryMonitorTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartQueryMonitorTopContributors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartQueryMonitorTopContributorsOutcome>(
    [&]()-> StartQueryMonitorTopContributorsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartQueryMonitorTopContributors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/monitors/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsQueries");
      return StartQueryMonitorTopContributorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartQueryWorkloadInsightsTopContributorsOutcome NetworkFlowMonitorClient::StartQueryWorkloadInsightsTopContributors(const StartQueryWorkloadInsightsTopContributorsRequest& request) const
{
  AWS_OPERATION_GUARD(StartQueryWorkloadInsightsTopContributors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartQueryWorkloadInsightsTopContributors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ScopeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartQueryWorkloadInsightsTopContributors", "Required field: ScopeId, is not set");
    return StartQueryWorkloadInsightsTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartQueryWorkloadInsightsTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartQueryWorkloadInsightsTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartQueryWorkloadInsightsTopContributors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartQueryWorkloadInsightsTopContributorsOutcome>(
    [&]()-> StartQueryWorkloadInsightsTopContributorsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartQueryWorkloadInsightsTopContributors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/workloadInsights/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsQueries");
      return StartQueryWorkloadInsightsTopContributorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartQueryWorkloadInsightsTopContributorsDataOutcome NetworkFlowMonitorClient::StartQueryWorkloadInsightsTopContributorsData(const StartQueryWorkloadInsightsTopContributorsDataRequest& request) const
{
  AWS_OPERATION_GUARD(StartQueryWorkloadInsightsTopContributorsData);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartQueryWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ScopeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartQueryWorkloadInsightsTopContributorsData", "Required field: ScopeId, is not set");
    return StartQueryWorkloadInsightsTopContributorsDataOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartQueryWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartQueryWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartQueryWorkloadInsightsTopContributorsData",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartQueryWorkloadInsightsTopContributorsDataOutcome>(
    [&]()-> StartQueryWorkloadInsightsTopContributorsDataOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartQueryWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/workloadInsights/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsDataQueries");
      return StartQueryWorkloadInsightsTopContributorsDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopQueryMonitorTopContributorsOutcome NetworkFlowMonitorClient::StopQueryMonitorTopContributors(const StopQueryMonitorTopContributorsRequest& request) const
{
  AWS_OPERATION_GUARD(StopQueryMonitorTopContributors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopQueryMonitorTopContributors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MonitorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopQueryMonitorTopContributors", "Required field: MonitorName, is not set");
    return StopQueryMonitorTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MonitorName]", false));
  }
  if (!request.QueryIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopQueryMonitorTopContributors", "Required field: QueryId, is not set");
    return StopQueryMonitorTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueryId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopQueryMonitorTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopQueryMonitorTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopQueryMonitorTopContributors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopQueryMonitorTopContributorsOutcome>(
    [&]()-> StopQueryMonitorTopContributorsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopQueryMonitorTopContributors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/monitors/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsQueries/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
      return StopQueryMonitorTopContributorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopQueryWorkloadInsightsTopContributorsOutcome NetworkFlowMonitorClient::StopQueryWorkloadInsightsTopContributors(const StopQueryWorkloadInsightsTopContributorsRequest& request) const
{
  AWS_OPERATION_GUARD(StopQueryWorkloadInsightsTopContributors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopQueryWorkloadInsightsTopContributors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ScopeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopQueryWorkloadInsightsTopContributors", "Required field: ScopeId, is not set");
    return StopQueryWorkloadInsightsTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeId]", false));
  }
  if (!request.QueryIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopQueryWorkloadInsightsTopContributors", "Required field: QueryId, is not set");
    return StopQueryWorkloadInsightsTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueryId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopQueryWorkloadInsightsTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopQueryWorkloadInsightsTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopQueryWorkloadInsightsTopContributors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopQueryWorkloadInsightsTopContributorsOutcome>(
    [&]()-> StopQueryWorkloadInsightsTopContributorsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopQueryWorkloadInsightsTopContributors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/workloadInsights/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsQueries/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
      return StopQueryWorkloadInsightsTopContributorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopQueryWorkloadInsightsTopContributorsDataOutcome NetworkFlowMonitorClient::StopQueryWorkloadInsightsTopContributorsData(const StopQueryWorkloadInsightsTopContributorsDataRequest& request) const
{
  AWS_OPERATION_GUARD(StopQueryWorkloadInsightsTopContributorsData);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopQueryWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ScopeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopQueryWorkloadInsightsTopContributorsData", "Required field: ScopeId, is not set");
    return StopQueryWorkloadInsightsTopContributorsDataOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeId]", false));
  }
  if (!request.QueryIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopQueryWorkloadInsightsTopContributorsData", "Required field: QueryId, is not set");
    return StopQueryWorkloadInsightsTopContributorsDataOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueryId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StopQueryWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopQueryWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopQueryWorkloadInsightsTopContributorsData",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopQueryWorkloadInsightsTopContributorsDataOutcome>(
    [&]()-> StopQueryWorkloadInsightsTopContributorsDataOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopQueryWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/workloadInsights/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsDataQueries/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
      return StopQueryWorkloadInsightsTopContributorsDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome NetworkFlowMonitorClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome NetworkFlowMonitorClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateMonitorOutcome NetworkFlowMonitorClient::UpdateMonitor(const UpdateMonitorRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateMonitor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MonitorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMonitor", "Required field: MonitorName, is not set");
    return UpdateMonitorOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MonitorName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateMonitor",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateMonitorOutcome>(
    [&]()-> UpdateMonitorOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/monitors/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
      return UpdateMonitorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateScopeOutcome NetworkFlowMonitorClient::UpdateScope(const UpdateScopeRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateScope);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ScopeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateScope", "Required field: ScopeId, is not set");
    return UpdateScopeOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateScope, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateScope, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateScope",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateScopeOutcome>(
    [&]()-> UpdateScopeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/scopes/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
      return UpdateScopeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

