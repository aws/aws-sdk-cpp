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

#include <aws/mediaconnect/MediaConnectClient.h>
#include <aws/mediaconnect/MediaConnectErrorMarshaller.h>
#include <aws/mediaconnect/MediaConnectEndpointProvider.h>
#include <aws/mediaconnect/model/AddFlowMediaStreamsRequest.h>
#include <aws/mediaconnect/model/AddFlowOutputsRequest.h>
#include <aws/mediaconnect/model/AddFlowSourcesRequest.h>
#include <aws/mediaconnect/model/AddFlowVpcInterfacesRequest.h>
#include <aws/mediaconnect/model/CreateFlowRequest.h>
#include <aws/mediaconnect/model/DeleteFlowRequest.h>
#include <aws/mediaconnect/model/DescribeFlowRequest.h>
#include <aws/mediaconnect/model/DescribeOfferingRequest.h>
#include <aws/mediaconnect/model/DescribeReservationRequest.h>
#include <aws/mediaconnect/model/GrantFlowEntitlementsRequest.h>
#include <aws/mediaconnect/model/ListEntitlementsRequest.h>
#include <aws/mediaconnect/model/ListFlowsRequest.h>
#include <aws/mediaconnect/model/ListOfferingsRequest.h>
#include <aws/mediaconnect/model/ListReservationsRequest.h>
#include <aws/mediaconnect/model/ListTagsForResourceRequest.h>
#include <aws/mediaconnect/model/PurchaseOfferingRequest.h>
#include <aws/mediaconnect/model/RemoveFlowMediaStreamRequest.h>
#include <aws/mediaconnect/model/RemoveFlowOutputRequest.h>
#include <aws/mediaconnect/model/RemoveFlowSourceRequest.h>
#include <aws/mediaconnect/model/RemoveFlowVpcInterfaceRequest.h>
#include <aws/mediaconnect/model/RevokeFlowEntitlementRequest.h>
#include <aws/mediaconnect/model/StartFlowRequest.h>
#include <aws/mediaconnect/model/StopFlowRequest.h>
#include <aws/mediaconnect/model/TagResourceRequest.h>
#include <aws/mediaconnect/model/UntagResourceRequest.h>
#include <aws/mediaconnect/model/UpdateFlowRequest.h>
#include <aws/mediaconnect/model/UpdateFlowEntitlementRequest.h>
#include <aws/mediaconnect/model/UpdateFlowMediaStreamRequest.h>
#include <aws/mediaconnect/model/UpdateFlowOutputRequest.h>
#include <aws/mediaconnect/model/UpdateFlowSourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MediaConnect;
using namespace Aws::MediaConnect::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* MediaConnectClient::SERVICE_NAME = "mediaconnect";
const char* MediaConnectClient::ALLOCATION_TAG = "MediaConnectClient";

