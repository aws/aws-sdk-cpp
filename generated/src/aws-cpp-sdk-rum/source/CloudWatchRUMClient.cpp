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

#include <aws/rum/CloudWatchRUMClient.h>
#include <aws/rum/CloudWatchRUMErrorMarshaller.h>
#include <aws/rum/CloudWatchRUMEndpointProvider.h>
#include <aws/rum/model/BatchCreateRumMetricDefinitionsRequest.h>
#include <aws/rum/model/BatchDeleteRumMetricDefinitionsRequest.h>
#include <aws/rum/model/BatchGetRumMetricDefinitionsRequest.h>
#include <aws/rum/model/CreateAppMonitorRequest.h>
#include <aws/rum/model/DeleteAppMonitorRequest.h>
#include <aws/rum/model/DeleteRumMetricsDestinationRequest.h>
#include <aws/rum/model/GetAppMonitorRequest.h>
#include <aws/rum/model/GetAppMonitorDataRequest.h>
#include <aws/rum/model/ListAppMonitorsRequest.h>
#include <aws/rum/model/ListRumMetricsDestinationsRequest.h>
#include <aws/rum/model/ListTagsForResourceRequest.h>
#include <aws/rum/model/PutRumEventsRequest.h>
#include <aws/rum/model/PutRumMetricsDestinationRequest.h>
#include <aws/rum/model/TagResourceRequest.h>
#include <aws/rum/model/UntagResourceRequest.h>
#include <aws/rum/model/UpdateAppMonitorRequest.h>
#include <aws/rum/model/UpdateRumMetricDefinitionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudWatchRUM;
using namespace Aws::CloudWatchRUM::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* CloudWatchRUMClient::SERVICE_NAME = "rum";
const char* CloudWatchRUMClient::ALLOCATION_TAG = "CloudWatchRUMClient";

