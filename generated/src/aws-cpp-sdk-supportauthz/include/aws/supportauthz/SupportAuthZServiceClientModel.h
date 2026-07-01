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
#include <aws/supportauthz/SupportAuthZEndpointProvider.h>
#include <aws/supportauthz/SupportAuthZErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in SupportAuthZClient header */
#include <aws/supportauthz/model/CreateSupportPermitResult.h>
#include <aws/supportauthz/model/DeleteSupportPermitResult.h>
#include <aws/supportauthz/model/GetActionResult.h>
#include <aws/supportauthz/model/GetSupportPermitResult.h>
#include <aws/supportauthz/model/ListActionsResult.h>
#include <aws/supportauthz/model/ListSupportPermitRequestsRequest.h>
#include <aws/supportauthz/model/ListSupportPermitRequestsResult.h>
#include <aws/supportauthz/model/ListSupportPermitsRequest.h>
#include <aws/supportauthz/model/ListSupportPermitsResult.h>
#include <aws/supportauthz/model/ListTagsForResourceResult.h>
#include <aws/supportauthz/model/RejectSupportPermitRequestResult.h>
#include <aws/supportauthz/model/TagResourceResult.h>
#include <aws/supportauthz/model/UntagResourceResult.h>
/* End of service model headers required in SupportAuthZClient header */

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

namespace SupportAuthZ {
using SupportAuthZClientConfiguration = Aws::Client::GenericClientConfiguration;
using SupportAuthZEndpointProviderBase = Aws::SupportAuthZ::Endpoint::SupportAuthZEndpointProviderBase;
using SupportAuthZEndpointProvider = Aws::SupportAuthZ::Endpoint::SupportAuthZEndpointProvider;

namespace Model {
/* Service model forward declarations required in SupportAuthZClient header */
class CreateSupportPermitRequest;
class DeleteSupportPermitRequest;
class GetActionRequest;
class GetSupportPermitRequest;
class ListActionsRequest;
class ListSupportPermitRequestsRequest;
class ListSupportPermitsRequest;
class ListTagsForResourceRequest;
class RejectSupportPermitRequestRequest;
class TagResourceRequest;
class UntagResourceRequest;
/* End of service model forward declarations required in SupportAuthZClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateSupportPermitResult, SupportAuthZError> CreateSupportPermitOutcome;
typedef Aws::Utils::Outcome<DeleteSupportPermitResult, SupportAuthZError> DeleteSupportPermitOutcome;
typedef Aws::Utils::Outcome<GetActionResult, SupportAuthZError> GetActionOutcome;
typedef Aws::Utils::Outcome<GetSupportPermitResult, SupportAuthZError> GetSupportPermitOutcome;
typedef Aws::Utils::Outcome<ListActionsResult, SupportAuthZError> ListActionsOutcome;
typedef Aws::Utils::Outcome<ListSupportPermitRequestsResult, SupportAuthZError> ListSupportPermitRequestsOutcome;
typedef Aws::Utils::Outcome<ListSupportPermitsResult, SupportAuthZError> ListSupportPermitsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, SupportAuthZError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<RejectSupportPermitRequestResult, SupportAuthZError> RejectSupportPermitRequestOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, SupportAuthZError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, SupportAuthZError> UntagResourceOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateSupportPermitOutcome> CreateSupportPermitOutcomeCallable;
typedef std::future<DeleteSupportPermitOutcome> DeleteSupportPermitOutcomeCallable;
typedef std::future<GetActionOutcome> GetActionOutcomeCallable;
typedef std::future<GetSupportPermitOutcome> GetSupportPermitOutcomeCallable;
typedef std::future<ListActionsOutcome> ListActionsOutcomeCallable;
typedef std::future<ListSupportPermitRequestsOutcome> ListSupportPermitRequestsOutcomeCallable;
typedef std::future<ListSupportPermitsOutcome> ListSupportPermitsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<RejectSupportPermitRequestOutcome> RejectSupportPermitRequestOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class SupportAuthZClient;

/* Service model async handlers definitions */
typedef std::function<void(const SupportAuthZClient*, const Model::CreateSupportPermitRequest&, const Model::CreateSupportPermitOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateSupportPermitResponseReceivedHandler;
typedef std::function<void(const SupportAuthZClient*, const Model::DeleteSupportPermitRequest&, const Model::DeleteSupportPermitOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteSupportPermitResponseReceivedHandler;
typedef std::function<void(const SupportAuthZClient*, const Model::GetActionRequest&, const Model::GetActionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetActionResponseReceivedHandler;
typedef std::function<void(const SupportAuthZClient*, const Model::GetSupportPermitRequest&, const Model::GetSupportPermitOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetSupportPermitResponseReceivedHandler;
typedef std::function<void(const SupportAuthZClient*, const Model::ListActionsRequest&, const Model::ListActionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListActionsResponseReceivedHandler;
typedef std::function<void(const SupportAuthZClient*, const Model::ListSupportPermitRequestsRequest&,
                           const Model::ListSupportPermitRequestsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListSupportPermitRequestsResponseReceivedHandler;
typedef std::function<void(const SupportAuthZClient*, const Model::ListSupportPermitsRequest&, const Model::ListSupportPermitsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListSupportPermitsResponseReceivedHandler;
typedef std::function<void(const SupportAuthZClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const SupportAuthZClient*, const Model::RejectSupportPermitRequestRequest&,
                           const Model::RejectSupportPermitRequestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RejectSupportPermitRequestResponseReceivedHandler;
typedef std::function<void(const SupportAuthZClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const SupportAuthZClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace SupportAuthZ
}  // namespace Aws
