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
#include <aws/socialmessaging/SocialMessagingEndpointProvider.h>
#include <aws/socialmessaging/SocialMessagingErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in SocialMessagingClient header */
#include <aws/socialmessaging/model/AssociateWhatsAppBusinessAccountRequest.h>
#include <aws/socialmessaging/model/AssociateWhatsAppBusinessAccountResult.h>
#include <aws/socialmessaging/model/CreateWhatsAppFlowResult.h>
#include <aws/socialmessaging/model/CreateWhatsAppMessageTemplateFromLibraryResult.h>
#include <aws/socialmessaging/model/CreateWhatsAppMessageTemplateMediaResult.h>
#include <aws/socialmessaging/model/CreateWhatsAppMessageTemplateResult.h>
#include <aws/socialmessaging/model/DeleteWhatsAppFlowResult.h>
#include <aws/socialmessaging/model/DeleteWhatsAppMessageMediaResult.h>
#include <aws/socialmessaging/model/DeleteWhatsAppMessageTemplateResult.h>
#include <aws/socialmessaging/model/DeprecateWhatsAppFlowResult.h>
#include <aws/socialmessaging/model/DisassociateWhatsAppBusinessAccountResult.h>
#include <aws/socialmessaging/model/GetLinkedWhatsAppBusinessAccountPhoneNumberResult.h>
#include <aws/socialmessaging/model/GetLinkedWhatsAppBusinessAccountResult.h>
#include <aws/socialmessaging/model/GetWhatsAppFlowPreviewResult.h>
#include <aws/socialmessaging/model/GetWhatsAppFlowResult.h>
#include <aws/socialmessaging/model/GetWhatsAppMessageMediaResult.h>
#include <aws/socialmessaging/model/GetWhatsAppMessageTemplateResult.h>
#include <aws/socialmessaging/model/ListLinkedWhatsAppBusinessAccountsRequest.h>
#include <aws/socialmessaging/model/ListLinkedWhatsAppBusinessAccountsResult.h>
#include <aws/socialmessaging/model/ListTagsForResourceResult.h>
#include <aws/socialmessaging/model/ListWhatsAppFlowAssetsResult.h>
#include <aws/socialmessaging/model/ListWhatsAppFlowsResult.h>
#include <aws/socialmessaging/model/ListWhatsAppMessageTemplatesResult.h>
#include <aws/socialmessaging/model/ListWhatsAppTemplateLibraryResult.h>
#include <aws/socialmessaging/model/PostWhatsAppMessageMediaResult.h>
#include <aws/socialmessaging/model/PublishWhatsAppFlowResult.h>
#include <aws/socialmessaging/model/PutWhatsAppBusinessAccountEventDestinationsResult.h>
#include <aws/socialmessaging/model/SendWhatsAppMessageResult.h>
#include <aws/socialmessaging/model/TagResourceResult.h>
#include <aws/socialmessaging/model/UntagResourceResult.h>
#include <aws/socialmessaging/model/UpdateWhatsAppFlowAssetsResult.h>
#include <aws/socialmessaging/model/UpdateWhatsAppFlowResult.h>
#include <aws/socialmessaging/model/UpdateWhatsAppMessageTemplateResult.h>
/* End of service model headers required in SocialMessagingClient header */

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

