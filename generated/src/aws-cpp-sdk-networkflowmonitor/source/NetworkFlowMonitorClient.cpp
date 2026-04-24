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
#include <aws/networkflowmonitor/NetworkFlowMonitorClient.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorEndpointProvider.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorErrorMarshaller.h>
#include <aws/networkflowmonitor/model/CreateMonitorRequest.h>
#include <aws/networkflowmonitor/model/CreateScopeRequest.h>
#include <aws/networkflowmonitor/model/DeleteMonitorRequest.h>
#include <aws/networkflowmonitor/model/DeleteScopeRequest.h>
#include <aws/networkflowmonitor/model/GetMonitorRequest.h>
#include <aws/networkflowmonitor/model/GetQueryResultsMonitorTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/GetQueryResultsWorkloadInsightsTopContributorsDataRequest.h>
#include <aws/networkflowmonitor/model/GetQueryResultsWorkloadInsightsTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/GetQueryStatusMonitorTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/GetQueryStatusWorkloadInsightsTopContributorsDataRequest.h>
#include <aws/networkflowmonitor/model/GetQueryStatusWorkloadInsightsTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/GetScopeRequest.h>
#include <aws/networkflowmonitor/model/ListMonitorsRequest.h>
#include <aws/networkflowmonitor/model/ListScopesRequest.h>
#include <aws/networkflowmonitor/model/ListTagsForResourceRequest.h>
#include <aws/networkflowmonitor/model/StartQueryMonitorTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/StartQueryWorkloadInsightsTopContributorsDataRequest.h>
#include <aws/networkflowmonitor/model/StartQueryWorkloadInsightsTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/StopQueryMonitorTopContributorsRequest.h>
#include <aws/networkflowmonitor/model/StopQueryWorkloadInsightsTopContributorsDataRequest.h>
#include <aws/networkflowmonitor/model/StopQueryWorkloadInsightsTopContributorsRequest.h>
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

namespace Aws {
namespace NetworkFlowMonitor {
const char SERVICE_NAME[] = "networkflowmonitor";
const char ALLOCATION_TAG[] = "NetworkFlowMonitorClient";
}  // namespace NetworkFlowMonitor
}  // namespace Aws
const char* NetworkFlowMonitorClient::GetServiceName() { return SERVICE_NAME; }
const char* NetworkFlowMonitorClient::GetAllocationTag() { return ALLOCATION_TAG; }

