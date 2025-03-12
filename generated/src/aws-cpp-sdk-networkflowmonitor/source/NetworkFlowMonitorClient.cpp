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

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

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
    const char ALLOCATION_TAG[] = "NetworkFlowMonitorClient";
    const char SERVICE_NAME[] = "networkflowmonitor";
  }
}
const char* NetworkFlowMonitorClient::GetServiceName() {return SERVICE_NAME;}
const char* NetworkFlowMonitorClient::GetAllocationTag() {return ALLOCATION_TAG;}

NetworkFlowMonitorClient::NetworkFlowMonitorClient(const NetworkFlowMonitor::NetworkFlowMonitorClientConfiguration& clientConfiguration,
                           std::shared_ptr<NetworkFlowMonitorEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "NetworkFlowMonitor",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<NetworkFlowMonitorErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<NetworkFlowMonitorEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

NetworkFlowMonitorClient::NetworkFlowMonitorClient(const AWSCredentials& credentials,
                           std::shared_ptr<NetworkFlowMonitorEndpointProviderBase> endpointProvider,
                           const NetworkFlowMonitor::NetworkFlowMonitorClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "NetworkFlowMonitor",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<NetworkFlowMonitorErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<NetworkFlowMonitorEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

NetworkFlowMonitorClient::NetworkFlowMonitorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<NetworkFlowMonitorEndpointProviderBase> endpointProvider,
                           const NetworkFlowMonitor::NetworkFlowMonitorClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "NetworkFlowMonitor",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<NetworkFlowMonitorErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<NetworkFlowMonitorEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
NetworkFlowMonitorClient::NetworkFlowMonitorClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "NetworkFlowMonitor",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<NetworkFlowMonitorErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<NetworkFlowMonitorEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

NetworkFlowMonitorClient::NetworkFlowMonitorClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "NetworkFlowMonitor",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<NetworkFlowMonitorErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<NetworkFlowMonitorEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

NetworkFlowMonitorClient::NetworkFlowMonitorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "NetworkFlowMonitor",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<NetworkFlowMonitorErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<NetworkFlowMonitorEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

NetworkFlowMonitorClient::~NetworkFlowMonitorClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<NetworkFlowMonitorEndpointProviderBase>& NetworkFlowMonitorClient::accessEndpointProvider()
{
  return m_endpointProvider;
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateMonitor",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateMonitorOutcome>(
    [&]()-> CreateMonitorOutcome {
      return CreateMonitorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/monitors");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateScopeOutcome NetworkFlowMonitorClient::CreateScope(const CreateScopeRequest& request) const
{
  AWS_OPERATION_GUARD(CreateScope);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateScope, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateScope, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateScope, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateScope",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateScopeOutcome>(
    [&]()-> CreateScopeOutcome {
      return CreateScopeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/scopes");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteMonitor",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteMonitorOutcome>(
    [&]()-> DeleteMonitorOutcome {
      return DeleteMonitorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/monitors/");
      resolvedEndpoint.AddPathSegment(request.GetMonitorName());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteScope, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteScope, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteScope",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteScopeOutcome>(
    [&]()-> DeleteScopeOutcome {
      return DeleteScopeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/scopes/");
      resolvedEndpoint.AddPathSegment(request.GetScopeId());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetMonitor",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetMonitorOutcome>(
    [&]()-> GetMonitorOutcome {
      return GetMonitorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/monitors/");
      resolvedEndpoint.AddPathSegment(request.GetMonitorName());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetQueryResultsMonitorTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetQueryResultsMonitorTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetQueryResultsMonitorTopContributors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetQueryResultsMonitorTopContributorsOutcome>(
    [&]()-> GetQueryResultsMonitorTopContributorsOutcome {
      return GetQueryResultsMonitorTopContributorsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/monitors/");
      resolvedEndpoint.AddPathSegment(request.GetMonitorName());
      resolvedEndpoint.AddPathSegments("/topContributorsQueries/");
      resolvedEndpoint.AddPathSegment(request.GetQueryId());
      resolvedEndpoint.AddPathSegments("/results");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetQueryResultsWorkloadInsightsTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetQueryResultsWorkloadInsightsTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetQueryResultsWorkloadInsightsTopContributors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetQueryResultsWorkloadInsightsTopContributorsOutcome>(
    [&]()-> GetQueryResultsWorkloadInsightsTopContributorsOutcome {
      return GetQueryResultsWorkloadInsightsTopContributorsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workloadInsights/");
      resolvedEndpoint.AddPathSegment(request.GetScopeId());
      resolvedEndpoint.AddPathSegments("/topContributorsQueries/");
      resolvedEndpoint.AddPathSegment(request.GetQueryId());
      resolvedEndpoint.AddPathSegments("/results");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetQueryResultsWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetQueryResultsWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetQueryResultsWorkloadInsightsTopContributorsData",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetQueryResultsWorkloadInsightsTopContributorsDataOutcome>(
    [&]()-> GetQueryResultsWorkloadInsightsTopContributorsDataOutcome {
      return GetQueryResultsWorkloadInsightsTopContributorsDataOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workloadInsights/");
      resolvedEndpoint.AddPathSegment(request.GetScopeId());
      resolvedEndpoint.AddPathSegments("/topContributorsDataQueries/");
      resolvedEndpoint.AddPathSegment(request.GetQueryId());
      resolvedEndpoint.AddPathSegments("/results");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetQueryStatusMonitorTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetQueryStatusMonitorTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetQueryStatusMonitorTopContributors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetQueryStatusMonitorTopContributorsOutcome>(
    [&]()-> GetQueryStatusMonitorTopContributorsOutcome {
      return GetQueryStatusMonitorTopContributorsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/monitors/");
      resolvedEndpoint.AddPathSegment(request.GetMonitorName());
      resolvedEndpoint.AddPathSegments("/topContributorsQueries/");
      resolvedEndpoint.AddPathSegment(request.GetQueryId());
      resolvedEndpoint.AddPathSegments("/status");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetQueryStatusWorkloadInsightsTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetQueryStatusWorkloadInsightsTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetQueryStatusWorkloadInsightsTopContributors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetQueryStatusWorkloadInsightsTopContributorsOutcome>(
    [&]()-> GetQueryStatusWorkloadInsightsTopContributorsOutcome {
      return GetQueryStatusWorkloadInsightsTopContributorsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workloadInsights/");
      resolvedEndpoint.AddPathSegment(request.GetScopeId());
      resolvedEndpoint.AddPathSegments("/topContributorsQueries/");
      resolvedEndpoint.AddPathSegment(request.GetQueryId());
      resolvedEndpoint.AddPathSegments("/status");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetQueryStatusWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetQueryStatusWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetQueryStatusWorkloadInsightsTopContributorsData",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetQueryStatusWorkloadInsightsTopContributorsDataOutcome>(
    [&]()-> GetQueryStatusWorkloadInsightsTopContributorsDataOutcome {
      return GetQueryStatusWorkloadInsightsTopContributorsDataOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workloadInsights/");
      resolvedEndpoint.AddPathSegment(request.GetScopeId());
      resolvedEndpoint.AddPathSegments("/topContributorsDataQueries/");
      resolvedEndpoint.AddPathSegment(request.GetQueryId());
      resolvedEndpoint.AddPathSegments("/status");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetScope, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetScope, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetScope",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetScopeOutcome>(
    [&]()-> GetScopeOutcome {
      return GetScopeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/scopes/");
      resolvedEndpoint.AddPathSegment(request.GetScopeId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListMonitorsOutcome NetworkFlowMonitorClient::ListMonitors(const ListMonitorsRequest& request) const
{
  AWS_OPERATION_GUARD(ListMonitors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMonitors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListMonitors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListMonitors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListMonitors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListMonitorsOutcome>(
    [&]()-> ListMonitorsOutcome {
      return ListMonitorsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/monitors");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListScopesOutcome NetworkFlowMonitorClient::ListScopes(const ListScopesRequest& request) const
{
  AWS_OPERATION_GUARD(ListScopes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListScopes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListScopes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListScopes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListScopes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListScopesOutcome>(
    [&]()-> ListScopesOutcome {
      return ListScopesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/scopes");
      }));
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
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartQueryMonitorTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartQueryMonitorTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartQueryMonitorTopContributors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartQueryMonitorTopContributorsOutcome>(
    [&]()-> StartQueryMonitorTopContributorsOutcome {
      return StartQueryMonitorTopContributorsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/monitors/");
      resolvedEndpoint.AddPathSegment(request.GetMonitorName());
      resolvedEndpoint.AddPathSegments("/topContributorsQueries");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartQueryWorkloadInsightsTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartQueryWorkloadInsightsTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartQueryWorkloadInsightsTopContributors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartQueryWorkloadInsightsTopContributorsOutcome>(
    [&]()-> StartQueryWorkloadInsightsTopContributorsOutcome {
      return StartQueryWorkloadInsightsTopContributorsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workloadInsights/");
      resolvedEndpoint.AddPathSegment(request.GetScopeId());
      resolvedEndpoint.AddPathSegments("/topContributorsQueries");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartQueryWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartQueryWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartQueryWorkloadInsightsTopContributorsData",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartQueryWorkloadInsightsTopContributorsDataOutcome>(
    [&]()-> StartQueryWorkloadInsightsTopContributorsDataOutcome {
      return StartQueryWorkloadInsightsTopContributorsDataOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workloadInsights/");
      resolvedEndpoint.AddPathSegment(request.GetScopeId());
      resolvedEndpoint.AddPathSegments("/topContributorsDataQueries");
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StopQueryMonitorTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopQueryMonitorTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopQueryMonitorTopContributors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopQueryMonitorTopContributorsOutcome>(
    [&]()-> StopQueryMonitorTopContributorsOutcome {
      return StopQueryMonitorTopContributorsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/monitors/");
      resolvedEndpoint.AddPathSegment(request.GetMonitorName());
      resolvedEndpoint.AddPathSegments("/topContributorsQueries/");
      resolvedEndpoint.AddPathSegment(request.GetQueryId());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StopQueryWorkloadInsightsTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopQueryWorkloadInsightsTopContributors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopQueryWorkloadInsightsTopContributors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopQueryWorkloadInsightsTopContributorsOutcome>(
    [&]()-> StopQueryWorkloadInsightsTopContributorsOutcome {
      return StopQueryWorkloadInsightsTopContributorsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workloadInsights/");
      resolvedEndpoint.AddPathSegment(request.GetScopeId());
      resolvedEndpoint.AddPathSegments("/topContributorsQueries/");
      resolvedEndpoint.AddPathSegment(request.GetQueryId());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StopQueryWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopQueryWorkloadInsightsTopContributorsData, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopQueryWorkloadInsightsTopContributorsData",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopQueryWorkloadInsightsTopContributorsDataOutcome>(
    [&]()-> StopQueryWorkloadInsightsTopContributorsDataOutcome {
      return StopQueryWorkloadInsightsTopContributorsDataOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/workloadInsights/");
      resolvedEndpoint.AddPathSegment(request.GetScopeId());
      resolvedEndpoint.AddPathSegments("/topContributorsDataQueries/");
      resolvedEndpoint.AddPathSegment(request.GetQueryId());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      return TagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      return UntagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateMonitor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateMonitor",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateMonitorOutcome>(
    [&]()-> UpdateMonitorOutcome {
      return UpdateMonitorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/monitors/");
      resolvedEndpoint.AddPathSegment(request.GetMonitorName());
      }));
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
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateScope, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateScope, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateScope",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateScopeOutcome>(
    [&]()-> UpdateScopeOutcome {
      return UpdateScopeOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/scopes/");
      resolvedEndpoint.AddPathSegment(request.GetScopeId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


