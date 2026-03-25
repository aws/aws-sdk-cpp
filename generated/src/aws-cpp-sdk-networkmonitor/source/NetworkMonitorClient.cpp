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
#include <aws/networkmonitor/NetworkMonitorClient.h>
#include <aws/networkmonitor/NetworkMonitorEndpointProvider.h>
#include <aws/networkmonitor/NetworkMonitorErrorMarshaller.h>
#include <aws/networkmonitor/model/CreateMonitorRequest.h>
#include <aws/networkmonitor/model/CreateProbeRequest.h>
#include <aws/networkmonitor/model/DeleteMonitorRequest.h>
#include <aws/networkmonitor/model/DeleteProbeRequest.h>
#include <aws/networkmonitor/model/GetMonitorRequest.h>
#include <aws/networkmonitor/model/GetProbeRequest.h>
#include <aws/networkmonitor/model/ListMonitorsRequest.h>
#include <aws/networkmonitor/model/ListTagsForResourceRequest.h>
#include <aws/networkmonitor/model/TagResourceRequest.h>
#include <aws/networkmonitor/model/UntagResourceRequest.h>
#include <aws/networkmonitor/model/UpdateMonitorRequest.h>
#include <aws/networkmonitor/model/UpdateProbeRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::NetworkMonitor;
using namespace Aws::NetworkMonitor::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace NetworkMonitor {
const char SERVICE_NAME[] = "networkmonitor";
const char ALLOCATION_TAG[] = "NetworkMonitorClient";
}  // namespace NetworkMonitor
}  // namespace Aws
const char* NetworkMonitorClient::GetServiceName() { return SERVICE_NAME; }
const char* NetworkMonitorClient::GetAllocationTag() { return ALLOCATION_TAG; }

NetworkMonitorClient::NetworkMonitorClient(const NetworkMonitor::NetworkMonitorClientConfiguration& clientConfiguration,
                                           std::shared_ptr<NetworkMonitorEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkMonitorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NetworkMonitorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NetworkMonitorClient::NetworkMonitorClient(const AWSCredentials& credentials,
                                           std::shared_ptr<NetworkMonitorEndpointProviderBase> endpointProvider,
                                           const NetworkMonitor::NetworkMonitorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkMonitorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NetworkMonitorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NetworkMonitorClient::NetworkMonitorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<NetworkMonitorEndpointProviderBase> endpointProvider,
                                           const NetworkMonitor::NetworkMonitorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkMonitorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<NetworkMonitorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
NetworkMonitorClient::NetworkMonitorClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkMonitorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NetworkMonitorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NetworkMonitorClient::NetworkMonitorClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkMonitorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NetworkMonitorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

NetworkMonitorClient::NetworkMonitorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<NetworkMonitorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<NetworkMonitorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
NetworkMonitorClient::~NetworkMonitorClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<NetworkMonitorEndpointProviderBase>& NetworkMonitorClient::accessEndpointProvider() { return m_endpointProvider; }

void NetworkMonitorClient::init(const NetworkMonitor::NetworkMonitorClientConfiguration& config) {
  AWSClient::SetServiceClientName("NetworkMonitor");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "networkmonitor");
}

void NetworkMonitorClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
NetworkMonitorClient::InvokeOperationOutcome NetworkMonitorClient::InvokeServiceOperation(
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

CreateMonitorOutcome NetworkMonitorClient::CreateMonitor(const CreateMonitorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitors");
  };

  return CreateMonitorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProbeOutcome NetworkMonitorClient::CreateProbe(const CreateProbeRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateProbe", "Required field: MonitorName, is not set");
    return CreateProbeOutcome(Aws::Client::AWSError<NetworkMonitorErrors>(NetworkMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [MonitorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/probes");
  };

  return CreateProbeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMonitorOutcome NetworkMonitorClient::DeleteMonitor(const DeleteMonitorRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMonitor", "Required field: MonitorName, is not set");
    return DeleteMonitorOutcome(Aws::Client::AWSError<NetworkMonitorErrors>(NetworkMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [MonitorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
  };

  return DeleteMonitorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteProbeOutcome NetworkMonitorClient::DeleteProbe(const DeleteProbeRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProbe", "Required field: MonitorName, is not set");
    return DeleteProbeOutcome(Aws::Client::AWSError<NetworkMonitorErrors>(NetworkMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [MonitorName]", false));
  }
  if (!request.ProbeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProbe", "Required field: ProbeId, is not set");
    return DeleteProbeOutcome(Aws::Client::AWSError<NetworkMonitorErrors>(NetworkMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ProbeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/probes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProbeId());
  };

  return DeleteProbeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetMonitorOutcome NetworkMonitorClient::GetMonitor(const GetMonitorRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMonitor", "Required field: MonitorName, is not set");
    return GetMonitorOutcome(Aws::Client::AWSError<NetworkMonitorErrors>(NetworkMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [MonitorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
  };

  return GetMonitorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetProbeOutcome NetworkMonitorClient::GetProbe(const GetProbeRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProbe", "Required field: MonitorName, is not set");
    return GetProbeOutcome(Aws::Client::AWSError<NetworkMonitorErrors>(NetworkMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [MonitorName]", false));
  }
  if (!request.ProbeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProbe", "Required field: ProbeId, is not set");
    return GetProbeOutcome(Aws::Client::AWSError<NetworkMonitorErrors>(NetworkMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ProbeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/probes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProbeId());
  };

  return GetProbeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMonitorsOutcome NetworkMonitorClient::ListMonitors(const ListMonitorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitors");
  };

  return ListMonitorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome NetworkMonitorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<NetworkMonitorErrors>(
        NetworkMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

TagResourceOutcome NetworkMonitorClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<NetworkMonitorErrors>(NetworkMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome NetworkMonitorClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<NetworkMonitorErrors>(NetworkMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<NetworkMonitorErrors>(NetworkMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateMonitorOutcome NetworkMonitorClient::UpdateMonitor(const UpdateMonitorRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMonitor", "Required field: MonitorName, is not set");
    return UpdateMonitorOutcome(Aws::Client::AWSError<NetworkMonitorErrors>(NetworkMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [MonitorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
  };

  return UpdateMonitorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateProbeOutcome NetworkMonitorClient::UpdateProbe(const UpdateProbeRequest& request) const {
  if (!request.MonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProbe", "Required field: MonitorName, is not set");
    return UpdateProbeOutcome(Aws::Client::AWSError<NetworkMonitorErrors>(NetworkMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [MonitorName]", false));
  }
  if (!request.ProbeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProbe", "Required field: ProbeId, is not set");
    return UpdateProbeOutcome(Aws::Client::AWSError<NetworkMonitorErrors>(NetworkMonitorErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ProbeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMonitorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/probes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProbeId());
  };

  return UpdateProbeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
