/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/timestream-influxdb/TimestreamInfluxDBErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in TimestreamInfluxDBClient header */
#include <aws/timestream-influxdb/model/CreateDbClusterResult.h>
#include <aws/timestream-influxdb/model/CreateDbInstanceResult.h>
#include <aws/timestream-influxdb/model/CreateDbParameterGroupResult.h>
#include <aws/timestream-influxdb/model/DeleteDbClusterResult.h>
#include <aws/timestream-influxdb/model/DeleteDbInstanceResult.h>
#include <aws/timestream-influxdb/model/GetDbClusterResult.h>
#include <aws/timestream-influxdb/model/GetDbInstanceResult.h>
#include <aws/timestream-influxdb/model/GetDbParameterGroupResult.h>
#include <aws/timestream-influxdb/model/ListDbClustersResult.h>
#include <aws/timestream-influxdb/model/ListDbInstancesResult.h>
#include <aws/timestream-influxdb/model/ListDbInstancesForClusterResult.h>
#include <aws/timestream-influxdb/model/ListDbParameterGroupsResult.h>
#include <aws/timestream-influxdb/model/ListTagsForResourceResult.h>
#include <aws/timestream-influxdb/model/UpdateDbClusterResult.h>
#include <aws/timestream-influxdb/model/UpdateDbInstanceResult.h>
#include <aws/timestream-influxdb/model/ListDbParameterGroupsRequest.h>
#include <aws/timestream-influxdb/model/ListDbInstancesRequest.h>
#include <aws/timestream-influxdb/model/ListDbClustersRequest.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in TimestreamInfluxDBClient header */

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

  namespace TimestreamInfluxDB
  {
    using TimestreamInfluxDBClientConfiguration = Aws::Client::GenericClientConfiguration;
    using TimestreamInfluxDBEndpointProviderBase = Aws::TimestreamInfluxDB::Endpoint::TimestreamInfluxDBEndpointProviderBase;
    using TimestreamInfluxDBEndpointProvider = Aws::TimestreamInfluxDB::Endpoint::TimestreamInfluxDBEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in TimestreamInfluxDBClient header */
      class CreateDbClusterRequest;
      class CreateDbInstanceRequest;
      class CreateDbParameterGroupRequest;
      class DeleteDbClusterRequest;
      class DeleteDbInstanceRequest;
      class GetDbClusterRequest;
      class GetDbInstanceRequest;
      class GetDbParameterGroupRequest;
      class ListDbClustersRequest;
      class ListDbInstancesRequest;
      class ListDbInstancesForClusterRequest;
      class ListDbParameterGroupsRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateDbClusterRequest;
      class UpdateDbInstanceRequest;
      /* End of service model forward declarations required in TimestreamInfluxDBClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateDbClusterResult, TimestreamInfluxDBError> CreateDbClusterOutcome;
      typedef Aws::Utils::Outcome<CreateDbInstanceResult, TimestreamInfluxDBError> CreateDbInstanceOutcome;
      typedef Aws::Utils::Outcome<CreateDbParameterGroupResult, TimestreamInfluxDBError> CreateDbParameterGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteDbClusterResult, TimestreamInfluxDBError> DeleteDbClusterOutcome;
      typedef Aws::Utils::Outcome<DeleteDbInstanceResult, TimestreamInfluxDBError> DeleteDbInstanceOutcome;
      typedef Aws::Utils::Outcome<GetDbClusterResult, TimestreamInfluxDBError> GetDbClusterOutcome;
      typedef Aws::Utils::Outcome<GetDbInstanceResult, TimestreamInfluxDBError> GetDbInstanceOutcome;
      typedef Aws::Utils::Outcome<GetDbParameterGroupResult, TimestreamInfluxDBError> GetDbParameterGroupOutcome;
      typedef Aws::Utils::Outcome<ListDbClustersResult, TimestreamInfluxDBError> ListDbClustersOutcome;
      typedef Aws::Utils::Outcome<ListDbInstancesResult, TimestreamInfluxDBError> ListDbInstancesOutcome;
      typedef Aws::Utils::Outcome<ListDbInstancesForClusterResult, TimestreamInfluxDBError> ListDbInstancesForClusterOutcome;
      typedef Aws::Utils::Outcome<ListDbParameterGroupsResult, TimestreamInfluxDBError> ListDbParameterGroupsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, TimestreamInfluxDBError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TimestreamInfluxDBError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TimestreamInfluxDBError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDbClusterResult, TimestreamInfluxDBError> UpdateDbClusterOutcome;
      typedef Aws::Utils::Outcome<UpdateDbInstanceResult, TimestreamInfluxDBError> UpdateDbInstanceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateDbClusterOutcome> CreateDbClusterOutcomeCallable;
      typedef std::future<CreateDbInstanceOutcome> CreateDbInstanceOutcomeCallable;
      typedef std::future<CreateDbParameterGroupOutcome> CreateDbParameterGroupOutcomeCallable;
      typedef std::future<DeleteDbClusterOutcome> DeleteDbClusterOutcomeCallable;
      typedef std::future<DeleteDbInstanceOutcome> DeleteDbInstanceOutcomeCallable;
      typedef std::future<GetDbClusterOutcome> GetDbClusterOutcomeCallable;
      typedef std::future<GetDbInstanceOutcome> GetDbInstanceOutcomeCallable;
      typedef std::future<GetDbParameterGroupOutcome> GetDbParameterGroupOutcomeCallable;
      typedef std::future<ListDbClustersOutcome> ListDbClustersOutcomeCallable;
      typedef std::future<ListDbInstancesOutcome> ListDbInstancesOutcomeCallable;
      typedef std::future<ListDbInstancesForClusterOutcome> ListDbInstancesForClusterOutcomeCallable;
      typedef std::future<ListDbParameterGroupsOutcome> ListDbParameterGroupsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDbClusterOutcome> UpdateDbClusterOutcomeCallable;
      typedef std::future<UpdateDbInstanceOutcome> UpdateDbInstanceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class TimestreamInfluxDBClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const TimestreamInfluxDBClient*, const Model::CreateDbClusterRequest&, const Model::CreateDbClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDbClusterResponseReceivedHandler;
    typedef std::function<void(const TimestreamInfluxDBClient*, const Model::CreateDbInstanceRequest&, const Model::CreateDbInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDbInstanceResponseReceivedHandler;
    typedef std::function<void(const TimestreamInfluxDBClient*, const Model::CreateDbParameterGroupRequest&, const Model::CreateDbParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDbParameterGroupResponseReceivedHandler;
    typedef std::function<void(const TimestreamInfluxDBClient*, const Model::DeleteDbClusterRequest&, const Model::DeleteDbClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDbClusterResponseReceivedHandler;
    typedef std::function<void(const TimestreamInfluxDBClient*, const Model::DeleteDbInstanceRequest&, const Model::DeleteDbInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDbInstanceResponseReceivedHandler;
    typedef std::function<void(const TimestreamInfluxDBClient*, const Model::GetDbClusterRequest&, const Model::GetDbClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDbClusterResponseReceivedHandler;
    typedef std::function<void(const TimestreamInfluxDBClient*, const Model::GetDbInstanceRequest&, const Model::GetDbInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDbInstanceResponseReceivedHandler;
    typedef std::function<void(const TimestreamInfluxDBClient*, const Model::GetDbParameterGroupRequest&, const Model::GetDbParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDbParameterGroupResponseReceivedHandler;
    typedef std::function<void(const TimestreamInfluxDBClient*, const Model::ListDbClustersRequest&, const Model::ListDbClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDbClustersResponseReceivedHandler;
    typedef std::function<void(const TimestreamInfluxDBClient*, const Model::ListDbInstancesRequest&, const Model::ListDbInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDbInstancesResponseReceivedHandler;
    typedef std::function<void(const TimestreamInfluxDBClient*, const Model::ListDbInstancesForClusterRequest&, const Model::ListDbInstancesForClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDbInstancesForClusterResponseReceivedHandler;
    typedef std::function<void(const TimestreamInfluxDBClient*, const Model::ListDbParameterGroupsRequest&, const Model::ListDbParameterGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDbParameterGroupsResponseReceivedHandler;
    typedef std::function<void(const TimestreamInfluxDBClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const TimestreamInfluxDBClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const TimestreamInfluxDBClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const TimestreamInfluxDBClient*, const Model::UpdateDbClusterRequest&, const Model::UpdateDbClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDbClusterResponseReceivedHandler;
    typedef std::function<void(const TimestreamInfluxDBClient*, const Model::UpdateDbInstanceRequest&, const Model::UpdateDbInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDbInstanceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace TimestreamInfluxDB
} // namespace Aws
