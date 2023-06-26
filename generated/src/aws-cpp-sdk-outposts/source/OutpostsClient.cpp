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

#include <aws/outposts/OutpostsClient.h>
#include <aws/outposts/OutpostsErrorMarshaller.h>
#include <aws/outposts/OutpostsEndpointProvider.h>
#include <aws/outposts/model/CancelOrderRequest.h>
#include <aws/outposts/model/CreateOrderRequest.h>
#include <aws/outposts/model/CreateOutpostRequest.h>
#include <aws/outposts/model/CreateSiteRequest.h>
#include <aws/outposts/model/DeleteOutpostRequest.h>
#include <aws/outposts/model/DeleteSiteRequest.h>
#include <aws/outposts/model/GetCatalogItemRequest.h>
#include <aws/outposts/model/GetConnectionRequest.h>
#include <aws/outposts/model/GetOrderRequest.h>
#include <aws/outposts/model/GetOutpostRequest.h>
#include <aws/outposts/model/GetOutpostInstanceTypesRequest.h>
#include <aws/outposts/model/GetSiteRequest.h>
#include <aws/outposts/model/GetSiteAddressRequest.h>
#include <aws/outposts/model/ListAssetsRequest.h>
#include <aws/outposts/model/ListCatalogItemsRequest.h>
#include <aws/outposts/model/ListOrdersRequest.h>
#include <aws/outposts/model/ListOutpostsRequest.h>
#include <aws/outposts/model/ListSitesRequest.h>
#include <aws/outposts/model/ListTagsForResourceRequest.h>
#include <aws/outposts/model/StartConnectionRequest.h>
#include <aws/outposts/model/TagResourceRequest.h>
#include <aws/outposts/model/UntagResourceRequest.h>
#include <aws/outposts/model/UpdateOutpostRequest.h>
#include <aws/outposts/model/UpdateSiteRequest.h>
#include <aws/outposts/model/UpdateSiteAddressRequest.h>
#include <aws/outposts/model/UpdateSiteRackPhysicalPropertiesRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Outposts;
using namespace Aws::Outposts::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* OutpostsClient::SERVICE_NAME = "outposts";
const char* OutpostsClient::ALLOCATION_TAG = "OutpostsClient";