NetworkFlowMonitorClient::NetworkFlowMonitorClient(const NetworkFlowMonitor::NetworkFlowMonitorClientConfiguration& clientConfiguration,
                                                   std::shared_ptr<NetworkFlowMonitorEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkFlowMonitorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<NetworkFlowMonitorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NetworkFlowMonitorClient::NetworkFlowMonitorClient(const AWSCredentials& credentials,
                                                   std::shared_ptr<NetworkFlowMonitorEndpointProviderBase> endpointProvider,
                                                   const NetworkFlowMonitor::NetworkFlowMonitorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkFlowMonitorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<NetworkFlowMonitorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NetworkFlowMonitorClient::NetworkFlowMonitorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   std::shared_ptr<NetworkFlowMonitorEndpointProviderBase> endpointProvider,
                                                   const NetworkFlowMonitor::NetworkFlowMonitorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkFlowMonitorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<NetworkFlowMonitorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
NetworkFlowMonitorClient::NetworkFlowMonitorClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkFlowMonitorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NetworkFlowMonitorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NetworkFlowMonitorClient::NetworkFlowMonitorClient(const AWSCredentials& credentials,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkFlowMonitorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NetworkFlowMonitorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NetworkFlowMonitorClient::NetworkFlowMonitorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkFlowMonitorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NetworkFlowMonitorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
NetworkFlowMonitorClient::~NetworkFlowMonitorClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<NetworkFlowMonitorEndpointProviderBase>& NetworkFlowMonitorClient::accessEndpointProvider() { return m_endpointProvider; }

void NetworkFlowMonitorClient::init(const NetworkFlowMonitor::NetworkFlowMonitorClientConfiguration& config) {
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
  m_endpointProvider->InitBuiltInParameters(config, "networkflowmonitor");
}

void NetworkFlowMonitorClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
NetworkFlowMonitorClient::InvokeOperationOutcome NetworkFlowMonitorClient::InvokeServiceOperation(
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

CreateMonitorOutcome NetworkFlowMonitorClient::CreateMonitor(const CreateMonitorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMonitorOutcome(result.GetResultWithOwnership()) : CreateMonitorOutcome(std::move(result.GetError()));
}

CreateScopeOutcome NetworkFlowMonitorClient::CreateScope(const CreateScopeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scopes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateScopeOutcome(result.GetResultWithOwnership()) : CreateScopeOutcome(std::move(result.GetError()));
}

DeleteMonitorOutcome NetworkFlowMonitorClient::DeleteMonitor(const DeleteMonitorRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMonitor", "Required field: MonitorName, is not set");
    return DeleteMonitorOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MonitorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMonitorOutcome(result.GetResultWithOwnership()) : DeleteMonitorOutcome(std::move(result.GetError()));
}

DeleteScopeOutcome NetworkFlowMonitorClient::DeleteScope(const DeleteScopeRequest& request) const {
  if (!request.ScopeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteScope", "Required field: ScopeId, is not set");
    return DeleteScopeOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scopes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteScopeOutcome(result.GetResultWithOwnership()) : DeleteScopeOutcome(std::move(result.GetError()));
}

GetMonitorOutcome NetworkFlowMonitorClient::GetMonitor(const GetMonitorRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMonitor", "Required field: MonitorName, is not set");
    return GetMonitorOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MonitorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMonitorOutcome(result.GetResultWithOwnership()) : GetMonitorOutcome(std::move(result.GetError()));
}

GetQueryResultsMonitorTopContributorsOutcome NetworkFlowMonitorClient::GetQueryResultsMonitorTopContributors(
    const GetQueryResultsMonitorTopContributorsRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueryResultsMonitorTopContributors", "Required field: MonitorName, is not set");
    return GetQueryResultsMonitorTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MonitorName]", false));
  }
  if (!request.QueryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueryResultsMonitorTopContributors", "Required field: QueryId, is not set");
    return GetQueryResultsMonitorTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsQueries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/results");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetQueryResultsMonitorTopContributorsOutcome(result.GetResultWithOwnership())
                            : GetQueryResultsMonitorTopContributorsOutcome(std::move(result.GetError()));
}

GetQueryResultsWorkloadInsightsTopContributorsOutcome NetworkFlowMonitorClient::GetQueryResultsWorkloadInsightsTopContributors(
    const GetQueryResultsWorkloadInsightsTopContributorsRequest& request) const {
  if (!request.ScopeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueryResultsWorkloadInsightsTopContributors", "Required field: ScopeId, is not set");
    return GetQueryResultsWorkloadInsightsTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeId]", false));
  }
  if (!request.QueryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueryResultsWorkloadInsightsTopContributors", "Required field: QueryId, is not set");
    return GetQueryResultsWorkloadInsightsTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloadInsights/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsQueries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/results");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetQueryResultsWorkloadInsightsTopContributorsOutcome(result.GetResultWithOwnership())
                            : GetQueryResultsWorkloadInsightsTopContributorsOutcome(std::move(result.GetError()));
}

GetQueryResultsWorkloadInsightsTopContributorsDataOutcome NetworkFlowMonitorClient::GetQueryResultsWorkloadInsightsTopContributorsData(
    const GetQueryResultsWorkloadInsightsTopContributorsDataRequest& request) const {
  if (!request.ScopeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueryResultsWorkloadInsightsTopContributorsData", "Required field: ScopeId, is not set");
    return GetQueryResultsWorkloadInsightsTopContributorsDataOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeId]", false));
  }
  if (!request.QueryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueryResultsWorkloadInsightsTopContributorsData", "Required field: QueryId, is not set");
    return GetQueryResultsWorkloadInsightsTopContributorsDataOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloadInsights/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsDataQueries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/results");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetQueryResultsWorkloadInsightsTopContributorsDataOutcome(result.GetResultWithOwnership())
                            : GetQueryResultsWorkloadInsightsTopContributorsDataOutcome(std::move(result.GetError()));
}

GetQueryStatusMonitorTopContributorsOutcome NetworkFlowMonitorClient::GetQueryStatusMonitorTopContributors(
    const GetQueryStatusMonitorTopContributorsRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueryStatusMonitorTopContributors", "Required field: MonitorName, is not set");
    return GetQueryStatusMonitorTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MonitorName]", false));
  }
  if (!request.QueryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueryStatusMonitorTopContributors", "Required field: QueryId, is not set");
    return GetQueryStatusMonitorTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsQueries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetQueryStatusMonitorTopContributorsOutcome(result.GetResultWithOwnership())
                            : GetQueryStatusMonitorTopContributorsOutcome(std::move(result.GetError()));
}

GetQueryStatusWorkloadInsightsTopContributorsOutcome NetworkFlowMonitorClient::GetQueryStatusWorkloadInsightsTopContributors(
    const GetQueryStatusWorkloadInsightsTopContributorsRequest& request) const {
  if (!request.ScopeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueryStatusWorkloadInsightsTopContributors", "Required field: ScopeId, is not set");
    return GetQueryStatusWorkloadInsightsTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeId]", false));
  }
  if (!request.QueryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueryStatusWorkloadInsightsTopContributors", "Required field: QueryId, is not set");
    return GetQueryStatusWorkloadInsightsTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloadInsights/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsQueries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetQueryStatusWorkloadInsightsTopContributorsOutcome(result.GetResultWithOwnership())
                            : GetQueryStatusWorkloadInsightsTopContributorsOutcome(std::move(result.GetError()));
}

GetQueryStatusWorkloadInsightsTopContributorsDataOutcome NetworkFlowMonitorClient::GetQueryStatusWorkloadInsightsTopContributorsData(
    const GetQueryStatusWorkloadInsightsTopContributorsDataRequest& request) const {
  if (!request.ScopeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueryStatusWorkloadInsightsTopContributorsData", "Required field: ScopeId, is not set");
    return GetQueryStatusWorkloadInsightsTopContributorsDataOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeId]", false));
  }
  if (!request.QueryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQueryStatusWorkloadInsightsTopContributorsData", "Required field: QueryId, is not set");
    return GetQueryStatusWorkloadInsightsTopContributorsDataOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloadInsights/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsDataQueries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetQueryStatusWorkloadInsightsTopContributorsDataOutcome(result.GetResultWithOwnership())
                            : GetQueryStatusWorkloadInsightsTopContributorsDataOutcome(std::move(result.GetError()));
}

GetScopeOutcome NetworkFlowMonitorClient::GetScope(const GetScopeRequest& request) const {
  if (!request.ScopeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetScope", "Required field: ScopeId, is not set");
    return GetScopeOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ScopeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scopes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetScopeOutcome(result.GetResultWithOwnership()) : GetScopeOutcome(std::move(result.GetError()));
}

ListMonitorsOutcome NetworkFlowMonitorClient::ListMonitors(const ListMonitorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMonitorsOutcome(result.GetResultWithOwnership()) : ListMonitorsOutcome(std::move(result.GetError()));
}

ListScopesOutcome NetworkFlowMonitorClient::ListScopes(const ListScopesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scopes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListScopesOutcome(result.GetResultWithOwnership()) : ListScopesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome NetworkFlowMonitorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

StartQueryMonitorTopContributorsOutcome NetworkFlowMonitorClient::StartQueryMonitorTopContributors(
    const StartQueryMonitorTopContributorsRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartQueryMonitorTopContributors", "Required field: MonitorName, is not set");
    return StartQueryMonitorTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MonitorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsQueries");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartQueryMonitorTopContributorsOutcome(result.GetResultWithOwnership())
                            : StartQueryMonitorTopContributorsOutcome(std::move(result.GetError()));
}

StartQueryWorkloadInsightsTopContributorsOutcome NetworkFlowMonitorClient::StartQueryWorkloadInsightsTopContributors(
    const StartQueryWorkloadInsightsTopContributorsRequest& request) const {
  if (!request.ScopeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartQueryWorkloadInsightsTopContributors", "Required field: ScopeId, is not set");
    return StartQueryWorkloadInsightsTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloadInsights/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsQueries");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartQueryWorkloadInsightsTopContributorsOutcome(result.GetResultWithOwnership())
                            : StartQueryWorkloadInsightsTopContributorsOutcome(std::move(result.GetError()));
}

StartQueryWorkloadInsightsTopContributorsDataOutcome NetworkFlowMonitorClient::StartQueryWorkloadInsightsTopContributorsData(
    const StartQueryWorkloadInsightsTopContributorsDataRequest& request) const {
  if (!request.ScopeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartQueryWorkloadInsightsTopContributorsData", "Required field: ScopeId, is not set");
    return StartQueryWorkloadInsightsTopContributorsDataOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloadInsights/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsDataQueries");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartQueryWorkloadInsightsTopContributorsDataOutcome(result.GetResultWithOwnership())
                            : StartQueryWorkloadInsightsTopContributorsDataOutcome(std::move(result.GetError()));
}

StopQueryMonitorTopContributorsOutcome NetworkFlowMonitorClient::StopQueryMonitorTopContributors(
    const StopQueryMonitorTopContributorsRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopQueryMonitorTopContributors", "Required field: MonitorName, is not set");
    return StopQueryMonitorTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MonitorName]", false));
  }
  if (!request.QueryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopQueryMonitorTopContributors", "Required field: QueryId, is not set");
    return StopQueryMonitorTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsQueries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? StopQueryMonitorTopContributorsOutcome(result.GetResultWithOwnership())
                            : StopQueryMonitorTopContributorsOutcome(std::move(result.GetError()));
}

StopQueryWorkloadInsightsTopContributorsOutcome NetworkFlowMonitorClient::StopQueryWorkloadInsightsTopContributors(
    const StopQueryWorkloadInsightsTopContributorsRequest& request) const {
  if (!request.ScopeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopQueryWorkloadInsightsTopContributors", "Required field: ScopeId, is not set");
    return StopQueryWorkloadInsightsTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeId]", false));
  }
  if (!request.QueryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopQueryWorkloadInsightsTopContributors", "Required field: QueryId, is not set");
    return StopQueryWorkloadInsightsTopContributorsOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloadInsights/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsQueries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? StopQueryWorkloadInsightsTopContributorsOutcome(result.GetResultWithOwnership())
                            : StopQueryWorkloadInsightsTopContributorsOutcome(std::move(result.GetError()));
}

StopQueryWorkloadInsightsTopContributorsDataOutcome NetworkFlowMonitorClient::StopQueryWorkloadInsightsTopContributorsData(
    const StopQueryWorkloadInsightsTopContributorsDataRequest& request) const {
  if (!request.ScopeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopQueryWorkloadInsightsTopContributorsData", "Required field: ScopeId, is not set");
    return StopQueryWorkloadInsightsTopContributorsDataOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeId]", false));
  }
  if (!request.QueryIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopQueryWorkloadInsightsTopContributorsData", "Required field: QueryId, is not set");
    return StopQueryWorkloadInsightsTopContributorsDataOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QueryId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloadInsights/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topContributorsDataQueries/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQueryId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? StopQueryWorkloadInsightsTopContributorsDataOutcome(result.GetResultWithOwnership())
                            : StopQueryWorkloadInsightsTopContributorsDataOutcome(std::move(result.GetError()));
}

TagResourceOutcome NetworkFlowMonitorClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome NetworkFlowMonitorClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateMonitorOutcome NetworkFlowMonitorClient::UpdateMonitor(const UpdateMonitorRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMonitor", "Required field: MonitorName, is not set");
    return UpdateMonitorOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MonitorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateMonitorOutcome(result.GetResultWithOwnership()) : UpdateMonitorOutcome(std::move(result.GetError()));
}

UpdateScopeOutcome NetworkFlowMonitorClient::UpdateScope(const UpdateScopeRequest& request) const {
  if (!request.ScopeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateScope", "Required field: ScopeId, is not set");
    return UpdateScopeOutcome(Aws::Client::AWSError<NetworkFlowMonitorErrors>(
        NetworkFlowMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScopeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scopes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScopeId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateScopeOutcome(result.GetResultWithOwnership()) : UpdateScopeOutcome(std::move(result.GetError()));
}
