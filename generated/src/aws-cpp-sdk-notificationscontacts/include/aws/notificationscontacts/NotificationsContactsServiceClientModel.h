/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/notificationscontacts/NotificationsContactsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/notificationscontacts/NotificationsContactsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in NotificationsContactsClient header */
#include <aws/notificationscontacts/model/ActivateEmailContactResult.h>
#include <aws/notificationscontacts/model/CreateEmailContactResult.h>
#include <aws/notificationscontacts/model/DeleteEmailContactResult.h>
#include <aws/notificationscontacts/model/GetEmailContactResult.h>
#include <aws/notificationscontacts/model/ListEmailContactsResult.h>
#include <aws/notificationscontacts/model/ListTagsForResourceResult.h>
#include <aws/notificationscontacts/model/SendActivationCodeResult.h>
#include <aws/notificationscontacts/model/TagResourceResult.h>
#include <aws/notificationscontacts/model/UntagResourceResult.h>
#include <aws/notificationscontacts/model/ListEmailContactsRequest.h>
/* End of service model headers required in NotificationsContactsClient header */

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

  namespace NotificationsContacts
  {
    using NotificationsContactsClientConfiguration = Aws::Client::GenericClientConfiguration;
    using NotificationsContactsEndpointProviderBase = Aws::NotificationsContacts::Endpoint::NotificationsContactsEndpointProviderBase;
    using NotificationsContactsEndpointProvider = Aws::NotificationsContacts::Endpoint::NotificationsContactsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in NotificationsContactsClient header */
      class ActivateEmailContactRequest;
      class CreateEmailContactRequest;
      class DeleteEmailContactRequest;
      class GetEmailContactRequest;
      class ListEmailContactsRequest;
      class ListTagsForResourceRequest;
      class SendActivationCodeRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in NotificationsContactsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ActivateEmailContactResult, NotificationsContactsError> ActivateEmailContactOutcome;
      typedef Aws::Utils::Outcome<CreateEmailContactResult, NotificationsContactsError> CreateEmailContactOutcome;
      typedef Aws::Utils::Outcome<DeleteEmailContactResult, NotificationsContactsError> DeleteEmailContactOutcome;
      typedef Aws::Utils::Outcome<GetEmailContactResult, NotificationsContactsError> GetEmailContactOutcome;
      typedef Aws::Utils::Outcome<ListEmailContactsResult, NotificationsContactsError> ListEmailContactsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, NotificationsContactsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<SendActivationCodeResult, NotificationsContactsError> SendActivationCodeOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, NotificationsContactsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, NotificationsContactsError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ActivateEmailContactOutcome> ActivateEmailContactOutcomeCallable;
      typedef std::future<CreateEmailContactOutcome> CreateEmailContactOutcomeCallable;
      typedef std::future<DeleteEmailContactOutcome> DeleteEmailContactOutcomeCallable;
      typedef std::future<GetEmailContactOutcome> GetEmailContactOutcomeCallable;
      typedef std::future<ListEmailContactsOutcome> ListEmailContactsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<SendActivationCodeOutcome> SendActivationCodeOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class NotificationsContactsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const NotificationsContactsClient*, const Model::ActivateEmailContactRequest&, const Model::ActivateEmailContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivateEmailContactResponseReceivedHandler;
    typedef std::function<void(const NotificationsContactsClient*, const Model::CreateEmailContactRequest&, const Model::CreateEmailContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEmailContactResponseReceivedHandler;
    typedef std::function<void(const NotificationsContactsClient*, const Model::DeleteEmailContactRequest&, const Model::DeleteEmailContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEmailContactResponseReceivedHandler;
    typedef std::function<void(const NotificationsContactsClient*, const Model::GetEmailContactRequest&, const Model::GetEmailContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEmailContactResponseReceivedHandler;
    typedef std::function<void(const NotificationsContactsClient*, const Model::ListEmailContactsRequest&, const Model::ListEmailContactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEmailContactsResponseReceivedHandler;
    typedef std::function<void(const NotificationsContactsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const NotificationsContactsClient*, const Model::SendActivationCodeRequest&, const Model::SendActivationCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendActivationCodeResponseReceivedHandler;
    typedef std::function<void(const NotificationsContactsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const NotificationsContactsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace NotificationsContacts
} // namespace Aws
