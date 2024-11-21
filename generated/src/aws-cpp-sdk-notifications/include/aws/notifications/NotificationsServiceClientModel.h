/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/notifications/NotificationsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/notifications/NotificationsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in NotificationsClient header */
#include <aws/notifications/model/AssociateChannelResult.h>
#include <aws/notifications/model/CreateEventRuleResult.h>
#include <aws/notifications/model/CreateNotificationConfigurationResult.h>
#include <aws/notifications/model/DeleteEventRuleResult.h>
#include <aws/notifications/model/DeleteNotificationConfigurationResult.h>
#include <aws/notifications/model/DeregisterNotificationHubResult.h>
#include <aws/notifications/model/DisassociateChannelResult.h>
#include <aws/notifications/model/GetEventRuleResult.h>
#include <aws/notifications/model/GetNotificationConfigurationResult.h>
#include <aws/notifications/model/GetNotificationEventResult.h>
#include <aws/notifications/model/ListChannelsResult.h>
#include <aws/notifications/model/ListEventRulesResult.h>
#include <aws/notifications/model/ListNotificationConfigurationsResult.h>
#include <aws/notifications/model/ListNotificationEventsResult.h>
#include <aws/notifications/model/ListNotificationHubsResult.h>
#include <aws/notifications/model/ListTagsForResourceResult.h>
#include <aws/notifications/model/RegisterNotificationHubResult.h>
#include <aws/notifications/model/TagResourceResult.h>
#include <aws/notifications/model/UntagResourceResult.h>
#include <aws/notifications/model/UpdateEventRuleResult.h>
#include <aws/notifications/model/UpdateNotificationConfigurationResult.h>
#include <aws/notifications/model/ListNotificationEventsRequest.h>
#include <aws/notifications/model/ListNotificationHubsRequest.h>
#include <aws/notifications/model/ListNotificationConfigurationsRequest.h>
/* End of service model headers required in NotificationsClient header */

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

  namespace Notifications
  {
    using NotificationsClientConfiguration = Aws::Client::GenericClientConfiguration;
    using NotificationsEndpointProviderBase = Aws::Notifications::Endpoint::NotificationsEndpointProviderBase;
    using NotificationsEndpointProvider = Aws::Notifications::Endpoint::NotificationsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in NotificationsClient header */
      class AssociateChannelRequest;
      class CreateEventRuleRequest;
      class CreateNotificationConfigurationRequest;
      class DeleteEventRuleRequest;
      class DeleteNotificationConfigurationRequest;
      class DeregisterNotificationHubRequest;
      class DisassociateChannelRequest;
      class GetEventRuleRequest;
      class GetNotificationConfigurationRequest;
      class GetNotificationEventRequest;
      class ListChannelsRequest;
      class ListEventRulesRequest;
      class ListNotificationConfigurationsRequest;
      class ListNotificationEventsRequest;
      class ListNotificationHubsRequest;
      class ListTagsForResourceRequest;
      class RegisterNotificationHubRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateEventRuleRequest;
      class UpdateNotificationConfigurationRequest;
      /* End of service model forward declarations required in NotificationsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateChannelResult, NotificationsError> AssociateChannelOutcome;
      typedef Aws::Utils::Outcome<CreateEventRuleResult, NotificationsError> CreateEventRuleOutcome;
      typedef Aws::Utils::Outcome<CreateNotificationConfigurationResult, NotificationsError> CreateNotificationConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteEventRuleResult, NotificationsError> DeleteEventRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteNotificationConfigurationResult, NotificationsError> DeleteNotificationConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeregisterNotificationHubResult, NotificationsError> DeregisterNotificationHubOutcome;
      typedef Aws::Utils::Outcome<DisassociateChannelResult, NotificationsError> DisassociateChannelOutcome;
      typedef Aws::Utils::Outcome<GetEventRuleResult, NotificationsError> GetEventRuleOutcome;
      typedef Aws::Utils::Outcome<GetNotificationConfigurationResult, NotificationsError> GetNotificationConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetNotificationEventResult, NotificationsError> GetNotificationEventOutcome;
      typedef Aws::Utils::Outcome<ListChannelsResult, NotificationsError> ListChannelsOutcome;
      typedef Aws::Utils::Outcome<ListEventRulesResult, NotificationsError> ListEventRulesOutcome;
      typedef Aws::Utils::Outcome<ListNotificationConfigurationsResult, NotificationsError> ListNotificationConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListNotificationEventsResult, NotificationsError> ListNotificationEventsOutcome;
      typedef Aws::Utils::Outcome<ListNotificationHubsResult, NotificationsError> ListNotificationHubsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, NotificationsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<RegisterNotificationHubResult, NotificationsError> RegisterNotificationHubOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, NotificationsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, NotificationsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateEventRuleResult, NotificationsError> UpdateEventRuleOutcome;
      typedef Aws::Utils::Outcome<UpdateNotificationConfigurationResult, NotificationsError> UpdateNotificationConfigurationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateChannelOutcome> AssociateChannelOutcomeCallable;
      typedef std::future<CreateEventRuleOutcome> CreateEventRuleOutcomeCallable;
      typedef std::future<CreateNotificationConfigurationOutcome> CreateNotificationConfigurationOutcomeCallable;
      typedef std::future<DeleteEventRuleOutcome> DeleteEventRuleOutcomeCallable;
      typedef std::future<DeleteNotificationConfigurationOutcome> DeleteNotificationConfigurationOutcomeCallable;
      typedef std::future<DeregisterNotificationHubOutcome> DeregisterNotificationHubOutcomeCallable;
      typedef std::future<DisassociateChannelOutcome> DisassociateChannelOutcomeCallable;
      typedef std::future<GetEventRuleOutcome> GetEventRuleOutcomeCallable;
      typedef std::future<GetNotificationConfigurationOutcome> GetNotificationConfigurationOutcomeCallable;
      typedef std::future<GetNotificationEventOutcome> GetNotificationEventOutcomeCallable;
      typedef std::future<ListChannelsOutcome> ListChannelsOutcomeCallable;
      typedef std::future<ListEventRulesOutcome> ListEventRulesOutcomeCallable;
      typedef std::future<ListNotificationConfigurationsOutcome> ListNotificationConfigurationsOutcomeCallable;
      typedef std::future<ListNotificationEventsOutcome> ListNotificationEventsOutcomeCallable;
      typedef std::future<ListNotificationHubsOutcome> ListNotificationHubsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<RegisterNotificationHubOutcome> RegisterNotificationHubOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateEventRuleOutcome> UpdateEventRuleOutcomeCallable;
      typedef std::future<UpdateNotificationConfigurationOutcome> UpdateNotificationConfigurationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class NotificationsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const NotificationsClient*, const Model::AssociateChannelRequest&, const Model::AssociateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateChannelResponseReceivedHandler;
    typedef std::function<void(const NotificationsClient*, const Model::CreateEventRuleRequest&, const Model::CreateEventRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventRuleResponseReceivedHandler;
    typedef std::function<void(const NotificationsClient*, const Model::CreateNotificationConfigurationRequest&, const Model::CreateNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const NotificationsClient*, const Model::DeleteEventRuleRequest&, const Model::DeleteEventRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventRuleResponseReceivedHandler;
    typedef std::function<void(const NotificationsClient*, const Model::DeleteNotificationConfigurationRequest&, const Model::DeleteNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const NotificationsClient*, const Model::DeregisterNotificationHubRequest&, const Model::DeregisterNotificationHubOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterNotificationHubResponseReceivedHandler;
    typedef std::function<void(const NotificationsClient*, const Model::DisassociateChannelRequest&, const Model::DisassociateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateChannelResponseReceivedHandler;
    typedef std::function<void(const NotificationsClient*, const Model::GetEventRuleRequest&, const Model::GetEventRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventRuleResponseReceivedHandler;
    typedef std::function<void(const NotificationsClient*, const Model::GetNotificationConfigurationRequest&, const Model::GetNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const NotificationsClient*, const Model::GetNotificationEventRequest&, const Model::GetNotificationEventOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNotificationEventResponseReceivedHandler;
    typedef std::function<void(const NotificationsClient*, const Model::ListChannelsRequest&, const Model::ListChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelsResponseReceivedHandler;
    typedef std::function<void(const NotificationsClient*, const Model::ListEventRulesRequest&, const Model::ListEventRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventRulesResponseReceivedHandler;
    typedef std::function<void(const NotificationsClient*, const Model::ListNotificationConfigurationsRequest&, const Model::ListNotificationConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotificationConfigurationsResponseReceivedHandler;
    typedef std::function<void(const NotificationsClient*, const Model::ListNotificationEventsRequest&, const Model::ListNotificationEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotificationEventsResponseReceivedHandler;
    typedef std::function<void(const NotificationsClient*, const Model::ListNotificationHubsRequest&, const Model::ListNotificationHubsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotificationHubsResponseReceivedHandler;
    typedef std::function<void(const NotificationsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const NotificationsClient*, const Model::RegisterNotificationHubRequest&, const Model::RegisterNotificationHubOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterNotificationHubResponseReceivedHandler;
    typedef std::function<void(const NotificationsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const NotificationsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const NotificationsClient*, const Model::UpdateEventRuleRequest&, const Model::UpdateEventRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEventRuleResponseReceivedHandler;
    typedef std::function<void(const NotificationsClient*, const Model::UpdateNotificationConfigurationRequest&, const Model::UpdateNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNotificationConfigurationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Notifications
} // namespace Aws
