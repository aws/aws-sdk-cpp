/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/mq/MQErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/mq/MQEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MQClient header */
#include <aws/mq/model/CreateBrokerResult.h>
#include <aws/mq/model/CreateConfigurationResult.h>
#include <aws/mq/model/CreateUserResult.h>
#include <aws/mq/model/DeleteBrokerResult.h>
#include <aws/mq/model/DeleteUserResult.h>
#include <aws/mq/model/DescribeBrokerResult.h>
#include <aws/mq/model/DescribeBrokerEngineTypesResult.h>
#include <aws/mq/model/DescribeBrokerInstanceOptionsResult.h>
#include <aws/mq/model/DescribeConfigurationResult.h>
#include <aws/mq/model/DescribeConfigurationRevisionResult.h>
#include <aws/mq/model/DescribeUserResult.h>
#include <aws/mq/model/ListBrokersResult.h>
#include <aws/mq/model/ListConfigurationRevisionsResult.h>
#include <aws/mq/model/ListConfigurationsResult.h>
#include <aws/mq/model/ListTagsResult.h>
#include <aws/mq/model/ListUsersResult.h>
#include <aws/mq/model/RebootBrokerResult.h>
#include <aws/mq/model/UpdateBrokerResult.h>
#include <aws/mq/model/UpdateConfigurationResult.h>
#include <aws/mq/model/UpdateUserResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in MQClient header */

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

  namespace MQ
  {
    using MQClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MQEndpointProviderBase = Aws::MQ::Endpoint::MQEndpointProviderBase;
    using MQEndpointProvider = Aws::MQ::Endpoint::MQEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MQClient header */
      class CreateBrokerRequest;
      class CreateConfigurationRequest;
      class CreateTagsRequest;
      class CreateUserRequest;
      class DeleteBrokerRequest;
      class DeleteTagsRequest;
      class DeleteUserRequest;
      class DescribeBrokerRequest;
      class DescribeBrokerEngineTypesRequest;
      class DescribeBrokerInstanceOptionsRequest;
      class DescribeConfigurationRequest;
      class DescribeConfigurationRevisionRequest;
      class DescribeUserRequest;
      class ListBrokersRequest;
      class ListConfigurationRevisionsRequest;
      class ListConfigurationsRequest;
      class ListTagsRequest;
      class ListUsersRequest;
      class RebootBrokerRequest;
      class UpdateBrokerRequest;
      class UpdateConfigurationRequest;
      class UpdateUserRequest;
      /* End of service model forward declarations required in MQClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateBrokerResult, MQError> CreateBrokerOutcome;
      typedef Aws::Utils::Outcome<CreateConfigurationResult, MQError> CreateConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MQError> CreateTagsOutcome;
      typedef Aws::Utils::Outcome<CreateUserResult, MQError> CreateUserOutcome;
      typedef Aws::Utils::Outcome<DeleteBrokerResult, MQError> DeleteBrokerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MQError> DeleteTagsOutcome;
      typedef Aws::Utils::Outcome<DeleteUserResult, MQError> DeleteUserOutcome;
      typedef Aws::Utils::Outcome<DescribeBrokerResult, MQError> DescribeBrokerOutcome;
      typedef Aws::Utils::Outcome<DescribeBrokerEngineTypesResult, MQError> DescribeBrokerEngineTypesOutcome;
      typedef Aws::Utils::Outcome<DescribeBrokerInstanceOptionsResult, MQError> DescribeBrokerInstanceOptionsOutcome;
      typedef Aws::Utils::Outcome<DescribeConfigurationResult, MQError> DescribeConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeConfigurationRevisionResult, MQError> DescribeConfigurationRevisionOutcome;
      typedef Aws::Utils::Outcome<DescribeUserResult, MQError> DescribeUserOutcome;
      typedef Aws::Utils::Outcome<ListBrokersResult, MQError> ListBrokersOutcome;
      typedef Aws::Utils::Outcome<ListConfigurationRevisionsResult, MQError> ListConfigurationRevisionsOutcome;
      typedef Aws::Utils::Outcome<ListConfigurationsResult, MQError> ListConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsResult, MQError> ListTagsOutcome;
      typedef Aws::Utils::Outcome<ListUsersResult, MQError> ListUsersOutcome;
      typedef Aws::Utils::Outcome<RebootBrokerResult, MQError> RebootBrokerOutcome;
      typedef Aws::Utils::Outcome<UpdateBrokerResult, MQError> UpdateBrokerOutcome;
      typedef Aws::Utils::Outcome<UpdateConfigurationResult, MQError> UpdateConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateUserResult, MQError> UpdateUserOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateBrokerOutcome> CreateBrokerOutcomeCallable;
      typedef std::future<CreateConfigurationOutcome> CreateConfigurationOutcomeCallable;
      typedef std::future<CreateTagsOutcome> CreateTagsOutcomeCallable;
      typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
      typedef std::future<DeleteBrokerOutcome> DeleteBrokerOutcomeCallable;
      typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
      typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
      typedef std::future<DescribeBrokerOutcome> DescribeBrokerOutcomeCallable;
      typedef std::future<DescribeBrokerEngineTypesOutcome> DescribeBrokerEngineTypesOutcomeCallable;
      typedef std::future<DescribeBrokerInstanceOptionsOutcome> DescribeBrokerInstanceOptionsOutcomeCallable;
      typedef std::future<DescribeConfigurationOutcome> DescribeConfigurationOutcomeCallable;
      typedef std::future<DescribeConfigurationRevisionOutcome> DescribeConfigurationRevisionOutcomeCallable;
      typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
      typedef std::future<ListBrokersOutcome> ListBrokersOutcomeCallable;
      typedef std::future<ListConfigurationRevisionsOutcome> ListConfigurationRevisionsOutcomeCallable;
      typedef std::future<ListConfigurationsOutcome> ListConfigurationsOutcomeCallable;
      typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
      typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
      typedef std::future<RebootBrokerOutcome> RebootBrokerOutcomeCallable;
      typedef std::future<UpdateBrokerOutcome> UpdateBrokerOutcomeCallable;
      typedef std::future<UpdateConfigurationOutcome> UpdateConfigurationOutcomeCallable;
      typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MQClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MQClient*, const Model::CreateBrokerRequest&, const Model::CreateBrokerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBrokerResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::CreateConfigurationRequest&, const Model::CreateConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::CreateTagsRequest&, const Model::CreateTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTagsResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::DeleteBrokerRequest&, const Model::DeleteBrokerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBrokerResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::DescribeBrokerRequest&, const Model::DescribeBrokerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBrokerResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::DescribeBrokerEngineTypesRequest&, const Model::DescribeBrokerEngineTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBrokerEngineTypesResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::DescribeBrokerInstanceOptionsRequest&, const Model::DescribeBrokerInstanceOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBrokerInstanceOptionsResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::DescribeConfigurationRequest&, const Model::DescribeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::DescribeConfigurationRevisionRequest&, const Model::DescribeConfigurationRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationRevisionResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::DescribeUserRequest&, const Model::DescribeUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::ListBrokersRequest&, const Model::ListBrokersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBrokersResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::ListConfigurationRevisionsRequest&, const Model::ListConfigurationRevisionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationRevisionsResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::ListConfigurationsRequest&, const Model::ListConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationsResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::RebootBrokerRequest&, const Model::RebootBrokerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootBrokerResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::UpdateBrokerRequest&, const Model::UpdateBrokerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBrokerResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::UpdateConfigurationRequest&, const Model::UpdateConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigurationResponseReceivedHandler;
    typedef std::function<void(const MQClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MQ
} // namespace Aws
