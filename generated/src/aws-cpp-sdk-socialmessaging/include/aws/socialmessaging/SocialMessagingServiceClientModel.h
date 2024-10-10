/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/socialmessaging/SocialMessagingErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/socialmessaging/SocialMessagingEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SocialMessagingClient header */
#include <aws/socialmessaging/model/AssociateWhatsAppBusinessAccountResult.h>
#include <aws/socialmessaging/model/DeleteWhatsAppMessageMediaResult.h>
#include <aws/socialmessaging/model/DisassociateWhatsAppBusinessAccountResult.h>
#include <aws/socialmessaging/model/GetLinkedWhatsAppBusinessAccountResult.h>
#include <aws/socialmessaging/model/GetLinkedWhatsAppBusinessAccountPhoneNumberResult.h>
#include <aws/socialmessaging/model/GetWhatsAppMessageMediaResult.h>
#include <aws/socialmessaging/model/ListLinkedWhatsAppBusinessAccountsResult.h>
#include <aws/socialmessaging/model/ListTagsForResourceResult.h>
#include <aws/socialmessaging/model/PostWhatsAppMessageMediaResult.h>
#include <aws/socialmessaging/model/PutWhatsAppBusinessAccountEventDestinationsResult.h>
#include <aws/socialmessaging/model/SendWhatsAppMessageResult.h>
#include <aws/socialmessaging/model/TagResourceResult.h>
#include <aws/socialmessaging/model/UntagResourceResult.h>
#include <aws/socialmessaging/model/AssociateWhatsAppBusinessAccountRequest.h>
#include <aws/socialmessaging/model/ListLinkedWhatsAppBusinessAccountsRequest.h>
/* End of service model headers required in SocialMessagingClient header */

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

  namespace SocialMessaging
  {
    using SocialMessagingClientConfiguration = Aws::Client::GenericClientConfiguration;
    using SocialMessagingEndpointProviderBase = Aws::SocialMessaging::Endpoint::SocialMessagingEndpointProviderBase;
    using SocialMessagingEndpointProvider = Aws::SocialMessaging::Endpoint::SocialMessagingEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SocialMessagingClient header */
      class AssociateWhatsAppBusinessAccountRequest;
      class DeleteWhatsAppMessageMediaRequest;
      class DisassociateWhatsAppBusinessAccountRequest;
      class GetLinkedWhatsAppBusinessAccountRequest;
      class GetLinkedWhatsAppBusinessAccountPhoneNumberRequest;
      class GetWhatsAppMessageMediaRequest;
      class ListLinkedWhatsAppBusinessAccountsRequest;
      class ListTagsForResourceRequest;
      class PostWhatsAppMessageMediaRequest;
      class PutWhatsAppBusinessAccountEventDestinationsRequest;
      class SendWhatsAppMessageRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in SocialMessagingClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateWhatsAppBusinessAccountResult, SocialMessagingError> AssociateWhatsAppBusinessAccountOutcome;
      typedef Aws::Utils::Outcome<DeleteWhatsAppMessageMediaResult, SocialMessagingError> DeleteWhatsAppMessageMediaOutcome;
      typedef Aws::Utils::Outcome<DisassociateWhatsAppBusinessAccountResult, SocialMessagingError> DisassociateWhatsAppBusinessAccountOutcome;
      typedef Aws::Utils::Outcome<GetLinkedWhatsAppBusinessAccountResult, SocialMessagingError> GetLinkedWhatsAppBusinessAccountOutcome;
      typedef Aws::Utils::Outcome<GetLinkedWhatsAppBusinessAccountPhoneNumberResult, SocialMessagingError> GetLinkedWhatsAppBusinessAccountPhoneNumberOutcome;
      typedef Aws::Utils::Outcome<GetWhatsAppMessageMediaResult, SocialMessagingError> GetWhatsAppMessageMediaOutcome;
      typedef Aws::Utils::Outcome<ListLinkedWhatsAppBusinessAccountsResult, SocialMessagingError> ListLinkedWhatsAppBusinessAccountsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SocialMessagingError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PostWhatsAppMessageMediaResult, SocialMessagingError> PostWhatsAppMessageMediaOutcome;
      typedef Aws::Utils::Outcome<PutWhatsAppBusinessAccountEventDestinationsResult, SocialMessagingError> PutWhatsAppBusinessAccountEventDestinationsOutcome;
      typedef Aws::Utils::Outcome<SendWhatsAppMessageResult, SocialMessagingError> SendWhatsAppMessageOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, SocialMessagingError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, SocialMessagingError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateWhatsAppBusinessAccountOutcome> AssociateWhatsAppBusinessAccountOutcomeCallable;
      typedef std::future<DeleteWhatsAppMessageMediaOutcome> DeleteWhatsAppMessageMediaOutcomeCallable;
      typedef std::future<DisassociateWhatsAppBusinessAccountOutcome> DisassociateWhatsAppBusinessAccountOutcomeCallable;
      typedef std::future<GetLinkedWhatsAppBusinessAccountOutcome> GetLinkedWhatsAppBusinessAccountOutcomeCallable;
      typedef std::future<GetLinkedWhatsAppBusinessAccountPhoneNumberOutcome> GetLinkedWhatsAppBusinessAccountPhoneNumberOutcomeCallable;
      typedef std::future<GetWhatsAppMessageMediaOutcome> GetWhatsAppMessageMediaOutcomeCallable;
      typedef std::future<ListLinkedWhatsAppBusinessAccountsOutcome> ListLinkedWhatsAppBusinessAccountsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PostWhatsAppMessageMediaOutcome> PostWhatsAppMessageMediaOutcomeCallable;
      typedef std::future<PutWhatsAppBusinessAccountEventDestinationsOutcome> PutWhatsAppBusinessAccountEventDestinationsOutcomeCallable;
      typedef std::future<SendWhatsAppMessageOutcome> SendWhatsAppMessageOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SocialMessagingClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SocialMessagingClient*, const Model::AssociateWhatsAppBusinessAccountRequest&, const Model::AssociateWhatsAppBusinessAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateWhatsAppBusinessAccountResponseReceivedHandler;
    typedef std::function<void(const SocialMessagingClient*, const Model::DeleteWhatsAppMessageMediaRequest&, const Model::DeleteWhatsAppMessageMediaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWhatsAppMessageMediaResponseReceivedHandler;
    typedef std::function<void(const SocialMessagingClient*, const Model::DisassociateWhatsAppBusinessAccountRequest&, const Model::DisassociateWhatsAppBusinessAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateWhatsAppBusinessAccountResponseReceivedHandler;
    typedef std::function<void(const SocialMessagingClient*, const Model::GetLinkedWhatsAppBusinessAccountRequest&, const Model::GetLinkedWhatsAppBusinessAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLinkedWhatsAppBusinessAccountResponseReceivedHandler;
    typedef std::function<void(const SocialMessagingClient*, const Model::GetLinkedWhatsAppBusinessAccountPhoneNumberRequest&, const Model::GetLinkedWhatsAppBusinessAccountPhoneNumberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLinkedWhatsAppBusinessAccountPhoneNumberResponseReceivedHandler;
    typedef std::function<void(const SocialMessagingClient*, const Model::GetWhatsAppMessageMediaRequest&, const Model::GetWhatsAppMessageMediaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWhatsAppMessageMediaResponseReceivedHandler;
    typedef std::function<void(const SocialMessagingClient*, const Model::ListLinkedWhatsAppBusinessAccountsRequest&, const Model::ListLinkedWhatsAppBusinessAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLinkedWhatsAppBusinessAccountsResponseReceivedHandler;
    typedef std::function<void(const SocialMessagingClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SocialMessagingClient*, const Model::PostWhatsAppMessageMediaRequest&, const Model::PostWhatsAppMessageMediaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PostWhatsAppMessageMediaResponseReceivedHandler;
    typedef std::function<void(const SocialMessagingClient*, const Model::PutWhatsAppBusinessAccountEventDestinationsRequest&, const Model::PutWhatsAppBusinessAccountEventDestinationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutWhatsAppBusinessAccountEventDestinationsResponseReceivedHandler;
    typedef std::function<void(const SocialMessagingClient*, const Model::SendWhatsAppMessageRequest&, const Model::SendWhatsAppMessageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendWhatsAppMessageResponseReceivedHandler;
    typedef std::function<void(const SocialMessagingClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SocialMessagingClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SocialMessaging
} // namespace Aws
