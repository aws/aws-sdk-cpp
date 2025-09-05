/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pcs/PCSServiceClientModel.h>

namespace Aws
{
namespace PCS
{
  /**
   * <p>Parallel Computing Service (PCS) is a managed service that makes it easier
   * for you to run and scale your high performance computing (HPC) workloads, and
   * build scientific and engineering models on Amazon Web Services using Slurm. For
   * more information, see the <a
   * href="https://docs.aws.amazon.com/pcs/latest/userguide">Parallel Computing
   * Service User Guide</a>.</p> <p>This reference describes the actions and data
   * types of the service management API. You can use the Amazon Web Services SDKs to
   * call the API actions in software, or use the Command Line Interface (CLI) to
   * call the API actions manually. These API actions manage the service through an
   * Amazon Web Services account.</p> <p>The API actions operate on PCS resources. A
   * <i>resource</i> is an entity in Amazon Web Services that you can work with.
   * Amazon Web Services services create resources when you use the features of the
   * service. Examples of PCS resources include clusters, compute node groups, and
   * queues. For more information about resources in Amazon Web Services, see <a
   * href="https://docs.aws.amazon.com/resource-explorer/latest/userguide/getting-started-terms-and-concepts.html#term-resource">Resource</a>
   * in the <i>Resource Explorer User Guide</i>. </p> <p>An PCS <i>compute node</i>
   * is an Amazon EC2 instance. You don't launch compute nodes directly. PCS uses
   * configuration information that you provide to launch compute nodes in your
   * Amazon Web Services account. You receive billing charges for your running
   * compute nodes. PCS automatically terminates your compute nodes when you delete
   * the PCS resources related to those compute nodes.</p>
   */
  class AWS_PCS_API PCSClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PCSClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef PCSClientConfiguration ClientConfigurationType;
      typedef PCSEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PCSClient(const Aws::PCS::PCSClientConfiguration& clientConfiguration = Aws::PCS::PCSClientConfiguration(),
                  std::shared_ptr<PCSEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PCSClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<PCSEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::PCS::PCSClientConfiguration& clientConfiguration = Aws::PCS::PCSClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PCSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<PCSEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::PCS::PCSClientConfiguration& clientConfiguration = Aws::PCS::PCSClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PCSClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PCSClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PCSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PCSClient();

        /**
         * <p>Creates a cluster in your account. PCS creates the cluster controller in a
         * service-owned account. The cluster controller communicates with the cluster
         * resources in your account. The subnets and security groups for the cluster must
         * already exist before you use this API action.</p>  <p>It takes time for
         * PCS to create the cluster. The cluster is in a <code>Creating</code> state until
         * it is ready to use. There can only be 1 cluster in a <code>Creating</code> state
         * per Amazon Web Services Region per Amazon Web Services account.
         * <code>CreateCluster</code> fails with a
         * <code>ServiceQuotaExceededException</code> if there is already a cluster in a
         * <code>Creating</code> state.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateClusterRequestT = Model::CreateClusterRequest>
        Model::CreateClusterOutcomeCallable CreateClusterCallable(const CreateClusterRequestT& request) const
        {
            return SubmitCallable(&PCSClient::CreateCluster, request);
        }

        /**
         * An Async wrapper for CreateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateClusterRequestT = Model::CreateClusterRequest>
        void CreateClusterAsync(const CreateClusterRequestT& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PCSClient::CreateCluster, request, handler, context);
        }

        /**
         * <p>Creates a managed set of compute nodes. You associate a compute node group
         * with a cluster through 1 or more PCS queues or as part of the login fleet. A
         * compute node group includes the definition of the compute properties and
         * lifecycle management. PCS uses the information you provide to this API action to
         * launch compute nodes in your account. You can only specify subnets in the same
         * Amazon VPC as your cluster. You receive billing charges for the compute nodes
         * that PCS launches in your account. You must already have a launch template
         * before you call this API. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html">Launch
         * an instance from a launch template</a> in the <i>Amazon Elastic Compute Cloud
         * User Guide for Linux Instances</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/CreateComputeNodeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateComputeNodeGroupOutcome CreateComputeNodeGroup(const Model::CreateComputeNodeGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateComputeNodeGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateComputeNodeGroupRequestT = Model::CreateComputeNodeGroupRequest>
        Model::CreateComputeNodeGroupOutcomeCallable CreateComputeNodeGroupCallable(const CreateComputeNodeGroupRequestT& request) const
        {
            return SubmitCallable(&PCSClient::CreateComputeNodeGroup, request);
        }

        /**
         * An Async wrapper for CreateComputeNodeGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateComputeNodeGroupRequestT = Model::CreateComputeNodeGroupRequest>
        void CreateComputeNodeGroupAsync(const CreateComputeNodeGroupRequestT& request, const CreateComputeNodeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PCSClient::CreateComputeNodeGroup, request, handler, context);
        }

        /**
         * <p>Creates a job queue. You must associate 1 or more compute node groups with
         * the queue. You can associate 1 compute node group with multiple
         * queues.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/CreateQueue">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateQueueOutcome CreateQueue(const Model::CreateQueueRequest& request) const;

        /**
         * A Callable wrapper for CreateQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateQueueRequestT = Model::CreateQueueRequest>
        Model::CreateQueueOutcomeCallable CreateQueueCallable(const CreateQueueRequestT& request) const
        {
            return SubmitCallable(&PCSClient::CreateQueue, request);
        }

        /**
         * An Async wrapper for CreateQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateQueueRequestT = Model::CreateQueueRequest>
        void CreateQueueAsync(const CreateQueueRequestT& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PCSClient::CreateQueue, request, handler, context);
        }

        /**
         * <p>Deletes a cluster and all its linked resources. You must delete all queues
         * and compute node groups associated with the cluster before you can delete the
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/DeleteCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteClusterRequestT = Model::DeleteClusterRequest>
        Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const DeleteClusterRequestT& request) const
        {
            return SubmitCallable(&PCSClient::DeleteCluster, request);
        }

        /**
         * An Async wrapper for DeleteCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteClusterRequestT = Model::DeleteClusterRequest>
        void DeleteClusterAsync(const DeleteClusterRequestT& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PCSClient::DeleteCluster, request, handler, context);
        }

        /**
         * <p>Deletes a compute node group. You must delete all queues associated with the
         * compute node group first.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/DeleteComputeNodeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteComputeNodeGroupOutcome DeleteComputeNodeGroup(const Model::DeleteComputeNodeGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteComputeNodeGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteComputeNodeGroupRequestT = Model::DeleteComputeNodeGroupRequest>
        Model::DeleteComputeNodeGroupOutcomeCallable DeleteComputeNodeGroupCallable(const DeleteComputeNodeGroupRequestT& request) const
        {
            return SubmitCallable(&PCSClient::DeleteComputeNodeGroup, request);
        }

        /**
         * An Async wrapper for DeleteComputeNodeGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteComputeNodeGroupRequestT = Model::DeleteComputeNodeGroupRequest>
        void DeleteComputeNodeGroupAsync(const DeleteComputeNodeGroupRequestT& request, const DeleteComputeNodeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PCSClient::DeleteComputeNodeGroup, request, handler, context);
        }

        /**
         * <p>Deletes a job queue. If the compute node group associated with this queue
         * isn't associated with any other queues, PCS terminates all the compute nodes for
         * this queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/DeleteQueue">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteQueueOutcome DeleteQueue(const Model::DeleteQueueRequest& request) const;

        /**
         * A Callable wrapper for DeleteQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteQueueRequestT = Model::DeleteQueueRequest>
        Model::DeleteQueueOutcomeCallable DeleteQueueCallable(const DeleteQueueRequestT& request) const
        {
            return SubmitCallable(&PCSClient::DeleteQueue, request);
        }

        /**
         * An Async wrapper for DeleteQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteQueueRequestT = Model::DeleteQueueRequest>
        void DeleteQueueAsync(const DeleteQueueRequestT& request, const DeleteQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PCSClient::DeleteQueue, request, handler, context);
        }

        /**
         * <p>Returns detailed information about a running cluster in your account. This
         * API action provides networking information, endpoint information for
         * communication with the scheduler, and provisioning status.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/GetCluster">AWS API
         * Reference</a></p>
         */
        virtual Model::GetClusterOutcome GetCluster(const Model::GetClusterRequest& request) const;

        /**
         * A Callable wrapper for GetCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetClusterRequestT = Model::GetClusterRequest>
        Model::GetClusterOutcomeCallable GetClusterCallable(const GetClusterRequestT& request) const
        {
            return SubmitCallable(&PCSClient::GetCluster, request);
        }

        /**
         * An Async wrapper for GetCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetClusterRequestT = Model::GetClusterRequest>
        void GetClusterAsync(const GetClusterRequestT& request, const GetClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PCSClient::GetCluster, request, handler, context);
        }

        /**
         * <p>Returns detailed information about a compute node group. This API action
         * provides networking information, EC2 instance type, compute node group status,
         * and scheduler (such as Slurm) configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/GetComputeNodeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComputeNodeGroupOutcome GetComputeNodeGroup(const Model::GetComputeNodeGroupRequest& request) const;

        /**
         * A Callable wrapper for GetComputeNodeGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetComputeNodeGroupRequestT = Model::GetComputeNodeGroupRequest>
        Model::GetComputeNodeGroupOutcomeCallable GetComputeNodeGroupCallable(const GetComputeNodeGroupRequestT& request) const
        {
            return SubmitCallable(&PCSClient::GetComputeNodeGroup, request);
        }

        /**
         * An Async wrapper for GetComputeNodeGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetComputeNodeGroupRequestT = Model::GetComputeNodeGroupRequest>
        void GetComputeNodeGroupAsync(const GetComputeNodeGroupRequestT& request, const GetComputeNodeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PCSClient::GetComputeNodeGroup, request, handler, context);
        }

        /**
         * <p>Returns detailed information about a queue. The information includes the
         * compute node groups that the queue uses to schedule jobs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/GetQueue">AWS API
         * Reference</a></p>
         */
        virtual Model::GetQueueOutcome GetQueue(const Model::GetQueueRequest& request) const;

        /**
         * A Callable wrapper for GetQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQueueRequestT = Model::GetQueueRequest>
        Model::GetQueueOutcomeCallable GetQueueCallable(const GetQueueRequestT& request) const
        {
            return SubmitCallable(&PCSClient::GetQueue, request);
        }

        /**
         * An Async wrapper for GetQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQueueRequestT = Model::GetQueueRequest>
        void GetQueueAsync(const GetQueueRequestT& request, const GetQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PCSClient::GetQueue, request, handler, context);
        }

        /**
         * <p>Returns a list of running clusters in your account.</p><p><h3>See Also:</h3> 
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/ListClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request = {}) const;

        /**
         * A Callable wrapper for ListClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListClustersRequestT = Model::ListClustersRequest>
        Model::ListClustersOutcomeCallable ListClustersCallable(const ListClustersRequestT& request = {}) const
        {
            return SubmitCallable(&PCSClient::ListClusters, request);
        }

        /**
         * An Async wrapper for ListClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListClustersRequestT = Model::ListClustersRequest>
        void ListClustersAsync(const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListClustersRequestT& request = {}) const
        {
            return SubmitAsync(&PCSClient::ListClusters, request, handler, context);
        }

        /**
         * <p>Returns a list of all compute node groups associated with a
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/ListComputeNodeGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComputeNodeGroupsOutcome ListComputeNodeGroups(const Model::ListComputeNodeGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListComputeNodeGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListComputeNodeGroupsRequestT = Model::ListComputeNodeGroupsRequest>
        Model::ListComputeNodeGroupsOutcomeCallable ListComputeNodeGroupsCallable(const ListComputeNodeGroupsRequestT& request) const
        {
            return SubmitCallable(&PCSClient::ListComputeNodeGroups, request);
        }

        /**
         * An Async wrapper for ListComputeNodeGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListComputeNodeGroupsRequestT = Model::ListComputeNodeGroupsRequest>
        void ListComputeNodeGroupsAsync(const ListComputeNodeGroupsRequestT& request, const ListComputeNodeGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PCSClient::ListComputeNodeGroups, request, handler, context);
        }

        /**
         * <p>Returns a list of all queues associated with a cluster.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/ListQueues">AWS API
         * Reference</a></p>
         */
        virtual Model::ListQueuesOutcome ListQueues(const Model::ListQueuesRequest& request) const;

        /**
         * A Callable wrapper for ListQueues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListQueuesRequestT = Model::ListQueuesRequest>
        Model::ListQueuesOutcomeCallable ListQueuesCallable(const ListQueuesRequestT& request) const
        {
            return SubmitCallable(&PCSClient::ListQueues, request);
        }

        /**
         * An Async wrapper for ListQueues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListQueuesRequestT = Model::ListQueuesRequest>
        void ListQueuesAsync(const ListQueuesRequestT& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PCSClient::ListQueues, request, handler, context);
        }

        /**
         * <p>Returns a list of all tags on an PCS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&PCSClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PCSClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p> <p>This API action isn't intended for you to use.</p>
         *  <p>PCS uses this API action to register the compute nodes it
         * launches in your account.</p></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/RegisterComputeNodeGroupInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterComputeNodeGroupInstanceOutcome RegisterComputeNodeGroupInstance(const Model::RegisterComputeNodeGroupInstanceRequest& request) const;

        /**
         * A Callable wrapper for RegisterComputeNodeGroupInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterComputeNodeGroupInstanceRequestT = Model::RegisterComputeNodeGroupInstanceRequest>
        Model::RegisterComputeNodeGroupInstanceOutcomeCallable RegisterComputeNodeGroupInstanceCallable(const RegisterComputeNodeGroupInstanceRequestT& request) const
        {
            return SubmitCallable(&PCSClient::RegisterComputeNodeGroupInstance, request);
        }

        /**
         * An Async wrapper for RegisterComputeNodeGroupInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterComputeNodeGroupInstanceRequestT = Model::RegisterComputeNodeGroupInstanceRequest>
        void RegisterComputeNodeGroupInstanceAsync(const RegisterComputeNodeGroupInstanceRequestT& request, const RegisterComputeNodeGroupInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PCSClient::RegisterComputeNodeGroupInstance, request, handler, context);
        }

        /**
         * <p>Adds or edits tags on an PCS resource. Each tag consists of a tag key and a
         * tag value. The tag key and tag value are case-sensitive strings. The tag value
         * can be an empty (null) string. To add a tag, specify a new tag key and a tag
         * value. To edit a tag, specify an existing tag key and a new tag
         * value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&PCSClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PCSClient::TagResource, request, handler, context);
        }

        /**
         * <p>Deletes tags from an PCS resource. To delete a tag, specify the tag key and
         * the Amazon Resource Name (ARN) of the PCS resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&PCSClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PCSClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a compute node group. You can update many of the fields related to
         * your compute node group including the configurations for networking, compute
         * nodes, and settings specific to your scheduler (such as Slurm).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/UpdateComputeNodeGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateComputeNodeGroupOutcome UpdateComputeNodeGroup(const Model::UpdateComputeNodeGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateComputeNodeGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateComputeNodeGroupRequestT = Model::UpdateComputeNodeGroupRequest>
        Model::UpdateComputeNodeGroupOutcomeCallable UpdateComputeNodeGroupCallable(const UpdateComputeNodeGroupRequestT& request) const
        {
            return SubmitCallable(&PCSClient::UpdateComputeNodeGroup, request);
        }

        /**
         * An Async wrapper for UpdateComputeNodeGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateComputeNodeGroupRequestT = Model::UpdateComputeNodeGroupRequest>
        void UpdateComputeNodeGroupAsync(const UpdateComputeNodeGroupRequestT& request, const UpdateComputeNodeGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PCSClient::UpdateComputeNodeGroup, request, handler, context);
        }

        /**
         * <p>Updates the compute node group configuration of a queue. Use this API to
         * change the compute node groups that the queue can send jobs to.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/UpdateQueue">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateQueueOutcome UpdateQueue(const Model::UpdateQueueRequest& request) const;

        /**
         * A Callable wrapper for UpdateQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateQueueRequestT = Model::UpdateQueueRequest>
        Model::UpdateQueueOutcomeCallable UpdateQueueCallable(const UpdateQueueRequestT& request) const
        {
            return SubmitCallable(&PCSClient::UpdateQueue, request);
        }

        /**
         * An Async wrapper for UpdateQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQueueRequestT = Model::UpdateQueueRequest>
        void UpdateQueueAsync(const UpdateQueueRequestT& request, const UpdateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PCSClient::UpdateQueue, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PCSEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PCSClient>;
      void init(const PCSClientConfiguration& clientConfiguration);

      PCSClientConfiguration m_clientConfiguration;
      std::shared_ptr<PCSEndpointProviderBase> m_endpointProvider;
  };

} // namespace PCS
} // namespace Aws