CloudWatchRUMClient::CloudWatchRUMClient(const CloudWatchRUM::CloudWatchRUMClientConfiguration& clientConfiguration,
                                         std::shared_ptr<CloudWatchRUMEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchRUMErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CloudWatchRUMClient::CloudWatchRUMClient(const AWSCredentials& credentials,
                                         std::shared_ptr<CloudWatchRUMEndpointProviderBase> endpointProvider,
                                         const CloudWatchRUM::CloudWatchRUMClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchRUMErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CloudWatchRUMClient::CloudWatchRUMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<CloudWatchRUMEndpointProviderBase> endpointProvider,
                                         const CloudWatchRUM::CloudWatchRUMClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchRUMErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CloudWatchRUMClient::CloudWatchRUMClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchRUMErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CloudWatchRUMEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CloudWatchRUMClient::CloudWatchRUMClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchRUMErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CloudWatchRUMEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CloudWatchRUMClient::CloudWatchRUMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchRUMErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CloudWatchRUMEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CloudWatchRUMClient::~CloudWatchRUMClient()
{
}

std::shared_ptr<CloudWatchRUMEndpointProviderBase>& CloudWatchRUMClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CloudWatchRUMClient::init(const CloudWatchRUM::CloudWatchRUMClientConfiguration& config)
{
  AWSClient::SetServiceClientName("RUM");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void CloudWatchRUMClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchCreateRumMetricDefinitionsOutcome CloudWatchRUMClient::BatchCreateRumMetricDefinitions(const BatchCreateRumMetricDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchCreateRumMetricDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppMonitorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchCreateRumMetricDefinitions", "Required field: AppMonitorName, is not set");
    return BatchCreateRumMetricDefinitionsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppMonitorName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchCreateRumMetricDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rummetrics/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppMonitorName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/metrics");
  return BatchCreateRumMetricDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteRumMetricDefinitionsOutcome CloudWatchRUMClient::BatchDeleteRumMetricDefinitions(const BatchDeleteRumMetricDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDeleteRumMetricDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppMonitorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDeleteRumMetricDefinitions", "Required field: AppMonitorName, is not set");
    return BatchDeleteRumMetricDefinitionsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppMonitorName]", false));
  }
  if (!request.DestinationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDeleteRumMetricDefinitions", "Required field: Destination, is not set");
    return BatchDeleteRumMetricDefinitionsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Destination]", false));
  }
  if (!request.MetricDefinitionIdsHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchDeleteRumMetricDefinitions", "Required field: MetricDefinitionIds, is not set");
    return BatchDeleteRumMetricDefinitionsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricDefinitionIds]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDeleteRumMetricDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rummetrics/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppMonitorName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/metrics");
  return BatchDeleteRumMetricDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

BatchGetRumMetricDefinitionsOutcome CloudWatchRUMClient::BatchGetRumMetricDefinitions(const BatchGetRumMetricDefinitionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetRumMetricDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppMonitorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchGetRumMetricDefinitions", "Required field: AppMonitorName, is not set");
    return BatchGetRumMetricDefinitionsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppMonitorName]", false));
  }
  if (!request.DestinationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchGetRumMetricDefinitions", "Required field: Destination, is not set");
    return BatchGetRumMetricDefinitionsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Destination]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetRumMetricDefinitions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rummetrics/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppMonitorName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/metrics");
  return BatchGetRumMetricDefinitionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

CreateAppMonitorOutcome CloudWatchRUMClient::CreateAppMonitor(const CreateAppMonitorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAppMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAppMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/appmonitor");
  return CreateAppMonitorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppMonitorOutcome CloudWatchRUMClient::DeleteAppMonitor(const DeleteAppMonitorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAppMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAppMonitor", "Required field: Name, is not set");
    return DeleteAppMonitorOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAppMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/appmonitor/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeleteAppMonitorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRumMetricsDestinationOutcome CloudWatchRUMClient::DeleteRumMetricsDestination(const DeleteRumMetricsDestinationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRumMetricsDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppMonitorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRumMetricsDestination", "Required field: AppMonitorName, is not set");
    return DeleteRumMetricsDestinationOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppMonitorName]", false));
  }
  if (!request.DestinationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRumMetricsDestination", "Required field: Destination, is not set");
    return DeleteRumMetricsDestinationOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Destination]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRumMetricsDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rummetrics/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppMonitorName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/metricsdestination");
  return DeleteRumMetricsDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

GetAppMonitorOutcome CloudWatchRUMClient::GetAppMonitor(const GetAppMonitorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAppMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAppMonitor", "Required field: Name, is not set");
    return GetAppMonitorOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAppMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/appmonitor/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return GetAppMonitorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAppMonitorDataOutcome CloudWatchRUMClient::GetAppMonitorData(const GetAppMonitorDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAppMonitorData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAppMonitorData", "Required field: Name, is not set");
    return GetAppMonitorDataOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAppMonitorData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/appmonitor/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data");
  return GetAppMonitorDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAppMonitorsOutcome CloudWatchRUMClient::ListAppMonitors(const ListAppMonitorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAppMonitors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAppMonitors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/appmonitors");
  return ListAppMonitorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRumMetricsDestinationsOutcome CloudWatchRUMClient::ListRumMetricsDestinations(const ListRumMetricsDestinationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRumMetricsDestinations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppMonitorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRumMetricsDestinations", "Required field: AppMonitorName, is not set");
    return ListRumMetricsDestinationsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppMonitorName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRumMetricsDestinations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rummetrics/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppMonitorName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/metricsdestination");
  return ListRumMetricsDestinationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome CloudWatchRUMClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

PutRumEventsOutcome CloudWatchRUMClient::PutRumEvents(const PutRumEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRumEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutRumEvents", "Required field: Id, is not set");
    return PutRumEventsOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutRumEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("dataplane.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutRumEventsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/appmonitors/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return PutRumEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRumMetricsDestinationOutcome CloudWatchRUMClient::PutRumMetricsDestination(const PutRumMetricsDestinationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRumMetricsDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppMonitorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutRumMetricsDestination", "Required field: AppMonitorName, is not set");
    return PutRumMetricsDestinationOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppMonitorName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutRumMetricsDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rummetrics/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppMonitorName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/metricsdestination");
  return PutRumMetricsDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome CloudWatchRUMClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome CloudWatchRUMClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateAppMonitorOutcome CloudWatchRUMClient::UpdateAppMonitor(const UpdateAppMonitorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAppMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAppMonitor", "Required field: Name, is not set");
    return UpdateAppMonitorOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAppMonitor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/appmonitor/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return UpdateAppMonitorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateRumMetricDefinitionOutcome CloudWatchRUMClient::UpdateRumMetricDefinition(const UpdateRumMetricDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRumMetricDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AppMonitorNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRumMetricDefinition", "Required field: AppMonitorName, is not set");
    return UpdateRumMetricDefinitionOutcome(Aws::Client::AWSError<CloudWatchRUMErrors>(CloudWatchRUMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppMonitorName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRumMetricDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rummetrics/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppMonitorName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/metrics");
  return UpdateRumMetricDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

