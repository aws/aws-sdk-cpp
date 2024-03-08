/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/neptune/NeptuneServiceClientModel.h>

namespace Aws
{
namespace Neptune
{
  /**
   * <fullname>Amazon Neptune</fullname> <p>Amazon Neptune is a fast, reliable,
   * fully-managed graph database service that makes it easy to build and run
   * applications that work with highly connected datasets. The core of Amazon
   * Neptune is a purpose-built, high-performance graph database engine optimized for
   * storing billions of relationships and querying the graph with milliseconds
   * latency. Amazon Neptune supports popular graph models Property Graph and W3C's
   * RDF, and their respective query languages Apache TinkerPop Gremlin and SPARQL,
   * allowing you to easily build queries that efficiently navigate highly connected
   * datasets. Neptune powers graph use cases such as recommendation engines, fraud
   * detection, knowledge graphs, drug discovery, and network security.</p> <p>This
   * interface reference for Amazon Neptune contains documentation for a programming
   * or command line interface you can use to manage Amazon Neptune. Note that Amazon
   * Neptune is asynchronous, which means that some interfaces might require
   * techniques such as polling or callback functions to determine when a command has
   * been applied. In this reference, the parameter descriptions indicate whether a
   * command is applied immediately, on the next instance reboot, or during the
   * maintenance window. The reference structure is as follows, and we list following
   * some related topics from the user guide.</p>
   */
  class AWS_NEPTUNE_API NeptuneClient : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<NeptuneClient>
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef NeptuneClientConfiguration ClientConfigurationType;
      typedef NeptuneEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NeptuneClient(const Aws::Neptune::NeptuneClientConfiguration& clientConfiguration = Aws::Neptune::NeptuneClientConfiguration(),
                      std::shared_ptr<NeptuneEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NeptuneClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<NeptuneEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::Neptune::NeptuneClientConfiguration& clientConfiguration = Aws::Neptune::NeptuneClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NeptuneClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<NeptuneEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::Neptune::NeptuneClientConfiguration& clientConfiguration = Aws::Neptune::NeptuneClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NeptuneClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NeptuneClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NeptuneClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~NeptuneClient();


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Associates an Identity and Access Management (IAM) role with an Neptune DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/AddRoleToDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::AddRoleToDBClusterOutcome AddRoleToDBCluster(const Model::AddRoleToDBClusterRequest& request) const;

        /**
         * A Callable wrapper for AddRoleToDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddRoleToDBClusterRequestT = Model::AddRoleToDBClusterRequest>
        Model::AddRoleToDBClusterOutcomeCallable AddRoleToDBClusterCallable(const AddRoleToDBClusterRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::AddRoleToDBCluster, request);
        }

        /**
         * An Async wrapper for AddRoleToDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddRoleToDBClusterRequestT = Model::AddRoleToDBClusterRequest>
        void AddRoleToDBClusterAsync(const AddRoleToDBClusterRequestT& request, const AddRoleToDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::AddRoleToDBCluster, request, handler, context);
        }

        /**
         * <p>Adds a source identifier to an existing event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/AddSourceIdentifierToSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::AddSourceIdentifierToSubscriptionOutcome AddSourceIdentifierToSubscription(const Model::AddSourceIdentifierToSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for AddSourceIdentifierToSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddSourceIdentifierToSubscriptionRequestT = Model::AddSourceIdentifierToSubscriptionRequest>
        Model::AddSourceIdentifierToSubscriptionOutcomeCallable AddSourceIdentifierToSubscriptionCallable(const AddSourceIdentifierToSubscriptionRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::AddSourceIdentifierToSubscription, request);
        }

        /**
         * An Async wrapper for AddSourceIdentifierToSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddSourceIdentifierToSubscriptionRequestT = Model::AddSourceIdentifierToSubscriptionRequest>
        void AddSourceIdentifierToSubscriptionAsync(const AddSourceIdentifierToSubscriptionRequestT& request, const AddSourceIdentifierToSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::AddSourceIdentifierToSubscription, request, handler, context);
        }

        /**
         * <p>Adds metadata tags to an Amazon Neptune resource. These tags can also be used
         * with cost allocation reporting to track cost associated with Amazon Neptune
         * resources, or used in a Condition statement in an IAM policy for Amazon
         * Neptune.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/AddTagsToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /**
         * A Callable wrapper for AddTagsToResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddTagsToResourceRequestT = Model::AddTagsToResourceRequest>
        Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const AddTagsToResourceRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::AddTagsToResource, request);
        }

        /**
         * An Async wrapper for AddTagsToResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddTagsToResourceRequestT = Model::AddTagsToResourceRequest>
        void AddTagsToResourceAsync(const AddTagsToResourceRequestT& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::AddTagsToResource, request, handler, context);
        }

        /**
         * <p>Applies a pending maintenance action to a resource (for example, to a DB
         * instance).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ApplyPendingMaintenanceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::ApplyPendingMaintenanceActionOutcome ApplyPendingMaintenanceAction(const Model::ApplyPendingMaintenanceActionRequest& request) const;

        /**
         * A Callable wrapper for ApplyPendingMaintenanceAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ApplyPendingMaintenanceActionRequestT = Model::ApplyPendingMaintenanceActionRequest>
        Model::ApplyPendingMaintenanceActionOutcomeCallable ApplyPendingMaintenanceActionCallable(const ApplyPendingMaintenanceActionRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::ApplyPendingMaintenanceAction, request);
        }

        /**
         * An Async wrapper for ApplyPendingMaintenanceAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ApplyPendingMaintenanceActionRequestT = Model::ApplyPendingMaintenanceActionRequest>
        void ApplyPendingMaintenanceActionAsync(const ApplyPendingMaintenanceActionRequestT& request, const ApplyPendingMaintenanceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::ApplyPendingMaintenanceAction, request, handler, context);
        }

        /**
         * <p>Copies the specified DB cluster parameter group.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CopyDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyDBClusterParameterGroupOutcome CopyDBClusterParameterGroup(const Model::CopyDBClusterParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for CopyDBClusterParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopyDBClusterParameterGroupRequestT = Model::CopyDBClusterParameterGroupRequest>
        Model::CopyDBClusterParameterGroupOutcomeCallable CopyDBClusterParameterGroupCallable(const CopyDBClusterParameterGroupRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::CopyDBClusterParameterGroup, request);
        }

        /**
         * An Async wrapper for CopyDBClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopyDBClusterParameterGroupRequestT = Model::CopyDBClusterParameterGroupRequest>
        void CopyDBClusterParameterGroupAsync(const CopyDBClusterParameterGroupRequestT& request, const CopyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::CopyDBClusterParameterGroup, request, handler, context);
        }

        /**
         * <p>Copies a snapshot of a DB cluster.</p> <p>To copy a DB cluster snapshot from
         * a shared manual DB cluster snapshot,
         * <code>SourceDBClusterSnapshotIdentifier</code> must be the Amazon Resource Name
         * (ARN) of the shared DB cluster snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CopyDBClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyDBClusterSnapshotOutcome CopyDBClusterSnapshot(const Model::CopyDBClusterSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CopyDBClusterSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopyDBClusterSnapshotRequestT = Model::CopyDBClusterSnapshotRequest>
        Model::CopyDBClusterSnapshotOutcomeCallable CopyDBClusterSnapshotCallable(const CopyDBClusterSnapshotRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::CopyDBClusterSnapshot, request);
        }

        /**
         * An Async wrapper for CopyDBClusterSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopyDBClusterSnapshotRequestT = Model::CopyDBClusterSnapshotRequest>
        void CopyDBClusterSnapshotAsync(const CopyDBClusterSnapshotRequestT& request, const CopyDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::CopyDBClusterSnapshot, request, handler, context);
        }

        /**
         * <p>Copies the specified DB parameter group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CopyDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyDBParameterGroupOutcome CopyDBParameterGroup(const Model::CopyDBParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for CopyDBParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopyDBParameterGroupRequestT = Model::CopyDBParameterGroupRequest>
        Model::CopyDBParameterGroupOutcomeCallable CopyDBParameterGroupCallable(const CopyDBParameterGroupRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::CopyDBParameterGroup, request);
        }

        /**
         * An Async wrapper for CopyDBParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopyDBParameterGroupRequestT = Model::CopyDBParameterGroupRequest>
        void CopyDBParameterGroupAsync(const CopyDBParameterGroupRequestT& request, const CopyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::CopyDBParameterGroup, request, handler, context);
        }

        /**
         * <p>Creates a new Amazon Neptune DB cluster.</p> <p>You can use the
         * <code>ReplicationSourceIdentifier</code> parameter to create the DB cluster as a
         * Read Replica of another DB cluster or Amazon Neptune DB instance.</p> <p>Note
         * that when you create a new cluster using <code>CreateDBCluster</code> directly,
         * deletion protection is disabled by default (when you create a new production
         * cluster in the console, deletion protection is enabled by default). You can only
         * delete a DB cluster if its <code>DeletionProtection</code> field is set to
         * <code>false</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterOutcome CreateDBCluster(const Model::CreateDBClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBClusterRequestT = Model::CreateDBClusterRequest>
        Model::CreateDBClusterOutcomeCallable CreateDBClusterCallable(const CreateDBClusterRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::CreateDBCluster, request);
        }

        /**
         * An Async wrapper for CreateDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBClusterRequestT = Model::CreateDBClusterRequest>
        void CreateDBClusterAsync(const CreateDBClusterRequestT& request, const CreateDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::CreateDBCluster, request, handler, context);
        }

        /**
         * <p>Creates a new custom endpoint and associates it with an Amazon Neptune DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBClusterEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterEndpointOutcome CreateDBClusterEndpoint(const Model::CreateDBClusterEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateDBClusterEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBClusterEndpointRequestT = Model::CreateDBClusterEndpointRequest>
        Model::CreateDBClusterEndpointOutcomeCallable CreateDBClusterEndpointCallable(const CreateDBClusterEndpointRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::CreateDBClusterEndpoint, request);
        }

        /**
         * An Async wrapper for CreateDBClusterEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBClusterEndpointRequestT = Model::CreateDBClusterEndpointRequest>
        void CreateDBClusterEndpointAsync(const CreateDBClusterEndpointRequestT& request, const CreateDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::CreateDBClusterEndpoint, request, handler, context);
        }

        /**
         * <p>Creates a new DB cluster parameter group.</p> <p>Parameters in a DB cluster
         * parameter group apply to all of the instances in a DB cluster.</p> <p> A DB
         * cluster parameter group is initially created with the default parameters for the
         * database engine used by instances in the DB cluster. To provide custom values
         * for any of the parameters, you must modify the group after creating it using
         * <a>ModifyDBClusterParameterGroup</a>. Once you've created a DB cluster parameter
         * group, you need to associate it with your DB cluster using
         * <a>ModifyDBCluster</a>. When you associate a new DB cluster parameter group with
         * a running DB cluster, you need to reboot the DB instances in the DB cluster
         * without failover for the new DB cluster parameter group and associated settings
         * to take effect.</p>  <p>After you create a DB cluster parameter
         * group, you should wait at least 5 minutes before creating your first DB cluster
         * that uses that DB cluster parameter group as the default parameter group. This
         * allows Amazon Neptune to fully complete the create action before the DB cluster
         * parameter group is used as the default for a new DB cluster. This is especially
         * important for parameters that are critical when creating the default database
         * for a DB cluster, such as the character set for the default database defined by
         * the <code>character_set_database</code> parameter. You can use the <i>Parameter
         * Groups</i> option of the <a href="https://console.aws.amazon.com/rds/">Amazon
         * Neptune console</a> or the <a>DescribeDBClusterParameters</a> command to verify
         * that your DB cluster parameter group has been created or modified.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterParameterGroupOutcome CreateDBClusterParameterGroup(const Model::CreateDBClusterParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateDBClusterParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBClusterParameterGroupRequestT = Model::CreateDBClusterParameterGroupRequest>
        Model::CreateDBClusterParameterGroupOutcomeCallable CreateDBClusterParameterGroupCallable(const CreateDBClusterParameterGroupRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::CreateDBClusterParameterGroup, request);
        }

        /**
         * An Async wrapper for CreateDBClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBClusterParameterGroupRequestT = Model::CreateDBClusterParameterGroupRequest>
        void CreateDBClusterParameterGroupAsync(const CreateDBClusterParameterGroupRequestT& request, const CreateDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::CreateDBClusterParameterGroup, request, handler, context);
        }

        /**
         * <p>Creates a snapshot of a DB cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBClusterSnapshotOutcome CreateDBClusterSnapshot(const Model::CreateDBClusterSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateDBClusterSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBClusterSnapshotRequestT = Model::CreateDBClusterSnapshotRequest>
        Model::CreateDBClusterSnapshotOutcomeCallable CreateDBClusterSnapshotCallable(const CreateDBClusterSnapshotRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::CreateDBClusterSnapshot, request);
        }

        /**
         * An Async wrapper for CreateDBClusterSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBClusterSnapshotRequestT = Model::CreateDBClusterSnapshotRequest>
        void CreateDBClusterSnapshotAsync(const CreateDBClusterSnapshotRequestT& request, const CreateDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::CreateDBClusterSnapshot, request, handler, context);
        }

        /**
         * <p>Creates a new DB instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBInstanceOutcome CreateDBInstance(const Model::CreateDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBInstanceRequestT = Model::CreateDBInstanceRequest>
        Model::CreateDBInstanceOutcomeCallable CreateDBInstanceCallable(const CreateDBInstanceRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::CreateDBInstance, request);
        }

        /**
         * An Async wrapper for CreateDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBInstanceRequestT = Model::CreateDBInstanceRequest>
        void CreateDBInstanceAsync(const CreateDBInstanceRequestT& request, const CreateDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::CreateDBInstance, request, handler, context);
        }

        /**
         * <p>Creates a new DB parameter group.</p> <p>A DB parameter group is initially
         * created with the default parameters for the database engine used by the DB
         * instance. To provide custom values for any of the parameters, you must modify
         * the group after creating it using <i>ModifyDBParameterGroup</i>. Once you've
         * created a DB parameter group, you need to associate it with your DB instance
         * using <i>ModifyDBInstance</i>. When you associate a new DB parameter group with
         * a running DB instance, you need to reboot the DB instance without failover for
         * the new DB parameter group and associated settings to take effect.</p>
         *  <p>After you create a DB parameter group, you should wait at least 5
         * minutes before creating your first DB instance that uses that DB parameter group
         * as the default parameter group. This allows Amazon Neptune to fully complete the
         * create action before the parameter group is used as the default for a new DB
         * instance. This is especially important for parameters that are critical when
         * creating the default database for a DB instance, such as the character set for
         * the default database defined by the <code>character_set_database</code>
         * parameter. You can use the <i>Parameter Groups</i> option of the Amazon Neptune
         * console or the <i>DescribeDBParameters</i> command to verify that your DB
         * parameter group has been created or modified.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBParameterGroupOutcome CreateDBParameterGroup(const Model::CreateDBParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateDBParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBParameterGroupRequestT = Model::CreateDBParameterGroupRequest>
        Model::CreateDBParameterGroupOutcomeCallable CreateDBParameterGroupCallable(const CreateDBParameterGroupRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::CreateDBParameterGroup, request);
        }

        /**
         * An Async wrapper for CreateDBParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBParameterGroupRequestT = Model::CreateDBParameterGroupRequest>
        void CreateDBParameterGroupAsync(const CreateDBParameterGroupRequestT& request, const CreateDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::CreateDBParameterGroup, request, handler, context);
        }

        /**
         * <p>Creates a new DB subnet group. DB subnet groups must contain at least one
         * subnet in at least two AZs in the Amazon Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateDBSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDBSubnetGroupOutcome CreateDBSubnetGroup(const Model::CreateDBSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateDBSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDBSubnetGroupRequestT = Model::CreateDBSubnetGroupRequest>
        Model::CreateDBSubnetGroupOutcomeCallable CreateDBSubnetGroupCallable(const CreateDBSubnetGroupRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::CreateDBSubnetGroup, request);
        }

        /**
         * An Async wrapper for CreateDBSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDBSubnetGroupRequestT = Model::CreateDBSubnetGroupRequest>
        void CreateDBSubnetGroupAsync(const CreateDBSubnetGroupRequestT& request, const CreateDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::CreateDBSubnetGroup, request, handler, context);
        }

        /**
         * <p>Creates an event notification subscription. This action requires a topic ARN
         * (Amazon Resource Name) created by either the Neptune console, the SNS console,
         * or the SNS API. To obtain an ARN with SNS, you must create a topic in Amazon SNS
         * and subscribe to the topic. The ARN is displayed in the SNS console.</p> <p>You
         * can specify the type of source (SourceType) you want to be notified of, provide
         * a list of Neptune sources (SourceIds) that triggers the events, and provide a
         * list of event categories (EventCategories) for events you want to be notified
         * of. For example, you can specify SourceType = db-instance, SourceIds =
         * mydbinstance1, mydbinstance2 and EventCategories = Availability, Backup.</p>
         * <p>If you specify both the SourceType and SourceIds, such as SourceType =
         * db-instance and SourceIdentifier = myDBInstance1, you are notified of all the
         * db-instance events for the specified source. If you specify a SourceType but do
         * not specify a SourceIdentifier, you receive notice of the events for that source
         * type for all your Neptune sources. If you do not specify either the SourceType
         * nor the SourceIdentifier, you are notified of events generated from all Neptune
         * sources belonging to your customer account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventSubscriptionOutcome CreateEventSubscription(const Model::CreateEventSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for CreateEventSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEventSubscriptionRequestT = Model::CreateEventSubscriptionRequest>
        Model::CreateEventSubscriptionOutcomeCallable CreateEventSubscriptionCallable(const CreateEventSubscriptionRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::CreateEventSubscription, request);
        }

        /**
         * An Async wrapper for CreateEventSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEventSubscriptionRequestT = Model::CreateEventSubscriptionRequest>
        void CreateEventSubscriptionAsync(const CreateEventSubscriptionRequestT& request, const CreateEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::CreateEventSubscription, request, handler, context);
        }

        /**
         * <p>Creates a Neptune global database spread across multiple Amazon Regions. The
         * global database contains a single primary cluster with read-write capability,
         * and read-only secondary clusters that receive data from the primary cluster
         * through high-speed replication performed by the Neptune storage subsystem.</p>
         * <p>You can create a global database that is initially empty, and then add a
         * primary cluster and secondary clusters to it, or you can specify an existing
         * Neptune cluster during the create operation to become the primary cluster of the
         * global database.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CreateGlobalCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGlobalClusterOutcome CreateGlobalCluster(const Model::CreateGlobalClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateGlobalCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGlobalClusterRequestT = Model::CreateGlobalClusterRequest>
        Model::CreateGlobalClusterOutcomeCallable CreateGlobalClusterCallable(const CreateGlobalClusterRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::CreateGlobalCluster, request);
        }

        /**
         * An Async wrapper for CreateGlobalCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGlobalClusterRequestT = Model::CreateGlobalClusterRequest>
        void CreateGlobalClusterAsync(const CreateGlobalClusterRequestT& request, const CreateGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::CreateGlobalCluster, request, handler, context);
        }

        /**
         * <p>The DeleteDBCluster action deletes a previously provisioned DB cluster. When
         * you delete a DB cluster, all automated backups for that DB cluster are deleted
         * and can't be recovered. Manual DB cluster snapshots of the specified DB cluster
         * are not deleted.</p> <p>Note that the DB Cluster cannot be deleted if deletion
         * protection is enabled. To delete it, you must first set its
         * <code>DeletionProtection</code> field to <code>False</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterOutcome DeleteDBCluster(const Model::DeleteDBClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBClusterRequestT = Model::DeleteDBClusterRequest>
        Model::DeleteDBClusterOutcomeCallable DeleteDBClusterCallable(const DeleteDBClusterRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DeleteDBCluster, request);
        }

        /**
         * An Async wrapper for DeleteDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBClusterRequestT = Model::DeleteDBClusterRequest>
        void DeleteDBClusterAsync(const DeleteDBClusterRequestT& request, const DeleteDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DeleteDBCluster, request, handler, context);
        }

        /**
         * <p>Deletes a custom endpoint and removes it from an Amazon Neptune DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBClusterEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterEndpointOutcome DeleteDBClusterEndpoint(const Model::DeleteDBClusterEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBClusterEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBClusterEndpointRequestT = Model::DeleteDBClusterEndpointRequest>
        Model::DeleteDBClusterEndpointOutcomeCallable DeleteDBClusterEndpointCallable(const DeleteDBClusterEndpointRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DeleteDBClusterEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteDBClusterEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBClusterEndpointRequestT = Model::DeleteDBClusterEndpointRequest>
        void DeleteDBClusterEndpointAsync(const DeleteDBClusterEndpointRequestT& request, const DeleteDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DeleteDBClusterEndpoint, request, handler, context);
        }

        /**
         * <p>Deletes a specified DB cluster parameter group. The DB cluster parameter
         * group to be deleted can't be associated with any DB clusters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterParameterGroupOutcome DeleteDBClusterParameterGroup(const Model::DeleteDBClusterParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBClusterParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBClusterParameterGroupRequestT = Model::DeleteDBClusterParameterGroupRequest>
        Model::DeleteDBClusterParameterGroupOutcomeCallable DeleteDBClusterParameterGroupCallable(const DeleteDBClusterParameterGroupRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DeleteDBClusterParameterGroup, request);
        }

        /**
         * An Async wrapper for DeleteDBClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBClusterParameterGroupRequestT = Model::DeleteDBClusterParameterGroupRequest>
        void DeleteDBClusterParameterGroupAsync(const DeleteDBClusterParameterGroupRequestT& request, const DeleteDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DeleteDBClusterParameterGroup, request, handler, context);
        }

        /**
         * <p>Deletes a DB cluster snapshot. If the snapshot is being copied, the copy
         * operation is terminated.</p>  <p>The DB cluster snapshot must be in the
         * <code>available</code> state to be deleted.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBClusterSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBClusterSnapshotOutcome DeleteDBClusterSnapshot(const Model::DeleteDBClusterSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBClusterSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBClusterSnapshotRequestT = Model::DeleteDBClusterSnapshotRequest>
        Model::DeleteDBClusterSnapshotOutcomeCallable DeleteDBClusterSnapshotCallable(const DeleteDBClusterSnapshotRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DeleteDBClusterSnapshot, request);
        }

        /**
         * An Async wrapper for DeleteDBClusterSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBClusterSnapshotRequestT = Model::DeleteDBClusterSnapshotRequest>
        void DeleteDBClusterSnapshotAsync(const DeleteDBClusterSnapshotRequestT& request, const DeleteDBClusterSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DeleteDBClusterSnapshot, request, handler, context);
        }

        /**
         * <p>The DeleteDBInstance action deletes a previously provisioned DB instance.
         * When you delete a DB instance, all automated backups for that instance are
         * deleted and can't be recovered. Manual DB snapshots of the DB instance to be
         * deleted by <code>DeleteDBInstance</code> are not deleted.</p> <p> If you request
         * a final DB snapshot the status of the Amazon Neptune DB instance is
         * <code>deleting</code> until the DB snapshot is created. The API action
         * <code>DescribeDBInstance</code> is used to monitor the status of this operation.
         * The action can't be canceled or reverted once submitted.</p> <p>Note that when a
         * DB instance is in a failure state and has a status of <code>failed</code>,
         * <code>incompatible-restore</code>, or <code>incompatible-network</code>, you can
         * only delete it when the <code>SkipFinalSnapshot</code> parameter is set to
         * <code>true</code>.</p> <p>You can't delete a DB instance if it is the only
         * instance in the DB cluster, or if it has deletion protection
         * enabled.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBInstanceOutcome DeleteDBInstance(const Model::DeleteDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBInstanceRequestT = Model::DeleteDBInstanceRequest>
        Model::DeleteDBInstanceOutcomeCallable DeleteDBInstanceCallable(const DeleteDBInstanceRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DeleteDBInstance, request);
        }

        /**
         * An Async wrapper for DeleteDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBInstanceRequestT = Model::DeleteDBInstanceRequest>
        void DeleteDBInstanceAsync(const DeleteDBInstanceRequestT& request, const DeleteDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DeleteDBInstance, request, handler, context);
        }

        /**
         * <p>Deletes a specified DBParameterGroup. The DBParameterGroup to be deleted
         * can't be associated with any DB instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBParameterGroupOutcome DeleteDBParameterGroup(const Model::DeleteDBParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBParameterGroupRequestT = Model::DeleteDBParameterGroupRequest>
        Model::DeleteDBParameterGroupOutcomeCallable DeleteDBParameterGroupCallable(const DeleteDBParameterGroupRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DeleteDBParameterGroup, request);
        }

        /**
         * An Async wrapper for DeleteDBParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBParameterGroupRequestT = Model::DeleteDBParameterGroupRequest>
        void DeleteDBParameterGroupAsync(const DeleteDBParameterGroupRequestT& request, const DeleteDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DeleteDBParameterGroup, request, handler, context);
        }

        /**
         * <p>Deletes a DB subnet group.</p>  <p>The specified database subnet group
         * must not be associated with any DB instances.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteDBSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDBSubnetGroupOutcome DeleteDBSubnetGroup(const Model::DeleteDBSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDBSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDBSubnetGroupRequestT = Model::DeleteDBSubnetGroupRequest>
        Model::DeleteDBSubnetGroupOutcomeCallable DeleteDBSubnetGroupCallable(const DeleteDBSubnetGroupRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DeleteDBSubnetGroup, request);
        }

        /**
         * An Async wrapper for DeleteDBSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDBSubnetGroupRequestT = Model::DeleteDBSubnetGroupRequest>
        void DeleteDBSubnetGroupAsync(const DeleteDBSubnetGroupRequestT& request, const DeleteDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DeleteDBSubnetGroup, request, handler, context);
        }

        /**
         * <p>Deletes an event notification subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventSubscriptionOutcome DeleteEventSubscription(const Model::DeleteEventSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEventSubscriptionRequestT = Model::DeleteEventSubscriptionRequest>
        Model::DeleteEventSubscriptionOutcomeCallable DeleteEventSubscriptionCallable(const DeleteEventSubscriptionRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DeleteEventSubscription, request);
        }

        /**
         * An Async wrapper for DeleteEventSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEventSubscriptionRequestT = Model::DeleteEventSubscriptionRequest>
        void DeleteEventSubscriptionAsync(const DeleteEventSubscriptionRequestT& request, const DeleteEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DeleteEventSubscription, request, handler, context);
        }

        /**
         * <p>Deletes a global database. The primary and all secondary clusters must
         * already be detached or deleted first.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DeleteGlobalCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGlobalClusterOutcome DeleteGlobalCluster(const Model::DeleteGlobalClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteGlobalCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGlobalClusterRequestT = Model::DeleteGlobalClusterRequest>
        Model::DeleteGlobalClusterOutcomeCallable DeleteGlobalClusterCallable(const DeleteGlobalClusterRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DeleteGlobalCluster, request);
        }

        /**
         * An Async wrapper for DeleteGlobalCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGlobalClusterRequestT = Model::DeleteGlobalClusterRequest>
        void DeleteGlobalClusterAsync(const DeleteGlobalClusterRequestT& request, const DeleteGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DeleteGlobalCluster, request, handler, context);
        }

        /**
         * <p>Returns information about endpoints for an Amazon Neptune DB cluster.</p>
         *  <p>This operation can also return information for Amazon RDS clusters and
         * Amazon DocDB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusterEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterEndpointsOutcome DescribeDBClusterEndpoints(const Model::DescribeDBClusterEndpointsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBClusterEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBClusterEndpointsRequestT = Model::DescribeDBClusterEndpointsRequest>
        Model::DescribeDBClusterEndpointsOutcomeCallable DescribeDBClusterEndpointsCallable(const DescribeDBClusterEndpointsRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DescribeDBClusterEndpoints, request);
        }

        /**
         * An Async wrapper for DescribeDBClusterEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBClusterEndpointsRequestT = Model::DescribeDBClusterEndpointsRequest>
        void DescribeDBClusterEndpointsAsync(const DescribeDBClusterEndpointsRequestT& request, const DescribeDBClusterEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DescribeDBClusterEndpoints, request, handler, context);
        }

        /**
         * <p> Returns a list of <code>DBClusterParameterGroup</code> descriptions. If a
         * <code>DBClusterParameterGroupName</code> parameter is specified, the list will
         * contain only the description of the specified DB cluster parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusterParameterGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterParameterGroupsOutcome DescribeDBClusterParameterGroups(const Model::DescribeDBClusterParameterGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBClusterParameterGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBClusterParameterGroupsRequestT = Model::DescribeDBClusterParameterGroupsRequest>
        Model::DescribeDBClusterParameterGroupsOutcomeCallable DescribeDBClusterParameterGroupsCallable(const DescribeDBClusterParameterGroupsRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DescribeDBClusterParameterGroups, request);
        }

        /**
         * An Async wrapper for DescribeDBClusterParameterGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBClusterParameterGroupsRequestT = Model::DescribeDBClusterParameterGroupsRequest>
        void DescribeDBClusterParameterGroupsAsync(const DescribeDBClusterParameterGroupsRequestT& request, const DescribeDBClusterParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DescribeDBClusterParameterGroups, request, handler, context);
        }

        /**
         * <p>Returns the detailed parameter list for a particular DB cluster parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusterParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterParametersOutcome DescribeDBClusterParameters(const Model::DescribeDBClusterParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBClusterParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBClusterParametersRequestT = Model::DescribeDBClusterParametersRequest>
        Model::DescribeDBClusterParametersOutcomeCallable DescribeDBClusterParametersCallable(const DescribeDBClusterParametersRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DescribeDBClusterParameters, request);
        }

        /**
         * An Async wrapper for DescribeDBClusterParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBClusterParametersRequestT = Model::DescribeDBClusterParametersRequest>
        void DescribeDBClusterParametersAsync(const DescribeDBClusterParametersRequestT& request, const DescribeDBClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DescribeDBClusterParameters, request, handler, context);
        }

        /**
         * <p>Returns a list of DB cluster snapshot attribute names and values for a manual
         * DB cluster snapshot.</p> <p>When sharing snapshots with other Amazon accounts,
         * <code>DescribeDBClusterSnapshotAttributes</code> returns the
         * <code>restore</code> attribute and a list of IDs for the Amazon accounts that
         * are authorized to copy or restore the manual DB cluster snapshot. If
         * <code>all</code> is included in the list of values for the <code>restore</code>
         * attribute, then the manual DB cluster snapshot is public and can be copied or
         * restored by all Amazon accounts.</p> <p>To add or remove access for an Amazon
         * account to copy or restore a manual DB cluster snapshot, or to make the manual
         * DB cluster snapshot public or private, use the
         * <a>ModifyDBClusterSnapshotAttribute</a> API action.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusterSnapshotAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterSnapshotAttributesOutcome DescribeDBClusterSnapshotAttributes(const Model::DescribeDBClusterSnapshotAttributesRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBClusterSnapshotAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBClusterSnapshotAttributesRequestT = Model::DescribeDBClusterSnapshotAttributesRequest>
        Model::DescribeDBClusterSnapshotAttributesOutcomeCallable DescribeDBClusterSnapshotAttributesCallable(const DescribeDBClusterSnapshotAttributesRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DescribeDBClusterSnapshotAttributes, request);
        }

        /**
         * An Async wrapper for DescribeDBClusterSnapshotAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBClusterSnapshotAttributesRequestT = Model::DescribeDBClusterSnapshotAttributesRequest>
        void DescribeDBClusterSnapshotAttributesAsync(const DescribeDBClusterSnapshotAttributesRequestT& request, const DescribeDBClusterSnapshotAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DescribeDBClusterSnapshotAttributes, request, handler, context);
        }

        /**
         * <p>Returns information about DB cluster snapshots. This API action supports
         * pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusterSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClusterSnapshotsOutcome DescribeDBClusterSnapshots(const Model::DescribeDBClusterSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBClusterSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBClusterSnapshotsRequestT = Model::DescribeDBClusterSnapshotsRequest>
        Model::DescribeDBClusterSnapshotsOutcomeCallable DescribeDBClusterSnapshotsCallable(const DescribeDBClusterSnapshotsRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DescribeDBClusterSnapshots, request);
        }

        /**
         * An Async wrapper for DescribeDBClusterSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBClusterSnapshotsRequestT = Model::DescribeDBClusterSnapshotsRequest>
        void DescribeDBClusterSnapshotsAsync(const DescribeDBClusterSnapshotsRequestT& request, const DescribeDBClusterSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DescribeDBClusterSnapshots, request, handler, context);
        }

        /**
         * <p>Returns information about provisioned DB clusters, and supports
         * pagination.</p>  <p>This operation can also return information for Amazon
         * RDS clusters and Amazon DocDB clusters.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBClustersOutcome DescribeDBClusters(const Model::DescribeDBClustersRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBClustersRequestT = Model::DescribeDBClustersRequest>
        Model::DescribeDBClustersOutcomeCallable DescribeDBClustersCallable(const DescribeDBClustersRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DescribeDBClusters, request);
        }

        /**
         * An Async wrapper for DescribeDBClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBClustersRequestT = Model::DescribeDBClustersRequest>
        void DescribeDBClustersAsync(const DescribeDBClustersRequestT& request, const DescribeDBClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DescribeDBClusters, request, handler, context);
        }

        /**
         * <p>Returns a list of the available DB engines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBEngineVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBEngineVersionsOutcome DescribeDBEngineVersions(const Model::DescribeDBEngineVersionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBEngineVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBEngineVersionsRequestT = Model::DescribeDBEngineVersionsRequest>
        Model::DescribeDBEngineVersionsOutcomeCallable DescribeDBEngineVersionsCallable(const DescribeDBEngineVersionsRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DescribeDBEngineVersions, request);
        }

        /**
         * An Async wrapper for DescribeDBEngineVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBEngineVersionsRequestT = Model::DescribeDBEngineVersionsRequest>
        void DescribeDBEngineVersionsAsync(const DescribeDBEngineVersionsRequestT& request, const DescribeDBEngineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DescribeDBEngineVersions, request, handler, context);
        }

        /**
         * <p>Returns information about provisioned instances, and supports pagination.</p>
         *  <p>This operation can also return information for Amazon RDS instances
         * and Amazon DocDB instances.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBInstancesOutcome DescribeDBInstances(const Model::DescribeDBInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBInstancesRequestT = Model::DescribeDBInstancesRequest>
        Model::DescribeDBInstancesOutcomeCallable DescribeDBInstancesCallable(const DescribeDBInstancesRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DescribeDBInstances, request);
        }

        /**
         * An Async wrapper for DescribeDBInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBInstancesRequestT = Model::DescribeDBInstancesRequest>
        void DescribeDBInstancesAsync(const DescribeDBInstancesRequestT& request, const DescribeDBInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DescribeDBInstances, request, handler, context);
        }

        /**
         * <p>Returns a list of <code>DBParameterGroup</code> descriptions. If a
         * <code>DBParameterGroupName</code> is specified, the list will contain only the
         * description of the specified DB parameter group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBParameterGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBParameterGroupsOutcome DescribeDBParameterGroups(const Model::DescribeDBParameterGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBParameterGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBParameterGroupsRequestT = Model::DescribeDBParameterGroupsRequest>
        Model::DescribeDBParameterGroupsOutcomeCallable DescribeDBParameterGroupsCallable(const DescribeDBParameterGroupsRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DescribeDBParameterGroups, request);
        }

        /**
         * An Async wrapper for DescribeDBParameterGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBParameterGroupsRequestT = Model::DescribeDBParameterGroupsRequest>
        void DescribeDBParameterGroupsAsync(const DescribeDBParameterGroupsRequestT& request, const DescribeDBParameterGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DescribeDBParameterGroups, request, handler, context);
        }

        /**
         * <p>Returns the detailed parameter list for a particular DB parameter
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBParametersOutcome DescribeDBParameters(const Model::DescribeDBParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBParametersRequestT = Model::DescribeDBParametersRequest>
        Model::DescribeDBParametersOutcomeCallable DescribeDBParametersCallable(const DescribeDBParametersRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DescribeDBParameters, request);
        }

        /**
         * An Async wrapper for DescribeDBParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBParametersRequestT = Model::DescribeDBParametersRequest>
        void DescribeDBParametersAsync(const DescribeDBParametersRequestT& request, const DescribeDBParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DescribeDBParameters, request, handler, context);
        }

        /**
         * <p>Returns a list of DBSubnetGroup descriptions. If a DBSubnetGroupName is
         * specified, the list will contain only the descriptions of the specified
         * DBSubnetGroup.</p> <p>For an overview of CIDR ranges, go to the <a
         * href="http://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Wikipedia
         * Tutorial</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeDBSubnetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDBSubnetGroupsOutcome DescribeDBSubnetGroups(const Model::DescribeDBSubnetGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDBSubnetGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDBSubnetGroupsRequestT = Model::DescribeDBSubnetGroupsRequest>
        Model::DescribeDBSubnetGroupsOutcomeCallable DescribeDBSubnetGroupsCallable(const DescribeDBSubnetGroupsRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DescribeDBSubnetGroups, request);
        }

        /**
         * An Async wrapper for DescribeDBSubnetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDBSubnetGroupsRequestT = Model::DescribeDBSubnetGroupsRequest>
        void DescribeDBSubnetGroupsAsync(const DescribeDBSubnetGroupsRequestT& request, const DescribeDBSubnetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DescribeDBSubnetGroups, request, handler, context);
        }

        /**
         * <p>Returns the default engine and system parameter information for the cluster
         * database engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeEngineDefaultClusterParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEngineDefaultClusterParametersOutcome DescribeEngineDefaultClusterParameters(const Model::DescribeEngineDefaultClusterParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeEngineDefaultClusterParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEngineDefaultClusterParametersRequestT = Model::DescribeEngineDefaultClusterParametersRequest>
        Model::DescribeEngineDefaultClusterParametersOutcomeCallable DescribeEngineDefaultClusterParametersCallable(const DescribeEngineDefaultClusterParametersRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DescribeEngineDefaultClusterParameters, request);
        }

        /**
         * An Async wrapper for DescribeEngineDefaultClusterParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEngineDefaultClusterParametersRequestT = Model::DescribeEngineDefaultClusterParametersRequest>
        void DescribeEngineDefaultClusterParametersAsync(const DescribeEngineDefaultClusterParametersRequestT& request, const DescribeEngineDefaultClusterParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DescribeEngineDefaultClusterParameters, request, handler, context);
        }

        /**
         * <p>Returns the default engine and system parameter information for the specified
         * database engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeEngineDefaultParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEngineDefaultParametersOutcome DescribeEngineDefaultParameters(const Model::DescribeEngineDefaultParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeEngineDefaultParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEngineDefaultParametersRequestT = Model::DescribeEngineDefaultParametersRequest>
        Model::DescribeEngineDefaultParametersOutcomeCallable DescribeEngineDefaultParametersCallable(const DescribeEngineDefaultParametersRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DescribeEngineDefaultParameters, request);
        }

        /**
         * An Async wrapper for DescribeEngineDefaultParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEngineDefaultParametersRequestT = Model::DescribeEngineDefaultParametersRequest>
        void DescribeEngineDefaultParametersAsync(const DescribeEngineDefaultParametersRequestT& request, const DescribeEngineDefaultParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DescribeEngineDefaultParameters, request, handler, context);
        }

        /**
         * <p>Displays a list of categories for all event source types, or, if specified,
         * for a specified source type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeEventCategories">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventCategoriesOutcome DescribeEventCategories(const Model::DescribeEventCategoriesRequest& request) const;

        /**
         * A Callable wrapper for DescribeEventCategories that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEventCategoriesRequestT = Model::DescribeEventCategoriesRequest>
        Model::DescribeEventCategoriesOutcomeCallable DescribeEventCategoriesCallable(const DescribeEventCategoriesRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DescribeEventCategories, request);
        }

        /**
         * An Async wrapper for DescribeEventCategories that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEventCategoriesRequestT = Model::DescribeEventCategoriesRequest>
        void DescribeEventCategoriesAsync(const DescribeEventCategoriesRequestT& request, const DescribeEventCategoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DescribeEventCategories, request, handler, context);
        }

        /**
         * <p>Lists all the subscription descriptions for a customer account. The
         * description for a subscription includes SubscriptionName, SNSTopicARN,
         * CustomerID, SourceType, SourceID, CreationTime, and Status.</p> <p>If you
         * specify a SubscriptionName, lists the description for that
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeEventSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventSubscriptionsOutcome DescribeEventSubscriptions(const Model::DescribeEventSubscriptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEventSubscriptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEventSubscriptionsRequestT = Model::DescribeEventSubscriptionsRequest>
        Model::DescribeEventSubscriptionsOutcomeCallable DescribeEventSubscriptionsCallable(const DescribeEventSubscriptionsRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DescribeEventSubscriptions, request);
        }

        /**
         * An Async wrapper for DescribeEventSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEventSubscriptionsRequestT = Model::DescribeEventSubscriptionsRequest>
        void DescribeEventSubscriptionsAsync(const DescribeEventSubscriptionsRequestT& request, const DescribeEventSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DescribeEventSubscriptions, request, handler, context);
        }

        /**
         * <p>Returns events related to DB instances, DB security groups, DB snapshots, and
         * DB parameter groups for the past 14 days. Events specific to a particular DB
         * instance, DB security group, database snapshot, or DB parameter group can be
         * obtained by providing the name as a parameter. By default, the past hour of
         * events are returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEventsRequestT = Model::DescribeEventsRequest>
        Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const DescribeEventsRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DescribeEvents, request);
        }

        /**
         * An Async wrapper for DescribeEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEventsRequestT = Model::DescribeEventsRequest>
        void DescribeEventsAsync(const DescribeEventsRequestT& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DescribeEvents, request, handler, context);
        }

        /**
         * <p>Returns information about Neptune global database clusters. This API supports
         * pagination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeGlobalClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGlobalClustersOutcome DescribeGlobalClusters(const Model::DescribeGlobalClustersRequest& request) const;

        /**
         * A Callable wrapper for DescribeGlobalClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeGlobalClustersRequestT = Model::DescribeGlobalClustersRequest>
        Model::DescribeGlobalClustersOutcomeCallable DescribeGlobalClustersCallable(const DescribeGlobalClustersRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DescribeGlobalClusters, request);
        }

        /**
         * An Async wrapper for DescribeGlobalClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeGlobalClustersRequestT = Model::DescribeGlobalClustersRequest>
        void DescribeGlobalClustersAsync(const DescribeGlobalClustersRequestT& request, const DescribeGlobalClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DescribeGlobalClusters, request, handler, context);
        }

        /**
         * <p>Returns a list of orderable DB instance options for the specified
         * engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeOrderableDBInstanceOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrderableDBInstanceOptionsOutcome DescribeOrderableDBInstanceOptions(const Model::DescribeOrderableDBInstanceOptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrderableDBInstanceOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOrderableDBInstanceOptionsRequestT = Model::DescribeOrderableDBInstanceOptionsRequest>
        Model::DescribeOrderableDBInstanceOptionsOutcomeCallable DescribeOrderableDBInstanceOptionsCallable(const DescribeOrderableDBInstanceOptionsRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DescribeOrderableDBInstanceOptions, request);
        }

        /**
         * An Async wrapper for DescribeOrderableDBInstanceOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOrderableDBInstanceOptionsRequestT = Model::DescribeOrderableDBInstanceOptionsRequest>
        void DescribeOrderableDBInstanceOptionsAsync(const DescribeOrderableDBInstanceOptionsRequestT& request, const DescribeOrderableDBInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DescribeOrderableDBInstanceOptions, request, handler, context);
        }

        /**
         * <p>Returns a list of resources (for example, DB instances) that have at least
         * one pending maintenance action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribePendingMaintenanceActions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePendingMaintenanceActionsOutcome DescribePendingMaintenanceActions(const Model::DescribePendingMaintenanceActionsRequest& request) const;

        /**
         * A Callable wrapper for DescribePendingMaintenanceActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePendingMaintenanceActionsRequestT = Model::DescribePendingMaintenanceActionsRequest>
        Model::DescribePendingMaintenanceActionsOutcomeCallable DescribePendingMaintenanceActionsCallable(const DescribePendingMaintenanceActionsRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DescribePendingMaintenanceActions, request);
        }

        /**
         * An Async wrapper for DescribePendingMaintenanceActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePendingMaintenanceActionsRequestT = Model::DescribePendingMaintenanceActionsRequest>
        void DescribePendingMaintenanceActionsAsync(const DescribePendingMaintenanceActionsRequestT& request, const DescribePendingMaintenanceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DescribePendingMaintenanceActions, request, handler, context);
        }

        /**
         * <p>You can call <a>DescribeValidDBInstanceModifications</a> to learn what
         * modifications you can make to your DB instance. You can use this information
         * when you call <a>ModifyDBInstance</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DescribeValidDBInstanceModifications">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeValidDBInstanceModificationsOutcome DescribeValidDBInstanceModifications(const Model::DescribeValidDBInstanceModificationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeValidDBInstanceModifications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeValidDBInstanceModificationsRequestT = Model::DescribeValidDBInstanceModificationsRequest>
        Model::DescribeValidDBInstanceModificationsOutcomeCallable DescribeValidDBInstanceModificationsCallable(const DescribeValidDBInstanceModificationsRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::DescribeValidDBInstanceModifications, request);
        }

        /**
         * An Async wrapper for DescribeValidDBInstanceModifications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeValidDBInstanceModificationsRequestT = Model::DescribeValidDBInstanceModificationsRequest>
        void DescribeValidDBInstanceModificationsAsync(const DescribeValidDBInstanceModificationsRequestT& request, const DescribeValidDBInstanceModificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::DescribeValidDBInstanceModifications, request, handler, context);
        }

        /**
         * <p>Forces a failover for a DB cluster.</p> <p>A failover for a DB cluster
         * promotes one of the Read Replicas (read-only instances) in the DB cluster to be
         * the primary instance (the cluster writer).</p> <p>Amazon Neptune will
         * automatically fail over to a Read Replica, if one exists, when the primary
         * instance fails. You can force a failover when you want to simulate a failure of
         * a primary instance for testing. Because each instance in a DB cluster has its
         * own endpoint address, you will need to clean up and re-establish any existing
         * connections that use those endpoint addresses when the failover is
         * complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/FailoverDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::FailoverDBClusterOutcome FailoverDBCluster(const Model::FailoverDBClusterRequest& request) const;

        /**
         * A Callable wrapper for FailoverDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename FailoverDBClusterRequestT = Model::FailoverDBClusterRequest>
        Model::FailoverDBClusterOutcomeCallable FailoverDBClusterCallable(const FailoverDBClusterRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::FailoverDBCluster, request);
        }

        /**
         * An Async wrapper for FailoverDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename FailoverDBClusterRequestT = Model::FailoverDBClusterRequest>
        void FailoverDBClusterAsync(const FailoverDBClusterRequestT& request, const FailoverDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::FailoverDBCluster, request, handler, context);
        }

        /**
         * <p>Initiates the failover process for a Neptune global database.</p> <p>A
         * failover for a Neptune global database promotes one of secondary read-only DB
         * clusters to be the primary DB cluster and demotes the primary DB cluster to
         * being a secondary (read-only) DB cluster. In other words, the role of the
         * current primary DB cluster and the selected target secondary DB cluster are
         * switched. The selected secondary DB cluster assumes full read/write capabilities
         * for the Neptune global database.</p>  <p>This action applies <b>only</b>
         * to Neptune global databases. This action is only intended for use on healthy
         * Neptune global databases with healthy Neptune DB clusters and no region-wide
         * outages, to test disaster recovery scenarios or to reconfigure the global
         * database topology.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/FailoverGlobalCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::FailoverGlobalClusterOutcome FailoverGlobalCluster(const Model::FailoverGlobalClusterRequest& request) const;

        /**
         * A Callable wrapper for FailoverGlobalCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename FailoverGlobalClusterRequestT = Model::FailoverGlobalClusterRequest>
        Model::FailoverGlobalClusterOutcomeCallable FailoverGlobalClusterCallable(const FailoverGlobalClusterRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::FailoverGlobalCluster, request);
        }

        /**
         * An Async wrapper for FailoverGlobalCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename FailoverGlobalClusterRequestT = Model::FailoverGlobalClusterRequest>
        void FailoverGlobalClusterAsync(const FailoverGlobalClusterRequestT& request, const FailoverGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::FailoverGlobalCluster, request, handler, context);
        }

        /**
         * <p>Lists all tags on an Amazon Neptune resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Modify a setting for a DB cluster. You can change one or more database
         * configuration parameters by specifying these parameters and the new values in
         * the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBClusterOutcome ModifyDBCluster(const Model::ModifyDBClusterRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBClusterRequestT = Model::ModifyDBClusterRequest>
        Model::ModifyDBClusterOutcomeCallable ModifyDBClusterCallable(const ModifyDBClusterRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::ModifyDBCluster, request);
        }

        /**
         * An Async wrapper for ModifyDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBClusterRequestT = Model::ModifyDBClusterRequest>
        void ModifyDBClusterAsync(const ModifyDBClusterRequestT& request, const ModifyDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::ModifyDBCluster, request, handler, context);
        }

        /**
         * <p>Modifies the properties of an endpoint in an Amazon Neptune DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBClusterEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBClusterEndpointOutcome ModifyDBClusterEndpoint(const Model::ModifyDBClusterEndpointRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBClusterEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBClusterEndpointRequestT = Model::ModifyDBClusterEndpointRequest>
        Model::ModifyDBClusterEndpointOutcomeCallable ModifyDBClusterEndpointCallable(const ModifyDBClusterEndpointRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::ModifyDBClusterEndpoint, request);
        }

        /**
         * An Async wrapper for ModifyDBClusterEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBClusterEndpointRequestT = Model::ModifyDBClusterEndpointRequest>
        void ModifyDBClusterEndpointAsync(const ModifyDBClusterEndpointRequestT& request, const ModifyDBClusterEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::ModifyDBClusterEndpoint, request, handler, context);
        }

        /**
         * <p> Modifies the parameters of a DB cluster parameter group. To modify more than
         * one parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request.</p>  <p>Changes to dynamic
         * parameters are applied immediately. Changes to static parameters require a
         * reboot without failover to the DB cluster associated with the parameter group
         * before the change can take effect.</p>   <p>After you create a
         * DB cluster parameter group, you should wait at least 5 minutes before creating
         * your first DB cluster that uses that DB cluster parameter group as the default
         * parameter group. This allows Amazon Neptune to fully complete the create action
         * before the parameter group is used as the default for a new DB cluster. This is
         * especially important for parameters that are critical when creating the default
         * database for a DB cluster, such as the character set for the default database
         * defined by the <code>character_set_database</code> parameter. You can use the
         * <i>Parameter Groups</i> option of the Amazon Neptune console or the
         * <a>DescribeDBClusterParameters</a> command to verify that your DB cluster
         * parameter group has been created or modified.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBClusterParameterGroupOutcome ModifyDBClusterParameterGroup(const Model::ModifyDBClusterParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBClusterParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBClusterParameterGroupRequestT = Model::ModifyDBClusterParameterGroupRequest>
        Model::ModifyDBClusterParameterGroupOutcomeCallable ModifyDBClusterParameterGroupCallable(const ModifyDBClusterParameterGroupRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::ModifyDBClusterParameterGroup, request);
        }

        /**
         * An Async wrapper for ModifyDBClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBClusterParameterGroupRequestT = Model::ModifyDBClusterParameterGroupRequest>
        void ModifyDBClusterParameterGroupAsync(const ModifyDBClusterParameterGroupRequestT& request, const ModifyDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::ModifyDBClusterParameterGroup, request, handler, context);
        }

        /**
         * <p>Adds an attribute and values to, or removes an attribute and values from, a
         * manual DB cluster snapshot.</p> <p>To share a manual DB cluster snapshot with
         * other Amazon accounts, specify <code>restore</code> as the
         * <code>AttributeName</code> and use the <code>ValuesToAdd</code> parameter to add
         * a list of IDs of the Amazon accounts that are authorized to restore the manual
         * DB cluster snapshot. Use the value <code>all</code> to make the manual DB
         * cluster snapshot public, which means that it can be copied or restored by all
         * Amazon accounts. Do not add the <code>all</code> value for any manual DB cluster
         * snapshots that contain private information that you don't want available to all
         * Amazon accounts. If a manual DB cluster snapshot is encrypted, it can be shared,
         * but only by specifying a list of authorized Amazon account IDs for the
         * <code>ValuesToAdd</code> parameter. You can't use <code>all</code> as a value
         * for that parameter in this case.</p> <p>To view which Amazon accounts have
         * access to copy or restore a manual DB cluster snapshot, or whether a manual DB
         * cluster snapshot public or private, use the
         * <a>DescribeDBClusterSnapshotAttributes</a> API action.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBClusterSnapshotAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBClusterSnapshotAttributeOutcome ModifyDBClusterSnapshotAttribute(const Model::ModifyDBClusterSnapshotAttributeRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBClusterSnapshotAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBClusterSnapshotAttributeRequestT = Model::ModifyDBClusterSnapshotAttributeRequest>
        Model::ModifyDBClusterSnapshotAttributeOutcomeCallable ModifyDBClusterSnapshotAttributeCallable(const ModifyDBClusterSnapshotAttributeRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::ModifyDBClusterSnapshotAttribute, request);
        }

        /**
         * An Async wrapper for ModifyDBClusterSnapshotAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBClusterSnapshotAttributeRequestT = Model::ModifyDBClusterSnapshotAttributeRequest>
        void ModifyDBClusterSnapshotAttributeAsync(const ModifyDBClusterSnapshotAttributeRequestT& request, const ModifyDBClusterSnapshotAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::ModifyDBClusterSnapshotAttribute, request, handler, context);
        }

        /**
         * <p>Modifies settings for a DB instance. You can change one or more database
         * configuration parameters by specifying these parameters and the new values in
         * the request. To learn what modifications you can make to your DB instance, call
         * <a>DescribeValidDBInstanceModifications</a> before you call
         * <a>ModifyDBInstance</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBInstanceOutcome ModifyDBInstance(const Model::ModifyDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBInstanceRequestT = Model::ModifyDBInstanceRequest>
        Model::ModifyDBInstanceOutcomeCallable ModifyDBInstanceCallable(const ModifyDBInstanceRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::ModifyDBInstance, request);
        }

        /**
         * An Async wrapper for ModifyDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBInstanceRequestT = Model::ModifyDBInstanceRequest>
        void ModifyDBInstanceAsync(const ModifyDBInstanceRequestT& request, const ModifyDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::ModifyDBInstance, request, handler, context);
        }

        /**
         * <p>Modifies the parameters of a DB parameter group. To modify more than one
         * parameter, submit a list of the following: <code>ParameterName</code>,
         * <code>ParameterValue</code>, and <code>ApplyMethod</code>. A maximum of 20
         * parameters can be modified in a single request.</p>  <p>Changes to dynamic
         * parameters are applied immediately. Changes to static parameters require a
         * reboot without failover to the DB instance associated with the parameter group
         * before the change can take effect.</p>   <p>After you modify a
         * DB parameter group, you should wait at least 5 minutes before creating your
         * first DB instance that uses that DB parameter group as the default parameter
         * group. This allows Amazon Neptune to fully complete the modify action before the
         * parameter group is used as the default for a new DB instance. This is especially
         * important for parameters that are critical when creating the default database
         * for a DB instance, such as the character set for the default database defined by
         * the <code>character_set_database</code> parameter. You can use the <i>Parameter
         * Groups</i> option of the Amazon Neptune console or the
         * <i>DescribeDBParameters</i> command to verify that your DB parameter group has
         * been created or modified.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBParameterGroupOutcome ModifyDBParameterGroup(const Model::ModifyDBParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBParameterGroupRequestT = Model::ModifyDBParameterGroupRequest>
        Model::ModifyDBParameterGroupOutcomeCallable ModifyDBParameterGroupCallable(const ModifyDBParameterGroupRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::ModifyDBParameterGroup, request);
        }

        /**
         * An Async wrapper for ModifyDBParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBParameterGroupRequestT = Model::ModifyDBParameterGroupRequest>
        void ModifyDBParameterGroupAsync(const ModifyDBParameterGroupRequestT& request, const ModifyDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::ModifyDBParameterGroup, request, handler, context);
        }

        /**
         * <p>Modifies an existing DB subnet group. DB subnet groups must contain at least
         * one subnet in at least two AZs in the Amazon Region.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyDBSubnetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyDBSubnetGroupOutcome ModifyDBSubnetGroup(const Model::ModifyDBSubnetGroupRequest& request) const;

        /**
         * A Callable wrapper for ModifyDBSubnetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyDBSubnetGroupRequestT = Model::ModifyDBSubnetGroupRequest>
        Model::ModifyDBSubnetGroupOutcomeCallable ModifyDBSubnetGroupCallable(const ModifyDBSubnetGroupRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::ModifyDBSubnetGroup, request);
        }

        /**
         * An Async wrapper for ModifyDBSubnetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyDBSubnetGroupRequestT = Model::ModifyDBSubnetGroupRequest>
        void ModifyDBSubnetGroupAsync(const ModifyDBSubnetGroupRequestT& request, const ModifyDBSubnetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::ModifyDBSubnetGroup, request, handler, context);
        }

        /**
         * <p>Modifies an existing event notification subscription. Note that you can't
         * modify the source identifiers using this call; to change source identifiers for
         * a subscription, use the <a>AddSourceIdentifierToSubscription</a> and
         * <a>RemoveSourceIdentifierFromSubscription</a> calls.</p> <p>You can see a list
         * of the event categories for a given SourceType by using the
         * <b>DescribeEventCategories</b> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyEventSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyEventSubscriptionOutcome ModifyEventSubscription(const Model::ModifyEventSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for ModifyEventSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyEventSubscriptionRequestT = Model::ModifyEventSubscriptionRequest>
        Model::ModifyEventSubscriptionOutcomeCallable ModifyEventSubscriptionCallable(const ModifyEventSubscriptionRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::ModifyEventSubscription, request);
        }

        /**
         * An Async wrapper for ModifyEventSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyEventSubscriptionRequestT = Model::ModifyEventSubscriptionRequest>
        void ModifyEventSubscriptionAsync(const ModifyEventSubscriptionRequestT& request, const ModifyEventSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::ModifyEventSubscription, request, handler, context);
        }

        /**
         * <p>Modify a setting for an Amazon Neptune global cluster. You can change one or
         * more database configuration parameters by specifying these parameters and their
         * new values in the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ModifyGlobalCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyGlobalClusterOutcome ModifyGlobalCluster(const Model::ModifyGlobalClusterRequest& request) const;

        /**
         * A Callable wrapper for ModifyGlobalCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ModifyGlobalClusterRequestT = Model::ModifyGlobalClusterRequest>
        Model::ModifyGlobalClusterOutcomeCallable ModifyGlobalClusterCallable(const ModifyGlobalClusterRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::ModifyGlobalCluster, request);
        }

        /**
         * An Async wrapper for ModifyGlobalCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyGlobalClusterRequestT = Model::ModifyGlobalClusterRequest>
        void ModifyGlobalClusterAsync(const ModifyGlobalClusterRequestT& request, const ModifyGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::ModifyGlobalCluster, request, handler, context);
        }

        /**
         * <p>Not supported.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/PromoteReadReplicaDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::PromoteReadReplicaDBClusterOutcome PromoteReadReplicaDBCluster(const Model::PromoteReadReplicaDBClusterRequest& request) const;

        /**
         * A Callable wrapper for PromoteReadReplicaDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PromoteReadReplicaDBClusterRequestT = Model::PromoteReadReplicaDBClusterRequest>
        Model::PromoteReadReplicaDBClusterOutcomeCallable PromoteReadReplicaDBClusterCallable(const PromoteReadReplicaDBClusterRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::PromoteReadReplicaDBCluster, request);
        }

        /**
         * An Async wrapper for PromoteReadReplicaDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PromoteReadReplicaDBClusterRequestT = Model::PromoteReadReplicaDBClusterRequest>
        void PromoteReadReplicaDBClusterAsync(const PromoteReadReplicaDBClusterRequestT& request, const PromoteReadReplicaDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::PromoteReadReplicaDBCluster, request, handler, context);
        }

        /**
         * <p>You might need to reboot your DB instance, usually for maintenance reasons.
         * For example, if you make certain modifications, or if you change the DB
         * parameter group associated with the DB instance, you must reboot the instance
         * for the changes to take effect.</p> <p>Rebooting a DB instance restarts the
         * database engine service. Rebooting a DB instance results in a momentary outage,
         * during which the DB instance status is set to rebooting.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RebootDBInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootDBInstanceOutcome RebootDBInstance(const Model::RebootDBInstanceRequest& request) const;

        /**
         * A Callable wrapper for RebootDBInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RebootDBInstanceRequestT = Model::RebootDBInstanceRequest>
        Model::RebootDBInstanceOutcomeCallable RebootDBInstanceCallable(const RebootDBInstanceRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::RebootDBInstance, request);
        }

        /**
         * An Async wrapper for RebootDBInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RebootDBInstanceRequestT = Model::RebootDBInstanceRequest>
        void RebootDBInstanceAsync(const RebootDBInstanceRequestT& request, const RebootDBInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::RebootDBInstance, request, handler, context);
        }

        /**
         * <p>Detaches a Neptune DB cluster from a Neptune global database. A secondary
         * cluster becomes a normal standalone cluster with read-write capability instead
         * of being read-only, and no longer receives data from a the primary
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RemoveFromGlobalCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveFromGlobalClusterOutcome RemoveFromGlobalCluster(const Model::RemoveFromGlobalClusterRequest& request) const;

        /**
         * A Callable wrapper for RemoveFromGlobalCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveFromGlobalClusterRequestT = Model::RemoveFromGlobalClusterRequest>
        Model::RemoveFromGlobalClusterOutcomeCallable RemoveFromGlobalClusterCallable(const RemoveFromGlobalClusterRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::RemoveFromGlobalCluster, request);
        }

        /**
         * An Async wrapper for RemoveFromGlobalCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveFromGlobalClusterRequestT = Model::RemoveFromGlobalClusterRequest>
        void RemoveFromGlobalClusterAsync(const RemoveFromGlobalClusterRequestT& request, const RemoveFromGlobalClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::RemoveFromGlobalCluster, request, handler, context);
        }

        /**
         * <p>Disassociates an Identity and Access Management (IAM) role from a DB
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RemoveRoleFromDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveRoleFromDBClusterOutcome RemoveRoleFromDBCluster(const Model::RemoveRoleFromDBClusterRequest& request) const;

        /**
         * A Callable wrapper for RemoveRoleFromDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveRoleFromDBClusterRequestT = Model::RemoveRoleFromDBClusterRequest>
        Model::RemoveRoleFromDBClusterOutcomeCallable RemoveRoleFromDBClusterCallable(const RemoveRoleFromDBClusterRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::RemoveRoleFromDBCluster, request);
        }

        /**
         * An Async wrapper for RemoveRoleFromDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveRoleFromDBClusterRequestT = Model::RemoveRoleFromDBClusterRequest>
        void RemoveRoleFromDBClusterAsync(const RemoveRoleFromDBClusterRequestT& request, const RemoveRoleFromDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::RemoveRoleFromDBCluster, request, handler, context);
        }

        /**
         * <p>Removes a source identifier from an existing event notification
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RemoveSourceIdentifierFromSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveSourceIdentifierFromSubscriptionOutcome RemoveSourceIdentifierFromSubscription(const Model::RemoveSourceIdentifierFromSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for RemoveSourceIdentifierFromSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveSourceIdentifierFromSubscriptionRequestT = Model::RemoveSourceIdentifierFromSubscriptionRequest>
        Model::RemoveSourceIdentifierFromSubscriptionOutcomeCallable RemoveSourceIdentifierFromSubscriptionCallable(const RemoveSourceIdentifierFromSubscriptionRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::RemoveSourceIdentifierFromSubscription, request);
        }

        /**
         * An Async wrapper for RemoveSourceIdentifierFromSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveSourceIdentifierFromSubscriptionRequestT = Model::RemoveSourceIdentifierFromSubscriptionRequest>
        void RemoveSourceIdentifierFromSubscriptionAsync(const RemoveSourceIdentifierFromSubscriptionRequestT& request, const RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::RemoveSourceIdentifierFromSubscription, request, handler, context);
        }

        /**
         * <p>Removes metadata tags from an Amazon Neptune resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * A Callable wrapper for RemoveTagsFromResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveTagsFromResourceRequestT = Model::RemoveTagsFromResourceRequest>
        Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::RemoveTagsFromResource, request);
        }

        /**
         * An Async wrapper for RemoveTagsFromResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveTagsFromResourceRequestT = Model::RemoveTagsFromResourceRequest>
        void RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequestT& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::RemoveTagsFromResource, request, handler, context);
        }

        /**
         * <p> Modifies the parameters of a DB cluster parameter group to the default
         * value. To reset specific parameters submit a list of the following:
         * <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
         * cluster parameter group, specify the <code>DBClusterParameterGroupName</code>
         * and <code>ResetAllParameters</code> parameters.</p> <p> When resetting the
         * entire group, dynamic parameters are updated immediately and static parameters
         * are set to <code>pending-reboot</code> to take effect on the next DB instance
         * restart or <a>RebootDBInstance</a> request. You must call
         * <a>RebootDBInstance</a> for every DB instance in your DB cluster that you want
         * the updated static parameter to apply to.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ResetDBClusterParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetDBClusterParameterGroupOutcome ResetDBClusterParameterGroup(const Model::ResetDBClusterParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for ResetDBClusterParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResetDBClusterParameterGroupRequestT = Model::ResetDBClusterParameterGroupRequest>
        Model::ResetDBClusterParameterGroupOutcomeCallable ResetDBClusterParameterGroupCallable(const ResetDBClusterParameterGroupRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::ResetDBClusterParameterGroup, request);
        }

        /**
         * An Async wrapper for ResetDBClusterParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetDBClusterParameterGroupRequestT = Model::ResetDBClusterParameterGroupRequest>
        void ResetDBClusterParameterGroupAsync(const ResetDBClusterParameterGroupRequestT& request, const ResetDBClusterParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::ResetDBClusterParameterGroup, request, handler, context);
        }

        /**
         * <p>Modifies the parameters of a DB parameter group to the engine/system default
         * value. To reset specific parameters, provide a list of the following:
         * <code>ParameterName</code> and <code>ApplyMethod</code>. To reset the entire DB
         * parameter group, specify the <code>DBParameterGroup</code> name and
         * <code>ResetAllParameters</code> parameters. When resetting the entire group,
         * dynamic parameters are updated immediately and static parameters are set to
         * <code>pending-reboot</code> to take effect on the next DB instance restart or
         * <code>RebootDBInstance</code> request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ResetDBParameterGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetDBParameterGroupOutcome ResetDBParameterGroup(const Model::ResetDBParameterGroupRequest& request) const;

        /**
         * A Callable wrapper for ResetDBParameterGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResetDBParameterGroupRequestT = Model::ResetDBParameterGroupRequest>
        Model::ResetDBParameterGroupOutcomeCallable ResetDBParameterGroupCallable(const ResetDBParameterGroupRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::ResetDBParameterGroup, request);
        }

        /**
         * An Async wrapper for ResetDBParameterGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetDBParameterGroupRequestT = Model::ResetDBParameterGroupRequest>
        void ResetDBParameterGroupAsync(const ResetDBParameterGroupRequestT& request, const ResetDBParameterGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::ResetDBParameterGroup, request, handler, context);
        }

        /**
         * <p>Creates a new DB cluster from a DB snapshot or DB cluster snapshot.</p> <p>If
         * a DB snapshot is specified, the target DB cluster is created from the source DB
         * snapshot with a default configuration and default security group.</p> <p>If a DB
         * cluster snapshot is specified, the target DB cluster is created from the source
         * DB cluster restore point with the same configuration as the original source DB
         * cluster, except that the new DB cluster is created with the default security
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RestoreDBClusterFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBClusterFromSnapshotOutcome RestoreDBClusterFromSnapshot(const Model::RestoreDBClusterFromSnapshotRequest& request) const;

        /**
         * A Callable wrapper for RestoreDBClusterFromSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreDBClusterFromSnapshotRequestT = Model::RestoreDBClusterFromSnapshotRequest>
        Model::RestoreDBClusterFromSnapshotOutcomeCallable RestoreDBClusterFromSnapshotCallable(const RestoreDBClusterFromSnapshotRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::RestoreDBClusterFromSnapshot, request);
        }

        /**
         * An Async wrapper for RestoreDBClusterFromSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreDBClusterFromSnapshotRequestT = Model::RestoreDBClusterFromSnapshotRequest>
        void RestoreDBClusterFromSnapshotAsync(const RestoreDBClusterFromSnapshotRequestT& request, const RestoreDBClusterFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::RestoreDBClusterFromSnapshot, request, handler, context);
        }

        /**
         * <p>Restores a DB cluster to an arbitrary point in time. Users can restore to any
         * point in time before <code>LatestRestorableTime</code> for up to
         * <code>BackupRetentionPeriod</code> days. The target DB cluster is created from
         * the source DB cluster with the same configuration as the original DB cluster,
         * except that the new DB cluster is created with the default DB security
         * group.</p>  <p>This action only restores the DB cluster, not the DB
         * instances for that DB cluster. You must invoke the <a>CreateDBInstance</a>
         * action to create DB instances for the restored DB cluster, specifying the
         * identifier of the restored DB cluster in <code>DBClusterIdentifier</code>. You
         * can create DB instances only after the
         * <code>RestoreDBClusterToPointInTime</code> action has completed and the DB
         * cluster is available.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/RestoreDBClusterToPointInTime">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreDBClusterToPointInTimeOutcome RestoreDBClusterToPointInTime(const Model::RestoreDBClusterToPointInTimeRequest& request) const;

        /**
         * A Callable wrapper for RestoreDBClusterToPointInTime that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreDBClusterToPointInTimeRequestT = Model::RestoreDBClusterToPointInTimeRequest>
        Model::RestoreDBClusterToPointInTimeOutcomeCallable RestoreDBClusterToPointInTimeCallable(const RestoreDBClusterToPointInTimeRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::RestoreDBClusterToPointInTime, request);
        }

        /**
         * An Async wrapper for RestoreDBClusterToPointInTime that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreDBClusterToPointInTimeRequestT = Model::RestoreDBClusterToPointInTimeRequest>
        void RestoreDBClusterToPointInTimeAsync(const RestoreDBClusterToPointInTimeRequestT& request, const RestoreDBClusterToPointInTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::RestoreDBClusterToPointInTime, request, handler, context);
        }

        /**
         * <p>Starts an Amazon Neptune DB cluster that was stopped using the Amazon
         * console, the Amazon CLI stop-db-cluster command, or the StopDBCluster
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/StartDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDBClusterOutcome StartDBCluster(const Model::StartDBClusterRequest& request) const;

        /**
         * A Callable wrapper for StartDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDBClusterRequestT = Model::StartDBClusterRequest>
        Model::StartDBClusterOutcomeCallable StartDBClusterCallable(const StartDBClusterRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::StartDBCluster, request);
        }

        /**
         * An Async wrapper for StartDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDBClusterRequestT = Model::StartDBClusterRequest>
        void StartDBClusterAsync(const StartDBClusterRequestT& request, const StartDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::StartDBCluster, request, handler, context);
        }

        /**
         * <p>Stops an Amazon Neptune DB cluster. When you stop a DB cluster, Neptune
         * retains the DB cluster's metadata, including its endpoints and DB parameter
         * groups.</p> <p>Neptune also retains the transaction logs so you can do a
         * point-in-time restore if necessary.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/StopDBCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::StopDBClusterOutcome StopDBCluster(const Model::StopDBClusterRequest& request) const;

        /**
         * A Callable wrapper for StopDBCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopDBClusterRequestT = Model::StopDBClusterRequest>
        Model::StopDBClusterOutcomeCallable StopDBClusterCallable(const StopDBClusterRequestT& request) const
        {
            return SubmitCallable(&NeptuneClient::StopDBCluster, request);
        }

        /**
         * An Async wrapper for StopDBCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopDBClusterRequestT = Model::StopDBClusterRequest>
        void StopDBClusterAsync(const StopDBClusterRequestT& request, const StopDBClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NeptuneClient::StopDBCluster, request, handler, context);
        }


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<NeptuneEndpointProviderBase>& accessEndpointProvider();
  private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<NeptuneClient>;
        void init(const NeptuneClientConfiguration& clientConfiguration);

        NeptuneClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<NeptuneEndpointProviderBase> m_endpointProvider;
  };

} // namespace Neptune
} // namespace Aws
