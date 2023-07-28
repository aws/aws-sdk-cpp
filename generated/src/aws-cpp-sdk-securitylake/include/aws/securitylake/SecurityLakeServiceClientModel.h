/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/securitylake/SecurityLakeErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/securitylake/SecurityLakeEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SecurityLakeClient header */
#include <aws/securitylake/model/CreateAwsLogSourceResult.h>
#include <aws/securitylake/model/CreateCustomLogSourceResult.h>
#include <aws/securitylake/model/CreateDataLakeResult.h>
#include <aws/securitylake/model/CreateDataLakeExceptionSubscriptionResult.h>
#include <aws/securitylake/model/CreateDataLakeOrganizationConfigurationResult.h>
#include <aws/securitylake/model/CreateSubscriberResult.h>
#include <aws/securitylake/model/CreateSubscriberNotificationResult.h>
#include <aws/securitylake/model/DeleteAwsLogSourceResult.h>
#include <aws/securitylake/model/DeleteCustomLogSourceResult.h>
#include <aws/securitylake/model/DeleteDataLakeResult.h>
#include <aws/securitylake/model/DeleteDataLakeExceptionSubscriptionResult.h>
#include <aws/securitylake/model/DeleteDataLakeOrganizationConfigurationResult.h>
#include <aws/securitylake/model/DeleteSubscriberResult.h>
#include <aws/securitylake/model/DeleteSubscriberNotificationResult.h>
#include <aws/securitylake/model/DeregisterDataLakeDelegatedAdministratorResult.h>
#include <aws/securitylake/model/GetDataLakeExceptionSubscriptionResult.h>
#include <aws/securitylake/model/GetDataLakeOrganizationConfigurationResult.h>
#include <aws/securitylake/model/GetDataLakeSourcesResult.h>
#include <aws/securitylake/model/GetSubscriberResult.h>
#include <aws/securitylake/model/ListDataLakeExceptionsResult.h>
#include <aws/securitylake/model/ListDataLakesResult.h>
#include <aws/securitylake/model/ListLogSourcesResult.h>
#include <aws/securitylake/model/ListSubscribersResult.h>
#include <aws/securitylake/model/ListTagsForResourceResult.h>
#include <aws/securitylake/model/RegisterDataLakeDelegatedAdministratorResult.h>
#include <aws/securitylake/model/TagResourceResult.h>
#include <aws/securitylake/model/UntagResourceResult.h>
#include <aws/securitylake/model/UpdateDataLakeResult.h>
#include <aws/securitylake/model/UpdateDataLakeExceptionSubscriptionResult.h>
#include <aws/securitylake/model/UpdateSubscriberResult.h>
#include <aws/securitylake/model/UpdateSubscriberNotificationResult.h>
/* End of service model headers required in SecurityLakeClient header */

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

  namespace SecurityLake
  {
    using SecurityLakeClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SecurityLakeEndpointProviderBase = Aws::SecurityLake::Endpoint::SecurityLakeEndpointProviderBase;
    using SecurityLakeEndpointProvider = Aws::SecurityLake::Endpoint::SecurityLakeEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SecurityLakeClient header */
      class CreateAwsLogSourceRequest;
      class CreateCustomLogSourceRequest;
      class CreateDataLakeRequest;
      class CreateDataLakeExceptionSubscriptionRequest;
      class CreateDataLakeOrganizationConfigurationRequest;
      class CreateSubscriberRequest;
      class CreateSubscriberNotificationRequest;
      class DeleteAwsLogSourceRequest;
      class DeleteCustomLogSourceRequest;
      class DeleteDataLakeRequest;
      class DeleteDataLakeExceptionSubscriptionRequest;
      class DeleteDataLakeOrganizationConfigurationRequest;
      class DeleteSubscriberRequest;
      class DeleteSubscriberNotificationRequest;
      class DeregisterDataLakeDelegatedAdministratorRequest;
      class GetDataLakeExceptionSubscriptionRequest;
      class GetDataLakeOrganizationConfigurationRequest;
      class GetDataLakeSourcesRequest;
      class GetSubscriberRequest;
      class ListDataLakeExceptionsRequest;
      class ListDataLakesRequest;
      class ListLogSourcesRequest;
      class ListSubscribersRequest;
      class ListTagsForResourceRequest;
      class RegisterDataLakeDelegatedAdministratorRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateDataLakeRequest;
      class UpdateDataLakeExceptionSubscriptionRequest;
      class UpdateSubscriberRequest;
      class UpdateSubscriberNotificationRequest;
      /* End of service model forward declarations required in SecurityLakeClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateAwsLogSourceResult, SecurityLakeError> CreateAwsLogSourceOutcome;
      typedef Aws::Utils::Outcome<CreateCustomLogSourceResult, SecurityLakeError> CreateCustomLogSourceOutcome;
      typedef Aws::Utils::Outcome<CreateDataLakeResult, SecurityLakeError> CreateDataLakeOutcome;
      typedef Aws::Utils::Outcome<CreateDataLakeExceptionSubscriptionResult, SecurityLakeError> CreateDataLakeExceptionSubscriptionOutcome;
      typedef Aws::Utils::Outcome<CreateDataLakeOrganizationConfigurationResult, SecurityLakeError> CreateDataLakeOrganizationConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateSubscriberResult, SecurityLakeError> CreateSubscriberOutcome;
      typedef Aws::Utils::Outcome<CreateSubscriberNotificationResult, SecurityLakeError> CreateSubscriberNotificationOutcome;
      typedef Aws::Utils::Outcome<DeleteAwsLogSourceResult, SecurityLakeError> DeleteAwsLogSourceOutcome;
      typedef Aws::Utils::Outcome<DeleteCustomLogSourceResult, SecurityLakeError> DeleteCustomLogSourceOutcome;
      typedef Aws::Utils::Outcome<DeleteDataLakeResult, SecurityLakeError> DeleteDataLakeOutcome;
      typedef Aws::Utils::Outcome<DeleteDataLakeExceptionSubscriptionResult, SecurityLakeError> DeleteDataLakeExceptionSubscriptionOutcome;
      typedef Aws::Utils::Outcome<DeleteDataLakeOrganizationConfigurationResult, SecurityLakeError> DeleteDataLakeOrganizationConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteSubscriberResult, SecurityLakeError> DeleteSubscriberOutcome;
      typedef Aws::Utils::Outcome<DeleteSubscriberNotificationResult, SecurityLakeError> DeleteSubscriberNotificationOutcome;
      typedef Aws::Utils::Outcome<DeregisterDataLakeDelegatedAdministratorResult, SecurityLakeError> DeregisterDataLakeDelegatedAdministratorOutcome;
      typedef Aws::Utils::Outcome<GetDataLakeExceptionSubscriptionResult, SecurityLakeError> GetDataLakeExceptionSubscriptionOutcome;
      typedef Aws::Utils::Outcome<GetDataLakeOrganizationConfigurationResult, SecurityLakeError> GetDataLakeOrganizationConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetDataLakeSourcesResult, SecurityLakeError> GetDataLakeSourcesOutcome;
      typedef Aws::Utils::Outcome<GetSubscriberResult, SecurityLakeError> GetSubscriberOutcome;
      typedef Aws::Utils::Outcome<ListDataLakeExceptionsResult, SecurityLakeError> ListDataLakeExceptionsOutcome;
      typedef Aws::Utils::Outcome<ListDataLakesResult, SecurityLakeError> ListDataLakesOutcome;
      typedef Aws::Utils::Outcome<ListLogSourcesResult, SecurityLakeError> ListLogSourcesOutcome;
      typedef Aws::Utils::Outcome<ListSubscribersResult, SecurityLakeError> ListSubscribersOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SecurityLakeError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<RegisterDataLakeDelegatedAdministratorResult, SecurityLakeError> RegisterDataLakeDelegatedAdministratorOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, SecurityLakeError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, SecurityLakeError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDataLakeResult, SecurityLakeError> UpdateDataLakeOutcome;
      typedef Aws::Utils::Outcome<UpdateDataLakeExceptionSubscriptionResult, SecurityLakeError> UpdateDataLakeExceptionSubscriptionOutcome;
      typedef Aws::Utils::Outcome<UpdateSubscriberResult, SecurityLakeError> UpdateSubscriberOutcome;
      typedef Aws::Utils::Outcome<UpdateSubscriberNotificationResult, SecurityLakeError> UpdateSubscriberNotificationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateAwsLogSourceOutcome> CreateAwsLogSourceOutcomeCallable;
      typedef std::future<CreateCustomLogSourceOutcome> CreateCustomLogSourceOutcomeCallable;
      typedef std::future<CreateDataLakeOutcome> CreateDataLakeOutcomeCallable;
      typedef std::future<CreateDataLakeExceptionSubscriptionOutcome> CreateDataLakeExceptionSubscriptionOutcomeCallable;
      typedef std::future<CreateDataLakeOrganizationConfigurationOutcome> CreateDataLakeOrganizationConfigurationOutcomeCallable;
      typedef std::future<CreateSubscriberOutcome> CreateSubscriberOutcomeCallable;
      typedef std::future<CreateSubscriberNotificationOutcome> CreateSubscriberNotificationOutcomeCallable;
      typedef std::future<DeleteAwsLogSourceOutcome> DeleteAwsLogSourceOutcomeCallable;
      typedef std::future<DeleteCustomLogSourceOutcome> DeleteCustomLogSourceOutcomeCallable;
      typedef std::future<DeleteDataLakeOutcome> DeleteDataLakeOutcomeCallable;
      typedef std::future<DeleteDataLakeExceptionSubscriptionOutcome> DeleteDataLakeExceptionSubscriptionOutcomeCallable;
      typedef std::future<DeleteDataLakeOrganizationConfigurationOutcome> DeleteDataLakeOrganizationConfigurationOutcomeCallable;
      typedef std::future<DeleteSubscriberOutcome> DeleteSubscriberOutcomeCallable;
      typedef std::future<DeleteSubscriberNotificationOutcome> DeleteSubscriberNotificationOutcomeCallable;
      typedef std::future<DeregisterDataLakeDelegatedAdministratorOutcome> DeregisterDataLakeDelegatedAdministratorOutcomeCallable;
      typedef std::future<GetDataLakeExceptionSubscriptionOutcome> GetDataLakeExceptionSubscriptionOutcomeCallable;
      typedef std::future<GetDataLakeOrganizationConfigurationOutcome> GetDataLakeOrganizationConfigurationOutcomeCallable;
      typedef std::future<GetDataLakeSourcesOutcome> GetDataLakeSourcesOutcomeCallable;
      typedef std::future<GetSubscriberOutcome> GetSubscriberOutcomeCallable;
      typedef std::future<ListDataLakeExceptionsOutcome> ListDataLakeExceptionsOutcomeCallable;
      typedef std::future<ListDataLakesOutcome> ListDataLakesOutcomeCallable;
      typedef std::future<ListLogSourcesOutcome> ListLogSourcesOutcomeCallable;
      typedef std::future<ListSubscribersOutcome> ListSubscribersOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<RegisterDataLakeDelegatedAdministratorOutcome> RegisterDataLakeDelegatedAdministratorOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDataLakeOutcome> UpdateDataLakeOutcomeCallable;
      typedef std::future<UpdateDataLakeExceptionSubscriptionOutcome> UpdateDataLakeExceptionSubscriptionOutcomeCallable;
      typedef std::future<UpdateSubscriberOutcome> UpdateSubscriberOutcomeCallable;
      typedef std::future<UpdateSubscriberNotificationOutcome> UpdateSubscriberNotificationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SecurityLakeClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SecurityLakeClient*, const Model::CreateAwsLogSourceRequest&, const Model::CreateAwsLogSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAwsLogSourceResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::CreateCustomLogSourceRequest&, const Model::CreateCustomLogSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCustomLogSourceResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::CreateDataLakeRequest&, const Model::CreateDataLakeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataLakeResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::CreateDataLakeExceptionSubscriptionRequest&, const Model::CreateDataLakeExceptionSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataLakeExceptionSubscriptionResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::CreateDataLakeOrganizationConfigurationRequest&, const Model::CreateDataLakeOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataLakeOrganizationConfigurationResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::CreateSubscriberRequest&, const Model::CreateSubscriberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubscriberResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::CreateSubscriberNotificationRequest&, const Model::CreateSubscriberNotificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubscriberNotificationResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::DeleteAwsLogSourceRequest&, const Model::DeleteAwsLogSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAwsLogSourceResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::DeleteCustomLogSourceRequest&, const Model::DeleteCustomLogSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCustomLogSourceResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::DeleteDataLakeRequest&, const Model::DeleteDataLakeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataLakeResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::DeleteDataLakeExceptionSubscriptionRequest&, const Model::DeleteDataLakeExceptionSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataLakeExceptionSubscriptionResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::DeleteDataLakeOrganizationConfigurationRequest&, const Model::DeleteDataLakeOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataLakeOrganizationConfigurationResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::DeleteSubscriberRequest&, const Model::DeleteSubscriberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubscriberResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::DeleteSubscriberNotificationRequest&, const Model::DeleteSubscriberNotificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubscriberNotificationResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::DeregisterDataLakeDelegatedAdministratorRequest&, const Model::DeregisterDataLakeDelegatedAdministratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterDataLakeDelegatedAdministratorResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::GetDataLakeExceptionSubscriptionRequest&, const Model::GetDataLakeExceptionSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataLakeExceptionSubscriptionResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::GetDataLakeOrganizationConfigurationRequest&, const Model::GetDataLakeOrganizationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataLakeOrganizationConfigurationResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::GetDataLakeSourcesRequest&, const Model::GetDataLakeSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataLakeSourcesResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::GetSubscriberRequest&, const Model::GetSubscriberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubscriberResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::ListDataLakeExceptionsRequest&, const Model::ListDataLakeExceptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataLakeExceptionsResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::ListDataLakesRequest&, const Model::ListDataLakesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataLakesResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::ListLogSourcesRequest&, const Model::ListLogSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLogSourcesResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::ListSubscribersRequest&, const Model::ListSubscribersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscribersResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::RegisterDataLakeDelegatedAdministratorRequest&, const Model::RegisterDataLakeDelegatedAdministratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterDataLakeDelegatedAdministratorResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::UpdateDataLakeRequest&, const Model::UpdateDataLakeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataLakeResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::UpdateDataLakeExceptionSubscriptionRequest&, const Model::UpdateDataLakeExceptionSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataLakeExceptionSubscriptionResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::UpdateSubscriberRequest&, const Model::UpdateSubscriberOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubscriberResponseReceivedHandler;
    typedef std::function<void(const SecurityLakeClient*, const Model::UpdateSubscriberNotificationRequest&, const Model::UpdateSubscriberNotificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubscriberNotificationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SecurityLake
} // namespace Aws
