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
#include <aws/rum/CloudWatchRUMClient.h>
#include <aws/rum/CloudWatchRUMEndpointProvider.h>
#include <aws/rum/CloudWatchRUMErrorMarshaller.h>
#include <aws/rum/model/BatchCreateRumMetricDefinitionsRequest.h>
#include <aws/rum/model/BatchDeleteRumMetricDefinitionsRequest.h>
#include <aws/rum/model/BatchGetRumMetricDefinitionsRequest.h>
#include <aws/rum/model/CreateAppMonitorRequest.h>
#include <aws/rum/model/DeleteAppMonitorRequest.h>
#include <aws/rum/model/DeleteResourcePolicyRequest.h>
#include <aws/rum/model/DeleteRumMetricsDestinationRequest.h>
#include <aws/rum/model/GetAppMonitorDataRequest.h>
#include <aws/rum/model/GetAppMonitorRequest.h>
#include <aws/rum/model/GetResourcePolicyRequest.h>
#include <aws/rum/model/ListAppMonitorsRequest.h>
#include <aws/rum/model/ListRumMetricsDestinationsRequest.h>
#include <aws/rum/model/ListTagsForResourceRequest.h>
#include <aws/rum/model/PutResourcePolicyRequest.h>
#include <aws/rum/model/PutRumEventsRequest.h>
#include <aws/rum/model/PutRumMetricsDestinationRequest.h>
#include <aws/rum/model/TagResourceRequest.h>
#include <aws/rum/model/UntagResourceRequest.h>
#include <aws/rum/model/UpdateAppMonitorRequest.h>
#include <aws/rum/model/UpdateRumMetricDefinitionRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudWatchRUM;
using namespace Aws::CloudWatchRUM::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CloudWatchRUM {
const char SERVICE_NAME[] = "rum";
const char ALLOCATION_TAG[] = "CloudWatchRUMClient";
}  // namespace CloudWatchRUM
}  // namespace Aws
const char* CloudWatchRUMClient::GetServiceName() { return SERVICE_NAME; }
const char* CloudWatchRUMClient::GetAllocationTag() { return ALLOCATION_TAG; }