MediaConnectClient::MediaConnectClient(const MediaConnect::MediaConnectClientConfiguration& clientConfiguration,
                                       std::shared_ptr<MediaConnectEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaConnectErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MediaConnectClient::MediaConnectClient(const AWSCredentials& credentials,
                                       std::shared_ptr<MediaConnectEndpointProviderBase> endpointProvider,
                                       const MediaConnect::MediaConnectClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MediaConnectClient::MediaConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<MediaConnectEndpointProviderBase> endpointProvider,
                                       const MediaConnect::MediaConnectClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  MediaConnectClient::MediaConnectClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaConnectErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<MediaConnectEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MediaConnectClient::MediaConnectClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MediaConnectEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MediaConnectClient::MediaConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MediaConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MediaConnectEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
MediaConnectClient::~MediaConnectClient()
{
}

std::shared_ptr<MediaConnectEndpointProviderBase>& MediaConnectClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void MediaConnectClient::init(const MediaConnect::MediaConnectClientConfiguration& config)
{
  AWSClient::SetServiceClientName("MediaConnect");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void MediaConnectClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AddFlowMediaStreamsOutcome MediaConnectClient::AddFlowMediaStreams(const AddFlowMediaStreamsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddFlowMediaStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddFlowMediaStreams", "Required field: FlowArn, is not set");
    return AddFlowMediaStreamsOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddFlowMediaStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/mediaStreams");
  return AddFlowMediaStreamsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddFlowOutputsOutcome MediaConnectClient::AddFlowOutputs(const AddFlowOutputsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddFlowOutputs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddFlowOutputs", "Required field: FlowArn, is not set");
    return AddFlowOutputsOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddFlowOutputs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/outputs");
  return AddFlowOutputsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddFlowSourcesOutcome MediaConnectClient::AddFlowSources(const AddFlowSourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddFlowSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddFlowSources", "Required field: FlowArn, is not set");
    return AddFlowSourcesOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddFlowSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/source");
  return AddFlowSourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddFlowVpcInterfacesOutcome MediaConnectClient::AddFlowVpcInterfaces(const AddFlowVpcInterfacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddFlowVpcInterfaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddFlowVpcInterfaces", "Required field: FlowArn, is not set");
    return AddFlowVpcInterfacesOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddFlowVpcInterfaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vpcInterfaces");
  return AddFlowVpcInterfacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFlowOutcome MediaConnectClient::CreateFlow(const CreateFlowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows");
  return CreateFlowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFlowOutcome MediaConnectClient::DeleteFlow(const DeleteFlowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFlow", "Required field: FlowArn, is not set");
    return DeleteFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  return DeleteFlowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DescribeFlowOutcome MediaConnectClient::DescribeFlow(const DescribeFlowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFlow", "Required field: FlowArn, is not set");
    return DescribeFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  return DescribeFlowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeOfferingOutcome MediaConnectClient::DescribeOffering(const DescribeOfferingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.OfferingArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeOffering", "Required field: OfferingArn, is not set");
    return DescribeOfferingOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OfferingArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/offerings/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOfferingArn());
  return DescribeOfferingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeReservationOutcome MediaConnectClient::DescribeReservation(const DescribeReservationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReservationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeReservation", "Required field: ReservationArn, is not set");
    return DescribeReservationOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReservationArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/reservations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReservationArn());
  return DescribeReservationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GrantFlowEntitlementsOutcome MediaConnectClient::GrantFlowEntitlements(const GrantFlowEntitlementsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GrantFlowEntitlements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GrantFlowEntitlements", "Required field: FlowArn, is not set");
    return GrantFlowEntitlementsOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GrantFlowEntitlements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/entitlements");
  return GrantFlowEntitlementsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEntitlementsOutcome MediaConnectClient::ListEntitlements(const ListEntitlementsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEntitlements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEntitlements, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/entitlements");
  return ListEntitlementsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFlowsOutcome MediaConnectClient::ListFlows(const ListFlowsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFlows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFlows, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows");
  return ListFlowsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListOfferingsOutcome MediaConnectClient::ListOfferings(const ListOfferingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/offerings");
  return ListOfferingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListReservationsOutcome MediaConnectClient::ListReservations(const ListReservationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListReservations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListReservations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/reservations");
  return ListReservationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome MediaConnectClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

PurchaseOfferingOutcome MediaConnectClient::PurchaseOffering(const PurchaseOfferingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PurchaseOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.OfferingArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PurchaseOffering", "Required field: OfferingArn, is not set");
    return PurchaseOfferingOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OfferingArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PurchaseOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/offerings/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOfferingArn());
  return PurchaseOfferingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveFlowMediaStreamOutcome MediaConnectClient::RemoveFlowMediaStream(const RemoveFlowMediaStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveFlowMediaStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveFlowMediaStream", "Required field: FlowArn, is not set");
    return RemoveFlowMediaStreamOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  if (!request.MediaStreamNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveFlowMediaStream", "Required field: MediaStreamName, is not set");
    return RemoveFlowMediaStreamOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaStreamName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveFlowMediaStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/mediaStreams/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMediaStreamName());
  return RemoveFlowMediaStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

RemoveFlowOutputOutcome MediaConnectClient::RemoveFlowOutput(const RemoveFlowOutputRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveFlowOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveFlowOutput", "Required field: FlowArn, is not set");
    return RemoveFlowOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  if (!request.OutputArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveFlowOutput", "Required field: OutputArn, is not set");
    return RemoveFlowOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OutputArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveFlowOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/outputs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutputArn());
  return RemoveFlowOutputOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

RemoveFlowSourceOutcome MediaConnectClient::RemoveFlowSource(const RemoveFlowSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveFlowSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveFlowSource", "Required field: FlowArn, is not set");
    return RemoveFlowSourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  if (!request.SourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveFlowSource", "Required field: SourceArn, is not set");
    return RemoveFlowSourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveFlowSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/source/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceArn());
  return RemoveFlowSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

RemoveFlowVpcInterfaceOutcome MediaConnectClient::RemoveFlowVpcInterface(const RemoveFlowVpcInterfaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveFlowVpcInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveFlowVpcInterface", "Required field: FlowArn, is not set");
    return RemoveFlowVpcInterfaceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  if (!request.VpcInterfaceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveFlowVpcInterface", "Required field: VpcInterfaceName, is not set");
    return RemoveFlowVpcInterfaceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcInterfaceName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveFlowVpcInterface, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vpcInterfaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVpcInterfaceName());
  return RemoveFlowVpcInterfaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

RevokeFlowEntitlementOutcome MediaConnectClient::RevokeFlowEntitlement(const RevokeFlowEntitlementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeFlowEntitlement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EntitlementArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RevokeFlowEntitlement", "Required field: EntitlementArn, is not set");
    return RevokeFlowEntitlementOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntitlementArn]", false));
  }
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RevokeFlowEntitlement", "Required field: FlowArn, is not set");
    return RevokeFlowEntitlementOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeFlowEntitlement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/entitlements/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntitlementArn());
  return RevokeFlowEntitlementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

StartFlowOutcome MediaConnectClient::StartFlow(const StartFlowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartFlow", "Required field: FlowArn, is not set");
    return StartFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/start/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  return StartFlowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopFlowOutcome MediaConnectClient::StopFlow(const StopFlowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopFlow", "Required field: FlowArn, is not set");
    return StopFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/stop/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  return StopFlowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome MediaConnectClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome MediaConnectClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateFlowOutcome MediaConnectClient::UpdateFlow(const UpdateFlowRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlow", "Required field: FlowArn, is not set");
    return UpdateFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFlow, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  return UpdateFlowOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFlowEntitlementOutcome MediaConnectClient::UpdateFlowEntitlement(const UpdateFlowEntitlementRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFlowEntitlement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EntitlementArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlowEntitlement", "Required field: EntitlementArn, is not set");
    return UpdateFlowEntitlementOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntitlementArn]", false));
  }
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlowEntitlement", "Required field: FlowArn, is not set");
    return UpdateFlowEntitlementOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFlowEntitlement, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/entitlements/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEntitlementArn());
  return UpdateFlowEntitlementOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFlowMediaStreamOutcome MediaConnectClient::UpdateFlowMediaStream(const UpdateFlowMediaStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFlowMediaStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlowMediaStream", "Required field: FlowArn, is not set");
    return UpdateFlowMediaStreamOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  if (!request.MediaStreamNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlowMediaStream", "Required field: MediaStreamName, is not set");
    return UpdateFlowMediaStreamOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaStreamName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFlowMediaStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/mediaStreams/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMediaStreamName());
  return UpdateFlowMediaStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFlowOutputOutcome MediaConnectClient::UpdateFlowOutput(const UpdateFlowOutputRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFlowOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlowOutput", "Required field: FlowArn, is not set");
    return UpdateFlowOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  if (!request.OutputArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlowOutput", "Required field: OutputArn, is not set");
    return UpdateFlowOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OutputArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFlowOutput, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/outputs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutputArn());
  return UpdateFlowOutputOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFlowSourceOutcome MediaConnectClient::UpdateFlowSource(const UpdateFlowSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFlowSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlowSource", "Required field: FlowArn, is not set");
    return UpdateFlowSourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  if (!request.SourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlowSource", "Required field: SourceArn, is not set");
    return UpdateFlowSourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFlowSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/flows/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/source/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSourceArn());
  return UpdateFlowSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

