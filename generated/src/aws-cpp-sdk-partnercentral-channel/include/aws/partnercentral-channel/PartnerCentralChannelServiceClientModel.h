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
#include <aws/partnercentral-channel/PartnerCentralChannelEndpointProvider.h>
#include <aws/partnercentral-channel/PartnerCentralChannelErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in PartnerCentralChannelClient header */
#include <aws/partnercentral-channel/model/AcceptChannelHandshakeResult.h>
#include <aws/partnercentral-channel/model/CancelChannelHandshakeResult.h>
#include <aws/partnercentral-channel/model/CreateChannelHandshakeResult.h>
#include <aws/partnercentral-channel/model/CreateProgramManagementAccountResult.h>
#include <aws/partnercentral-channel/model/CreateRelationshipResult.h>
#include <aws/partnercentral-channel/model/DeleteProgramManagementAccountResult.h>
#include <aws/partnercentral-channel/model/DeleteRelationshipResult.h>
#include <aws/partnercentral-channel/model/GetRelationshipResult.h>
#include <aws/partnercentral-channel/model/ListChannelHandshakesResult.h>
#include <aws/partnercentral-channel/model/ListProgramManagementAccountsResult.h>
#include <aws/partnercentral-channel/model/ListRelationshipsResult.h>
#include <aws/partnercentral-channel/model/ListTagsForResourceResult.h>
#include <aws/partnercentral-channel/model/RejectChannelHandshakeResult.h>
#include <aws/partnercentral-channel/model/TagResourceResult.h>
#include <aws/partnercentral-channel/model/UntagResourceResult.h>
#include <aws/partnercentral-channel/model/UpdateProgramManagementAccountResult.h>
#include <aws/partnercentral-channel/model/UpdateRelationshipResult.h>
/* End of service model headers required in PartnerCentralChannelClient header */

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