CloudWatchRUMClient::CloudWatchRUMClient(const CloudWatchRUM::CloudWatchRUMClientConfiguration& clientConfiguration,
                                         std::shared_ptr<CloudWatchRUMEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchRUMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudWatchRUMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchRUMClient::CloudWatchRUMClient(const AWSCredentials& credentials,
                                         std::shared_ptr<CloudWatchRUMEndpointProviderBase> endpointProvider,
                                         const CloudWatchRUM::CloudWatchRUMClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchRUMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudWatchRUMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchRUMClient::CloudWatchRUMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<CloudWatchRUMEndpointProviderBase> endpointProvider,
                                         const CloudWatchRUM::CloudWatchRUMClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchRUMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CloudWatchRUMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CloudWatchRUMClient::CloudWatchRUMClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchRUMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudWatchRUMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchRUMClient::CloudWatchRUMClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchRUMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudWatchRUMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchRUMClient::CloudWatchRUMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchRUMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudWatchRUMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CloudWatchRUMClient::~CloudWatchRUMClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CloudWatchRUMEndpointProviderBase>& CloudWatchRUMClient::accessEndpointProvider() { return m_endpointProvider; }

void CloudWatchRUMClient::init(const CloudWatchRUM::CloudWatchRUMClientConfiguration& config) {
  AWSClient::SetServiceClientName("RUM");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "rum");
}

void CloudWatchRUMClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CloudWatchRUMClient::InvokeOperationOutcome CloudWatchRUMClient::InvokeServiceOperation(
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

BatchCreateRumMetricDefinitionsOutcome CloudWatchRUMClient::BatchCreateRumMetricDefinitions(
    const BatchCreateRumMetricDefinitionsRequest& request) const {
  if (!request.AppMonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchCreateRumMetricDefinitions", "Required field: AppMonitorName, is not set");
    return BatchCreateRumMetricDefinitionsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(
        CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppMonitorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rummetrics/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppMonitorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metrics");
  };

  return BatchCreateRumMetricDefinitionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteRumMetricDefinitionsOutcome CloudWatchRUMClient::BatchDeleteRumMetricDefinitions(
    const BatchDeleteRumMetricDefinitionsRequest& request) const {
  if (!request.AppMonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteRumMetricDefinitions", "Required field: AppMonitorName, is not set");
    return BatchDeleteRumMetricDefinitionsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(
        CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppMonitorName]", false));
  }
  if (!request.DestinationHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteRumMetricDefinitions", "Required field: Destination, is not set");
    return BatchDeleteRumMetricDefinitionsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(
        CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Destination]", false));
  }
  if (!request.MetricDefinitionIdsHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteRumMetricDefinitions", "Required field: MetricDefinitionIds, is not set");
    return BatchDeleteRumMetricDefinitionsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(
        CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricDefinitionIds]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rummetrics/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppMonitorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metrics");
  };

  return BatchDeleteRumMetricDefinitionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

BatchGetRumMetricDefinitionsOutcome CloudWatchRUMClient::BatchGetRumMetricDefinitions(
    const BatchGetRumMetricDefinitionsRequest& request) const {
  if (!request.AppMonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetRumMetricDefinitions", "Required field: AppMonitorName, is not set");
    return BatchGetRumMetricDefinitionsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(
        CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppMonitorName]", false));
  }
  if (!request.DestinationHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetRumMetricDefinitions", "Required field: Destination, is not set");
    return BatchGetRumMetricDefinitionsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(
        CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Destination]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rummetrics/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppMonitorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metrics");
  };

  return BatchGetRumMetricDefinitionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

CreateAppMonitorOutcome CloudWatchRUMClient::CreateAppMonitor(const CreateAppMonitorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appmonitor");
  };

  return CreateAppMonitorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAppMonitorOutcome CloudWatchRUMClient::DeleteAppMonitor(const DeleteAppMonitorRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAppMonitor", "Required field: Name, is not set");
    return DeleteAppMonitorOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appmonitor/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteAppMonitorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteResourcePolicyOutcome CloudWatchRUMClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicy", "Required field: Name, is not set");
    return DeleteResourcePolicyOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(
        CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appmonitor/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  return DeleteResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRumMetricsDestinationOutcome CloudWatchRUMClient::DeleteRumMetricsDestination(
    const DeleteRumMetricsDestinationRequest& request) const {
  if (!request.AppMonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRumMetricsDestination", "Required field: AppMonitorName, is not set");
    return DeleteRumMetricsDestinationOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(
        CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppMonitorName]", false));
  }
  if (!request.DestinationHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRumMetricsDestination", "Required field: Destination, is not set");
    return DeleteRumMetricsDestinationOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(
        CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Destination]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rummetrics/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppMonitorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metricsdestination");
  };

  return DeleteRumMetricsDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetAppMonitorOutcome CloudWatchRUMClient::GetAppMonitor(const GetAppMonitorRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAppMonitor", "Required field: Name, is not set");
    return GetAppMonitorOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appmonitor/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return GetAppMonitorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAppMonitorDataOutcome CloudWatchRUMClient::GetAppMonitorData(const GetAppMonitorDataRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAppMonitorData", "Required field: Name, is not set");
    return GetAppMonitorDataOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appmonitor/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data");
  };

  return GetAppMonitorDataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourcePolicyOutcome CloudWatchRUMClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourcePolicy", "Required field: Name, is not set");
    return GetResourcePolicyOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appmonitor/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  return GetResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAppMonitorsOutcome CloudWatchRUMClient::ListAppMonitors(const ListAppMonitorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appmonitors");
  };

  return ListAppMonitorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRumMetricsDestinationsOutcome CloudWatchRUMClient::ListRumMetricsDestinations(const ListRumMetricsDestinationsRequest& request) const {
  if (!request.AppMonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRumMetricsDestinations", "Required field: AppMonitorName, is not set");
    return ListRumMetricsDestinationsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(
        CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppMonitorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rummetrics/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppMonitorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metricsdestination");
  };

  return ListRumMetricsDestinationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome CloudWatchRUMClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(
        CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutResourcePolicyOutcome CloudWatchRUMClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutResourcePolicy", "Required field: Name, is not set");
    return PutResourcePolicyOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appmonitor/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  };

  return PutResourcePolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutRumEventsOutcome CloudWatchRUMClient::PutRumEvents(const PutRumEventsRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutRumEvents", "Required field: Id, is not set");
    return PutRumEventsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appmonitors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return PutRumEventsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutRumMetricsDestinationOutcome CloudWatchRUMClient::PutRumMetricsDestination(const PutRumMetricsDestinationRequest& request) const {
  if (!request.AppMonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutRumMetricsDestination", "Required field: AppMonitorName, is not set");
    return PutRumMetricsDestinationOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(
        CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppMonitorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rummetrics/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppMonitorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metricsdestination");
  };

  return PutRumMetricsDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome CloudWatchRUMClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome CloudWatchRUMClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateAppMonitorOutcome CloudWatchRUMClient::UpdateAppMonitor(const UpdateAppMonitorRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAppMonitor", "Required field: Name, is not set");
    return UpdateAppMonitorOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/appmonitor/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateAppMonitorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateRumMetricDefinitionOutcome CloudWatchRUMClient::UpdateRumMetricDefinition(const UpdateRumMetricDefinitionRequest& request) const {
  if (!request.AppMonitorNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRumMetricDefinition", "Required field: AppMonitorName, is not set");
    return UpdateRumMetricDefinitionOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(
        CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppMonitorName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rummetrics/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppMonitorName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metrics");
  };

  return UpdateRumMetricDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
