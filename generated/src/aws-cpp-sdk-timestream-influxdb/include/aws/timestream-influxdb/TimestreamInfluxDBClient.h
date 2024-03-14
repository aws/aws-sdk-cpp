/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBServiceClientModel.h>

namespace Aws
{
namespace TimestreamInfluxDB
{
  /**
   * <p>Amazon Timestream for InfluxDB is a managed time-series database engine that
   * makes it easy for application developers and DevOps teams to run InfluxDB
   * databases on AWS for near real-time time-series applications using open-source
   * APIs. With Amazon Timestream for InfluxDB, it is easy to set up, operate, and
   * scale time-series workloads that can answer queries with single-digit
   * millisecond query response time.</p>
   */
  class AWS_TIMESTREAMINFLUXDB_API TimestreamInfluxDBClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<TimestreamInfluxDBClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef TimestreamInfluxDBClientConfiguration ClientConfigurationType;
      typedef TimestreamInfluxDBEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamInfluxDBClient(const Aws::TimestreamInfluxDB::TimestreamInfluxDBClientConfiguration& clientConfiguration = Aws::TimestreamInfluxDB::TimestreamInfluxDBClientConfiguration(),
                                 std::shared_ptr<TimestreamInfluxDBEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamInfluxDBClient(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<TimestreamInfluxDBEndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::TimestreamInfluxDB::TimestreamInfluxDBClientConfiguration& clientConfiguration = Aws::TimestreamInfluxDB::TimestreamInfluxDBClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TimestreamInfluxDBClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<TimestreamInfluxDBEndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::TimestreamInfluxDB::TimestreamInfluxDBClientConfiguration& clientConfiguration = Aws::TimestreamInfluxDB::TimestreamInfluxDBClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamInfluxDBClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TimestreamInfluxDBClient(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TimestreamInfluxDBClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~TimestreamInfluxDBClient();

        /**
         * <p>Creates a new Timestream for InfluxDB DB instance.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/CreateDbInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDbInstanceOutcome CreateDbInstance(const Model::CreateDbInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateDbInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDbInstanceRequestT = Model::CreateDbInstanceRequest>
        Model::CreateDbInstanceOutcomeCallable CreateDbInstanceCallable(const CreateDbInstanceRequestT& request) const
        {
            return SubmitCallable(&TimestreamInfluxDBClient::CreateDbInstance, request);
        }

        /**
         * An Async wrapper for CreateDbInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDbInstanceRequestT = Model::CreateDbInstanceRequest>
        void CreateDbInstanceAsync(const CreateDbInstanceRequestT& request, const CreateDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamInfluxDBClient::CreateDbInstance, request, handler, context);
        }

        /**
         * <p>Creates a new Timestream for InfluxDB DB parameter group to associate with DB
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/CreateDbParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDbParameterGroupOutcome CreateDbParameterGroup(const Model::CreateDbParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateDbParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDbParameterGroupRequestT = Model::CreateDbParameterGroupRequest>
        Model::CreateDbParameterGroupOutcomeCallable CreateDbParameterGroupCallable(const CreateDbParameterGroupRequestT& request) const
        {
            return SubmitCallable(&TimestreamInfluxDBClient::CreateDbParameterGroup, request);
        }

        /**
         * An Async wrapper for CreateDbParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDbParameterGroupRequestT = Model::CreateDbParameterGroupRequest>
        void CreateDbParameterGroupAsync(const CreateDbParameterGroupRequestT& request, const CreateDbParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamInfluxDBClient::CreateDbParameterGroup, request, handler, context);
        }

        /**
         * <p>Deletes a Timestream for InfluxDB DB instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/DeleteDbInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDbInstanceOutcome DeleteDbInstance(const Model::DeleteDbInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDbInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDbInstanceRequestT = Model::DeleteDbInstanceRequest>
        Model::DeleteDbInstanceOutcomeCallable DeleteDbInstanceCallable(const DeleteDbInstanceRequestT& request) const
        {
            return SubmitCallable(&TimestreamInfluxDBClient::DeleteDbInstance, request);
        }

        /**
         * An Async wrapper for DeleteDbInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDbInstanceRequestT = Model::DeleteDbInstanceRequest>
        void DeleteDbInstanceAsync(const DeleteDbInstanceRequestT& request, const DeleteDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamInfluxDBClient::DeleteDbInstance, request, handler, context);
        }

        /**
         * <p>Returns a Timestream for InfluxDB DB instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/GetDbInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDbInstanceOutcome GetDbInstance(const Model::GetDbInstanceRequest& request) const;

        /**
         * A Callable wrapper for GetDbInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDbInstanceRequestT = Model::GetDbInstanceRequest>
        Model::GetDbInstanceOutcomeCallable GetDbInstanceCallable(const GetDbInstanceRequestT& request) const
        {
            return SubmitCallable(&TimestreamInfluxDBClient::GetDbInstance, request);
        }

        /**
         * An Async wrapper for GetDbInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDbInstanceRequestT = Model::GetDbInstanceRequest>
        void GetDbInstanceAsync(const GetDbInstanceRequestT& request, const GetDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamInfluxDBClient::GetDbInstance, request, handler, context);
        }

        /**
         * <p>Returns a Timestream for InfluxDB DB parameter group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/GetDbParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDbParameterGroupOutcome GetDbParameterGroup(const Model::GetDbParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for GetDbParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDbParameterGroupRequestT = Model::GetDbParameterGroupRequest>
        Model::GetDbParameterGroupOutcomeCallable GetDbParameterGroupCallable(const GetDbParameterGroupRequestT& request) const
        {
            return SubmitCallable(&TimestreamInfluxDBClient::GetDbParameterGroup, request);
        }

        /**
         * An Async wrapper for GetDbParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDbParameterGroupRequestT = Model::GetDbParameterGroupRequest>
        void GetDbParameterGroupAsync(const GetDbParameterGroupRequestT& request, const GetDbParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamInfluxDBClient::GetDbParameterGroup, request, handler, context);
        }

        /**
         * <p>Returns a list of Timestream for InfluxDB DB instances.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/ListDbInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDbInstancesOutcome ListDbInstances(const Model::ListDbInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListDbInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDbInstancesRequestT = Model::ListDbInstancesRequest>
        Model::ListDbInstancesOutcomeCallable ListDbInstancesCallable(const ListDbInstancesRequestT& request) const
        {
            return SubmitCallable(&TimestreamInfluxDBClient::ListDbInstances, request);
        }

        /**
         * An Async wrapper for ListDbInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDbInstancesRequestT = Model::ListDbInstancesRequest>
        void ListDbInstancesAsync(const ListDbInstancesRequestT& request, const ListDbInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamInfluxDBClient::ListDbInstances, request, handler, context);
        }

        /**
         * <p>Returns a list of Timestream for InfluxDB DB parameter groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/ListDbParameterGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDbParameterGroupsOutcome ListDbParameterGroups(const Model::ListDbParameterGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListDbParameterGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDbParameterGroupsRequestT = Model::ListDbParameterGroupsRequest>
        Model::ListDbParameterGroupsOutcomeCallable ListDbParameterGroupsCallable(const ListDbParameterGroupsRequestT& request) const
        {
            return SubmitCallable(&TimestreamInfluxDBClient::ListDbParameterGroups, request);
        }

        /**
         * An Async wrapper for ListDbParameterGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDbParameterGroupsRequestT = Model::ListDbParameterGroupsRequest>
        void ListDbParameterGroupsAsync(const ListDbParameterGroupsRequestT& request, const ListDbParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamInfluxDBClient::ListDbParameterGroups, request, handler, context);
        }

        /**
         * <p>A list of tags applied to the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&TimestreamInfluxDBClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamInfluxDBClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Tags are composed of a Key/Value pairs. You can use tags to categorize and
         * track your Timestream for InfluxDB resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&TimestreamInfluxDBClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamInfluxDBClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the tag from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&TimestreamInfluxDBClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamInfluxDBClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a Timestream for InfluxDB DB instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/UpdateDbInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDbInstanceOutcome UpdateDbInstance(const Model::UpdateDbInstanceRequest& request) const;

        /**
         * A Callable wrapper for UpdateDbInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDbInstanceRequestT = Model::UpdateDbInstanceRequest>
        Model::UpdateDbInstanceOutcomeCallable UpdateDbInstanceCallable(const UpdateDbInstanceRequestT& request) const
        {
            return SubmitCallable(&TimestreamInfluxDBClient::UpdateDbInstance, request);
        }

        /**
         * An Async wrapper for UpdateDbInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDbInstanceRequestT = Model::UpdateDbInstanceRequest>
        void UpdateDbInstanceAsync(const UpdateDbInstanceRequestT& request, const UpdateDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TimestreamInfluxDBClient::UpdateDbInstance, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<TimestreamInfluxDBEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<TimestreamInfluxDBClient>;
      void init(const TimestreamInfluxDBClientConfiguration& clientConfiguration);

      TimestreamInfluxDBClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<TimestreamInfluxDBEndpointProviderBase> m_endpointProvider;
  };

} // namespace TimestreamInfluxDB
} // namespace Aws