namespace PartnerCentralChannel {
using PartnerCentralChannelClientConfiguration = Aws::Client::GenericClientConfiguration;
using PartnerCentralChannelEndpointProviderBase = Aws::PartnerCentralChannel::Endpoint::PartnerCentralChannelEndpointProviderBase;
using PartnerCentralChannelEndpointProvider = Aws::PartnerCentralChannel::Endpoint::PartnerCentralChannelEndpointProvider;

namespace Model {
/* Service model forward declarations required in PartnerCentralChannelClient header */
class AcceptChannelHandshakeRequest;
class CancelChannelHandshakeRequest;
class CreateChannelHandshakeRequest;
class CreateProgramManagementAccountRequest;
class CreateRelationshipRequest;
class DeleteProgramManagementAccountRequest;
class DeleteRelationshipRequest;
class GetRelationshipRequest;
class ListChannelHandshakesRequest;
class ListProgramManagementAccountsRequest;
class ListRelationshipsRequest;
class ListTagsForResourceRequest;
class RejectChannelHandshakeRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateProgramManagementAccountRequest;
class UpdateRelationshipRequest;
/* End of service model forward declarations required in PartnerCentralChannelClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<AcceptChannelHandshakeResult, PartnerCentralChannelError> AcceptChannelHandshakeOutcome;
typedef Aws::Utils::Outcome<CancelChannelHandshakeResult, PartnerCentralChannelError> CancelChannelHandshakeOutcome;
typedef Aws::Utils::Outcome<CreateChannelHandshakeResult, PartnerCentralChannelError> CreateChannelHandshakeOutcome;
typedef Aws::Utils::Outcome<CreateProgramManagementAccountResult, PartnerCentralChannelError> CreateProgramManagementAccountOutcome;
typedef Aws::Utils::Outcome<CreateRelationshipResult, PartnerCentralChannelError> CreateRelationshipOutcome;
typedef Aws::Utils::Outcome<DeleteProgramManagementAccountResult, PartnerCentralChannelError> DeleteProgramManagementAccountOutcome;
typedef Aws::Utils::Outcome<DeleteRelationshipResult, PartnerCentralChannelError> DeleteRelationshipOutcome;
typedef Aws::Utils::Outcome<GetRelationshipResult, PartnerCentralChannelError> GetRelationshipOutcome;
typedef Aws::Utils::Outcome<ListChannelHandshakesResult, PartnerCentralChannelError> ListChannelHandshakesOutcome;
typedef Aws::Utils::Outcome<ListProgramManagementAccountsResult, PartnerCentralChannelError> ListProgramManagementAccountsOutcome;
typedef Aws::Utils::Outcome<ListRelationshipsResult, PartnerCentralChannelError> ListRelationshipsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, PartnerCentralChannelError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<RejectChannelHandshakeResult, PartnerCentralChannelError> RejectChannelHandshakeOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, PartnerCentralChannelError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, PartnerCentralChannelError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateProgramManagementAccountResult, PartnerCentralChannelError> UpdateProgramManagementAccountOutcome;
typedef Aws::Utils::Outcome<UpdateRelationshipResult, PartnerCentralChannelError> UpdateRelationshipOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AcceptChannelHandshakeOutcome> AcceptChannelHandshakeOutcomeCallable;
typedef std::future<CancelChannelHandshakeOutcome> CancelChannelHandshakeOutcomeCallable;
typedef std::future<CreateChannelHandshakeOutcome> CreateChannelHandshakeOutcomeCallable;
typedef std::future<CreateProgramManagementAccountOutcome> CreateProgramManagementAccountOutcomeCallable;
typedef std::future<CreateRelationshipOutcome> CreateRelationshipOutcomeCallable;
typedef std::future<DeleteProgramManagementAccountOutcome> DeleteProgramManagementAccountOutcomeCallable;
typedef std::future<DeleteRelationshipOutcome> DeleteRelationshipOutcomeCallable;
typedef std::future<GetRelationshipOutcome> GetRelationshipOutcomeCallable;
typedef std::future<ListChannelHandshakesOutcome> ListChannelHandshakesOutcomeCallable;
typedef std::future<ListProgramManagementAccountsOutcome> ListProgramManagementAccountsOutcomeCallable;
typedef std::future<ListRelationshipsOutcome> ListRelationshipsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<RejectChannelHandshakeOutcome> RejectChannelHandshakeOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateProgramManagementAccountOutcome> UpdateProgramManagementAccountOutcomeCallable;
typedef std::future<UpdateRelationshipOutcome> UpdateRelationshipOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class PartnerCentralChannelClient;

/* Service model async handlers definitions */
typedef std::function<void(const PartnerCentralChannelClient*, const Model::AcceptChannelHandshakeRequest&,
                           const Model::AcceptChannelHandshakeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AcceptChannelHandshakeResponseReceivedHandler;
typedef std::function<void(const PartnerCentralChannelClient*, const Model::CancelChannelHandshakeRequest&,
                           const Model::CancelChannelHandshakeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CancelChannelHandshakeResponseReceivedHandler;
typedef std::function<void(const PartnerCentralChannelClient*, const Model::CreateChannelHandshakeRequest&,
                           const Model::CreateChannelHandshakeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateChannelHandshakeResponseReceivedHandler;
typedef std::function<void(const PartnerCentralChannelClient*, const Model::CreateProgramManagementAccountRequest&,
                           const Model::CreateProgramManagementAccountOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateProgramManagementAccountResponseReceivedHandler;
typedef std::function<void(const PartnerCentralChannelClient*, const Model::CreateRelationshipRequest&,
                           const Model::CreateRelationshipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateRelationshipResponseReceivedHandler;
typedef std::function<void(const PartnerCentralChannelClient*, const Model::DeleteProgramManagementAccountRequest&,
                           const Model::DeleteProgramManagementAccountOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteProgramManagementAccountResponseReceivedHandler;
typedef std::function<void(const PartnerCentralChannelClient*, const Model::DeleteRelationshipRequest&,
                           const Model::DeleteRelationshipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteRelationshipResponseReceivedHandler;
typedef std::function<void(const PartnerCentralChannelClient*, const Model::GetRelationshipRequest&, const Model::GetRelationshipOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRelationshipResponseReceivedHandler;
typedef std::function<void(const PartnerCentralChannelClient*, const Model::ListChannelHandshakesRequest&,
                           const Model::ListChannelHandshakesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListChannelHandshakesResponseReceivedHandler;
typedef std::function<void(const PartnerCentralChannelClient*, const Model::ListProgramManagementAccountsRequest&,
                           const Model::ListProgramManagementAccountsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListProgramManagementAccountsResponseReceivedHandler;
typedef std::function<void(const PartnerCentralChannelClient*, const Model::ListRelationshipsRequest&,
                           const Model::ListRelationshipsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListRelationshipsResponseReceivedHandler;
typedef std::function<void(const PartnerCentralChannelClient*, const Model::ListTagsForResourceRequest&,
                           const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const PartnerCentralChannelClient*, const Model::RejectChannelHandshakeRequest&,
                           const Model::RejectChannelHandshakeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RejectChannelHandshakeResponseReceivedHandler;
typedef std::function<void(const PartnerCentralChannelClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const PartnerCentralChannelClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const PartnerCentralChannelClient*, const Model::UpdateProgramManagementAccountRequest&,
                           const Model::UpdateProgramManagementAccountOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateProgramManagementAccountResponseReceivedHandler;
typedef std::function<void(const PartnerCentralChannelClient*, const Model::UpdateRelationshipRequest&,
                           const Model::UpdateRelationshipOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateRelationshipResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace PartnerCentralChannel
}  // namespace Aws
