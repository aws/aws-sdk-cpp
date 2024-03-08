/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mq/MQServiceClientModel.h>

namespace Aws
{
namespace MQ
{
  /**
   * <p>Amazon MQ is a managed message broker service for Apache ActiveMQ and
   * RabbitMQ that makes it easy to set up and operate message brokers in the cloud.
   * A message broker allows software applications and components to communicate
   * using various programming languages, operating systems, and formal messaging
   * protocols.</p>
   */
  class AWS_MQ_API MQClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MQClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MQClientConfiguration ClientConfigurationType;
      typedef MQEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MQClient(const Aws::MQ::MQClientConfiguration& clientConfiguration = Aws::MQ::MQClientConfiguration(),
                 std::shared_ptr<MQEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MQClient(const Aws::Auth::AWSCredentials& credentials,
                 std::shared_ptr<MQEndpointProviderBase> endpointProvider = nullptr,
                 const Aws::MQ::MQClientConfiguration& clientConfiguration = Aws::MQ::MQClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MQClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                 std::shared_ptr<MQEndpointProviderBase> endpointProvider = nullptr,
                 const Aws::MQ::MQClientConfiguration& clientConfiguration = Aws::MQ::MQClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MQClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MQClient(const Aws::Auth::AWSCredentials& credentials,
                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MQClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MQClient();

        /**
         * <p>Creates a broker. Note: This API is asynchronous.</p> <p>To create a broker,
         * you must either use the AmazonMQFullAccess IAM policy or include the following
         * EC2 permissions in your IAM policy.</p>
         * <ul><li><p>ec2:CreateNetworkInterface</p> <p>This permission is required to
         * allow Amazon MQ to create an elastic network interface (ENI) on behalf of your
         * account.</p></li> <li><p>ec2:CreateNetworkInterfacePermission</p> <p>This
         * permission is required to attach the ENI to the broker instance.</p></li>
         * <li><p>ec2:DeleteNetworkInterface</p></li>
         * <li><p>ec2:DeleteNetworkInterfacePermission</p></li>
         * <li><p>ec2:DetachNetworkInterface</p></li>
         * <li><p>ec2:DescribeInternetGateways</p></li>
         * <li><p>ec2:DescribeNetworkInterfaces</p></li>
         * <li><p>ec2:DescribeNetworkInterfacePermissions</p></li>
         * <li><p>ec2:DescribeRouteTables</p></li>
         * <li><p>ec2:DescribeSecurityGroups</p></li> <li><p>ec2:DescribeSubnets</p></li>
         * <li><p>ec2:DescribeVpcs</p></li></ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/amazon-mq-setting-up.html#create-iam-user">Create
         * an IAM User and Get Your Amazon Web Services Credentials</a> and <a
         * href="https://docs.aws.amazon.com//amazon-mq/latest/developer-guide/connecting-to-amazon-mq.html#never-modify-delete-elastic-network-interface">Never
         * Modify or Delete the Amazon MQ Elastic Network Interface</a> in the <i>Amazon MQ
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateBroker">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateBrokerOutcome CreateBroker(const Model::CreateBrokerRequest& request) const;

        /**
         * A Callable wrapper for CreateBroker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBrokerRequestT = Model::CreateBrokerRequest>
        Model::CreateBrokerOutcomeCallable CreateBrokerCallable(const CreateBrokerRequestT& request) const
        {
            return SubmitCallable(&MQClient::CreateBroker, request);
        }

        /**
         * An Async wrapper for CreateBroker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBrokerRequestT = Model::CreateBrokerRequest>
        void CreateBrokerAsync(const CreateBrokerRequestT& request, const CreateBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::CreateBroker, request, handler, context);
        }

        /**
         * <p>Creates a new configuration for the specified configuration name. Amazon MQ
         * uses the default configuration (the engine type and version).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationOutcome CreateConfiguration(const Model::CreateConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConfigurationRequestT = Model::CreateConfigurationRequest>
        Model::CreateConfigurationOutcomeCallable CreateConfigurationCallable(const CreateConfigurationRequestT& request) const
        {
            return SubmitCallable(&MQClient::CreateConfiguration, request);
        }

        /**
         * An Async wrapper for CreateConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConfigurationRequestT = Model::CreateConfigurationRequest>
        void CreateConfigurationAsync(const CreateConfigurationRequestT& request, const CreateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::CreateConfiguration, request, handler, context);
        }

        /**
         * <p>Add a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateTags">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateTagsOutcome CreateTags(const Model::CreateTagsRequest& request) const;

        /**
         * A Callable wrapper for CreateTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTagsRequestT = Model::CreateTagsRequest>
        Model::CreateTagsOutcomeCallable CreateTagsCallable(const CreateTagsRequestT& request) const
        {
            return SubmitCallable(&MQClient::CreateTags, request);
        }

        /**
         * An Async wrapper for CreateTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTagsRequestT = Model::CreateTagsRequest>
        void CreateTagsAsync(const CreateTagsRequestT& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::CreateTags, request, handler, context);
        }

        /**
         * <p>Creates an ActiveMQ user.</p> <p>Do not add personally
         * identifiable information (PII) or other confidential or sensitive information in
         * broker usernames. Broker usernames are accessible to other Amazon Web Services
         * services, including CloudWatch Logs. Broker usernames are not intended to be
         * used for private or sensitive data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/CreateUser">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateUserOutcome CreateUser(const Model::CreateUserRequest& request) const;

        /**
         * A Callable wrapper for CreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        Model::CreateUserOutcomeCallable CreateUserCallable(const CreateUserRequestT& request) const
        {
            return SubmitCallable(&MQClient::CreateUser, request);
        }

        /**
         * An Async wrapper for CreateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserRequestT = Model::CreateUserRequest>
        void CreateUserAsync(const CreateUserRequestT& request, const CreateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::CreateUser, request, handler, context);
        }

        /**
         * <p>Deletes a broker. Note: This API is asynchronous.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DeleteBroker">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBrokerOutcome DeleteBroker(const Model::DeleteBrokerRequest& request) const;

        /**
         * A Callable wrapper for DeleteBroker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBrokerRequestT = Model::DeleteBrokerRequest>
        Model::DeleteBrokerOutcomeCallable DeleteBrokerCallable(const DeleteBrokerRequestT& request) const
        {
            return SubmitCallable(&MQClient::DeleteBroker, request);
        }

        /**
         * An Async wrapper for DeleteBroker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBrokerRequestT = Model::DeleteBrokerRequest>
        void DeleteBrokerAsync(const DeleteBrokerRequestT& request, const DeleteBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::DeleteBroker, request, handler, context);
        }

        /**
         * <p>Removes a tag from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DeleteTags">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * A Callable wrapper for DeleteTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTagsRequestT = Model::DeleteTagsRequest>
        Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const DeleteTagsRequestT& request) const
        {
            return SubmitCallable(&MQClient::DeleteTags, request);
        }

        /**
         * An Async wrapper for DeleteTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTagsRequestT = Model::DeleteTagsRequest>
        void DeleteTagsAsync(const DeleteTagsRequestT& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::DeleteTags, request, handler, context);
        }

        /**
         * <p>Deletes an ActiveMQ user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DeleteUser">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteUserOutcome DeleteUser(const Model::DeleteUserRequest& request) const;

        /**
         * A Callable wrapper for DeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        Model::DeleteUserOutcomeCallable DeleteUserCallable(const DeleteUserRequestT& request) const
        {
            return SubmitCallable(&MQClient::DeleteUser, request);
        }

        /**
         * An Async wrapper for DeleteUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserRequestT = Model::DeleteUserRequest>
        void DeleteUserAsync(const DeleteUserRequestT& request, const DeleteUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::DeleteUser, request, handler, context);
        }

        /**
         * <p>Returns information about the specified broker.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeBroker">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBrokerOutcome DescribeBroker(const Model::DescribeBrokerRequest& request) const;

        /**
         * A Callable wrapper for DescribeBroker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBrokerRequestT = Model::DescribeBrokerRequest>
        Model::DescribeBrokerOutcomeCallable DescribeBrokerCallable(const DescribeBrokerRequestT& request) const
        {
            return SubmitCallable(&MQClient::DescribeBroker, request);
        }

        /**
         * An Async wrapper for DescribeBroker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBrokerRequestT = Model::DescribeBrokerRequest>
        void DescribeBrokerAsync(const DescribeBrokerRequestT& request, const DescribeBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::DescribeBroker, request, handler, context);
        }

        /**
         * <p>Describe available engine types and versions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeBrokerEngineTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBrokerEngineTypesOutcome DescribeBrokerEngineTypes(const Model::DescribeBrokerEngineTypesRequest& request) const;

        /**
         * A Callable wrapper for DescribeBrokerEngineTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBrokerEngineTypesRequestT = Model::DescribeBrokerEngineTypesRequest>
        Model::DescribeBrokerEngineTypesOutcomeCallable DescribeBrokerEngineTypesCallable(const DescribeBrokerEngineTypesRequestT& request) const
        {
            return SubmitCallable(&MQClient::DescribeBrokerEngineTypes, request);
        }

        /**
         * An Async wrapper for DescribeBrokerEngineTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBrokerEngineTypesRequestT = Model::DescribeBrokerEngineTypesRequest>
        void DescribeBrokerEngineTypesAsync(const DescribeBrokerEngineTypesRequestT& request, const DescribeBrokerEngineTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::DescribeBrokerEngineTypes, request, handler, context);
        }

        /**
         * <p>Describe available broker instance options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeBrokerInstanceOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBrokerInstanceOptionsOutcome DescribeBrokerInstanceOptions(const Model::DescribeBrokerInstanceOptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeBrokerInstanceOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBrokerInstanceOptionsRequestT = Model::DescribeBrokerInstanceOptionsRequest>
        Model::DescribeBrokerInstanceOptionsOutcomeCallable DescribeBrokerInstanceOptionsCallable(const DescribeBrokerInstanceOptionsRequestT& request) const
        {
            return SubmitCallable(&MQClient::DescribeBrokerInstanceOptions, request);
        }

        /**
         * An Async wrapper for DescribeBrokerInstanceOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBrokerInstanceOptionsRequestT = Model::DescribeBrokerInstanceOptionsRequest>
        void DescribeBrokerInstanceOptionsAsync(const DescribeBrokerInstanceOptionsRequestT& request, const DescribeBrokerInstanceOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::DescribeBrokerInstanceOptions, request, handler, context);
        }

        /**
         * <p>Returns information about the specified configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationOutcome DescribeConfiguration(const Model::DescribeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConfigurationRequestT = Model::DescribeConfigurationRequest>
        Model::DescribeConfigurationOutcomeCallable DescribeConfigurationCallable(const DescribeConfigurationRequestT& request) const
        {
            return SubmitCallable(&MQClient::DescribeConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConfigurationRequestT = Model::DescribeConfigurationRequest>
        void DescribeConfigurationAsync(const DescribeConfigurationRequestT& request, const DescribeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::DescribeConfiguration, request, handler, context);
        }

        /**
         * <p>Returns the specified configuration revision for the specified
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeConfigurationRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationRevisionOutcome DescribeConfigurationRevision(const Model::DescribeConfigurationRevisionRequest& request) const;

        /**
         * A Callable wrapper for DescribeConfigurationRevision that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConfigurationRevisionRequestT = Model::DescribeConfigurationRevisionRequest>
        Model::DescribeConfigurationRevisionOutcomeCallable DescribeConfigurationRevisionCallable(const DescribeConfigurationRevisionRequestT& request) const
        {
            return SubmitCallable(&MQClient::DescribeConfigurationRevision, request);
        }

        /**
         * An Async wrapper for DescribeConfigurationRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConfigurationRevisionRequestT = Model::DescribeConfigurationRevisionRequest>
        void DescribeConfigurationRevisionAsync(const DescribeConfigurationRevisionRequestT& request, const DescribeConfigurationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::DescribeConfigurationRevision, request, handler, context);
        }

        /**
         * <p>Returns information about an ActiveMQ user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/DescribeUser">AWS API
         * Reference</a></p>
         */
        virtual Model::DescribeUserOutcome DescribeUser(const Model::DescribeUserRequest& request) const;

        /**
         * A Callable wrapper for DescribeUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUserRequestT = Model::DescribeUserRequest>
        Model::DescribeUserOutcomeCallable DescribeUserCallable(const DescribeUserRequestT& request) const
        {
            return SubmitCallable(&MQClient::DescribeUser, request);
        }

        /**
         * An Async wrapper for DescribeUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUserRequestT = Model::DescribeUserRequest>
        void DescribeUserAsync(const DescribeUserRequestT& request, const DescribeUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::DescribeUser, request, handler, context);
        }

        /**
         * <p>Returns a list of all brokers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListBrokers">AWS API
         * Reference</a></p>
         */
        virtual Model::ListBrokersOutcome ListBrokers(const Model::ListBrokersRequest& request) const;

        /**
         * A Callable wrapper for ListBrokers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBrokersRequestT = Model::ListBrokersRequest>
        Model::ListBrokersOutcomeCallable ListBrokersCallable(const ListBrokersRequestT& request) const
        {
            return SubmitCallable(&MQClient::ListBrokers, request);
        }

        /**
         * An Async wrapper for ListBrokers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBrokersRequestT = Model::ListBrokersRequest>
        void ListBrokersAsync(const ListBrokersRequestT& request, const ListBrokersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::ListBrokers, request, handler, context);
        }

        /**
         * <p>Returns a list of all revisions for the specified
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListConfigurationRevisions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationRevisionsOutcome ListConfigurationRevisions(const Model::ListConfigurationRevisionsRequest& request) const;

        /**
         * A Callable wrapper for ListConfigurationRevisions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConfigurationRevisionsRequestT = Model::ListConfigurationRevisionsRequest>
        Model::ListConfigurationRevisionsOutcomeCallable ListConfigurationRevisionsCallable(const ListConfigurationRevisionsRequestT& request) const
        {
            return SubmitCallable(&MQClient::ListConfigurationRevisions, request);
        }

        /**
         * An Async wrapper for ListConfigurationRevisions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConfigurationRevisionsRequestT = Model::ListConfigurationRevisionsRequest>
        void ListConfigurationRevisionsAsync(const ListConfigurationRevisionsRequestT& request, const ListConfigurationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::ListConfigurationRevisions, request, handler, context);
        }

        /**
         * <p>Returns a list of all configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationsOutcome ListConfigurations(const Model::ListConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConfigurationsRequestT = Model::ListConfigurationsRequest>
        Model::ListConfigurationsOutcomeCallable ListConfigurationsCallable(const ListConfigurationsRequestT& request) const
        {
            return SubmitCallable(&MQClient::ListConfigurations, request);
        }

        /**
         * An Async wrapper for ListConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConfigurationsRequestT = Model::ListConfigurationsRequest>
        void ListConfigurationsAsync(const ListConfigurationsRequestT& request, const ListConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::ListConfigurations, request, handler, context);
        }

        /**
         * <p>Lists tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListTags">AWS API
         * Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * A Callable wrapper for ListTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsRequestT = Model::ListTagsRequest>
        Model::ListTagsOutcomeCallable ListTagsCallable(const ListTagsRequestT& request) const
        {
            return SubmitCallable(&MQClient::ListTags, request);
        }

        /**
         * An Async wrapper for ListTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsRequestT = Model::ListTagsRequest>
        void ListTagsAsync(const ListTagsRequestT& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::ListTags, request, handler, context);
        }

        /**
         * <p>Returns a list of all ActiveMQ users.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ListUsers">AWS API
         * Reference</a></p>
         */
        virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

        /**
         * A Callable wrapper for ListUsers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        Model::ListUsersOutcomeCallable ListUsersCallable(const ListUsersRequestT& request) const
        {
            return SubmitCallable(&MQClient::ListUsers, request);
        }

        /**
         * An Async wrapper for ListUsers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUsersRequestT = Model::ListUsersRequest>
        void ListUsersAsync(const ListUsersRequestT& request, const ListUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::ListUsers, request, handler, context);
        }

        /**
         * <p>Promotes a data replication replica broker to the primary broker
         * role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/Promote">AWS API
         * Reference</a></p>
         */
        virtual Model::PromoteOutcome Promote(const Model::PromoteRequest& request) const;

        /**
         * A Callable wrapper for Promote that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PromoteRequestT = Model::PromoteRequest>
        Model::PromoteOutcomeCallable PromoteCallable(const PromoteRequestT& request) const
        {
            return SubmitCallable(&MQClient::Promote, request);
        }

        /**
         * An Async wrapper for Promote that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PromoteRequestT = Model::PromoteRequest>
        void PromoteAsync(const PromoteRequestT& request, const PromoteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::Promote, request, handler, context);
        }

        /**
         * <p>Reboots a broker. Note: This API is asynchronous.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/RebootBroker">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootBrokerOutcome RebootBroker(const Model::RebootBrokerRequest& request) const;

        /**
         * A Callable wrapper for RebootBroker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RebootBrokerRequestT = Model::RebootBrokerRequest>
        Model::RebootBrokerOutcomeCallable RebootBrokerCallable(const RebootBrokerRequestT& request) const
        {
            return SubmitCallable(&MQClient::RebootBroker, request);
        }

        /**
         * An Async wrapper for RebootBroker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RebootBrokerRequestT = Model::RebootBrokerRequest>
        void RebootBrokerAsync(const RebootBrokerRequestT& request, const RebootBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::RebootBroker, request, handler, context);
        }

        /**
         * <p>Adds a pending configuration change to a broker.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UpdateBroker">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBrokerOutcome UpdateBroker(const Model::UpdateBrokerRequest& request) const;

        /**
         * A Callable wrapper for UpdateBroker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBrokerRequestT = Model::UpdateBrokerRequest>
        Model::UpdateBrokerOutcomeCallable UpdateBrokerCallable(const UpdateBrokerRequestT& request) const
        {
            return SubmitCallable(&MQClient::UpdateBroker, request);
        }

        /**
         * An Async wrapper for UpdateBroker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBrokerRequestT = Model::UpdateBrokerRequest>
        void UpdateBrokerAsync(const UpdateBrokerRequestT& request, const UpdateBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::UpdateBroker, request, handler, context);
        }

        /**
         * <p>Updates the specified configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UpdateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationOutcome UpdateConfiguration(const Model::UpdateConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConfigurationRequestT = Model::UpdateConfigurationRequest>
        Model::UpdateConfigurationOutcomeCallable UpdateConfigurationCallable(const UpdateConfigurationRequestT& request) const
        {
            return SubmitCallable(&MQClient::UpdateConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConfigurationRequestT = Model::UpdateConfigurationRequest>
        void UpdateConfigurationAsync(const UpdateConfigurationRequestT& request, const UpdateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::UpdateConfiguration, request, handler, context);
        }

        /**
         * <p>Updates the information for an ActiveMQ user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/UpdateUser">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

        /**
         * A Callable wrapper for UpdateUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserRequestT = Model::UpdateUserRequest>
        Model::UpdateUserOutcomeCallable UpdateUserCallable(const UpdateUserRequestT& request) const
        {
            return SubmitCallable(&MQClient::UpdateUser, request);
        }

        /**
         * An Async wrapper for UpdateUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserRequestT = Model::UpdateUserRequest>
        void UpdateUserAsync(const UpdateUserRequestT& request, const UpdateUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MQClient::UpdateUser, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MQEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MQClient>;
      void init(const MQClientConfiguration& clientConfiguration);

      MQClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MQEndpointProviderBase> m_endpointProvider;
  };

} // namespace MQ
} // namespace Aws
