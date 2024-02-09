/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sms/SMSServiceClientModel.h>

namespace Aws
{
namespace SMS
{
  /**
   *  <p> <b>Product update</b> </p> <p>We recommend <a
   * href="http://aws.amazon.com/application-migration-service">Amazon Web Services
   * Application Migration Service</a> (Amazon Web Services MGN) as the primary
   * migration service for lift-and-shift migrations. If Amazon Web Services MGN is
   * unavailable in a specific Amazon Web Services Region, you can use the Server
   * Migration Service APIs through March 2023.</p>  <p>Server Migration
   * Service (Server Migration Service) makes it easier and faster for you to migrate
   * your on-premises workloads to Amazon Web Services. To learn more about Server
   * Migration Service, see the following resources:</p> <ul> <li> <p> <a
   * href="http://aws.amazon.com/server-migration-service/">Server Migration Service
   * product page</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">Server
   * Migration Service User Guide</a> </p> </li> </ul>
   */
  class AWS_SMS_API SMSClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SMSClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SMSClientConfiguration ClientConfigurationType;
      typedef SMSEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SMSClient(const Aws::SMS::SMSClientConfiguration& clientConfiguration = Aws::SMS::SMSClientConfiguration(),
                  std::shared_ptr<SMSEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SMSClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<SMSEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::SMS::SMSClientConfiguration& clientConfiguration = Aws::SMS::SMSClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SMSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<SMSEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::SMS::SMSClientConfiguration& clientConfiguration = Aws::SMS::SMSClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SMSClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SMSClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SMSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SMSClient();

        /**
         * <p>Creates an application. An application consists of one or more server groups.
         * Each server group contain one or more servers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/CreateApp">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateAppOutcome CreateApp(const Model::CreateAppRequest& request) const;

        /**
         * A Callable wrapper for CreateApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAppRequestT = Model::CreateAppRequest>
        Model::CreateAppOutcomeCallable CreateAppCallable(const CreateAppRequestT& request) const
        {
            return SubmitCallable(&SMSClient::CreateApp, request);
        }

        /**
         * An Async wrapper for CreateApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAppRequestT = Model::CreateAppRequest>
        void CreateAppAsync(const CreateAppRequestT& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::CreateApp, request, handler, context);
        }

        /**
         * <p>Creates a replication job. The replication job schedules periodic replication
         * runs to replicate your server to Amazon Web Services. Each replication run
         * creates an Amazon Machine Image (AMI).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/CreateReplicationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationJobOutcome CreateReplicationJob(const Model::CreateReplicationJobRequest& request) const;

        /**
         * A Callable wrapper for CreateReplicationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateReplicationJobRequestT = Model::CreateReplicationJobRequest>
        Model::CreateReplicationJobOutcomeCallable CreateReplicationJobCallable(const CreateReplicationJobRequestT& request) const
        {
            return SubmitCallable(&SMSClient::CreateReplicationJob, request);
        }

        /**
         * An Async wrapper for CreateReplicationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateReplicationJobRequestT = Model::CreateReplicationJobRequest>
        void CreateReplicationJobAsync(const CreateReplicationJobRequestT& request, const CreateReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::CreateReplicationJob, request, handler, context);
        }

        /**
         * <p>Deletes the specified application. Optionally deletes the launched stack
         * associated with the application and all Server Migration Service replication
         * jobs for servers in the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteApp">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;

        /**
         * A Callable wrapper for DeleteApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppRequestT = Model::DeleteAppRequest>
        Model::DeleteAppOutcomeCallable DeleteAppCallable(const DeleteAppRequestT& request) const
        {
            return SubmitCallable(&SMSClient::DeleteApp, request);
        }

        /**
         * An Async wrapper for DeleteApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppRequestT = Model::DeleteAppRequest>
        void DeleteAppAsync(const DeleteAppRequestT& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::DeleteApp, request, handler, context);
        }

        /**
         * <p>Deletes the launch configuration for the specified application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteAppLaunchConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppLaunchConfigurationOutcome DeleteAppLaunchConfiguration(const Model::DeleteAppLaunchConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppLaunchConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppLaunchConfigurationRequestT = Model::DeleteAppLaunchConfigurationRequest>
        Model::DeleteAppLaunchConfigurationOutcomeCallable DeleteAppLaunchConfigurationCallable(const DeleteAppLaunchConfigurationRequestT& request) const
        {
            return SubmitCallable(&SMSClient::DeleteAppLaunchConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteAppLaunchConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppLaunchConfigurationRequestT = Model::DeleteAppLaunchConfigurationRequest>
        void DeleteAppLaunchConfigurationAsync(const DeleteAppLaunchConfigurationRequestT& request, const DeleteAppLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::DeleteAppLaunchConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the replication configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteAppReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppReplicationConfigurationOutcome DeleteAppReplicationConfiguration(const Model::DeleteAppReplicationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppReplicationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppReplicationConfigurationRequestT = Model::DeleteAppReplicationConfigurationRequest>
        Model::DeleteAppReplicationConfigurationOutcomeCallable DeleteAppReplicationConfigurationCallable(const DeleteAppReplicationConfigurationRequestT& request) const
        {
            return SubmitCallable(&SMSClient::DeleteAppReplicationConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteAppReplicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppReplicationConfigurationRequestT = Model::DeleteAppReplicationConfigurationRequest>
        void DeleteAppReplicationConfigurationAsync(const DeleteAppReplicationConfigurationRequestT& request, const DeleteAppReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::DeleteAppReplicationConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the validation configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteAppValidationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppValidationConfigurationOutcome DeleteAppValidationConfiguration(const Model::DeleteAppValidationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteAppValidationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppValidationConfigurationRequestT = Model::DeleteAppValidationConfigurationRequest>
        Model::DeleteAppValidationConfigurationOutcomeCallable DeleteAppValidationConfigurationCallable(const DeleteAppValidationConfigurationRequestT& request) const
        {
            return SubmitCallable(&SMSClient::DeleteAppValidationConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteAppValidationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppValidationConfigurationRequestT = Model::DeleteAppValidationConfigurationRequest>
        void DeleteAppValidationConfigurationAsync(const DeleteAppValidationConfigurationRequestT& request, const DeleteAppValidationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::DeleteAppValidationConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the specified replication job.</p> <p>After you delete a replication
         * job, there are no further replication runs. Amazon Web Services deletes the
         * contents of the Amazon S3 bucket used to store Server Migration Service
         * artifacts. The AMIs created by the replication runs are not
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteReplicationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationJobOutcome DeleteReplicationJob(const Model::DeleteReplicationJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteReplicationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteReplicationJobRequestT = Model::DeleteReplicationJobRequest>
        Model::DeleteReplicationJobOutcomeCallable DeleteReplicationJobCallable(const DeleteReplicationJobRequestT& request) const
        {
            return SubmitCallable(&SMSClient::DeleteReplicationJob, request);
        }

        /**
         * An Async wrapper for DeleteReplicationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReplicationJobRequestT = Model::DeleteReplicationJobRequest>
        void DeleteReplicationJobAsync(const DeleteReplicationJobRequestT& request, const DeleteReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::DeleteReplicationJob, request, handler, context);
        }

        /**
         * <p>Deletes all servers from your server catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DeleteServerCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServerCatalogOutcome DeleteServerCatalog(const Model::DeleteServerCatalogRequest& request) const;

        /**
         * A Callable wrapper for DeleteServerCatalog that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteServerCatalogRequestT = Model::DeleteServerCatalogRequest>
        Model::DeleteServerCatalogOutcomeCallable DeleteServerCatalogCallable(const DeleteServerCatalogRequestT& request) const
        {
            return SubmitCallable(&SMSClient::DeleteServerCatalog, request);
        }

        /**
         * An Async wrapper for DeleteServerCatalog that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteServerCatalogRequestT = Model::DeleteServerCatalogRequest>
        void DeleteServerCatalogAsync(const DeleteServerCatalogRequestT& request, const DeleteServerCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::DeleteServerCatalog, request, handler, context);
        }

        /**
         * <p>Disassociates the specified connector from Server Migration Service.</p>
         * <p>After you disassociate a connector, it is no longer available to support
         * replication jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/DisassociateConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateConnectorOutcome DisassociateConnector(const Model::DisassociateConnectorRequest& request) const;

        /**
         * A Callable wrapper for DisassociateConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateConnectorRequestT = Model::DisassociateConnectorRequest>
        Model::DisassociateConnectorOutcomeCallable DisassociateConnectorCallable(const DisassociateConnectorRequestT& request) const
        {
            return SubmitCallable(&SMSClient::DisassociateConnector, request);
        }

        /**
         * An Async wrapper for DisassociateConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateConnectorRequestT = Model::DisassociateConnectorRequest>
        void DisassociateConnectorAsync(const DisassociateConnectorRequestT& request, const DisassociateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::DisassociateConnector, request, handler, context);
        }

        /**
         * <p>Generates a target change set for a currently launched stack and writes it to
         * an Amazon S3 object in the customer’s Amazon S3 bucket.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GenerateChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateChangeSetOutcome GenerateChangeSet(const Model::GenerateChangeSetRequest& request) const;

        /**
         * A Callable wrapper for GenerateChangeSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GenerateChangeSetRequestT = Model::GenerateChangeSetRequest>
        Model::GenerateChangeSetOutcomeCallable GenerateChangeSetCallable(const GenerateChangeSetRequestT& request) const
        {
            return SubmitCallable(&SMSClient::GenerateChangeSet, request);
        }

        /**
         * An Async wrapper for GenerateChangeSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GenerateChangeSetRequestT = Model::GenerateChangeSetRequest>
        void GenerateChangeSetAsync(const GenerateChangeSetRequestT& request, const GenerateChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::GenerateChangeSet, request, handler, context);
        }

        /**
         * <p>Generates an CloudFormation template based on the current launch
         * configuration and writes it to an Amazon S3 object in the customer’s Amazon S3
         * bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GenerateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateTemplateOutcome GenerateTemplate(const Model::GenerateTemplateRequest& request) const;

        /**
         * A Callable wrapper for GenerateTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GenerateTemplateRequestT = Model::GenerateTemplateRequest>
        Model::GenerateTemplateOutcomeCallable GenerateTemplateCallable(const GenerateTemplateRequestT& request) const
        {
            return SubmitCallable(&SMSClient::GenerateTemplate, request);
        }

        /**
         * An Async wrapper for GenerateTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GenerateTemplateRequestT = Model::GenerateTemplateRequest>
        void GenerateTemplateAsync(const GenerateTemplateRequestT& request, const GenerateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::GenerateTemplate, request, handler, context);
        }

        /**
         * <p>Retrieve information about the specified application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetApp">AWS API
         * Reference</a></p>
         */
        virtual Model::GetAppOutcome GetApp(const Model::GetAppRequest& request) const;

        /**
         * A Callable wrapper for GetApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAppRequestT = Model::GetAppRequest>
        Model::GetAppOutcomeCallable GetAppCallable(const GetAppRequestT& request) const
        {
            return SubmitCallable(&SMSClient::GetApp, request);
        }

        /**
         * An Async wrapper for GetApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAppRequestT = Model::GetAppRequest>
        void GetAppAsync(const GetAppRequestT& request, const GetAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::GetApp, request, handler, context);
        }

        /**
         * <p>Retrieves the application launch configuration associated with the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetAppLaunchConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppLaunchConfigurationOutcome GetAppLaunchConfiguration(const Model::GetAppLaunchConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetAppLaunchConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAppLaunchConfigurationRequestT = Model::GetAppLaunchConfigurationRequest>
        Model::GetAppLaunchConfigurationOutcomeCallable GetAppLaunchConfigurationCallable(const GetAppLaunchConfigurationRequestT& request) const
        {
            return SubmitCallable(&SMSClient::GetAppLaunchConfiguration, request);
        }

        /**
         * An Async wrapper for GetAppLaunchConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAppLaunchConfigurationRequestT = Model::GetAppLaunchConfigurationRequest>
        void GetAppLaunchConfigurationAsync(const GetAppLaunchConfigurationRequestT& request, const GetAppLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::GetAppLaunchConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves the application replication configuration associated with the
         * specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetAppReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppReplicationConfigurationOutcome GetAppReplicationConfiguration(const Model::GetAppReplicationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetAppReplicationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAppReplicationConfigurationRequestT = Model::GetAppReplicationConfigurationRequest>
        Model::GetAppReplicationConfigurationOutcomeCallable GetAppReplicationConfigurationCallable(const GetAppReplicationConfigurationRequestT& request) const
        {
            return SubmitCallable(&SMSClient::GetAppReplicationConfiguration, request);
        }

        /**
         * An Async wrapper for GetAppReplicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAppReplicationConfigurationRequestT = Model::GetAppReplicationConfigurationRequest>
        void GetAppReplicationConfigurationAsync(const GetAppReplicationConfigurationRequestT& request, const GetAppReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::GetAppReplicationConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves information about a configuration for validating an
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetAppValidationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppValidationConfigurationOutcome GetAppValidationConfiguration(const Model::GetAppValidationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetAppValidationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAppValidationConfigurationRequestT = Model::GetAppValidationConfigurationRequest>
        Model::GetAppValidationConfigurationOutcomeCallable GetAppValidationConfigurationCallable(const GetAppValidationConfigurationRequestT& request) const
        {
            return SubmitCallable(&SMSClient::GetAppValidationConfiguration, request);
        }

        /**
         * An Async wrapper for GetAppValidationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAppValidationConfigurationRequestT = Model::GetAppValidationConfigurationRequest>
        void GetAppValidationConfigurationAsync(const GetAppValidationConfigurationRequestT& request, const GetAppValidationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::GetAppValidationConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves output from validating an application.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetAppValidationOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAppValidationOutputOutcome GetAppValidationOutput(const Model::GetAppValidationOutputRequest& request) const;

        /**
         * A Callable wrapper for GetAppValidationOutput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAppValidationOutputRequestT = Model::GetAppValidationOutputRequest>
        Model::GetAppValidationOutputOutcomeCallable GetAppValidationOutputCallable(const GetAppValidationOutputRequestT& request) const
        {
            return SubmitCallable(&SMSClient::GetAppValidationOutput, request);
        }

        /**
         * An Async wrapper for GetAppValidationOutput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAppValidationOutputRequestT = Model::GetAppValidationOutputRequest>
        void GetAppValidationOutputAsync(const GetAppValidationOutputRequestT& request, const GetAppValidationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::GetAppValidationOutput, request, handler, context);
        }

        /**
         * <p>Describes the connectors registered with the Server Migration
         * Service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetConnectors">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectorsOutcome GetConnectors(const Model::GetConnectorsRequest& request) const;

        /**
         * A Callable wrapper for GetConnectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectorsRequestT = Model::GetConnectorsRequest>
        Model::GetConnectorsOutcomeCallable GetConnectorsCallable(const GetConnectorsRequestT& request) const
        {
            return SubmitCallable(&SMSClient::GetConnectors, request);
        }

        /**
         * An Async wrapper for GetConnectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectorsRequestT = Model::GetConnectorsRequest>
        void GetConnectorsAsync(const GetConnectorsRequestT& request, const GetConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::GetConnectors, request, handler, context);
        }

        /**
         * <p>Describes the specified replication job or all of your replication
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetReplicationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReplicationJobsOutcome GetReplicationJobs(const Model::GetReplicationJobsRequest& request) const;

        /**
         * A Callable wrapper for GetReplicationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReplicationJobsRequestT = Model::GetReplicationJobsRequest>
        Model::GetReplicationJobsOutcomeCallable GetReplicationJobsCallable(const GetReplicationJobsRequestT& request) const
        {
            return SubmitCallable(&SMSClient::GetReplicationJobs, request);
        }

        /**
         * An Async wrapper for GetReplicationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReplicationJobsRequestT = Model::GetReplicationJobsRequest>
        void GetReplicationJobsAsync(const GetReplicationJobsRequestT& request, const GetReplicationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::GetReplicationJobs, request, handler, context);
        }

        /**
         * <p>Describes the replication runs for the specified replication
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetReplicationRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReplicationRunsOutcome GetReplicationRuns(const Model::GetReplicationRunsRequest& request) const;

        /**
         * A Callable wrapper for GetReplicationRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReplicationRunsRequestT = Model::GetReplicationRunsRequest>
        Model::GetReplicationRunsOutcomeCallable GetReplicationRunsCallable(const GetReplicationRunsRequestT& request) const
        {
            return SubmitCallable(&SMSClient::GetReplicationRuns, request);
        }

        /**
         * An Async wrapper for GetReplicationRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReplicationRunsRequestT = Model::GetReplicationRunsRequest>
        void GetReplicationRunsAsync(const GetReplicationRunsRequestT& request, const GetReplicationRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::GetReplicationRuns, request, handler, context);
        }

        /**
         * <p>Describes the servers in your server catalog.</p> <p>Before you can describe
         * your servers, you must import them using
         * <a>ImportServerCatalog</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/GetServers">AWS API
         * Reference</a></p>
         */
        virtual Model::GetServersOutcome GetServers(const Model::GetServersRequest& request) const;

        /**
         * A Callable wrapper for GetServers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetServersRequestT = Model::GetServersRequest>
        Model::GetServersOutcomeCallable GetServersCallable(const GetServersRequestT& request) const
        {
            return SubmitCallable(&SMSClient::GetServers, request);
        }

        /**
         * An Async wrapper for GetServers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServersRequestT = Model::GetServersRequest>
        void GetServersAsync(const GetServersRequestT& request, const GetServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::GetServers, request, handler, context);
        }

        /**
         * <p>Allows application import from Migration Hub.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ImportAppCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportAppCatalogOutcome ImportAppCatalog(const Model::ImportAppCatalogRequest& request) const;

        /**
         * A Callable wrapper for ImportAppCatalog that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportAppCatalogRequestT = Model::ImportAppCatalogRequest>
        Model::ImportAppCatalogOutcomeCallable ImportAppCatalogCallable(const ImportAppCatalogRequestT& request) const
        {
            return SubmitCallable(&SMSClient::ImportAppCatalog, request);
        }

        /**
         * An Async wrapper for ImportAppCatalog that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportAppCatalogRequestT = Model::ImportAppCatalogRequest>
        void ImportAppCatalogAsync(const ImportAppCatalogRequestT& request, const ImportAppCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::ImportAppCatalog, request, handler, context);
        }

        /**
         * <p>Gathers a complete list of on-premises servers. Connectors must be installed
         * and monitoring all servers to import.</p> <p>This call returns immediately, but
         * might take additional time to retrieve all the servers.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ImportServerCatalog">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportServerCatalogOutcome ImportServerCatalog(const Model::ImportServerCatalogRequest& request) const;

        /**
         * A Callable wrapper for ImportServerCatalog that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportServerCatalogRequestT = Model::ImportServerCatalogRequest>
        Model::ImportServerCatalogOutcomeCallable ImportServerCatalogCallable(const ImportServerCatalogRequestT& request) const
        {
            return SubmitCallable(&SMSClient::ImportServerCatalog, request);
        }

        /**
         * An Async wrapper for ImportServerCatalog that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportServerCatalogRequestT = Model::ImportServerCatalogRequest>
        void ImportServerCatalogAsync(const ImportServerCatalogRequestT& request, const ImportServerCatalogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::ImportServerCatalog, request, handler, context);
        }

        /**
         * <p>Launches the specified application as a stack in
         * CloudFormation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/LaunchApp">AWS API
         * Reference</a></p>
         */
        virtual Model::LaunchAppOutcome LaunchApp(const Model::LaunchAppRequest& request) const;

        /**
         * A Callable wrapper for LaunchApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename LaunchAppRequestT = Model::LaunchAppRequest>
        Model::LaunchAppOutcomeCallable LaunchAppCallable(const LaunchAppRequestT& request) const
        {
            return SubmitCallable(&SMSClient::LaunchApp, request);
        }

        /**
         * An Async wrapper for LaunchApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename LaunchAppRequestT = Model::LaunchAppRequest>
        void LaunchAppAsync(const LaunchAppRequestT& request, const LaunchAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::LaunchApp, request, handler, context);
        }

        /**
         * <p>Retrieves summaries for all applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ListApps">AWS API
         * Reference</a></p>
         */
        virtual Model::ListAppsOutcome ListApps(const Model::ListAppsRequest& request) const;

        /**
         * A Callable wrapper for ListApps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppsRequestT = Model::ListAppsRequest>
        Model::ListAppsOutcomeCallable ListAppsCallable(const ListAppsRequestT& request) const
        {
            return SubmitCallable(&SMSClient::ListApps, request);
        }

        /**
         * An Async wrapper for ListApps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppsRequestT = Model::ListAppsRequest>
        void ListAppsAsync(const ListAppsRequestT& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::ListApps, request, handler, context);
        }

        /**
         * <p>Provides information to Server Migration Service about whether application
         * validation is successful.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/NotifyAppValidationOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::NotifyAppValidationOutputOutcome NotifyAppValidationOutput(const Model::NotifyAppValidationOutputRequest& request) const;

        /**
         * A Callable wrapper for NotifyAppValidationOutput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename NotifyAppValidationOutputRequestT = Model::NotifyAppValidationOutputRequest>
        Model::NotifyAppValidationOutputOutcomeCallable NotifyAppValidationOutputCallable(const NotifyAppValidationOutputRequestT& request) const
        {
            return SubmitCallable(&SMSClient::NotifyAppValidationOutput, request);
        }

        /**
         * An Async wrapper for NotifyAppValidationOutput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename NotifyAppValidationOutputRequestT = Model::NotifyAppValidationOutputRequest>
        void NotifyAppValidationOutputAsync(const NotifyAppValidationOutputRequestT& request, const NotifyAppValidationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::NotifyAppValidationOutput, request, handler, context);
        }

        /**
         * <p>Creates or updates the launch configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/PutAppLaunchConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAppLaunchConfigurationOutcome PutAppLaunchConfiguration(const Model::PutAppLaunchConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutAppLaunchConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAppLaunchConfigurationRequestT = Model::PutAppLaunchConfigurationRequest>
        Model::PutAppLaunchConfigurationOutcomeCallable PutAppLaunchConfigurationCallable(const PutAppLaunchConfigurationRequestT& request) const
        {
            return SubmitCallable(&SMSClient::PutAppLaunchConfiguration, request);
        }

        /**
         * An Async wrapper for PutAppLaunchConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAppLaunchConfigurationRequestT = Model::PutAppLaunchConfigurationRequest>
        void PutAppLaunchConfigurationAsync(const PutAppLaunchConfigurationRequestT& request, const PutAppLaunchConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::PutAppLaunchConfiguration, request, handler, context);
        }

        /**
         * <p>Creates or updates the replication configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/PutAppReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAppReplicationConfigurationOutcome PutAppReplicationConfiguration(const Model::PutAppReplicationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutAppReplicationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAppReplicationConfigurationRequestT = Model::PutAppReplicationConfigurationRequest>
        Model::PutAppReplicationConfigurationOutcomeCallable PutAppReplicationConfigurationCallable(const PutAppReplicationConfigurationRequestT& request) const
        {
            return SubmitCallable(&SMSClient::PutAppReplicationConfiguration, request);
        }

        /**
         * An Async wrapper for PutAppReplicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAppReplicationConfigurationRequestT = Model::PutAppReplicationConfigurationRequest>
        void PutAppReplicationConfigurationAsync(const PutAppReplicationConfigurationRequestT& request, const PutAppReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::PutAppReplicationConfiguration, request, handler, context);
        }

        /**
         * <p>Creates or updates a validation configuration for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/PutAppValidationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAppValidationConfigurationOutcome PutAppValidationConfiguration(const Model::PutAppValidationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutAppValidationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAppValidationConfigurationRequestT = Model::PutAppValidationConfigurationRequest>
        Model::PutAppValidationConfigurationOutcomeCallable PutAppValidationConfigurationCallable(const PutAppValidationConfigurationRequestT& request) const
        {
            return SubmitCallable(&SMSClient::PutAppValidationConfiguration, request);
        }

        /**
         * An Async wrapper for PutAppValidationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAppValidationConfigurationRequestT = Model::PutAppValidationConfigurationRequest>
        void PutAppValidationConfigurationAsync(const PutAppValidationConfigurationRequestT& request, const PutAppValidationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::PutAppValidationConfiguration, request, handler, context);
        }

        /**
         * <p>Starts replicating the specified application by creating replication jobs for
         * each server in the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StartAppReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAppReplicationOutcome StartAppReplication(const Model::StartAppReplicationRequest& request) const;

        /**
         * A Callable wrapper for StartAppReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartAppReplicationRequestT = Model::StartAppReplicationRequest>
        Model::StartAppReplicationOutcomeCallable StartAppReplicationCallable(const StartAppReplicationRequestT& request) const
        {
            return SubmitCallable(&SMSClient::StartAppReplication, request);
        }

        /**
         * An Async wrapper for StartAppReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAppReplicationRequestT = Model::StartAppReplicationRequest>
        void StartAppReplicationAsync(const StartAppReplicationRequestT& request, const StartAppReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::StartAppReplication, request, handler, context);
        }

        /**
         * <p>Starts an on-demand replication run for the specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StartOnDemandAppReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartOnDemandAppReplicationOutcome StartOnDemandAppReplication(const Model::StartOnDemandAppReplicationRequest& request) const;

        /**
         * A Callable wrapper for StartOnDemandAppReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartOnDemandAppReplicationRequestT = Model::StartOnDemandAppReplicationRequest>
        Model::StartOnDemandAppReplicationOutcomeCallable StartOnDemandAppReplicationCallable(const StartOnDemandAppReplicationRequestT& request) const
        {
            return SubmitCallable(&SMSClient::StartOnDemandAppReplication, request);
        }

        /**
         * An Async wrapper for StartOnDemandAppReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartOnDemandAppReplicationRequestT = Model::StartOnDemandAppReplicationRequest>
        void StartOnDemandAppReplicationAsync(const StartOnDemandAppReplicationRequestT& request, const StartOnDemandAppReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::StartOnDemandAppReplication, request, handler, context);
        }

        /**
         * <p>Starts an on-demand replication run for the specified replication job. This
         * replication run starts immediately. This replication run is in addition to the
         * ones already scheduled.</p> <p>There is a limit on the number of on-demand
         * replications runs that you can request in a 24-hour period.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StartOnDemandReplicationRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartOnDemandReplicationRunOutcome StartOnDemandReplicationRun(const Model::StartOnDemandReplicationRunRequest& request) const;

        /**
         * A Callable wrapper for StartOnDemandReplicationRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartOnDemandReplicationRunRequestT = Model::StartOnDemandReplicationRunRequest>
        Model::StartOnDemandReplicationRunOutcomeCallable StartOnDemandReplicationRunCallable(const StartOnDemandReplicationRunRequestT& request) const
        {
            return SubmitCallable(&SMSClient::StartOnDemandReplicationRun, request);
        }

        /**
         * An Async wrapper for StartOnDemandReplicationRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartOnDemandReplicationRunRequestT = Model::StartOnDemandReplicationRunRequest>
        void StartOnDemandReplicationRunAsync(const StartOnDemandReplicationRunRequestT& request, const StartOnDemandReplicationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::StartOnDemandReplicationRun, request, handler, context);
        }

        /**
         * <p>Stops replicating the specified application by deleting the replication job
         * for each server in the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/StopAppReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StopAppReplicationOutcome StopAppReplication(const Model::StopAppReplicationRequest& request) const;

        /**
         * A Callable wrapper for StopAppReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopAppReplicationRequestT = Model::StopAppReplicationRequest>
        Model::StopAppReplicationOutcomeCallable StopAppReplicationCallable(const StopAppReplicationRequestT& request) const
        {
            return SubmitCallable(&SMSClient::StopAppReplication, request);
        }

        /**
         * An Async wrapper for StopAppReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopAppReplicationRequestT = Model::StopAppReplicationRequest>
        void StopAppReplicationAsync(const StopAppReplicationRequestT& request, const StopAppReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::StopAppReplication, request, handler, context);
        }

        /**
         * <p>Terminates the stack for the specified application.</p><p><h3>See Also:</h3> 
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/TerminateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateAppOutcome TerminateApp(const Model::TerminateAppRequest& request) const;

        /**
         * A Callable wrapper for TerminateApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TerminateAppRequestT = Model::TerminateAppRequest>
        Model::TerminateAppOutcomeCallable TerminateAppCallable(const TerminateAppRequestT& request) const
        {
            return SubmitCallable(&SMSClient::TerminateApp, request);
        }

        /**
         * An Async wrapper for TerminateApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TerminateAppRequestT = Model::TerminateAppRequest>
        void TerminateAppAsync(const TerminateAppRequestT& request, const TerminateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::TerminateApp, request, handler, context);
        }

        /**
         * <p>Updates the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/UpdateApp">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateAppOutcome UpdateApp(const Model::UpdateAppRequest& request) const;

        /**
         * A Callable wrapper for UpdateApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAppRequestT = Model::UpdateAppRequest>
        Model::UpdateAppOutcomeCallable UpdateAppCallable(const UpdateAppRequestT& request) const
        {
            return SubmitCallable(&SMSClient::UpdateApp, request);
        }

        /**
         * An Async wrapper for UpdateApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAppRequestT = Model::UpdateAppRequest>
        void UpdateAppAsync(const UpdateAppRequestT& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::UpdateApp, request, handler, context);
        }

        /**
         * <p>Updates the specified settings for the specified replication
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/UpdateReplicationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReplicationJobOutcome UpdateReplicationJob(const Model::UpdateReplicationJobRequest& request) const;

        /**
         * A Callable wrapper for UpdateReplicationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateReplicationJobRequestT = Model::UpdateReplicationJobRequest>
        Model::UpdateReplicationJobOutcomeCallable UpdateReplicationJobCallable(const UpdateReplicationJobRequestT& request) const
        {
            return SubmitCallable(&SMSClient::UpdateReplicationJob, request);
        }

        /**
         * An Async wrapper for UpdateReplicationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateReplicationJobRequestT = Model::UpdateReplicationJobRequest>
        void UpdateReplicationJobAsync(const UpdateReplicationJobRequestT& request, const UpdateReplicationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SMSClient::UpdateReplicationJob, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SMSEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SMSClient>;
      void init(const SMSClientConfiguration& clientConfiguration);

      SMSClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SMSEndpointProviderBase> m_endpointProvider;
  };

} // namespace SMS
} // namespace Aws
