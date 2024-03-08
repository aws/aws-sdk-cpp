/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/redshift-serverless/RedshiftServerlessServiceClientModel.h>

namespace Aws
{
namespace RedshiftServerless
{
  /**
   * <p>This is an interface reference for Amazon Redshift Serverless. It contains
   * documentation for one of the programming or command line interfaces you can use
   * to manage Amazon Redshift Serverless. </p> <p>Amazon Redshift Serverless
   * automatically provisions data warehouse capacity and intelligently scales the
   * underlying resources based on workload demands. Amazon Redshift Serverless
   * adjusts capacity in seconds to deliver consistently high performance and
   * simplified operations for even the most demanding and volatile workloads. Amazon
   * Redshift Serverless lets you focus on using your data to acquire new insights
   * for your business and customers. </p> <p> To learn more about Amazon Redshift
   * Serverless, see <a
   * href="https://docs.aws.amazon.com/redshift/latest/mgmt/serverless-whatis.html">What
   * is Amazon Redshift Serverless</a>. </p>
   */
  class AWS_REDSHIFTSERVERLESS_API RedshiftServerlessClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<RedshiftServerlessClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef RedshiftServerlessClientConfiguration ClientConfigurationType;
      typedef RedshiftServerlessEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftServerlessClient(const Aws::RedshiftServerless::RedshiftServerlessClientConfiguration& clientConfiguration = Aws::RedshiftServerless::RedshiftServerlessClientConfiguration(),
                                 std::shared_ptr<RedshiftServerlessEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftServerlessClient(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<RedshiftServerlessEndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::RedshiftServerless::RedshiftServerlessClientConfiguration& clientConfiguration = Aws::RedshiftServerless::RedshiftServerlessClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RedshiftServerlessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<RedshiftServerlessEndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::RedshiftServerless::RedshiftServerlessClientConfiguration& clientConfiguration = Aws::RedshiftServerless::RedshiftServerlessClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftServerlessClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftServerlessClient(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RedshiftServerlessClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~RedshiftServerlessClient();

        /**
         * <p>Converts a recovery point to a snapshot. For more information about recovery
         * points and snapshots, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/serverless-snapshots-recovery.html">Working
         * with snapshots and recovery points</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ConvertRecoveryPointToSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::ConvertRecoveryPointToSnapshotOutcome ConvertRecoveryPointToSnapshot(const Model::ConvertRecoveryPointToSnapshotRequest& request) const;

        /**
         * A Callable wrapper for ConvertRecoveryPointToSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ConvertRecoveryPointToSnapshotRequestT = Model::ConvertRecoveryPointToSnapshotRequest>
        Model::ConvertRecoveryPointToSnapshotOutcomeCallable ConvertRecoveryPointToSnapshotCallable(const ConvertRecoveryPointToSnapshotRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::ConvertRecoveryPointToSnapshot, request);
        }

        /**
         * An Async wrapper for ConvertRecoveryPointToSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ConvertRecoveryPointToSnapshotRequestT = Model::ConvertRecoveryPointToSnapshotRequest>
        void ConvertRecoveryPointToSnapshotAsync(const ConvertRecoveryPointToSnapshotRequestT& request, const ConvertRecoveryPointToSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::ConvertRecoveryPointToSnapshot, request, handler, context);
        }

        /**
         * <p>Creates a custom domain association for Amazon Redshift
         * Serverless.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/CreateCustomDomainAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomDomainAssociationOutcome CreateCustomDomainAssociation(const Model::CreateCustomDomainAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomDomainAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCustomDomainAssociationRequestT = Model::CreateCustomDomainAssociationRequest>
        Model::CreateCustomDomainAssociationOutcomeCallable CreateCustomDomainAssociationCallable(const CreateCustomDomainAssociationRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::CreateCustomDomainAssociation, request);
        }

        /**
         * An Async wrapper for CreateCustomDomainAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCustomDomainAssociationRequestT = Model::CreateCustomDomainAssociationRequest>
        void CreateCustomDomainAssociationAsync(const CreateCustomDomainAssociationRequestT& request, const CreateCustomDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::CreateCustomDomainAssociation, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Redshift Serverless managed VPC endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/CreateEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointAccessOutcome CreateEndpointAccess(const Model::CreateEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for CreateEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEndpointAccessRequestT = Model::CreateEndpointAccessRequest>
        Model::CreateEndpointAccessOutcomeCallable CreateEndpointAccessCallable(const CreateEndpointAccessRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::CreateEndpointAccess, request);
        }

        /**
         * An Async wrapper for CreateEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEndpointAccessRequestT = Model::CreateEndpointAccessRequest>
        void CreateEndpointAccessAsync(const CreateEndpointAccessRequestT& request, const CreateEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::CreateEndpointAccess, request, handler, context);
        }

        /**
         * <p>Creates a namespace in Amazon Redshift Serverless.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/CreateNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNamespaceOutcome CreateNamespace(const Model::CreateNamespaceRequest& request) const;

        /**
         * A Callable wrapper for CreateNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateNamespaceRequestT = Model::CreateNamespaceRequest>
        Model::CreateNamespaceOutcomeCallable CreateNamespaceCallable(const CreateNamespaceRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::CreateNamespace, request);
        }

        /**
         * An Async wrapper for CreateNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNamespaceRequestT = Model::CreateNamespaceRequest>
        void CreateNamespaceAsync(const CreateNamespaceRequestT& request, const CreateNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::CreateNamespace, request, handler, context);
        }

        /**
         * <p>Creates a scheduled action. A scheduled action contains a schedule and an
         * Amazon Redshift API action. For example, you can create a schedule of when to
         * run the <code>CreateSnapshot</code> API operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/CreateScheduledAction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScheduledActionOutcome CreateScheduledAction(const Model::CreateScheduledActionRequest& request) const;

        /**
         * A Callable wrapper for CreateScheduledAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateScheduledActionRequestT = Model::CreateScheduledActionRequest>
        Model::CreateScheduledActionOutcomeCallable CreateScheduledActionCallable(const CreateScheduledActionRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::CreateScheduledAction, request);
        }

        /**
         * An Async wrapper for CreateScheduledAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateScheduledActionRequestT = Model::CreateScheduledActionRequest>
        void CreateScheduledActionAsync(const CreateScheduledActionRequestT& request, const CreateScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::CreateScheduledAction, request, handler, context);
        }

        /**
         * <p>Creates a snapshot of all databases in a namespace. For more information
         * about snapshots, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/serverless-snapshots-recovery.html">
         * Working with snapshots and recovery points</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/CreateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSnapshotRequestT = Model::CreateSnapshotRequest>
        Model::CreateSnapshotOutcomeCallable CreateSnapshotCallable(const CreateSnapshotRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::CreateSnapshot, request);
        }

        /**
         * An Async wrapper for CreateSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSnapshotRequestT = Model::CreateSnapshotRequest>
        void CreateSnapshotAsync(const CreateSnapshotRequestT& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::CreateSnapshot, request, handler, context);
        }

        /**
         * <p>Creates a snapshot copy configuration that lets you copy snapshots to another
         * Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/CreateSnapshotCopyConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSnapshotCopyConfigurationOutcome CreateSnapshotCopyConfiguration(const Model::CreateSnapshotCopyConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateSnapshotCopyConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSnapshotCopyConfigurationRequestT = Model::CreateSnapshotCopyConfigurationRequest>
        Model::CreateSnapshotCopyConfigurationOutcomeCallable CreateSnapshotCopyConfigurationCallable(const CreateSnapshotCopyConfigurationRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::CreateSnapshotCopyConfiguration, request);
        }

        /**
         * An Async wrapper for CreateSnapshotCopyConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSnapshotCopyConfigurationRequestT = Model::CreateSnapshotCopyConfigurationRequest>
        void CreateSnapshotCopyConfigurationAsync(const CreateSnapshotCopyConfigurationRequestT& request, const CreateSnapshotCopyConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::CreateSnapshotCopyConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a usage limit for a specified Amazon Redshift Serverless usage type.
         * The usage limit is identified by the returned usage limit identifier.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/CreateUsageLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUsageLimitOutcome CreateUsageLimit(const Model::CreateUsageLimitRequest& request) const;

        /**
         * A Callable wrapper for CreateUsageLimit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUsageLimitRequestT = Model::CreateUsageLimitRequest>
        Model::CreateUsageLimitOutcomeCallable CreateUsageLimitCallable(const CreateUsageLimitRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::CreateUsageLimit, request);
        }

        /**
         * An Async wrapper for CreateUsageLimit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUsageLimitRequestT = Model::CreateUsageLimitRequest>
        void CreateUsageLimitAsync(const CreateUsageLimitRequestT& request, const CreateUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::CreateUsageLimit, request, handler, context);
        }

        /**
         * <p>Creates an workgroup in Amazon Redshift Serverless.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/CreateWorkgroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkgroupOutcome CreateWorkgroup(const Model::CreateWorkgroupRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkgroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkgroupRequestT = Model::CreateWorkgroupRequest>
        Model::CreateWorkgroupOutcomeCallable CreateWorkgroupCallable(const CreateWorkgroupRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::CreateWorkgroup, request);
        }

        /**
         * An Async wrapper for CreateWorkgroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkgroupRequestT = Model::CreateWorkgroupRequest>
        void CreateWorkgroupAsync(const CreateWorkgroupRequestT& request, const CreateWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::CreateWorkgroup, request, handler, context);
        }

        /**
         * <p>Deletes a custom domain association for Amazon Redshift
         * Serverless.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/DeleteCustomDomainAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomDomainAssociationOutcome DeleteCustomDomainAssociation(const Model::DeleteCustomDomainAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomDomainAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCustomDomainAssociationRequestT = Model::DeleteCustomDomainAssociationRequest>
        Model::DeleteCustomDomainAssociationOutcomeCallable DeleteCustomDomainAssociationCallable(const DeleteCustomDomainAssociationRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::DeleteCustomDomainAssociation, request);
        }

        /**
         * An Async wrapper for DeleteCustomDomainAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCustomDomainAssociationRequestT = Model::DeleteCustomDomainAssociationRequest>
        void DeleteCustomDomainAssociationAsync(const DeleteCustomDomainAssociationRequestT& request, const DeleteCustomDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::DeleteCustomDomainAssociation, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Redshift Serverless managed VPC endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/DeleteEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointAccessOutcome DeleteEndpointAccess(const Model::DeleteEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for DeleteEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEndpointAccessRequestT = Model::DeleteEndpointAccessRequest>
        Model::DeleteEndpointAccessOutcomeCallable DeleteEndpointAccessCallable(const DeleteEndpointAccessRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::DeleteEndpointAccess, request);
        }

        /**
         * An Async wrapper for DeleteEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEndpointAccessRequestT = Model::DeleteEndpointAccessRequest>
        void DeleteEndpointAccessAsync(const DeleteEndpointAccessRequestT& request, const DeleteEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::DeleteEndpointAccess, request, handler, context);
        }

        /**
         * <p>Deletes a namespace from Amazon Redshift Serverless. Before you delete the
         * namespace, you can create a final snapshot that has all of the data within the
         * namespace.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/DeleteNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNamespaceOutcome DeleteNamespace(const Model::DeleteNamespaceRequest& request) const;

        /**
         * A Callable wrapper for DeleteNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteNamespaceRequestT = Model::DeleteNamespaceRequest>
        Model::DeleteNamespaceOutcomeCallable DeleteNamespaceCallable(const DeleteNamespaceRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::DeleteNamespace, request);
        }

        /**
         * An Async wrapper for DeleteNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNamespaceRequestT = Model::DeleteNamespaceRequest>
        void DeleteNamespaceAsync(const DeleteNamespaceRequestT& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::DeleteNamespace, request, handler, context);
        }

        /**
         * <p>Deletes the specified resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::DeleteResourcePolicy, request);
        }

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::DeleteResourcePolicy, request, handler, context);
        }

        /**
         * <p>Deletes a scheduled action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/DeleteScheduledAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduledActionOutcome DeleteScheduledAction(const Model::DeleteScheduledActionRequest& request) const;

        /**
         * A Callable wrapper for DeleteScheduledAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteScheduledActionRequestT = Model::DeleteScheduledActionRequest>
        Model::DeleteScheduledActionOutcomeCallable DeleteScheduledActionCallable(const DeleteScheduledActionRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::DeleteScheduledAction, request);
        }

        /**
         * An Async wrapper for DeleteScheduledAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteScheduledActionRequestT = Model::DeleteScheduledActionRequest>
        void DeleteScheduledActionAsync(const DeleteScheduledActionRequestT& request, const DeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::DeleteScheduledAction, request, handler, context);
        }

        /**
         * <p>Deletes a snapshot from Amazon Redshift Serverless.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/DeleteSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSnapshotOutcome DeleteSnapshot(const Model::DeleteSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSnapshotRequestT = Model::DeleteSnapshotRequest>
        Model::DeleteSnapshotOutcomeCallable DeleteSnapshotCallable(const DeleteSnapshotRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::DeleteSnapshot, request);
        }

        /**
         * An Async wrapper for DeleteSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSnapshotRequestT = Model::DeleteSnapshotRequest>
        void DeleteSnapshotAsync(const DeleteSnapshotRequestT& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::DeleteSnapshot, request, handler, context);
        }

        /**
         * <p>Deletes a snapshot copy configuration</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/DeleteSnapshotCopyConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSnapshotCopyConfigurationOutcome DeleteSnapshotCopyConfiguration(const Model::DeleteSnapshotCopyConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSnapshotCopyConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSnapshotCopyConfigurationRequestT = Model::DeleteSnapshotCopyConfigurationRequest>
        Model::DeleteSnapshotCopyConfigurationOutcomeCallable DeleteSnapshotCopyConfigurationCallable(const DeleteSnapshotCopyConfigurationRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::DeleteSnapshotCopyConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteSnapshotCopyConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSnapshotCopyConfigurationRequestT = Model::DeleteSnapshotCopyConfigurationRequest>
        void DeleteSnapshotCopyConfigurationAsync(const DeleteSnapshotCopyConfigurationRequestT& request, const DeleteSnapshotCopyConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::DeleteSnapshotCopyConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes a usage limit from Amazon Redshift Serverless.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/DeleteUsageLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUsageLimitOutcome DeleteUsageLimit(const Model::DeleteUsageLimitRequest& request) const;

        /**
         * A Callable wrapper for DeleteUsageLimit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUsageLimitRequestT = Model::DeleteUsageLimitRequest>
        Model::DeleteUsageLimitOutcomeCallable DeleteUsageLimitCallable(const DeleteUsageLimitRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::DeleteUsageLimit, request);
        }

        /**
         * An Async wrapper for DeleteUsageLimit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUsageLimitRequestT = Model::DeleteUsageLimitRequest>
        void DeleteUsageLimitAsync(const DeleteUsageLimitRequestT& request, const DeleteUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::DeleteUsageLimit, request, handler, context);
        }

        /**
         * <p>Deletes a workgroup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/DeleteWorkgroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkgroupOutcome DeleteWorkgroup(const Model::DeleteWorkgroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkgroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkgroupRequestT = Model::DeleteWorkgroupRequest>
        Model::DeleteWorkgroupOutcomeCallable DeleteWorkgroupCallable(const DeleteWorkgroupRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::DeleteWorkgroup, request);
        }

        /**
         * An Async wrapper for DeleteWorkgroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkgroupRequestT = Model::DeleteWorkgroupRequest>
        void DeleteWorkgroupAsync(const DeleteWorkgroupRequestT& request, const DeleteWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::DeleteWorkgroup, request, handler, context);
        }

        /**
         * <p>Returns a database user name and temporary password with temporary
         * authorization to log in to Amazon Redshift Serverless.</p> <p>By default, the
         * temporary credentials expire in 900 seconds. You can optionally specify a
         * duration between 900 seconds (15 minutes) and 3600 seconds (60 minutes).</p>
         * <pre><code> &lt;p&gt;The Identity and Access Management (IAM) user or role that
         * runs GetCredentials must have an IAM policy attached that allows access to all
         * necessary actions and resources.&lt;/p&gt; &lt;p&gt;If the
         * &lt;code&gt;DbName&lt;/code&gt; parameter is specified, the IAM policy must
         * allow access to the resource dbname for the specified database name.&lt;/p&gt;
         * </code></pre><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCredentialsOutcome GetCredentials(const Model::GetCredentialsRequest& request) const;

        /**
         * A Callable wrapper for GetCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCredentialsRequestT = Model::GetCredentialsRequest>
        Model::GetCredentialsOutcomeCallable GetCredentialsCallable(const GetCredentialsRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::GetCredentials, request);
        }

        /**
         * An Async wrapper for GetCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCredentialsRequestT = Model::GetCredentialsRequest>
        void GetCredentialsAsync(const GetCredentialsRequestT& request, const GetCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::GetCredentials, request, handler, context);
        }

        /**
         * <p>Gets information about a specific custom domain association.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetCustomDomainAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCustomDomainAssociationOutcome GetCustomDomainAssociation(const Model::GetCustomDomainAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetCustomDomainAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCustomDomainAssociationRequestT = Model::GetCustomDomainAssociationRequest>
        Model::GetCustomDomainAssociationOutcomeCallable GetCustomDomainAssociationCallable(const GetCustomDomainAssociationRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::GetCustomDomainAssociation, request);
        }

        /**
         * An Async wrapper for GetCustomDomainAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCustomDomainAssociationRequestT = Model::GetCustomDomainAssociationRequest>
        void GetCustomDomainAssociationAsync(const GetCustomDomainAssociationRequestT& request, const GetCustomDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::GetCustomDomainAssociation, request, handler, context);
        }

        /**
         * <p>Returns information, such as the name, about a VPC endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEndpointAccessOutcome GetEndpointAccess(const Model::GetEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for GetEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEndpointAccessRequestT = Model::GetEndpointAccessRequest>
        Model::GetEndpointAccessOutcomeCallable GetEndpointAccessCallable(const GetEndpointAccessRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::GetEndpointAccess, request);
        }

        /**
         * An Async wrapper for GetEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEndpointAccessRequestT = Model::GetEndpointAccessRequest>
        void GetEndpointAccessAsync(const GetEndpointAccessRequestT& request, const GetEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::GetEndpointAccess, request, handler, context);
        }

        /**
         * <p>Returns information about a namespace in Amazon Redshift
         * Serverless.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNamespaceOutcome GetNamespace(const Model::GetNamespaceRequest& request) const;

        /**
         * A Callable wrapper for GetNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetNamespaceRequestT = Model::GetNamespaceRequest>
        Model::GetNamespaceOutcomeCallable GetNamespaceCallable(const GetNamespaceRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::GetNamespace, request);
        }

        /**
         * An Async wrapper for GetNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNamespaceRequestT = Model::GetNamespaceRequest>
        void GetNamespaceAsync(const GetNamespaceRequestT& request, const GetNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::GetNamespace, request, handler, context);
        }

        /**
         * <p>Returns information about a recovery point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetRecoveryPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecoveryPointOutcome GetRecoveryPoint(const Model::GetRecoveryPointRequest& request) const;

        /**
         * A Callable wrapper for GetRecoveryPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRecoveryPointRequestT = Model::GetRecoveryPointRequest>
        Model::GetRecoveryPointOutcomeCallable GetRecoveryPointCallable(const GetRecoveryPointRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::GetRecoveryPoint, request);
        }

        /**
         * An Async wrapper for GetRecoveryPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRecoveryPointRequestT = Model::GetRecoveryPointRequest>
        void GetRecoveryPointAsync(const GetRecoveryPointRequestT& request, const GetRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::GetRecoveryPoint, request, handler, context);
        }

        /**
         * <p>Returns a resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const GetResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::GetResourcePolicy, request);
        }

        /**
         * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        void GetResourcePolicyAsync(const GetResourcePolicyRequestT& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::GetResourcePolicy, request, handler, context);
        }

        /**
         * <p>Returns information about a scheduled action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetScheduledAction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetScheduledActionOutcome GetScheduledAction(const Model::GetScheduledActionRequest& request) const;

        /**
         * A Callable wrapper for GetScheduledAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetScheduledActionRequestT = Model::GetScheduledActionRequest>
        Model::GetScheduledActionOutcomeCallable GetScheduledActionCallable(const GetScheduledActionRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::GetScheduledAction, request);
        }

        /**
         * An Async wrapper for GetScheduledAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetScheduledActionRequestT = Model::GetScheduledActionRequest>
        void GetScheduledActionAsync(const GetScheduledActionRequestT& request, const GetScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::GetScheduledAction, request, handler, context);
        }

        /**
         * <p>Returns information about a specific snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSnapshotOutcome GetSnapshot(const Model::GetSnapshotRequest& request) const;

        /**
         * A Callable wrapper for GetSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSnapshotRequestT = Model::GetSnapshotRequest>
        Model::GetSnapshotOutcomeCallable GetSnapshotCallable(const GetSnapshotRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::GetSnapshot, request);
        }

        /**
         * An Async wrapper for GetSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSnapshotRequestT = Model::GetSnapshotRequest>
        void GetSnapshotAsync(const GetSnapshotRequestT& request, const GetSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::GetSnapshot, request, handler, context);
        }

        /**
         * <p>Returns information about a <code>TableRestoreStatus</code>
         * object.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetTableRestoreStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTableRestoreStatusOutcome GetTableRestoreStatus(const Model::GetTableRestoreStatusRequest& request) const;

        /**
         * A Callable wrapper for GetTableRestoreStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTableRestoreStatusRequestT = Model::GetTableRestoreStatusRequest>
        Model::GetTableRestoreStatusOutcomeCallable GetTableRestoreStatusCallable(const GetTableRestoreStatusRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::GetTableRestoreStatus, request);
        }

        /**
         * An Async wrapper for GetTableRestoreStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTableRestoreStatusRequestT = Model::GetTableRestoreStatusRequest>
        void GetTableRestoreStatusAsync(const GetTableRestoreStatusRequestT& request, const GetTableRestoreStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::GetTableRestoreStatus, request, handler, context);
        }

        /**
         * <p>Returns information about a usage limit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetUsageLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUsageLimitOutcome GetUsageLimit(const Model::GetUsageLimitRequest& request) const;

        /**
         * A Callable wrapper for GetUsageLimit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUsageLimitRequestT = Model::GetUsageLimitRequest>
        Model::GetUsageLimitOutcomeCallable GetUsageLimitCallable(const GetUsageLimitRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::GetUsageLimit, request);
        }

        /**
         * An Async wrapper for GetUsageLimit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUsageLimitRequestT = Model::GetUsageLimitRequest>
        void GetUsageLimitAsync(const GetUsageLimitRequestT& request, const GetUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::GetUsageLimit, request, handler, context);
        }

        /**
         * <p>Returns information about a specific workgroup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/GetWorkgroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkgroupOutcome GetWorkgroup(const Model::GetWorkgroupRequest& request) const;

        /**
         * A Callable wrapper for GetWorkgroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkgroupRequestT = Model::GetWorkgroupRequest>
        Model::GetWorkgroupOutcomeCallable GetWorkgroupCallable(const GetWorkgroupRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::GetWorkgroup, request);
        }

        /**
         * An Async wrapper for GetWorkgroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkgroupRequestT = Model::GetWorkgroupRequest>
        void GetWorkgroupAsync(const GetWorkgroupRequestT& request, const GetWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::GetWorkgroup, request, handler, context);
        }

        /**
         * <p> Lists custom domain associations for Amazon Redshift
         * Serverless.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListCustomDomainAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomDomainAssociationsOutcome ListCustomDomainAssociations(const Model::ListCustomDomainAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListCustomDomainAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCustomDomainAssociationsRequestT = Model::ListCustomDomainAssociationsRequest>
        Model::ListCustomDomainAssociationsOutcomeCallable ListCustomDomainAssociationsCallable(const ListCustomDomainAssociationsRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::ListCustomDomainAssociations, request);
        }

        /**
         * An Async wrapper for ListCustomDomainAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCustomDomainAssociationsRequestT = Model::ListCustomDomainAssociationsRequest>
        void ListCustomDomainAssociationsAsync(const ListCustomDomainAssociationsRequestT& request, const ListCustomDomainAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::ListCustomDomainAssociations, request, handler, context);
        }

        /**
         * <p>Returns an array of <code>EndpointAccess</code> objects and relevant
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEndpointAccessOutcome ListEndpointAccess(const Model::ListEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for ListEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEndpointAccessRequestT = Model::ListEndpointAccessRequest>
        Model::ListEndpointAccessOutcomeCallable ListEndpointAccessCallable(const ListEndpointAccessRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::ListEndpointAccess, request);
        }

        /**
         * An Async wrapper for ListEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEndpointAccessRequestT = Model::ListEndpointAccessRequest>
        void ListEndpointAccessAsync(const ListEndpointAccessRequestT& request, const ListEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::ListEndpointAccess, request, handler, context);
        }

        /**
         * <p>Returns information about a list of specified namespaces.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListNamespaces">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNamespacesOutcome ListNamespaces(const Model::ListNamespacesRequest& request) const;

        /**
         * A Callable wrapper for ListNamespaces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNamespacesRequestT = Model::ListNamespacesRequest>
        Model::ListNamespacesOutcomeCallable ListNamespacesCallable(const ListNamespacesRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::ListNamespaces, request);
        }

        /**
         * An Async wrapper for ListNamespaces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNamespacesRequestT = Model::ListNamespacesRequest>
        void ListNamespacesAsync(const ListNamespacesRequestT& request, const ListNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::ListNamespaces, request, handler, context);
        }

        /**
         * <p>Returns an array of recovery points.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListRecoveryPoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecoveryPointsOutcome ListRecoveryPoints(const Model::ListRecoveryPointsRequest& request) const;

        /**
         * A Callable wrapper for ListRecoveryPoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRecoveryPointsRequestT = Model::ListRecoveryPointsRequest>
        Model::ListRecoveryPointsOutcomeCallable ListRecoveryPointsCallable(const ListRecoveryPointsRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::ListRecoveryPoints, request);
        }

        /**
         * An Async wrapper for ListRecoveryPoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRecoveryPointsRequestT = Model::ListRecoveryPointsRequest>
        void ListRecoveryPointsAsync(const ListRecoveryPointsRequestT& request, const ListRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::ListRecoveryPoints, request, handler, context);
        }

        /**
         * <p>Returns a list of scheduled actions. You can use the flags to filter the list
         * of returned scheduled actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListScheduledActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListScheduledActionsOutcome ListScheduledActions(const Model::ListScheduledActionsRequest& request) const;

        /**
         * A Callable wrapper for ListScheduledActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListScheduledActionsRequestT = Model::ListScheduledActionsRequest>
        Model::ListScheduledActionsOutcomeCallable ListScheduledActionsCallable(const ListScheduledActionsRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::ListScheduledActions, request);
        }

        /**
         * An Async wrapper for ListScheduledActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListScheduledActionsRequestT = Model::ListScheduledActionsRequest>
        void ListScheduledActionsAsync(const ListScheduledActionsRequestT& request, const ListScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::ListScheduledActions, request, handler, context);
        }

        /**
         * <p>Returns a list of snapshot copy configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListSnapshotCopyConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSnapshotCopyConfigurationsOutcome ListSnapshotCopyConfigurations(const Model::ListSnapshotCopyConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListSnapshotCopyConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSnapshotCopyConfigurationsRequestT = Model::ListSnapshotCopyConfigurationsRequest>
        Model::ListSnapshotCopyConfigurationsOutcomeCallable ListSnapshotCopyConfigurationsCallable(const ListSnapshotCopyConfigurationsRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::ListSnapshotCopyConfigurations, request);
        }

        /**
         * An Async wrapper for ListSnapshotCopyConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSnapshotCopyConfigurationsRequestT = Model::ListSnapshotCopyConfigurationsRequest>
        void ListSnapshotCopyConfigurationsAsync(const ListSnapshotCopyConfigurationsRequestT& request, const ListSnapshotCopyConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::ListSnapshotCopyConfigurations, request, handler, context);
        }

        /**
         * <p>Returns a list of snapshots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSnapshotsOutcome ListSnapshots(const Model::ListSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for ListSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSnapshotsRequestT = Model::ListSnapshotsRequest>
        Model::ListSnapshotsOutcomeCallable ListSnapshotsCallable(const ListSnapshotsRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::ListSnapshots, request);
        }

        /**
         * An Async wrapper for ListSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSnapshotsRequestT = Model::ListSnapshotsRequest>
        void ListSnapshotsAsync(const ListSnapshotsRequestT& request, const ListSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::ListSnapshots, request, handler, context);
        }

        /**
         * <p>Returns information about an array of <code>TableRestoreStatus</code>
         * objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListTableRestoreStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTableRestoreStatusOutcome ListTableRestoreStatus(const Model::ListTableRestoreStatusRequest& request) const;

        /**
         * A Callable wrapper for ListTableRestoreStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTableRestoreStatusRequestT = Model::ListTableRestoreStatusRequest>
        Model::ListTableRestoreStatusOutcomeCallable ListTableRestoreStatusCallable(const ListTableRestoreStatusRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::ListTableRestoreStatus, request);
        }

        /**
         * An Async wrapper for ListTableRestoreStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTableRestoreStatusRequestT = Model::ListTableRestoreStatusRequest>
        void ListTableRestoreStatusAsync(const ListTableRestoreStatusRequestT& request, const ListTableRestoreStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::ListTableRestoreStatus, request, handler, context);
        }

        /**
         * <p>Lists the tags assigned to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists all usage limits within Amazon Redshift Serverless.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListUsageLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUsageLimitsOutcome ListUsageLimits(const Model::ListUsageLimitsRequest& request) const;

        /**
         * A Callable wrapper for ListUsageLimits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUsageLimitsRequestT = Model::ListUsageLimitsRequest>
        Model::ListUsageLimitsOutcomeCallable ListUsageLimitsCallable(const ListUsageLimitsRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::ListUsageLimits, request);
        }

        /**
         * An Async wrapper for ListUsageLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUsageLimitsRequestT = Model::ListUsageLimitsRequest>
        void ListUsageLimitsAsync(const ListUsageLimitsRequestT& request, const ListUsageLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::ListUsageLimits, request, handler, context);
        }

        /**
         * <p>Returns information about a list of specified workgroups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ListWorkgroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkgroupsOutcome ListWorkgroups(const Model::ListWorkgroupsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkgroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkgroupsRequestT = Model::ListWorkgroupsRequest>
        Model::ListWorkgroupsOutcomeCallable ListWorkgroupsCallable(const ListWorkgroupsRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::ListWorkgroups, request);
        }

        /**
         * An Async wrapper for ListWorkgroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkgroupsRequestT = Model::ListWorkgroupsRequest>
        void ListWorkgroupsAsync(const ListWorkgroupsRequestT& request, const ListWorkgroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::ListWorkgroups, request, handler, context);
        }

        /**
         * <p>Creates or updates a resource policy. Currently, you can use policies to
         * share snapshots across Amazon Web Services accounts.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::PutResourcePolicy, request);
        }

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::PutResourcePolicy, request, handler, context);
        }

        /**
         * <p>Restore the data from a recovery point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/RestoreFromRecoveryPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreFromRecoveryPointOutcome RestoreFromRecoveryPoint(const Model::RestoreFromRecoveryPointRequest& request) const;

        /**
         * A Callable wrapper for RestoreFromRecoveryPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreFromRecoveryPointRequestT = Model::RestoreFromRecoveryPointRequest>
        Model::RestoreFromRecoveryPointOutcomeCallable RestoreFromRecoveryPointCallable(const RestoreFromRecoveryPointRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::RestoreFromRecoveryPoint, request);
        }

        /**
         * An Async wrapper for RestoreFromRecoveryPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreFromRecoveryPointRequestT = Model::RestoreFromRecoveryPointRequest>
        void RestoreFromRecoveryPointAsync(const RestoreFromRecoveryPointRequestT& request, const RestoreFromRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::RestoreFromRecoveryPoint, request, handler, context);
        }

        /**
         * <p>Restores a namespace from a snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/RestoreFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreFromSnapshotOutcome RestoreFromSnapshot(const Model::RestoreFromSnapshotRequest& request) const;

        /**
         * A Callable wrapper for RestoreFromSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreFromSnapshotRequestT = Model::RestoreFromSnapshotRequest>
        Model::RestoreFromSnapshotOutcomeCallable RestoreFromSnapshotCallable(const RestoreFromSnapshotRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::RestoreFromSnapshot, request);
        }

        /**
         * An Async wrapper for RestoreFromSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreFromSnapshotRequestT = Model::RestoreFromSnapshotRequest>
        void RestoreFromSnapshotAsync(const RestoreFromSnapshotRequestT& request, const RestoreFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::RestoreFromSnapshot, request, handler, context);
        }

        /**
         * <p>Restores a table from a recovery point to your Amazon Redshift Serverless
         * instance. You can't use this operation to restore tables with interleaved sort
         * keys.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/RestoreTableFromRecoveryPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreTableFromRecoveryPointOutcome RestoreTableFromRecoveryPoint(const Model::RestoreTableFromRecoveryPointRequest& request) const;

        /**
         * A Callable wrapper for RestoreTableFromRecoveryPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreTableFromRecoveryPointRequestT = Model::RestoreTableFromRecoveryPointRequest>
        Model::RestoreTableFromRecoveryPointOutcomeCallable RestoreTableFromRecoveryPointCallable(const RestoreTableFromRecoveryPointRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::RestoreTableFromRecoveryPoint, request);
        }

        /**
         * An Async wrapper for RestoreTableFromRecoveryPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreTableFromRecoveryPointRequestT = Model::RestoreTableFromRecoveryPointRequest>
        void RestoreTableFromRecoveryPointAsync(const RestoreTableFromRecoveryPointRequestT& request, const RestoreTableFromRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::RestoreTableFromRecoveryPoint, request, handler, context);
        }

        /**
         * <p>Restores a table from a snapshot to your Amazon Redshift Serverless instance.
         * You can't use this operation to restore tables with <a
         * href="https://docs.aws.amazon.com/redshift/latest/dg/t_Sorting_data.html#t_Sorting_data-interleaved">interleaved
         * sort keys</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/RestoreTableFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreTableFromSnapshotOutcome RestoreTableFromSnapshot(const Model::RestoreTableFromSnapshotRequest& request) const;

        /**
         * A Callable wrapper for RestoreTableFromSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreTableFromSnapshotRequestT = Model::RestoreTableFromSnapshotRequest>
        Model::RestoreTableFromSnapshotOutcomeCallable RestoreTableFromSnapshotCallable(const RestoreTableFromSnapshotRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::RestoreTableFromSnapshot, request);
        }

        /**
         * An Async wrapper for RestoreTableFromSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreTableFromSnapshotRequestT = Model::RestoreTableFromSnapshotRequest>
        void RestoreTableFromSnapshotAsync(const RestoreTableFromSnapshotRequestT& request, const RestoreTableFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::RestoreTableFromSnapshot, request, handler, context);
        }

        /**
         * <p>Assigns one or more tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a tag or set of tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an Amazon Redshift Serverless certificate associated with a custom
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UpdateCustomDomainAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCustomDomainAssociationOutcome UpdateCustomDomainAssociation(const Model::UpdateCustomDomainAssociationRequest& request) const;

        /**
         * A Callable wrapper for UpdateCustomDomainAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCustomDomainAssociationRequestT = Model::UpdateCustomDomainAssociationRequest>
        Model::UpdateCustomDomainAssociationOutcomeCallable UpdateCustomDomainAssociationCallable(const UpdateCustomDomainAssociationRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::UpdateCustomDomainAssociation, request);
        }

        /**
         * An Async wrapper for UpdateCustomDomainAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCustomDomainAssociationRequestT = Model::UpdateCustomDomainAssociationRequest>
        void UpdateCustomDomainAssociationAsync(const UpdateCustomDomainAssociationRequestT& request, const UpdateCustomDomainAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::UpdateCustomDomainAssociation, request, handler, context);
        }

        /**
         * <p>Updates an Amazon Redshift Serverless managed endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UpdateEndpointAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEndpointAccessOutcome UpdateEndpointAccess(const Model::UpdateEndpointAccessRequest& request) const;

        /**
         * A Callable wrapper for UpdateEndpointAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEndpointAccessRequestT = Model::UpdateEndpointAccessRequest>
        Model::UpdateEndpointAccessOutcomeCallable UpdateEndpointAccessCallable(const UpdateEndpointAccessRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::UpdateEndpointAccess, request);
        }

        /**
         * An Async wrapper for UpdateEndpointAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEndpointAccessRequestT = Model::UpdateEndpointAccessRequest>
        void UpdateEndpointAccessAsync(const UpdateEndpointAccessRequestT& request, const UpdateEndpointAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::UpdateEndpointAccess, request, handler, context);
        }

        /**
         * <p>Updates a namespace with the specified settings. Unless required, you can't
         * update multiple parameters in one request. For example, you must specify both
         * <code>adminUsername</code> and <code>adminUserPassword</code> to update either
         * field, but you can't update both <code>kmsKeyId</code> and
         * <code>logExports</code> in a single request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UpdateNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNamespaceOutcome UpdateNamespace(const Model::UpdateNamespaceRequest& request) const;

        /**
         * A Callable wrapper for UpdateNamespace that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNamespaceRequestT = Model::UpdateNamespaceRequest>
        Model::UpdateNamespaceOutcomeCallable UpdateNamespaceCallable(const UpdateNamespaceRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::UpdateNamespace, request);
        }

        /**
         * An Async wrapper for UpdateNamespace that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNamespaceRequestT = Model::UpdateNamespaceRequest>
        void UpdateNamespaceAsync(const UpdateNamespaceRequestT& request, const UpdateNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::UpdateNamespace, request, handler, context);
        }

        /**
         * <p>Updates a scheduled action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UpdateScheduledAction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateScheduledActionOutcome UpdateScheduledAction(const Model::UpdateScheduledActionRequest& request) const;

        /**
         * A Callable wrapper for UpdateScheduledAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateScheduledActionRequestT = Model::UpdateScheduledActionRequest>
        Model::UpdateScheduledActionOutcomeCallable UpdateScheduledActionCallable(const UpdateScheduledActionRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::UpdateScheduledAction, request);
        }

        /**
         * An Async wrapper for UpdateScheduledAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateScheduledActionRequestT = Model::UpdateScheduledActionRequest>
        void UpdateScheduledActionAsync(const UpdateScheduledActionRequestT& request, const UpdateScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::UpdateScheduledAction, request, handler, context);
        }

        /**
         * <p>Updates a snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UpdateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSnapshotOutcome UpdateSnapshot(const Model::UpdateSnapshotRequest& request) const;

        /**
         * A Callable wrapper for UpdateSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSnapshotRequestT = Model::UpdateSnapshotRequest>
        Model::UpdateSnapshotOutcomeCallable UpdateSnapshotCallable(const UpdateSnapshotRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::UpdateSnapshot, request);
        }

        /**
         * An Async wrapper for UpdateSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSnapshotRequestT = Model::UpdateSnapshotRequest>
        void UpdateSnapshotAsync(const UpdateSnapshotRequestT& request, const UpdateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::UpdateSnapshot, request, handler, context);
        }

        /**
         * <p>Updates a snapshot copy configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UpdateSnapshotCopyConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSnapshotCopyConfigurationOutcome UpdateSnapshotCopyConfiguration(const Model::UpdateSnapshotCopyConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateSnapshotCopyConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSnapshotCopyConfigurationRequestT = Model::UpdateSnapshotCopyConfigurationRequest>
        Model::UpdateSnapshotCopyConfigurationOutcomeCallable UpdateSnapshotCopyConfigurationCallable(const UpdateSnapshotCopyConfigurationRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::UpdateSnapshotCopyConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateSnapshotCopyConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSnapshotCopyConfigurationRequestT = Model::UpdateSnapshotCopyConfigurationRequest>
        void UpdateSnapshotCopyConfigurationAsync(const UpdateSnapshotCopyConfigurationRequestT& request, const UpdateSnapshotCopyConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::UpdateSnapshotCopyConfiguration, request, handler, context);
        }

        /**
         * <p>Update a usage limit in Amazon Redshift Serverless. You can't update the
         * usage type or period of a usage limit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UpdateUsageLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUsageLimitOutcome UpdateUsageLimit(const Model::UpdateUsageLimitRequest& request) const;

        /**
         * A Callable wrapper for UpdateUsageLimit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUsageLimitRequestT = Model::UpdateUsageLimitRequest>
        Model::UpdateUsageLimitOutcomeCallable UpdateUsageLimitCallable(const UpdateUsageLimitRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::UpdateUsageLimit, request);
        }

        /**
         * An Async wrapper for UpdateUsageLimit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUsageLimitRequestT = Model::UpdateUsageLimitRequest>
        void UpdateUsageLimitAsync(const UpdateUsageLimitRequestT& request, const UpdateUsageLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::UpdateUsageLimit, request, handler, context);
        }

        /**
         * <p>Updates a workgroup with the specified configuration settings. You can't
         * update multiple parameters in one request. For example, you can update
         * <code>baseCapacity</code> or <code>port</code> in a single request, but you
         * can't update both in the same request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UpdateWorkgroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkgroupOutcome UpdateWorkgroup(const Model::UpdateWorkgroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkgroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkgroupRequestT = Model::UpdateWorkgroupRequest>
        Model::UpdateWorkgroupOutcomeCallable UpdateWorkgroupCallable(const UpdateWorkgroupRequestT& request) const
        {
            return SubmitCallable(&RedshiftServerlessClient::UpdateWorkgroup, request);
        }

        /**
         * An Async wrapper for UpdateWorkgroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkgroupRequestT = Model::UpdateWorkgroupRequest>
        void UpdateWorkgroupAsync(const UpdateWorkgroupRequestT& request, const UpdateWorkgroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftServerlessClient::UpdateWorkgroup, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<RedshiftServerlessEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<RedshiftServerlessClient>;
      void init(const RedshiftServerlessClientConfiguration& clientConfiguration);

      RedshiftServerlessClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<RedshiftServerlessEndpointProviderBase> m_endpointProvider;
  };

} // namespace RedshiftServerless
} // namespace Aws
