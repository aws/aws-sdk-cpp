/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/outposts/OutpostsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/outposts/OutpostsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in OutpostsClient header */
#include <aws/outposts/model/CancelOrderResult.h>
#include <aws/outposts/model/CreateOrderResult.h>
#include <aws/outposts/model/CreateOutpostResult.h>
#include <aws/outposts/model/CreateSiteResult.h>
#include <aws/outposts/model/DeleteOutpostResult.h>
#include <aws/outposts/model/DeleteSiteResult.h>
#include <aws/outposts/model/GetCatalogItemResult.h>
#include <aws/outposts/model/GetConnectionResult.h>
#include <aws/outposts/model/GetOrderResult.h>
#include <aws/outposts/model/GetOutpostResult.h>
#include <aws/outposts/model/GetOutpostInstanceTypesResult.h>
#include <aws/outposts/model/GetSiteResult.h>
#include <aws/outposts/model/GetSiteAddressResult.h>
#include <aws/outposts/model/ListAssetsResult.h>
#include <aws/outposts/model/ListCatalogItemsResult.h>
#include <aws/outposts/model/ListOrdersResult.h>
#include <aws/outposts/model/ListOutpostsResult.h>
#include <aws/outposts/model/ListSitesResult.h>
#include <aws/outposts/model/ListTagsForResourceResult.h>
#include <aws/outposts/model/StartConnectionResult.h>
#include <aws/outposts/model/TagResourceResult.h>
#include <aws/outposts/model/UntagResourceResult.h>
#include <aws/outposts/model/UpdateOutpostResult.h>
#include <aws/outposts/model/UpdateSiteResult.h>
#include <aws/outposts/model/UpdateSiteAddressResult.h>
#include <aws/outposts/model/UpdateSiteRackPhysicalPropertiesResult.h>
/* End of service model headers required in OutpostsClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace Outposts
  {
    using OutpostsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using OutpostsEndpointProviderBase = Aws::Outposts::Endpoint::OutpostsEndpointProviderBase;
    using OutpostsEndpointProvider = Aws::Outposts::Endpoint::OutpostsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in OutpostsClient header */
      class CancelOrderRequest;
      class CreateOrderRequest;
      class CreateOutpostRequest;
      class CreateSiteRequest;
      class DeleteOutpostRequest;
      class DeleteSiteRequest;
      class GetCatalogItemRequest;
      class GetConnectionRequest;
      class GetOrderRequest;
      class GetOutpostRequest;
      class GetOutpostInstanceTypesRequest;
      class GetSiteRequest;
      class GetSiteAddressRequest;
      class ListAssetsRequest;
      class ListCatalogItemsRequest;
      class ListOrdersRequest;
      class ListOutpostsRequest;
      class ListSitesRequest;
      class ListTagsForResourceRequest;
      class StartConnectionRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateOutpostRequest;
      class UpdateSiteRequest;
      class UpdateSiteAddressRequest;
      class UpdateSiteRackPhysicalPropertiesRequest;
      /* End of service model forward declarations required in OutpostsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelOrderResult, OutpostsError> CancelOrderOutcome;
      typedef Aws::Utils::Outcome<CreateOrderResult, OutpostsError> CreateOrderOutcome;
      typedef Aws::Utils::Outcome<CreateOutpostResult, OutpostsError> CreateOutpostOutcome;
      typedef Aws::Utils::Outcome<CreateSiteResult, OutpostsError> CreateSiteOutcome;
      typedef Aws::Utils::Outcome<DeleteOutpostResult, OutpostsError> DeleteOutpostOutcome;
      typedef Aws::Utils::Outcome<DeleteSiteResult, OutpostsError> DeleteSiteOutcome;
      typedef Aws::Utils::Outcome<GetCatalogItemResult, OutpostsError> GetCatalogItemOutcome;
      typedef Aws::Utils::Outcome<GetConnectionResult, OutpostsError> GetConnectionOutcome;
      typedef Aws::Utils::Outcome<GetOrderResult, OutpostsError> GetOrderOutcome;
      typedef Aws::Utils::Outcome<GetOutpostResult, OutpostsError> GetOutpostOutcome;
      typedef Aws::Utils::Outcome<GetOutpostInstanceTypesResult, OutpostsError> GetOutpostInstanceTypesOutcome;
      typedef Aws::Utils::Outcome<GetSiteResult, OutpostsError> GetSiteOutcome;
      typedef Aws::Utils::Outcome<GetSiteAddressResult, OutpostsError> GetSiteAddressOutcome;
      typedef Aws::Utils::Outcome<ListAssetsResult, OutpostsError> ListAssetsOutcome;
      typedef Aws::Utils::Outcome<ListCatalogItemsResult, OutpostsError> ListCatalogItemsOutcome;
      typedef Aws::Utils::Outcome<ListOrdersResult, OutpostsError> ListOrdersOutcome;
      typedef Aws::Utils::Outcome<ListOutpostsResult, OutpostsError> ListOutpostsOutcome;
      typedef Aws::Utils::Outcome<ListSitesResult, OutpostsError> ListSitesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, OutpostsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartConnectionResult, OutpostsError> StartConnectionOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, OutpostsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, OutpostsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateOutpostResult, OutpostsError> UpdateOutpostOutcome;
      typedef Aws::Utils::Outcome<UpdateSiteResult, OutpostsError> UpdateSiteOutcome;
      typedef Aws::Utils::Outcome<UpdateSiteAddressResult, OutpostsError> UpdateSiteAddressOutcome;
      typedef Aws::Utils::Outcome<UpdateSiteRackPhysicalPropertiesResult, OutpostsError> UpdateSiteRackPhysicalPropertiesOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelOrderOutcome> CancelOrderOutcomeCallable;
      typedef std::future<CreateOrderOutcome> CreateOrderOutcomeCallable;
      typedef std::future<CreateOutpostOutcome> CreateOutpostOutcomeCallable;
      typedef std::future<CreateSiteOutcome> CreateSiteOutcomeCallable;
      typedef std::future<DeleteOutpostOutcome> DeleteOutpostOutcomeCallable;
      typedef std::future<DeleteSiteOutcome> DeleteSiteOutcomeCallable;
      typedef std::future<GetCatalogItemOutcome> GetCatalogItemOutcomeCallable;
      typedef std::future<GetConnectionOutcome> GetConnectionOutcomeCallable;
      typedef std::future<GetOrderOutcome> GetOrderOutcomeCallable;
      typedef std::future<GetOutpostOutcome> GetOutpostOutcomeCallable;
      typedef std::future<GetOutpostInstanceTypesOutcome> GetOutpostInstanceTypesOutcomeCallable;
      typedef std::future<GetSiteOutcome> GetSiteOutcomeCallable;
      typedef std::future<GetSiteAddressOutcome> GetSiteAddressOutcomeCallable;
      typedef std::future<ListAssetsOutcome> ListAssetsOutcomeCallable;
      typedef std::future<ListCatalogItemsOutcome> ListCatalogItemsOutcomeCallable;
      typedef std::future<ListOrdersOutcome> ListOrdersOutcomeCallable;
      typedef std::future<ListOutpostsOutcome> ListOutpostsOutcomeCallable;
      typedef std::future<ListSitesOutcome> ListSitesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartConnectionOutcome> StartConnectionOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateOutpostOutcome> UpdateOutpostOutcomeCallable;
      typedef std::future<UpdateSiteOutcome> UpdateSiteOutcomeCallable;
      typedef std::future<UpdateSiteAddressOutcome> UpdateSiteAddressOutcomeCallable;
      typedef std::future<UpdateSiteRackPhysicalPropertiesOutcome> UpdateSiteRackPhysicalPropertiesOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class OutpostsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const OutpostsClient*, const Model::CancelOrderRequest&, const Model::CancelOrderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelOrderResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::CreateOrderRequest&, const Model::CreateOrderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOrderResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::CreateOutpostRequest&, const Model::CreateOutpostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOutpostResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::CreateSiteRequest&, const Model::CreateSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSiteResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::DeleteOutpostRequest&, const Model::DeleteOutpostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOutpostResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::DeleteSiteRequest&, const Model::DeleteSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSiteResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::GetCatalogItemRequest&, const Model::GetCatalogItemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCatalogItemResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::GetConnectionRequest&, const Model::GetConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectionResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::GetOrderRequest&, const Model::GetOrderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOrderResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::GetOutpostRequest&, const Model::GetOutpostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOutpostResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::GetOutpostInstanceTypesRequest&, const Model::GetOutpostInstanceTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOutpostInstanceTypesResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::GetSiteRequest&, const Model::GetSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSiteResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::GetSiteAddressRequest&, const Model::GetSiteAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSiteAddressResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::ListAssetsRequest&, const Model::ListAssetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssetsResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::ListCatalogItemsRequest&, const Model::ListCatalogItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCatalogItemsResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::ListOrdersRequest&, const Model::ListOrdersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrdersResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::ListOutpostsRequest&, const Model::ListOutpostsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOutpostsResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::ListSitesRequest&, const Model::ListSitesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSitesResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::StartConnectionRequest&, const Model::StartConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartConnectionResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::UpdateOutpostRequest&, const Model::UpdateOutpostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOutpostResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::UpdateSiteRequest&, const Model::UpdateSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSiteResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::UpdateSiteAddressRequest&, const Model::UpdateSiteAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSiteAddressResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::UpdateSiteRackPhysicalPropertiesRequest&, const Model::UpdateSiteRackPhysicalPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSiteRackPhysicalPropertiesResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Outposts
} // namespace Aws