namespace SocialMessaging {
using SocialMessagingClientConfiguration = Aws::Client::GenericClientConfiguration;
using SocialMessagingEndpointProviderBase = Aws::SocialMessaging::Endpoint::SocialMessagingEndpointProviderBase;
using SocialMessagingEndpointProvider = Aws::SocialMessaging::Endpoint::SocialMessagingEndpointProvider;

namespace Model {
/* Service model forward declarations required in SocialMessagingClient header */
class AssociateWhatsAppBusinessAccountRequest;
class CreateWhatsAppFlowRequest;
class CreateWhatsAppMessageTemplateRequest;
class CreateWhatsAppMessageTemplateFromLibraryRequest;
class CreateWhatsAppMessageTemplateMediaRequest;
class DeleteWhatsAppFlowRequest;
class DeleteWhatsAppMessageMediaRequest;
class DeleteWhatsAppMessageTemplateRequest;
class DeprecateWhatsAppFlowRequest;
class DisassociateWhatsAppBusinessAccountRequest;
class GetLinkedWhatsAppBusinessAccountRequest;
class GetLinkedWhatsAppBusinessAccountPhoneNumberRequest;
class GetWhatsAppFlowRequest;
class GetWhatsAppFlowPreviewRequest;
class GetWhatsAppMessageMediaRequest;
class GetWhatsAppMessageTemplateRequest;
class ListLinkedWhatsAppBusinessAccountsRequest;
class ListTagsForResourceRequest;
class ListWhatsAppFlowAssetsRequest;
class ListWhatsAppFlowsRequest;
class ListWhatsAppMessageTemplatesRequest;
class ListWhatsAppTemplateLibraryRequest;
class PostWhatsAppMessageMediaRequest;
class PublishWhatsAppFlowRequest;
class PutWhatsAppBusinessAccountEventDestinationsRequest;
class SendWhatsAppMessageRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateWhatsAppFlowRequest;
class UpdateWhatsAppFlowAssetsRequest;
class UpdateWhatsAppMessageTemplateRequest;
/* End of service model forward declarations required in SocialMessagingClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<AssociateWhatsAppBusinessAccountResult, SocialMessagingError> AssociateWhatsAppBusinessAccountOutcome;
typedef Aws::Utils::Outcome<CreateWhatsAppFlowResult, SocialMessagingError> CreateWhatsAppFlowOutcome;
typedef Aws::Utils::Outcome<CreateWhatsAppMessageTemplateResult, SocialMessagingError> CreateWhatsAppMessageTemplateOutcome;
typedef Aws::Utils::Outcome<CreateWhatsAppMessageTemplateFromLibraryResult, SocialMessagingError>
    CreateWhatsAppMessageTemplateFromLibraryOutcome;
typedef Aws::Utils::Outcome<CreateWhatsAppMessageTemplateMediaResult, SocialMessagingError> CreateWhatsAppMessageTemplateMediaOutcome;
typedef Aws::Utils::Outcome<DeleteWhatsAppFlowResult, SocialMessagingError> DeleteWhatsAppFlowOutcome;
typedef Aws::Utils::Outcome<DeleteWhatsAppMessageMediaResult, SocialMessagingError> DeleteWhatsAppMessageMediaOutcome;
typedef Aws::Utils::Outcome<DeleteWhatsAppMessageTemplateResult, SocialMessagingError> DeleteWhatsAppMessageTemplateOutcome;
typedef Aws::Utils::Outcome<DeprecateWhatsAppFlowResult, SocialMessagingError> DeprecateWhatsAppFlowOutcome;
typedef Aws::Utils::Outcome<DisassociateWhatsAppBusinessAccountResult, SocialMessagingError> DisassociateWhatsAppBusinessAccountOutcome;
typedef Aws::Utils::Outcome<GetLinkedWhatsAppBusinessAccountResult, SocialMessagingError> GetLinkedWhatsAppBusinessAccountOutcome;
typedef Aws::Utils::Outcome<GetLinkedWhatsAppBusinessAccountPhoneNumberResult, SocialMessagingError>
    GetLinkedWhatsAppBusinessAccountPhoneNumberOutcome;
typedef Aws::Utils::Outcome<GetWhatsAppFlowResult, SocialMessagingError> GetWhatsAppFlowOutcome;
typedef Aws::Utils::Outcome<GetWhatsAppFlowPreviewResult, SocialMessagingError> GetWhatsAppFlowPreviewOutcome;
typedef Aws::Utils::Outcome<GetWhatsAppMessageMediaResult, SocialMessagingError> GetWhatsAppMessageMediaOutcome;
typedef Aws::Utils::Outcome<GetWhatsAppMessageTemplateResult, SocialMessagingError> GetWhatsAppMessageTemplateOutcome;
typedef Aws::Utils::Outcome<ListLinkedWhatsAppBusinessAccountsResult, SocialMessagingError> ListLinkedWhatsAppBusinessAccountsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, SocialMessagingError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<ListWhatsAppFlowAssetsResult, SocialMessagingError> ListWhatsAppFlowAssetsOutcome;
typedef Aws::Utils::Outcome<ListWhatsAppFlowsResult, SocialMessagingError> ListWhatsAppFlowsOutcome;
typedef Aws::Utils::Outcome<ListWhatsAppMessageTemplatesResult, SocialMessagingError> ListWhatsAppMessageTemplatesOutcome;
typedef Aws::Utils::Outcome<ListWhatsAppTemplateLibraryResult, SocialMessagingError> ListWhatsAppTemplateLibraryOutcome;
typedef Aws::Utils::Outcome<PostWhatsAppMessageMediaResult, SocialMessagingError> PostWhatsAppMessageMediaOutcome;
typedef Aws::Utils::Outcome<PublishWhatsAppFlowResult, SocialMessagingError> PublishWhatsAppFlowOutcome;
typedef Aws::Utils::Outcome<PutWhatsAppBusinessAccountEventDestinationsResult, SocialMessagingError>
    PutWhatsAppBusinessAccountEventDestinationsOutcome;
typedef Aws::Utils::Outcome<SendWhatsAppMessageResult, SocialMessagingError> SendWhatsAppMessageOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, SocialMessagingError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, SocialMessagingError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateWhatsAppFlowResult, SocialMessagingError> UpdateWhatsAppFlowOutcome;
typedef Aws::Utils::Outcome<UpdateWhatsAppFlowAssetsResult, SocialMessagingError> UpdateWhatsAppFlowAssetsOutcome;
typedef Aws::Utils::Outcome<UpdateWhatsAppMessageTemplateResult, SocialMessagingError> UpdateWhatsAppMessageTemplateOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AssociateWhatsAppBusinessAccountOutcome> AssociateWhatsAppBusinessAccountOutcomeCallable;
typedef std::future<CreateWhatsAppFlowOutcome> CreateWhatsAppFlowOutcomeCallable;
typedef std::future<CreateWhatsAppMessageTemplateOutcome> CreateWhatsAppMessageTemplateOutcomeCallable;
typedef std::future<CreateWhatsAppMessageTemplateFromLibraryOutcome> CreateWhatsAppMessageTemplateFromLibraryOutcomeCallable;
typedef std::future<CreateWhatsAppMessageTemplateMediaOutcome> CreateWhatsAppMessageTemplateMediaOutcomeCallable;
typedef std::future<DeleteWhatsAppFlowOutcome> DeleteWhatsAppFlowOutcomeCallable;
typedef std::future<DeleteWhatsAppMessageMediaOutcome> DeleteWhatsAppMessageMediaOutcomeCallable;
typedef std::future<DeleteWhatsAppMessageTemplateOutcome> DeleteWhatsAppMessageTemplateOutcomeCallable;
typedef std::future<DeprecateWhatsAppFlowOutcome> DeprecateWhatsAppFlowOutcomeCallable;
typedef std::future<DisassociateWhatsAppBusinessAccountOutcome> DisassociateWhatsAppBusinessAccountOutcomeCallable;
typedef std::future<GetLinkedWhatsAppBusinessAccountOutcome> GetLinkedWhatsAppBusinessAccountOutcomeCallable;
typedef std::future<GetLinkedWhatsAppBusinessAccountPhoneNumberOutcome> GetLinkedWhatsAppBusinessAccountPhoneNumberOutcomeCallable;
typedef std::future<GetWhatsAppFlowOutcome> GetWhatsAppFlowOutcomeCallable;
typedef std::future<GetWhatsAppFlowPreviewOutcome> GetWhatsAppFlowPreviewOutcomeCallable;
typedef std::future<GetWhatsAppMessageMediaOutcome> GetWhatsAppMessageMediaOutcomeCallable;
typedef std::future<GetWhatsAppMessageTemplateOutcome> GetWhatsAppMessageTemplateOutcomeCallable;
typedef std::future<ListLinkedWhatsAppBusinessAccountsOutcome> ListLinkedWhatsAppBusinessAccountsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<ListWhatsAppFlowAssetsOutcome> ListWhatsAppFlowAssetsOutcomeCallable;
typedef std::future<ListWhatsAppFlowsOutcome> ListWhatsAppFlowsOutcomeCallable;
typedef std::future<ListWhatsAppMessageTemplatesOutcome> ListWhatsAppMessageTemplatesOutcomeCallable;
typedef std::future<ListWhatsAppTemplateLibraryOutcome> ListWhatsAppTemplateLibraryOutcomeCallable;
typedef std::future<PostWhatsAppMessageMediaOutcome> PostWhatsAppMessageMediaOutcomeCallable;
typedef std::future<PublishWhatsAppFlowOutcome> PublishWhatsAppFlowOutcomeCallable;
typedef std::future<PutWhatsAppBusinessAccountEventDestinationsOutcome> PutWhatsAppBusinessAccountEventDestinationsOutcomeCallable;
typedef std::future<SendWhatsAppMessageOutcome> SendWhatsAppMessageOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateWhatsAppFlowOutcome> UpdateWhatsAppFlowOutcomeCallable;
typedef std::future<UpdateWhatsAppFlowAssetsOutcome> UpdateWhatsAppFlowAssetsOutcomeCallable;
typedef std::future<UpdateWhatsAppMessageTemplateOutcome> UpdateWhatsAppMessageTemplateOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class SocialMessagingClient;

/* Service model async handlers definitions */
typedef std::function<void(const SocialMessagingClient*, const Model::AssociateWhatsAppBusinessAccountRequest&,
                           const Model::AssociateWhatsAppBusinessAccountOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AssociateWhatsAppBusinessAccountResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::CreateWhatsAppFlowRequest&, const Model::CreateWhatsAppFlowOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateWhatsAppFlowResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::CreateWhatsAppMessageTemplateRequest&,
                           const Model::CreateWhatsAppMessageTemplateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateWhatsAppMessageTemplateResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::CreateWhatsAppMessageTemplateFromLibraryRequest&,
                           const Model::CreateWhatsAppMessageTemplateFromLibraryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateWhatsAppMessageTemplateFromLibraryResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::CreateWhatsAppMessageTemplateMediaRequest&,
                           const Model::CreateWhatsAppMessageTemplateMediaOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateWhatsAppMessageTemplateMediaResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::DeleteWhatsAppFlowRequest&, const Model::DeleteWhatsAppFlowOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteWhatsAppFlowResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::DeleteWhatsAppMessageMediaRequest&,
                           const Model::DeleteWhatsAppMessageMediaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteWhatsAppMessageMediaResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::DeleteWhatsAppMessageTemplateRequest&,
                           const Model::DeleteWhatsAppMessageTemplateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteWhatsAppMessageTemplateResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::DeprecateWhatsAppFlowRequest&,
                           const Model::DeprecateWhatsAppFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeprecateWhatsAppFlowResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::DisassociateWhatsAppBusinessAccountRequest&,
                           const Model::DisassociateWhatsAppBusinessAccountOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DisassociateWhatsAppBusinessAccountResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::GetLinkedWhatsAppBusinessAccountRequest&,
                           const Model::GetLinkedWhatsAppBusinessAccountOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetLinkedWhatsAppBusinessAccountResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::GetLinkedWhatsAppBusinessAccountPhoneNumberRequest&,
                           const Model::GetLinkedWhatsAppBusinessAccountPhoneNumberOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetLinkedWhatsAppBusinessAccountPhoneNumberResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::GetWhatsAppFlowRequest&, const Model::GetWhatsAppFlowOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetWhatsAppFlowResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::GetWhatsAppFlowPreviewRequest&,
                           const Model::GetWhatsAppFlowPreviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetWhatsAppFlowPreviewResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::GetWhatsAppMessageMediaRequest&,
                           const Model::GetWhatsAppMessageMediaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetWhatsAppMessageMediaResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::GetWhatsAppMessageTemplateRequest&,
                           const Model::GetWhatsAppMessageTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetWhatsAppMessageTemplateResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::ListLinkedWhatsAppBusinessAccountsRequest&,
                           const Model::ListLinkedWhatsAppBusinessAccountsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListLinkedWhatsAppBusinessAccountsResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::ListWhatsAppFlowAssetsRequest&,
                           const Model::ListWhatsAppFlowAssetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListWhatsAppFlowAssetsResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::ListWhatsAppFlowsRequest&, const Model::ListWhatsAppFlowsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListWhatsAppFlowsResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::ListWhatsAppMessageTemplatesRequest&,
                           const Model::ListWhatsAppMessageTemplatesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListWhatsAppMessageTemplatesResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::ListWhatsAppTemplateLibraryRequest&,
                           const Model::ListWhatsAppTemplateLibraryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListWhatsAppTemplateLibraryResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::PostWhatsAppMessageMediaRequest&,
                           const Model::PostWhatsAppMessageMediaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PostWhatsAppMessageMediaResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::PublishWhatsAppFlowRequest&, const Model::PublishWhatsAppFlowOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PublishWhatsAppFlowResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::PutWhatsAppBusinessAccountEventDestinationsRequest&,
                           const Model::PutWhatsAppBusinessAccountEventDestinationsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutWhatsAppBusinessAccountEventDestinationsResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::SendWhatsAppMessageRequest&, const Model::SendWhatsAppMessageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SendWhatsAppMessageResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::UpdateWhatsAppFlowRequest&, const Model::UpdateWhatsAppFlowOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateWhatsAppFlowResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::UpdateWhatsAppFlowAssetsRequest&,
                           const Model::UpdateWhatsAppFlowAssetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateWhatsAppFlowAssetsResponseReceivedHandler;
typedef std::function<void(const SocialMessagingClient*, const Model::UpdateWhatsAppMessageTemplateRequest&,
                           const Model::UpdateWhatsAppMessageTemplateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateWhatsAppMessageTemplateResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace SocialMessaging
}  // namespace Aws
