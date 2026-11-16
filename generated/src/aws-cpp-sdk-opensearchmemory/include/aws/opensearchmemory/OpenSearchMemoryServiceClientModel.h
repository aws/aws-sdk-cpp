/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemoryEndpointProvider.h>
#include <aws/opensearchmemory/OpenSearchMemoryErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in OpenSearchMemoryClient header */
#include <aws/opensearchmemory/model/BatchGetEventResult.h>
#include <aws/opensearchmemory/model/CreateEventResult.h>
#include <aws/opensearchmemory/model/CreateMemoryResult.h>
#include <aws/opensearchmemory/model/CreateSpaceResult.h>
#include <aws/opensearchmemory/model/DeleteEventResult.h>
#include <aws/opensearchmemory/model/DeleteMemoryResult.h>
#include <aws/opensearchmemory/model/DeleteSpaceResult.h>
#include <aws/opensearchmemory/model/GetEventResult.h>
#include <aws/opensearchmemory/model/GetMemoryResult.h>
#include <aws/opensearchmemory/model/GetSpaceResult.h>
#include <aws/opensearchmemory/model/ListEventsResult.h>
#include <aws/opensearchmemory/model/ListMemoriesResult.h>
#include <aws/opensearchmemory/model/ListSpacesRequest.h>
#include <aws/opensearchmemory/model/ListSpacesResult.h>
#include <aws/opensearchmemory/model/ListTagsForResourceResult.h>
#include <aws/opensearchmemory/model/SearchEventsResult.h>
#include <aws/opensearchmemory/model/SearchMemoriesResult.h>
#include <aws/opensearchmemory/model/TagResourceResult.h>
#include <aws/opensearchmemory/model/UntagResourceResult.h>
#include <aws/opensearchmemory/model/UpdateMemoryResult.h>
#include <aws/opensearchmemory/model/UpdateSpaceResult.h>
/* End of service model headers required in OpenSearchMemoryClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace OpenSearchMemory {
using OpenSearchMemoryClientConfiguration = Aws::Client::GenericClientConfiguration;
using OpenSearchMemoryEndpointProviderBase = Aws::OpenSearchMemory::Endpoint::OpenSearchMemoryEndpointProviderBase;
using OpenSearchMemoryEndpointProvider = Aws::OpenSearchMemory::Endpoint::OpenSearchMemoryEndpointProvider;

namespace Model {
/* Service model forward declarations required in OpenSearchMemoryClient header */
class BatchGetEventRequest;
class CreateEventRequest;
class CreateMemoryRequest;
class CreateSpaceRequest;
class DeleteEventRequest;
class DeleteMemoryRequest;
class DeleteSpaceRequest;
class GetEventRequest;
class GetMemoryRequest;
class GetSpaceRequest;
class ListEventsRequest;
class ListMemoriesRequest;
class ListSpacesRequest;
class ListTagsForResourceRequest;
class SearchEventsRequest;
class SearchMemoriesRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateMemoryRequest;
class UpdateSpaceRequest;
/* End of service model forward declarations required in OpenSearchMemoryClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<BatchGetEventResult, OpenSearchMemoryError> BatchGetEventOutcome;
typedef Aws::Utils::Outcome<CreateEventResult, OpenSearchMemoryError> CreateEventOutcome;
typedef Aws::Utils::Outcome<CreateMemoryResult, OpenSearchMemoryError> CreateMemoryOutcome;
typedef Aws::Utils::Outcome<CreateSpaceResult, OpenSearchMemoryError> CreateSpaceOutcome;
typedef Aws::Utils::Outcome<DeleteEventResult, OpenSearchMemoryError> DeleteEventOutcome;
typedef Aws::Utils::Outcome<DeleteMemoryResult, OpenSearchMemoryError> DeleteMemoryOutcome;
typedef Aws::Utils::Outcome<DeleteSpaceResult, OpenSearchMemoryError> DeleteSpaceOutcome;
typedef Aws::Utils::Outcome<GetEventResult, OpenSearchMemoryError> GetEventOutcome;
typedef Aws::Utils::Outcome<GetMemoryResult, OpenSearchMemoryError> GetMemoryOutcome;
typedef Aws::Utils::Outcome<GetSpaceResult, OpenSearchMemoryError> GetSpaceOutcome;
typedef Aws::Utils::Outcome<ListEventsResult, OpenSearchMemoryError> ListEventsOutcome;
typedef Aws::Utils::Outcome<ListMemoriesResult, OpenSearchMemoryError> ListMemoriesOutcome;
typedef Aws::Utils::Outcome<ListSpacesResult, OpenSearchMemoryError> ListSpacesOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, OpenSearchMemoryError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<SearchEventsResult, OpenSearchMemoryError> SearchEventsOutcome;
typedef Aws::Utils::Outcome<SearchMemoriesResult, OpenSearchMemoryError> SearchMemoriesOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, OpenSearchMemoryError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, OpenSearchMemoryError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateMemoryResult, OpenSearchMemoryError> UpdateMemoryOutcome;
typedef Aws::Utils::Outcome<UpdateSpaceResult, OpenSearchMemoryError> UpdateSpaceOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<BatchGetEventOutcome> BatchGetEventOutcomeCallable;
typedef std::future<CreateEventOutcome> CreateEventOutcomeCallable;
typedef std::future<CreateMemoryOutcome> CreateMemoryOutcomeCallable;
typedef std::future<CreateSpaceOutcome> CreateSpaceOutcomeCallable;
typedef std::future<DeleteEventOutcome> DeleteEventOutcomeCallable;
typedef std::future<DeleteMemoryOutcome> DeleteMemoryOutcomeCallable;
typedef std::future<DeleteSpaceOutcome> DeleteSpaceOutcomeCallable;
typedef std::future<GetEventOutcome> GetEventOutcomeCallable;
typedef std::future<GetMemoryOutcome> GetMemoryOutcomeCallable;
typedef std::future<GetSpaceOutcome> GetSpaceOutcomeCallable;
typedef std::future<ListEventsOutcome> ListEventsOutcomeCallable;
typedef std::future<ListMemoriesOutcome> ListMemoriesOutcomeCallable;
typedef std::future<ListSpacesOutcome> ListSpacesOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<SearchEventsOutcome> SearchEventsOutcomeCallable;
typedef std::future<SearchMemoriesOutcome> SearchMemoriesOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateMemoryOutcome> UpdateMemoryOutcomeCallable;
typedef std::future<UpdateSpaceOutcome> UpdateSpaceOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class OpenSearchMemoryClient;

/* Service model async handlers definitions */
typedef std::function<void(const OpenSearchMemoryClient*, const Model::BatchGetEventRequest&, const Model::BatchGetEventOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    BatchGetEventResponseReceivedHandler;
typedef std::function<void(const OpenSearchMemoryClient*, const Model::CreateEventRequest&, const Model::CreateEventOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateEventResponseReceivedHandler;
typedef std::function<void(const OpenSearchMemoryClient*, const Model::CreateMemoryRequest&, const Model::CreateMemoryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateMemoryResponseReceivedHandler;
typedef std::function<void(const OpenSearchMemoryClient*, const Model::CreateSpaceRequest&, const Model::CreateSpaceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateSpaceResponseReceivedHandler;
typedef std::function<void(const OpenSearchMemoryClient*, const Model::DeleteEventRequest&, const Model::DeleteEventOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteEventResponseReceivedHandler;
typedef std::function<void(const OpenSearchMemoryClient*, const Model::DeleteMemoryRequest&, const Model::DeleteMemoryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteMemoryResponseReceivedHandler;
typedef std::function<void(const OpenSearchMemoryClient*, const Model::DeleteSpaceRequest&, const Model::DeleteSpaceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteSpaceResponseReceivedHandler;
typedef std::function<void(const OpenSearchMemoryClient*, const Model::GetEventRequest&, const Model::GetEventOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetEventResponseReceivedHandler;
typedef std::function<void(const OpenSearchMemoryClient*, const Model::GetMemoryRequest&, const Model::GetMemoryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetMemoryResponseReceivedHandler;
typedef std::function<void(const OpenSearchMemoryClient*, const Model::GetSpaceRequest&, const Model::GetSpaceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetSpaceResponseReceivedHandler;
typedef std::function<void(const OpenSearchMemoryClient*, const Model::ListEventsRequest&, const Model::ListEventsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListEventsResponseReceivedHandler;
typedef std::function<void(const OpenSearchMemoryClient*, const Model::ListMemoriesRequest&, const Model::ListMemoriesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListMemoriesResponseReceivedHandler;
typedef std::function<void(const OpenSearchMemoryClient*, const Model::ListSpacesRequest&, const Model::ListSpacesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListSpacesResponseReceivedHandler;
typedef std::function<void(const OpenSearchMemoryClient*, const Model::ListTagsForResourceRequest&,
                           const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const OpenSearchMemoryClient*, const Model::SearchEventsRequest&, const Model::SearchEventsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SearchEventsResponseReceivedHandler;
typedef std::function<void(const OpenSearchMemoryClient*, const Model::SearchMemoriesRequest&, const Model::SearchMemoriesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SearchMemoriesResponseReceivedHandler;
typedef std::function<void(const OpenSearchMemoryClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const OpenSearchMemoryClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const OpenSearchMemoryClient*, const Model::UpdateMemoryRequest&, const Model::UpdateMemoryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateMemoryResponseReceivedHandler;
typedef std::function<void(const OpenSearchMemoryClient*, const Model::UpdateSpaceRequest&, const Model::UpdateSpaceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateSpaceResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace OpenSearchMemory
}  // namespace Aws
