/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/resource-explorer-2/ResourceExplorer2Errors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/resource-explorer-2/ResourceExplorer2EndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ResourceExplorer2Client header */
#include <aws/resource-explorer-2/model/AssociateDefaultViewResult.h>
#include <aws/resource-explorer-2/model/BatchGetViewResult.h>
#include <aws/resource-explorer-2/model/CreateIndexResult.h>
#include <aws/resource-explorer-2/model/CreateViewResult.h>
#include <aws/resource-explorer-2/model/DeleteIndexResult.h>
#include <aws/resource-explorer-2/model/DeleteViewResult.h>
#include <aws/resource-explorer-2/model/GetDefaultViewResult.h>
#include <aws/resource-explorer-2/model/GetIndexResult.h>
#include <aws/resource-explorer-2/model/GetViewResult.h>
#include <aws/resource-explorer-2/model/ListIndexesResult.h>
#include <aws/resource-explorer-2/model/ListSupportedResourceTypesResult.h>
#include <aws/resource-explorer-2/model/ListTagsForResourceResult.h>
#include <aws/resource-explorer-2/model/ListViewsResult.h>
#include <aws/resource-explorer-2/model/SearchResult.h>
#include <aws/resource-explorer-2/model/TagResourceResult.h>
#include <aws/resource-explorer-2/model/UntagResourceResult.h>
#include <aws/resource-explorer-2/model/UpdateIndexTypeResult.h>
#include <aws/resource-explorer-2/model/UpdateViewResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ResourceExplorer2Client header */

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

  namespace ResourceExplorer2
  {
    using ResourceExplorer2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ResourceExplorer2EndpointProviderBase = Aws::ResourceExplorer2::Endpoint::ResourceExplorer2EndpointProviderBase;
    using ResourceExplorer2EndpointProvider = Aws::ResourceExplorer2::Endpoint::ResourceExplorer2EndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ResourceExplorer2Client header */
      class AssociateDefaultViewRequest;
      class BatchGetViewRequest;
      class CreateIndexRequest;
      class CreateViewRequest;
      class DeleteIndexRequest;
      class DeleteViewRequest;
      class GetViewRequest;
      class ListIndexesRequest;
      class ListSupportedResourceTypesRequest;
      class ListTagsForResourceRequest;
      class ListViewsRequest;
      class SearchRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateIndexTypeRequest;
      class UpdateViewRequest;
      /* End of service model forward declarations required in ResourceExplorer2Client header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateDefaultViewResult, ResourceExplorer2Error> AssociateDefaultViewOutcome;
      typedef Aws::Utils::Outcome<BatchGetViewResult, ResourceExplorer2Error> BatchGetViewOutcome;
      typedef Aws::Utils::Outcome<CreateIndexResult, ResourceExplorer2Error> CreateIndexOutcome;
      typedef Aws::Utils::Outcome<CreateViewResult, ResourceExplorer2Error> CreateViewOutcome;
      typedef Aws::Utils::Outcome<DeleteIndexResult, ResourceExplorer2Error> DeleteIndexOutcome;
      typedef Aws::Utils::Outcome<DeleteViewResult, ResourceExplorer2Error> DeleteViewOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ResourceExplorer2Error> DisassociateDefaultViewOutcome;
      typedef Aws::Utils::Outcome<GetDefaultViewResult, ResourceExplorer2Error> GetDefaultViewOutcome;
      typedef Aws::Utils::Outcome<GetIndexResult, ResourceExplorer2Error> GetIndexOutcome;
      typedef Aws::Utils::Outcome<GetViewResult, ResourceExplorer2Error> GetViewOutcome;
      typedef Aws::Utils::Outcome<ListIndexesResult, ResourceExplorer2Error> ListIndexesOutcome;
      typedef Aws::Utils::Outcome<ListSupportedResourceTypesResult, ResourceExplorer2Error> ListSupportedResourceTypesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ResourceExplorer2Error> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListViewsResult, ResourceExplorer2Error> ListViewsOutcome;
      typedef Aws::Utils::Outcome<SearchResult, ResourceExplorer2Error> SearchOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, ResourceExplorer2Error> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, ResourceExplorer2Error> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateIndexTypeResult, ResourceExplorer2Error> UpdateIndexTypeOutcome;
      typedef Aws::Utils::Outcome<UpdateViewResult, ResourceExplorer2Error> UpdateViewOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateDefaultViewOutcome> AssociateDefaultViewOutcomeCallable;
      typedef std::future<BatchGetViewOutcome> BatchGetViewOutcomeCallable;
      typedef std::future<CreateIndexOutcome> CreateIndexOutcomeCallable;
      typedef std::future<CreateViewOutcome> CreateViewOutcomeCallable;
      typedef std::future<DeleteIndexOutcome> DeleteIndexOutcomeCallable;
      typedef std::future<DeleteViewOutcome> DeleteViewOutcomeCallable;
      typedef std::future<DisassociateDefaultViewOutcome> DisassociateDefaultViewOutcomeCallable;
      typedef std::future<GetDefaultViewOutcome> GetDefaultViewOutcomeCallable;
      typedef std::future<GetIndexOutcome> GetIndexOutcomeCallable;
      typedef std::future<GetViewOutcome> GetViewOutcomeCallable;
      typedef std::future<ListIndexesOutcome> ListIndexesOutcomeCallable;
      typedef std::future<ListSupportedResourceTypesOutcome> ListSupportedResourceTypesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListViewsOutcome> ListViewsOutcomeCallable;
      typedef std::future<SearchOutcome> SearchOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateIndexTypeOutcome> UpdateIndexTypeOutcomeCallable;
      typedef std::future<UpdateViewOutcome> UpdateViewOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ResourceExplorer2Client;

    /* Service model async handlers definitions */
    typedef std::function<void(const ResourceExplorer2Client*, const Model::AssociateDefaultViewRequest&, const Model::AssociateDefaultViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDefaultViewResponseReceivedHandler;
    typedef std::function<void(const ResourceExplorer2Client*, const Model::BatchGetViewRequest&, const Model::BatchGetViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetViewResponseReceivedHandler;
    typedef std::function<void(const ResourceExplorer2Client*, const Model::CreateIndexRequest&, const Model::CreateIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIndexResponseReceivedHandler;
    typedef std::function<void(const ResourceExplorer2Client*, const Model::CreateViewRequest&, const Model::CreateViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateViewResponseReceivedHandler;
    typedef std::function<void(const ResourceExplorer2Client*, const Model::DeleteIndexRequest&, const Model::DeleteIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIndexResponseReceivedHandler;
    typedef std::function<void(const ResourceExplorer2Client*, const Model::DeleteViewRequest&, const Model::DeleteViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteViewResponseReceivedHandler;
    typedef std::function<void(const ResourceExplorer2Client*, const Model::DisassociateDefaultViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateDefaultViewResponseReceivedHandler;
    typedef std::function<void(const ResourceExplorer2Client*, const Model::GetDefaultViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDefaultViewResponseReceivedHandler;
    typedef std::function<void(const ResourceExplorer2Client*, const Model::GetIndexOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIndexResponseReceivedHandler;
    typedef std::function<void(const ResourceExplorer2Client*, const Model::GetViewRequest&, const Model::GetViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetViewResponseReceivedHandler;
    typedef std::function<void(const ResourceExplorer2Client*, const Model::ListIndexesRequest&, const Model::ListIndexesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIndexesResponseReceivedHandler;
    typedef std::function<void(const ResourceExplorer2Client*, const Model::ListSupportedResourceTypesRequest&, const Model::ListSupportedResourceTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSupportedResourceTypesResponseReceivedHandler;
    typedef std::function<void(const ResourceExplorer2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ResourceExplorer2Client*, const Model::ListViewsRequest&, const Model::ListViewsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListViewsResponseReceivedHandler;
    typedef std::function<void(const ResourceExplorer2Client*, const Model::SearchRequest&, const Model::SearchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchResponseReceivedHandler;
    typedef std::function<void(const ResourceExplorer2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ResourceExplorer2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ResourceExplorer2Client*, const Model::UpdateIndexTypeRequest&, const Model::UpdateIndexTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIndexTypeResponseReceivedHandler;
    typedef std::function<void(const ResourceExplorer2Client*, const Model::UpdateViewRequest&, const Model::UpdateViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateViewResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ResourceExplorer2
} // namespace Aws