OutpostsClient::OutpostsClient(const Outposts::OutpostsClientConfiguration& clientConfiguration,
                               std::shared_ptr<OutpostsEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OutpostsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

OutpostsClient::OutpostsClient(const AWSCredentials& credentials,
                               std::shared_ptr<OutpostsEndpointProviderBase> endpointProvider,
                               const Outposts::OutpostsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OutpostsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

OutpostsClient::OutpostsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<OutpostsEndpointProviderBase> endpointProvider,
                               const Outposts::OutpostsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OutpostsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  OutpostsClient::OutpostsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OutpostsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<OutpostsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

OutpostsClient::OutpostsClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OutpostsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<OutpostsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

OutpostsClient::OutpostsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<OutpostsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<OutpostsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
OutpostsClient::~OutpostsClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<OutpostsEndpointProviderBase>& OutpostsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void OutpostsClient::init(const Outposts::OutpostsClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Outposts");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void OutpostsClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CancelOrderOutcome OutpostsClient::CancelOrder(const CancelOrderRequest& request) const
{
  AWS_OPERATION_GUARD(CancelOrder);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelOrder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.OrderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelOrder", "Required field: OrderId, is not set");
    return CancelOrderOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OrderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelOrder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/orders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOrderId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  return CancelOrderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateOrderOutcome OutpostsClient::CreateOrder(const CreateOrderRequest& request) const
{
  AWS_OPERATION_GUARD(CreateOrder);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateOrder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateOrder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/orders");
  return CreateOrderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateOutpostOutcome OutpostsClient::CreateOutpost(const CreateOutpostRequest& request) const
{
  AWS_OPERATION_GUARD(CreateOutpost);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateOutpost, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateOutpost, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/outposts");
  return CreateOutpostOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSiteOutcome OutpostsClient::CreateSite(const CreateSiteRequest& request) const
{
  AWS_OPERATION_GUARD(CreateSite);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sites");
  return CreateSiteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteOutpostOutcome OutpostsClient::DeleteOutpost(const DeleteOutpostRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteOutpost);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteOutpost, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.OutpostIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOutpost", "Required field: OutpostId, is not set");
    return DeleteOutpostOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OutpostId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteOutpost, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/outposts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutpostId());
  return DeleteOutpostOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSiteOutcome OutpostsClient::DeleteSite(const DeleteSiteRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSite);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SiteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSite", "Required field: SiteId, is not set");
    return DeleteSiteOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SiteId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sites/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSiteId());
  return DeleteSiteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

GetCatalogItemOutcome OutpostsClient::GetCatalogItem(const GetCatalogItemRequest& request) const
{
  AWS_OPERATION_GUARD(GetCatalogItem);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCatalogItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CatalogItemIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCatalogItem", "Required field: CatalogItemId, is not set");
    return GetCatalogItemOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CatalogItemId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCatalogItem, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/catalog/item/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCatalogItemId());
  return GetCatalogItemOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConnectionOutcome OutpostsClient::GetConnection(const GetConnectionRequest& request) const
{
  AWS_OPERATION_GUARD(GetConnection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConnection", "Required field: ConnectionId, is not set");
    return GetConnectionOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/connections/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectionId());
  return GetConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetOrderOutcome OutpostsClient::GetOrder(const GetOrderRequest& request) const
{
  AWS_OPERATION_GUARD(GetOrder);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOrder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.OrderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOrder", "Required field: OrderId, is not set");
    return GetOrderOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OrderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOrder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/orders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOrderId());
  return GetOrderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetOutpostOutcome OutpostsClient::GetOutpost(const GetOutpostRequest& request) const
{
  AWS_OPERATION_GUARD(GetOutpost);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOutpost, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.OutpostIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOutpost", "Required field: OutpostId, is not set");
    return GetOutpostOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OutpostId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOutpost, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/outposts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutpostId());
  return GetOutpostOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetOutpostInstanceTypesOutcome OutpostsClient::GetOutpostInstanceTypes(const GetOutpostInstanceTypesRequest& request) const
{
  AWS_OPERATION_GUARD(GetOutpostInstanceTypes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOutpostInstanceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.OutpostIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOutpostInstanceTypes", "Required field: OutpostId, is not set");
    return GetOutpostInstanceTypesOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OutpostId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOutpostInstanceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/outposts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutpostId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/instanceTypes");
  return GetOutpostInstanceTypesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSiteOutcome OutpostsClient::GetSite(const GetSiteRequest& request) const
{
  AWS_OPERATION_GUARD(GetSite);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SiteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSite", "Required field: SiteId, is not set");
    return GetSiteOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SiteId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sites/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSiteId());
  return GetSiteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSiteAddressOutcome OutpostsClient::GetSiteAddress(const GetSiteAddressRequest& request) const
{
  AWS_OPERATION_GUARD(GetSiteAddress);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSiteAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SiteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSiteAddress", "Required field: SiteId, is not set");
    return GetSiteAddressOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SiteId]", false));
  }
  if (!request.AddressTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSiteAddress", "Required field: AddressType, is not set");
    return GetSiteAddressOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AddressType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSiteAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sites/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSiteId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/address");
  return GetSiteAddressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAssetsOutcome OutpostsClient::ListAssets(const ListAssetsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAssets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.OutpostIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssets", "Required field: OutpostIdentifier, is not set");
    return ListAssetsOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OutpostIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/outposts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutpostIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/assets");
  return ListAssetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCatalogItemsOutcome OutpostsClient::ListCatalogItems(const ListCatalogItemsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCatalogItems);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCatalogItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCatalogItems, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/catalog/items");
  return ListCatalogItemsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListOrdersOutcome OutpostsClient::ListOrders(const ListOrdersRequest& request) const
{
  AWS_OPERATION_GUARD(ListOrders);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOrders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOrders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/list-orders");
  return ListOrdersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListOutpostsOutcome OutpostsClient::ListOutposts(const ListOutpostsRequest& request) const
{
  AWS_OPERATION_GUARD(ListOutposts);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOutposts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOutposts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/outposts");
  return ListOutpostsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSitesOutcome OutpostsClient::ListSites(const ListSitesRequest& request) const
{
  AWS_OPERATION_GUARD(ListSites);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSites, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSites, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sites");
  return ListSitesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome OutpostsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

StartConnectionOutcome OutpostsClient::StartConnection(const StartConnectionRequest& request) const
{
  AWS_OPERATION_GUARD(StartConnection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/connections");
  return StartConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome OutpostsClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome OutpostsClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateOutpostOutcome OutpostsClient::UpdateOutpost(const UpdateOutpostRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateOutpost);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateOutpost, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.OutpostIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateOutpost", "Required field: OutpostId, is not set");
    return UpdateOutpostOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OutpostId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateOutpost, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/outposts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOutpostId());
  return UpdateOutpostOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateSiteOutcome OutpostsClient::UpdateSite(const UpdateSiteRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSite);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SiteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSite", "Required field: SiteId, is not set");
    return UpdateSiteOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SiteId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sites/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSiteId());
  return UpdateSiteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateSiteAddressOutcome OutpostsClient::UpdateSiteAddress(const UpdateSiteAddressRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSiteAddress);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSiteAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SiteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSiteAddress", "Required field: SiteId, is not set");
    return UpdateSiteAddressOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SiteId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSiteAddress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sites/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSiteId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/address");
  return UpdateSiteAddressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSiteRackPhysicalPropertiesOutcome OutpostsClient::UpdateSiteRackPhysicalProperties(const UpdateSiteRackPhysicalPropertiesRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSiteRackPhysicalProperties);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSiteRackPhysicalProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SiteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSiteRackPhysicalProperties", "Required field: SiteId, is not set");
    return UpdateSiteRackPhysicalPropertiesOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SiteId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSiteRackPhysicalProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sites/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSiteId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rackPhysicalProperties");
  return UpdateSiteRackPhysicalPropertiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

