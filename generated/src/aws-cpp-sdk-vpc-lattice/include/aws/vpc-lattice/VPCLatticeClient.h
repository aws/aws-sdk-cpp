/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/vpc-lattice/VPCLatticeServiceClientModel.h>

namespace Aws
{
namespace VPCLattice
{
  /**
   * <p>Amazon VPC Lattice is a fully managed application networking service that you
   * use to connect, secure, and monitor all of your services across multiple
   * accounts and virtual private clouds (VPCs). Amazon VPC Lattice interconnects
   * your microservices and legacy services within a logical boundary, so that you
   * can discover and manage them more efficiently. For more information, see the <a
   * href="https://docs.aws.amazon.com/vpc-lattice/latest/ug/">Amazon VPC Lattice
   * User Guide</a> </p>
   */
  class AWS_VPCLATTICE_API VPCLatticeClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<VPCLatticeClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef VPCLatticeClientConfiguration ClientConfigurationType;
      typedef VPCLatticeEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        VPCLatticeClient(const Aws::VPCLattice::VPCLatticeClientConfiguration& clientConfiguration = Aws::VPCLattice::VPCLatticeClientConfiguration(),
                         std::shared_ptr<VPCLatticeEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        VPCLatticeClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<VPCLatticeEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::VPCLattice::VPCLatticeClientConfiguration& clientConfiguration = Aws::VPCLattice::VPCLatticeClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        VPCLatticeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<VPCLatticeEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::VPCLattice::VPCLatticeClientConfiguration& clientConfiguration = Aws::VPCLattice::VPCLatticeClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        VPCLatticeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        VPCLatticeClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        VPCLatticeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~VPCLatticeClient();

        /**
         * <p>Updates the listener rules in a batch. You can use this operation to change
         * the priority of listener rules. This can be useful when bulk updating or
         * swapping rule priority. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/BatchUpdateRule">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdateRuleOutcome BatchUpdateRule(const Model::BatchUpdateRuleRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdateRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUpdateRuleRequestT = Model::BatchUpdateRuleRequest>
        Model::BatchUpdateRuleOutcomeCallable BatchUpdateRuleCallable(const BatchUpdateRuleRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::BatchUpdateRule, request);
        }

        /**
         * An Async wrapper for BatchUpdateRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUpdateRuleRequestT = Model::BatchUpdateRuleRequest>
        void BatchUpdateRuleAsync(const BatchUpdateRuleRequestT& request, const BatchUpdateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::BatchUpdateRule, request, handler, context);
        }

        /**
         * <p>Enables access logs to be sent to Amazon CloudWatch, Amazon S3, and Amazon
         * Kinesis Data Firehose. The service network owner can use the access logs to
         * audit the services in the network. The service network owner will only see
         * access logs from clients and services that are associated with their service
         * network. Access log entries represent traffic originated from VPCs associated
         * with that network. For more information, see <a
         * href="https://docs.aws.amazon.com/vpc-lattice/latest/ug/monitoring-access-logs.html">Access
         * logs</a> in the <i>Amazon VPC Lattice User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/CreateAccessLogSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessLogSubscriptionOutcome CreateAccessLogSubscription(const Model::CreateAccessLogSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for CreateAccessLogSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAccessLogSubscriptionRequestT = Model::CreateAccessLogSubscriptionRequest>
        Model::CreateAccessLogSubscriptionOutcomeCallable CreateAccessLogSubscriptionCallable(const CreateAccessLogSubscriptionRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::CreateAccessLogSubscription, request);
        }

        /**
         * An Async wrapper for CreateAccessLogSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAccessLogSubscriptionRequestT = Model::CreateAccessLogSubscriptionRequest>
        void CreateAccessLogSubscriptionAsync(const CreateAccessLogSubscriptionRequestT& request, const CreateAccessLogSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::CreateAccessLogSubscription, request, handler, context);
        }

        /**
         * <p>Creates a listener for a service. Before you start using your Amazon VPC
         * Lattice service, you must add one or more listeners. A listener is a process
         * that checks for connection requests to your services. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/vpc-lattice/latest/ug/listeners.html">Listeners</a>
         * in the <i>Amazon VPC Lattice User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/CreateListener">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateListenerOutcome CreateListener(const Model::CreateListenerRequest& request) const;

        /**
         * A Callable wrapper for CreateListener that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateListenerRequestT = Model::CreateListenerRequest>
        Model::CreateListenerOutcomeCallable CreateListenerCallable(const CreateListenerRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::CreateListener, request);
        }

        /**
         * An Async wrapper for CreateListener that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateListenerRequestT = Model::CreateListenerRequest>
        void CreateListenerAsync(const CreateListenerRequestT& request, const CreateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::CreateListener, request, handler, context);
        }

        /**
         * <p>Creates a listener rule. Each listener has a default rule for checking
         * connection requests, but you can define additional rules. Each rule consists of
         * a priority, one or more actions, and one or more conditions. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/vpc-lattice/latest/ug/listeners.html#listener-rules">Listener
         * rules</a> in the <i>Amazon VPC Lattice User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/CreateRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRuleOutcome CreateRule(const Model::CreateRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRuleRequestT = Model::CreateRuleRequest>
        Model::CreateRuleOutcomeCallable CreateRuleCallable(const CreateRuleRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::CreateRule, request);
        }

        /**
         * An Async wrapper for CreateRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRuleRequestT = Model::CreateRuleRequest>
        void CreateRuleAsync(const CreateRuleRequestT& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::CreateRule, request, handler, context);
        }

        /**
         * <p>Creates a service. A service is any software application that can run on
         * instances containers, or serverless functions within an account or virtual
         * private cloud (VPC).</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/vpc-lattice/latest/ug/services.html">Services</a>
         * in the <i>Amazon VPC Lattice User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/CreateService">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceOutcome CreateService(const Model::CreateServiceRequest& request) const;

        /**
         * A Callable wrapper for CreateService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateServiceRequestT = Model::CreateServiceRequest>
        Model::CreateServiceOutcomeCallable CreateServiceCallable(const CreateServiceRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::CreateService, request);
        }

        /**
         * An Async wrapper for CreateService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateServiceRequestT = Model::CreateServiceRequest>
        void CreateServiceAsync(const CreateServiceRequestT& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::CreateService, request, handler, context);
        }

        /**
         * <p>Creates a service network. A service network is a logical boundary for a
         * collection of services. You can associate services and VPCs with a service
         * network.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/vpc-lattice/latest/ug/service-networks.html">Service
         * networks</a> in the <i>Amazon VPC Lattice User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/CreateServiceNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceNetworkOutcome CreateServiceNetwork(const Model::CreateServiceNetworkRequest& request) const;

        /**
         * A Callable wrapper for CreateServiceNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateServiceNetworkRequestT = Model::CreateServiceNetworkRequest>
        Model::CreateServiceNetworkOutcomeCallable CreateServiceNetworkCallable(const CreateServiceNetworkRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::CreateServiceNetwork, request);
        }

        /**
         * An Async wrapper for CreateServiceNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateServiceNetworkRequestT = Model::CreateServiceNetworkRequest>
        void CreateServiceNetworkAsync(const CreateServiceNetworkRequestT& request, const CreateServiceNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::CreateServiceNetwork, request, handler, context);
        }

        /**
         * <p>Associates a service with a service network.</p> <p>You can't use this
         * operation if the service and service network are already associated or if there
         * is a disassociation or deletion in progress. If the association fails, you can
         * retry the operation by deleting the association and recreating it.</p> <p>You
         * cannot associate a service and service network that are shared with a caller.
         * The caller must own either the service or the service network.</p> <p>As a
         * result of this operation, the association is created in the service network
         * account and the association owner account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/CreateServiceNetworkServiceAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceNetworkServiceAssociationOutcome CreateServiceNetworkServiceAssociation(const Model::CreateServiceNetworkServiceAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateServiceNetworkServiceAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateServiceNetworkServiceAssociationRequestT = Model::CreateServiceNetworkServiceAssociationRequest>
        Model::CreateServiceNetworkServiceAssociationOutcomeCallable CreateServiceNetworkServiceAssociationCallable(const CreateServiceNetworkServiceAssociationRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::CreateServiceNetworkServiceAssociation, request);
        }

        /**
         * An Async wrapper for CreateServiceNetworkServiceAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateServiceNetworkServiceAssociationRequestT = Model::CreateServiceNetworkServiceAssociationRequest>
        void CreateServiceNetworkServiceAssociationAsync(const CreateServiceNetworkServiceAssociationRequestT& request, const CreateServiceNetworkServiceAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::CreateServiceNetworkServiceAssociation, request, handler, context);
        }

        /**
         * <p>Associates a VPC with a service network. When you associate a VPC with the
         * service network, it enables all the resources within that VPC to be clients and
         * communicate with other services in the service network. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/vpc-lattice/latest/ug/service-network-associations.html#service-network-vpc-associations">Manage
         * VPC associations</a> in the <i>Amazon VPC Lattice User Guide</i>.</p> <p>You
         * can't use this operation if there is a disassociation in progress. If the
         * association fails, retry by deleting the association and recreating it.</p>
         * <p>As a result of this operation, the association gets created in the service
         * network account and the VPC owner account.</p> <p>Once a security group is added
         * to the VPC association it cannot be removed. You can add or update the security
         * groups being used for the VPC association once a security group is attached. To
         * remove all security groups you must reassociate the VPC.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/CreateServiceNetworkVpcAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceNetworkVpcAssociationOutcome CreateServiceNetworkVpcAssociation(const Model::CreateServiceNetworkVpcAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateServiceNetworkVpcAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateServiceNetworkVpcAssociationRequestT = Model::CreateServiceNetworkVpcAssociationRequest>
        Model::CreateServiceNetworkVpcAssociationOutcomeCallable CreateServiceNetworkVpcAssociationCallable(const CreateServiceNetworkVpcAssociationRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::CreateServiceNetworkVpcAssociation, request);
        }

        /**
         * An Async wrapper for CreateServiceNetworkVpcAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateServiceNetworkVpcAssociationRequestT = Model::CreateServiceNetworkVpcAssociationRequest>
        void CreateServiceNetworkVpcAssociationAsync(const CreateServiceNetworkVpcAssociationRequestT& request, const CreateServiceNetworkVpcAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::CreateServiceNetworkVpcAssociation, request, handler, context);
        }

        /**
         * <p>Creates a target group. A target group is a collection of targets, or compute
         * resources, that run your application or service. A target group can only be used
         * by a single service.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/vpc-lattice/latest/ug/target-groups.html">Target
         * groups</a> in the <i>Amazon VPC Lattice User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/CreateTargetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTargetGroupOutcome CreateTargetGroup(const Model::CreateTargetGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateTargetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTargetGroupRequestT = Model::CreateTargetGroupRequest>
        Model::CreateTargetGroupOutcomeCallable CreateTargetGroupCallable(const CreateTargetGroupRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::CreateTargetGroup, request);
        }

        /**
         * An Async wrapper for CreateTargetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTargetGroupRequestT = Model::CreateTargetGroupRequest>
        void CreateTargetGroupAsync(const CreateTargetGroupRequestT& request, const CreateTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::CreateTargetGroup, request, handler, context);
        }

        /**
         * <p>Deletes the specified access log subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/DeleteAccessLogSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessLogSubscriptionOutcome DeleteAccessLogSubscription(const Model::DeleteAccessLogSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccessLogSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAccessLogSubscriptionRequestT = Model::DeleteAccessLogSubscriptionRequest>
        Model::DeleteAccessLogSubscriptionOutcomeCallable DeleteAccessLogSubscriptionCallable(const DeleteAccessLogSubscriptionRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::DeleteAccessLogSubscription, request);
        }

        /**
         * An Async wrapper for DeleteAccessLogSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAccessLogSubscriptionRequestT = Model::DeleteAccessLogSubscriptionRequest>
        void DeleteAccessLogSubscriptionAsync(const DeleteAccessLogSubscriptionRequestT& request, const DeleteAccessLogSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::DeleteAccessLogSubscription, request, handler, context);
        }

        /**
         * <p>Deletes the specified auth policy. If an auth is set to <code>Amazon Web
         * Services_IAM</code> and the auth policy is deleted, all requests will be denied
         * by default. If you are trying to remove the auth policy completely, you must set
         * the auth_type to <code>NONE</code>. If auth is enabled on the resource, but no
         * auth policy is set, all requests will be denied.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/DeleteAuthPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAuthPolicyOutcome DeleteAuthPolicy(const Model::DeleteAuthPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteAuthPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAuthPolicyRequestT = Model::DeleteAuthPolicyRequest>
        Model::DeleteAuthPolicyOutcomeCallable DeleteAuthPolicyCallable(const DeleteAuthPolicyRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::DeleteAuthPolicy, request);
        }

        /**
         * An Async wrapper for DeleteAuthPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAuthPolicyRequestT = Model::DeleteAuthPolicyRequest>
        void DeleteAuthPolicyAsync(const DeleteAuthPolicyRequestT& request, const DeleteAuthPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::DeleteAuthPolicy, request, handler, context);
        }

        /**
         * <p>Deletes the specified listener.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/DeleteListener">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteListenerOutcome DeleteListener(const Model::DeleteListenerRequest& request) const;

        /**
         * A Callable wrapper for DeleteListener that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteListenerRequestT = Model::DeleteListenerRequest>
        Model::DeleteListenerOutcomeCallable DeleteListenerCallable(const DeleteListenerRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::DeleteListener, request);
        }

        /**
         * An Async wrapper for DeleteListener that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteListenerRequestT = Model::DeleteListenerRequest>
        void DeleteListenerAsync(const DeleteListenerRequestT& request, const DeleteListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::DeleteListener, request, handler, context);
        }

        /**
         * <p>Deletes the specified resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::DeleteResourcePolicy, request);
        }

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::DeleteResourcePolicy, request, handler, context);
        }

        /**
         * <p>Deletes a listener rule. Each listener has a default rule for checking
         * connection requests, but you can define additional rules. Each rule consists of
         * a priority, one or more actions, and one or more conditions. You can delete
         * additional listener rules, but you cannot delete the default rule.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/vpc-lattice/latest/ug/listeners.html#listener-rules">Listener
         * rules</a> in the <i>Amazon VPC Lattice User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/DeleteRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRuleRequestT = Model::DeleteRuleRequest>
        Model::DeleteRuleOutcomeCallable DeleteRuleCallable(const DeleteRuleRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::DeleteRule, request);
        }

        /**
         * An Async wrapper for DeleteRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRuleRequestT = Model::DeleteRuleRequest>
        void DeleteRuleAsync(const DeleteRuleRequestT& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::DeleteRule, request, handler, context);
        }

        /**
         * <p>Deletes a service. A service can't be deleted if it's associated with a
         * service network. If you delete a service, all resources related to the service,
         * such as the resource policy, auth policy, listeners, listener rules, and access
         * log subscriptions, are also deleted. For more information, see <a
         * href="https://docs.aws.amazon.com/vpc-lattice/latest/ug/services.html#delete-service">Delete
         * a service</a> in the <i>Amazon VPC Lattice User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/DeleteService">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceOutcome DeleteService(const Model::DeleteServiceRequest& request) const;

        /**
         * A Callable wrapper for DeleteService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteServiceRequestT = Model::DeleteServiceRequest>
        Model::DeleteServiceOutcomeCallable DeleteServiceCallable(const DeleteServiceRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::DeleteService, request);
        }

        /**
         * An Async wrapper for DeleteService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteServiceRequestT = Model::DeleteServiceRequest>
        void DeleteServiceAsync(const DeleteServiceRequestT& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::DeleteService, request, handler, context);
        }

        /**
         * <p>Deletes a service network. You can only delete the service network if there
         * is no service or VPC associated with it. If you delete a service network, all
         * resources related to the service network, such as the resource policy, auth
         * policy, and access log subscriptions, are also deleted. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/vpc-lattice/latest/ug/service-networks.html#delete-service-network">Delete
         * a service network</a> in the <i>Amazon VPC Lattice User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/DeleteServiceNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceNetworkOutcome DeleteServiceNetwork(const Model::DeleteServiceNetworkRequest& request) const;

        /**
         * A Callable wrapper for DeleteServiceNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteServiceNetworkRequestT = Model::DeleteServiceNetworkRequest>
        Model::DeleteServiceNetworkOutcomeCallable DeleteServiceNetworkCallable(const DeleteServiceNetworkRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::DeleteServiceNetwork, request);
        }

        /**
         * An Async wrapper for DeleteServiceNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteServiceNetworkRequestT = Model::DeleteServiceNetworkRequest>
        void DeleteServiceNetworkAsync(const DeleteServiceNetworkRequestT& request, const DeleteServiceNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::DeleteServiceNetwork, request, handler, context);
        }

        /**
         * <p>Deletes the association between a specified service and the specific service
         * network. This request will fail if an association is still in
         * progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/DeleteServiceNetworkServiceAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceNetworkServiceAssociationOutcome DeleteServiceNetworkServiceAssociation(const Model::DeleteServiceNetworkServiceAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteServiceNetworkServiceAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteServiceNetworkServiceAssociationRequestT = Model::DeleteServiceNetworkServiceAssociationRequest>
        Model::DeleteServiceNetworkServiceAssociationOutcomeCallable DeleteServiceNetworkServiceAssociationCallable(const DeleteServiceNetworkServiceAssociationRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::DeleteServiceNetworkServiceAssociation, request);
        }

        /**
         * An Async wrapper for DeleteServiceNetworkServiceAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteServiceNetworkServiceAssociationRequestT = Model::DeleteServiceNetworkServiceAssociationRequest>
        void DeleteServiceNetworkServiceAssociationAsync(const DeleteServiceNetworkServiceAssociationRequestT& request, const DeleteServiceNetworkServiceAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::DeleteServiceNetworkServiceAssociation, request, handler, context);
        }

        /**
         * <p>Disassociates the VPC from the service network. You can't disassociate the
         * VPC if there is a create or update association in progress.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/DeleteServiceNetworkVpcAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceNetworkVpcAssociationOutcome DeleteServiceNetworkVpcAssociation(const Model::DeleteServiceNetworkVpcAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteServiceNetworkVpcAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteServiceNetworkVpcAssociationRequestT = Model::DeleteServiceNetworkVpcAssociationRequest>
        Model::DeleteServiceNetworkVpcAssociationOutcomeCallable DeleteServiceNetworkVpcAssociationCallable(const DeleteServiceNetworkVpcAssociationRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::DeleteServiceNetworkVpcAssociation, request);
        }

        /**
         * An Async wrapper for DeleteServiceNetworkVpcAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteServiceNetworkVpcAssociationRequestT = Model::DeleteServiceNetworkVpcAssociationRequest>
        void DeleteServiceNetworkVpcAssociationAsync(const DeleteServiceNetworkVpcAssociationRequestT& request, const DeleteServiceNetworkVpcAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::DeleteServiceNetworkVpcAssociation, request, handler, context);
        }

        /**
         * <p>Deletes a target group. You can't delete a target group if it is used in a
         * listener rule or if the target group creation is in progress.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/DeleteTargetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTargetGroupOutcome DeleteTargetGroup(const Model::DeleteTargetGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteTargetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTargetGroupRequestT = Model::DeleteTargetGroupRequest>
        Model::DeleteTargetGroupOutcomeCallable DeleteTargetGroupCallable(const DeleteTargetGroupRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::DeleteTargetGroup, request);
        }

        /**
         * An Async wrapper for DeleteTargetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTargetGroupRequestT = Model::DeleteTargetGroupRequest>
        void DeleteTargetGroupAsync(const DeleteTargetGroupRequestT& request, const DeleteTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::DeleteTargetGroup, request, handler, context);
        }

        /**
         * <p>Deregisters the specified targets from the specified target
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/DeregisterTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterTargetsOutcome DeregisterTargets(const Model::DeregisterTargetsRequest& request) const;

        /**
         * A Callable wrapper for DeregisterTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterTargetsRequestT = Model::DeregisterTargetsRequest>
        Model::DeregisterTargetsOutcomeCallable DeregisterTargetsCallable(const DeregisterTargetsRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::DeregisterTargets, request);
        }

        /**
         * An Async wrapper for DeregisterTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterTargetsRequestT = Model::DeregisterTargetsRequest>
        void DeregisterTargetsAsync(const DeregisterTargetsRequestT& request, const DeregisterTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::DeregisterTargets, request, handler, context);
        }

        /**
         * <p>Retrieves information about the specified access log
         * subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/GetAccessLogSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccessLogSubscriptionOutcome GetAccessLogSubscription(const Model::GetAccessLogSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for GetAccessLogSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccessLogSubscriptionRequestT = Model::GetAccessLogSubscriptionRequest>
        Model::GetAccessLogSubscriptionOutcomeCallable GetAccessLogSubscriptionCallable(const GetAccessLogSubscriptionRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::GetAccessLogSubscription, request);
        }

        /**
         * An Async wrapper for GetAccessLogSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccessLogSubscriptionRequestT = Model::GetAccessLogSubscriptionRequest>
        void GetAccessLogSubscriptionAsync(const GetAccessLogSubscriptionRequestT& request, const GetAccessLogSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::GetAccessLogSubscription, request, handler, context);
        }

        /**
         * <p>Retrieves information about the auth policy for the specified service or
         * service network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/GetAuthPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAuthPolicyOutcome GetAuthPolicy(const Model::GetAuthPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetAuthPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAuthPolicyRequestT = Model::GetAuthPolicyRequest>
        Model::GetAuthPolicyOutcomeCallable GetAuthPolicyCallable(const GetAuthPolicyRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::GetAuthPolicy, request);
        }

        /**
         * An Async wrapper for GetAuthPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAuthPolicyRequestT = Model::GetAuthPolicyRequest>
        void GetAuthPolicyAsync(const GetAuthPolicyRequestT& request, const GetAuthPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::GetAuthPolicy, request, handler, context);
        }

        /**
         * <p>Retrieves information about the specified listener for the specified
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/GetListener">AWS
         * API Reference</a></p>
         */
        virtual Model::GetListenerOutcome GetListener(const Model::GetListenerRequest& request) const;

        /**
         * A Callable wrapper for GetListener that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetListenerRequestT = Model::GetListenerRequest>
        Model::GetListenerOutcomeCallable GetListenerCallable(const GetListenerRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::GetListener, request);
        }

        /**
         * An Async wrapper for GetListener that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetListenerRequestT = Model::GetListenerRequest>
        void GetListenerAsync(const GetListenerRequestT& request, const GetListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::GetListener, request, handler, context);
        }

        /**
         * <p>Retrieves information about the resource policy. The resource policy is an
         * IAM policy created by AWS RAM on behalf of the resource owner when they share a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const GetResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::GetResourcePolicy, request);
        }

        /**
         * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        void GetResourcePolicyAsync(const GetResourcePolicyRequestT& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::GetResourcePolicy, request, handler, context);
        }

        /**
         * <p>Retrieves information about listener rules. You can also retrieve information
         * about the default listener rule. For more information, see <a
         * href="https://docs.aws.amazon.com/vpc-lattice/latest/ug/listeners.html#listener-rules">Listener
         * rules</a> in the <i>Amazon VPC Lattice User Guide</i>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/GetRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRuleOutcome GetRule(const Model::GetRuleRequest& request) const;

        /**
         * A Callable wrapper for GetRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRuleRequestT = Model::GetRuleRequest>
        Model::GetRuleOutcomeCallable GetRuleCallable(const GetRuleRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::GetRule, request);
        }

        /**
         * An Async wrapper for GetRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRuleRequestT = Model::GetRuleRequest>
        void GetRuleAsync(const GetRuleRequestT& request, const GetRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::GetRule, request, handler, context);
        }

        /**
         * <p>Retrieves information about the specified service.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/GetService">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceOutcome GetService(const Model::GetServiceRequest& request) const;

        /**
         * A Callable wrapper for GetService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetServiceRequestT = Model::GetServiceRequest>
        Model::GetServiceOutcomeCallable GetServiceCallable(const GetServiceRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::GetService, request);
        }

        /**
         * An Async wrapper for GetService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServiceRequestT = Model::GetServiceRequest>
        void GetServiceAsync(const GetServiceRequestT& request, const GetServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::GetService, request, handler, context);
        }

        /**
         * <p>Retrieves information about the specified service network.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/GetServiceNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceNetworkOutcome GetServiceNetwork(const Model::GetServiceNetworkRequest& request) const;

        /**
         * A Callable wrapper for GetServiceNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetServiceNetworkRequestT = Model::GetServiceNetworkRequest>
        Model::GetServiceNetworkOutcomeCallable GetServiceNetworkCallable(const GetServiceNetworkRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::GetServiceNetwork, request);
        }

        /**
         * An Async wrapper for GetServiceNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServiceNetworkRequestT = Model::GetServiceNetworkRequest>
        void GetServiceNetworkAsync(const GetServiceNetworkRequestT& request, const GetServiceNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::GetServiceNetwork, request, handler, context);
        }

        /**
         * <p>Retrieves information about the specified association between a service
         * network and a service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/GetServiceNetworkServiceAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceNetworkServiceAssociationOutcome GetServiceNetworkServiceAssociation(const Model::GetServiceNetworkServiceAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetServiceNetworkServiceAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetServiceNetworkServiceAssociationRequestT = Model::GetServiceNetworkServiceAssociationRequest>
        Model::GetServiceNetworkServiceAssociationOutcomeCallable GetServiceNetworkServiceAssociationCallable(const GetServiceNetworkServiceAssociationRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::GetServiceNetworkServiceAssociation, request);
        }

        /**
         * An Async wrapper for GetServiceNetworkServiceAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServiceNetworkServiceAssociationRequestT = Model::GetServiceNetworkServiceAssociationRequest>
        void GetServiceNetworkServiceAssociationAsync(const GetServiceNetworkServiceAssociationRequestT& request, const GetServiceNetworkServiceAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::GetServiceNetworkServiceAssociation, request, handler, context);
        }

        /**
         * <p>Retrieves information about the association between a service network and a
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/GetServiceNetworkVpcAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceNetworkVpcAssociationOutcome GetServiceNetworkVpcAssociation(const Model::GetServiceNetworkVpcAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetServiceNetworkVpcAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetServiceNetworkVpcAssociationRequestT = Model::GetServiceNetworkVpcAssociationRequest>
        Model::GetServiceNetworkVpcAssociationOutcomeCallable GetServiceNetworkVpcAssociationCallable(const GetServiceNetworkVpcAssociationRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::GetServiceNetworkVpcAssociation, request);
        }

        /**
         * An Async wrapper for GetServiceNetworkVpcAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServiceNetworkVpcAssociationRequestT = Model::GetServiceNetworkVpcAssociationRequest>
        void GetServiceNetworkVpcAssociationAsync(const GetServiceNetworkVpcAssociationRequestT& request, const GetServiceNetworkVpcAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::GetServiceNetworkVpcAssociation, request, handler, context);
        }

        /**
         * <p>Retrieves information about the specified target group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/GetTargetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTargetGroupOutcome GetTargetGroup(const Model::GetTargetGroupRequest& request) const;

        /**
         * A Callable wrapper for GetTargetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTargetGroupRequestT = Model::GetTargetGroupRequest>
        Model::GetTargetGroupOutcomeCallable GetTargetGroupCallable(const GetTargetGroupRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::GetTargetGroup, request);
        }

        /**
         * An Async wrapper for GetTargetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTargetGroupRequestT = Model::GetTargetGroupRequest>
        void GetTargetGroupAsync(const GetTargetGroupRequestT& request, const GetTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::GetTargetGroup, request, handler, context);
        }

        /**
         * <p>Lists all access log subscriptions for the specified service network or
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/ListAccessLogSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccessLogSubscriptionsOutcome ListAccessLogSubscriptions(const Model::ListAccessLogSubscriptionsRequest& request) const;

        /**
         * A Callable wrapper for ListAccessLogSubscriptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAccessLogSubscriptionsRequestT = Model::ListAccessLogSubscriptionsRequest>
        Model::ListAccessLogSubscriptionsOutcomeCallable ListAccessLogSubscriptionsCallable(const ListAccessLogSubscriptionsRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::ListAccessLogSubscriptions, request);
        }

        /**
         * An Async wrapper for ListAccessLogSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccessLogSubscriptionsRequestT = Model::ListAccessLogSubscriptionsRequest>
        void ListAccessLogSubscriptionsAsync(const ListAccessLogSubscriptionsRequestT& request, const ListAccessLogSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::ListAccessLogSubscriptions, request, handler, context);
        }

        /**
         * <p>Lists the listeners for the specified service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/ListListeners">AWS
         * API Reference</a></p>
         */
        virtual Model::ListListenersOutcome ListListeners(const Model::ListListenersRequest& request) const;

        /**
         * A Callable wrapper for ListListeners that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListListenersRequestT = Model::ListListenersRequest>
        Model::ListListenersOutcomeCallable ListListenersCallable(const ListListenersRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::ListListeners, request);
        }

        /**
         * An Async wrapper for ListListeners that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListListenersRequestT = Model::ListListenersRequest>
        void ListListenersAsync(const ListListenersRequestT& request, const ListListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::ListListeners, request, handler, context);
        }

        /**
         * <p>Lists the rules for the listener.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/ListRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRulesOutcome ListRules(const Model::ListRulesRequest& request) const;

        /**
         * A Callable wrapper for ListRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRulesRequestT = Model::ListRulesRequest>
        Model::ListRulesOutcomeCallable ListRulesCallable(const ListRulesRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::ListRules, request);
        }

        /**
         * An Async wrapper for ListRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRulesRequestT = Model::ListRulesRequest>
        void ListRulesAsync(const ListRulesRequestT& request, const ListRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::ListRules, request, handler, context);
        }

        /**
         * <p>Lists the associations between the service network and the service. You can
         * filter the list either by service or service network. You must provide either
         * the service network identifier or the service identifier.</p> <p>Every
         * association in Amazon VPC Lattice is given a unique Amazon Resource Name (ARN),
         * such as when a service network is associated with a VPC or when a service is
         * associated with a service network. If the association is for a resource that is
         * shared with another account, the association will include the local account ID
         * as the prefix in the ARN for each account the resource is shared
         * with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/ListServiceNetworkServiceAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceNetworkServiceAssociationsOutcome ListServiceNetworkServiceAssociations(const Model::ListServiceNetworkServiceAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListServiceNetworkServiceAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServiceNetworkServiceAssociationsRequestT = Model::ListServiceNetworkServiceAssociationsRequest>
        Model::ListServiceNetworkServiceAssociationsOutcomeCallable ListServiceNetworkServiceAssociationsCallable(const ListServiceNetworkServiceAssociationsRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::ListServiceNetworkServiceAssociations, request);
        }

        /**
         * An Async wrapper for ListServiceNetworkServiceAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServiceNetworkServiceAssociationsRequestT = Model::ListServiceNetworkServiceAssociationsRequest>
        void ListServiceNetworkServiceAssociationsAsync(const ListServiceNetworkServiceAssociationsRequestT& request, const ListServiceNetworkServiceAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::ListServiceNetworkServiceAssociations, request, handler, context);
        }

        /**
         * <p>Lists the service network and VPC associations. You can filter the list
         * either by VPC or service network. You must provide either the service network
         * identifier or the VPC identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/ListServiceNetworkVpcAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceNetworkVpcAssociationsOutcome ListServiceNetworkVpcAssociations(const Model::ListServiceNetworkVpcAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListServiceNetworkVpcAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServiceNetworkVpcAssociationsRequestT = Model::ListServiceNetworkVpcAssociationsRequest>
        Model::ListServiceNetworkVpcAssociationsOutcomeCallable ListServiceNetworkVpcAssociationsCallable(const ListServiceNetworkVpcAssociationsRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::ListServiceNetworkVpcAssociations, request);
        }

        /**
         * An Async wrapper for ListServiceNetworkVpcAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServiceNetworkVpcAssociationsRequestT = Model::ListServiceNetworkVpcAssociationsRequest>
        void ListServiceNetworkVpcAssociationsAsync(const ListServiceNetworkVpcAssociationsRequestT& request, const ListServiceNetworkVpcAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::ListServiceNetworkVpcAssociations, request, handler, context);
        }

        /**
         * <p>Lists the service networks owned by the caller account or shared with the
         * caller account. Also includes the account ID in the ARN to show which account
         * owns the service network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/ListServiceNetworks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceNetworksOutcome ListServiceNetworks(const Model::ListServiceNetworksRequest& request) const;

        /**
         * A Callable wrapper for ListServiceNetworks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServiceNetworksRequestT = Model::ListServiceNetworksRequest>
        Model::ListServiceNetworksOutcomeCallable ListServiceNetworksCallable(const ListServiceNetworksRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::ListServiceNetworks, request);
        }

        /**
         * An Async wrapper for ListServiceNetworks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServiceNetworksRequestT = Model::ListServiceNetworksRequest>
        void ListServiceNetworksAsync(const ListServiceNetworksRequestT& request, const ListServiceNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::ListServiceNetworks, request, handler, context);
        }

        /**
         * <p>Lists the services owned by the caller account or shared with the caller
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/ListServices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request) const;

        /**
         * A Callable wrapper for ListServices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServicesRequestT = Model::ListServicesRequest>
        Model::ListServicesOutcomeCallable ListServicesCallable(const ListServicesRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::ListServices, request);
        }

        /**
         * An Async wrapper for ListServices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServicesRequestT = Model::ListServicesRequest>
        void ListServicesAsync(const ListServicesRequestT& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::ListServices, request, handler, context);
        }

        /**
         * <p>Lists the tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists your target groups. You can narrow your search by using the filters
         * below in your request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/ListTargetGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTargetGroupsOutcome ListTargetGroups(const Model::ListTargetGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListTargetGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTargetGroupsRequestT = Model::ListTargetGroupsRequest>
        Model::ListTargetGroupsOutcomeCallable ListTargetGroupsCallable(const ListTargetGroupsRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::ListTargetGroups, request);
        }

        /**
         * An Async wrapper for ListTargetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTargetGroupsRequestT = Model::ListTargetGroupsRequest>
        void ListTargetGroupsAsync(const ListTargetGroupsRequestT& request, const ListTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::ListTargetGroups, request, handler, context);
        }

        /**
         * <p>Lists the targets for the target group. By default, all targets are included.
         * You can use this API to check the health status of targets. You can also ﬁlter
         * the results by target. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/ListTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTargetsOutcome ListTargets(const Model::ListTargetsRequest& request) const;

        /**
         * A Callable wrapper for ListTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTargetsRequestT = Model::ListTargetsRequest>
        Model::ListTargetsOutcomeCallable ListTargetsCallable(const ListTargetsRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::ListTargets, request);
        }

        /**
         * An Async wrapper for ListTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTargetsRequestT = Model::ListTargetsRequest>
        void ListTargetsAsync(const ListTargetsRequestT& request, const ListTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::ListTargets, request, handler, context);
        }

        /**
         * <p>Creates or updates the auth policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/PutAuthPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAuthPolicyOutcome PutAuthPolicy(const Model::PutAuthPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutAuthPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAuthPolicyRequestT = Model::PutAuthPolicyRequest>
        Model::PutAuthPolicyOutcomeCallable PutAuthPolicyCallable(const PutAuthPolicyRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::PutAuthPolicy, request);
        }

        /**
         * An Async wrapper for PutAuthPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAuthPolicyRequestT = Model::PutAuthPolicyRequest>
        void PutAuthPolicyAsync(const PutAuthPolicyRequestT& request, const PutAuthPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::PutAuthPolicy, request, handler, context);
        }

        /**
         * <p>Attaches a resource-based permission policy to a service or service network.
         * The policy must contain the same actions and condition statements as the Amazon
         * Web Services Resource Access Manager permission for sharing services and service
         * networks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::PutResourcePolicy, request);
        }

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::PutResourcePolicy, request, handler, context);
        }

        /**
         * <p>Registers the targets with the target group. If it's a Lambda target, you can
         * only have one target in a target group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/RegisterTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterTargetsOutcome RegisterTargets(const Model::RegisterTargetsRequest& request) const;

        /**
         * A Callable wrapper for RegisterTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterTargetsRequestT = Model::RegisterTargetsRequest>
        Model::RegisterTargetsOutcomeCallable RegisterTargetsCallable(const RegisterTargetsRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::RegisterTargets, request);
        }

        /**
         * An Async wrapper for RegisterTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterTargetsRequestT = Model::RegisterTargetsRequest>
        void RegisterTargetsAsync(const RegisterTargetsRequestT& request, const RegisterTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::RegisterTargets, request, handler, context);
        }

        /**
         * <p>Adds the specified tags to the specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the specified tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the specified access log subscription.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/UpdateAccessLogSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccessLogSubscriptionOutcome UpdateAccessLogSubscription(const Model::UpdateAccessLogSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccessLogSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAccessLogSubscriptionRequestT = Model::UpdateAccessLogSubscriptionRequest>
        Model::UpdateAccessLogSubscriptionOutcomeCallable UpdateAccessLogSubscriptionCallable(const UpdateAccessLogSubscriptionRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::UpdateAccessLogSubscription, request);
        }

        /**
         * An Async wrapper for UpdateAccessLogSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAccessLogSubscriptionRequestT = Model::UpdateAccessLogSubscriptionRequest>
        void UpdateAccessLogSubscriptionAsync(const UpdateAccessLogSubscriptionRequestT& request, const UpdateAccessLogSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::UpdateAccessLogSubscription, request, handler, context);
        }

        /**
         * <p>Updates the specified listener for the specified service.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/UpdateListener">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateListenerOutcome UpdateListener(const Model::UpdateListenerRequest& request) const;

        /**
         * A Callable wrapper for UpdateListener that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateListenerRequestT = Model::UpdateListenerRequest>
        Model::UpdateListenerOutcomeCallable UpdateListenerCallable(const UpdateListenerRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::UpdateListener, request);
        }

        /**
         * An Async wrapper for UpdateListener that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateListenerRequestT = Model::UpdateListenerRequest>
        void UpdateListenerAsync(const UpdateListenerRequestT& request, const UpdateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::UpdateListener, request, handler, context);
        }

        /**
         * <p>Updates a rule for the listener. You can't modify a default listener rule. To
         * modify a default listener rule, use <code>UpdateListener</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/UpdateRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRuleOutcome UpdateRule(const Model::UpdateRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRuleRequestT = Model::UpdateRuleRequest>
        Model::UpdateRuleOutcomeCallable UpdateRuleCallable(const UpdateRuleRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::UpdateRule, request);
        }

        /**
         * An Async wrapper for UpdateRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRuleRequestT = Model::UpdateRuleRequest>
        void UpdateRuleAsync(const UpdateRuleRequestT& request, const UpdateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::UpdateRule, request, handler, context);
        }

        /**
         * <p>Updates the specified service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/UpdateService">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceOutcome UpdateService(const Model::UpdateServiceRequest& request) const;

        /**
         * A Callable wrapper for UpdateService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateServiceRequestT = Model::UpdateServiceRequest>
        Model::UpdateServiceOutcomeCallable UpdateServiceCallable(const UpdateServiceRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::UpdateService, request);
        }

        /**
         * An Async wrapper for UpdateService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateServiceRequestT = Model::UpdateServiceRequest>
        void UpdateServiceAsync(const UpdateServiceRequestT& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::UpdateService, request, handler, context);
        }

        /**
         * <p>Updates the specified service network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/UpdateServiceNetwork">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceNetworkOutcome UpdateServiceNetwork(const Model::UpdateServiceNetworkRequest& request) const;

        /**
         * A Callable wrapper for UpdateServiceNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateServiceNetworkRequestT = Model::UpdateServiceNetworkRequest>
        Model::UpdateServiceNetworkOutcomeCallable UpdateServiceNetworkCallable(const UpdateServiceNetworkRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::UpdateServiceNetwork, request);
        }

        /**
         * An Async wrapper for UpdateServiceNetwork that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateServiceNetworkRequestT = Model::UpdateServiceNetworkRequest>
        void UpdateServiceNetworkAsync(const UpdateServiceNetworkRequestT& request, const UpdateServiceNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::UpdateServiceNetwork, request, handler, context);
        }

        /**
         * <p>Updates the service network and VPC association. Once you add a security
         * group, it cannot be removed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/UpdateServiceNetworkVpcAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceNetworkVpcAssociationOutcome UpdateServiceNetworkVpcAssociation(const Model::UpdateServiceNetworkVpcAssociationRequest& request) const;

        /**
         * A Callable wrapper for UpdateServiceNetworkVpcAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateServiceNetworkVpcAssociationRequestT = Model::UpdateServiceNetworkVpcAssociationRequest>
        Model::UpdateServiceNetworkVpcAssociationOutcomeCallable UpdateServiceNetworkVpcAssociationCallable(const UpdateServiceNetworkVpcAssociationRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::UpdateServiceNetworkVpcAssociation, request);
        }

        /**
         * An Async wrapper for UpdateServiceNetworkVpcAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateServiceNetworkVpcAssociationRequestT = Model::UpdateServiceNetworkVpcAssociationRequest>
        void UpdateServiceNetworkVpcAssociationAsync(const UpdateServiceNetworkVpcAssociationRequestT& request, const UpdateServiceNetworkVpcAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::UpdateServiceNetworkVpcAssociation, request, handler, context);
        }

        /**
         * <p>Updates the specified target group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/UpdateTargetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTargetGroupOutcome UpdateTargetGroup(const Model::UpdateTargetGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateTargetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTargetGroupRequestT = Model::UpdateTargetGroupRequest>
        Model::UpdateTargetGroupOutcomeCallable UpdateTargetGroupCallable(const UpdateTargetGroupRequestT& request) const
        {
            return SubmitCallable(&VPCLatticeClient::UpdateTargetGroup, request);
        }

        /**
         * An Async wrapper for UpdateTargetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTargetGroupRequestT = Model::UpdateTargetGroupRequest>
        void UpdateTargetGroupAsync(const UpdateTargetGroupRequestT& request, const UpdateTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VPCLatticeClient::UpdateTargetGroup, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<VPCLatticeEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<VPCLatticeClient>;
      void init(const VPCLatticeClientConfiguration& clientConfiguration);

      VPCLatticeClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<VPCLatticeEndpointProviderBase> m_endpointProvider;
  };

} // namespace VPCLattice
} // namespace Aws
