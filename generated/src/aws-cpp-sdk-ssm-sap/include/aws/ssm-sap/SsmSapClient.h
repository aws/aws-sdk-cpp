/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm-sap/SsmSapServiceClientModel.h>

namespace Aws
{
namespace SsmSap
{
  /**
   * <p>This API reference provides descriptions, syntax, and other details about
   * each of the actions and data types for AWS Systems Manager for SAP. The topic
   * for each action shows the API request parameters and responses. </p>
   */
  class AWS_SSMSAP_API SsmSapClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SsmSapClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SsmSapClientConfiguration ClientConfigurationType;
      typedef SsmSapEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SsmSapClient(const Aws::SsmSap::SsmSapClientConfiguration& clientConfiguration = Aws::SsmSap::SsmSapClientConfiguration(),
                     std::shared_ptr<SsmSapEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SsmSapClient(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<SsmSapEndpointProviderBase> endpointProvider = nullptr,
                     const Aws::SsmSap::SsmSapClientConfiguration& clientConfiguration = Aws::SsmSap::SsmSapClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SsmSapClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<SsmSapEndpointProviderBase> endpointProvider = nullptr,
                     const Aws::SsmSap::SsmSapClientConfiguration& clientConfiguration = Aws::SsmSap::SsmSapClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SsmSapClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SsmSapClient(const Aws::Auth::AWSCredentials& credentials,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SsmSapClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SsmSapClient();

        /**
         * <p>Removes permissions associated with the target database.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/DeleteResourcePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePermissionOutcome DeleteResourcePermission(const Model::DeleteResourcePermissionRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourcePermissionRequestT = Model::DeleteResourcePermissionRequest>
        Model::DeleteResourcePermissionOutcomeCallable DeleteResourcePermissionCallable(const DeleteResourcePermissionRequestT& request) const
        {
            return SubmitCallable(&SsmSapClient::DeleteResourcePermission, request);
        }

        /**
         * An Async wrapper for DeleteResourcePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePermissionRequestT = Model::DeleteResourcePermissionRequest>
        void DeleteResourcePermissionAsync(const DeleteResourcePermissionRequestT& request, const DeleteResourcePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SsmSapClient::DeleteResourcePermission, request, handler, context);
        }

        /**
         * <p>Deregister an SAP application with AWS Systems Manager for SAP. This action
         * does not aﬀect the existing setup of your SAP workloads on Amazon
         * EC2.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/DeregisterApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterApplicationOutcome DeregisterApplication(const Model::DeregisterApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeregisterApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterApplicationRequestT = Model::DeregisterApplicationRequest>
        Model::DeregisterApplicationOutcomeCallable DeregisterApplicationCallable(const DeregisterApplicationRequestT& request) const
        {
            return SubmitCallable(&SsmSapClient::DeregisterApplication, request);
        }

        /**
         * An Async wrapper for DeregisterApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterApplicationRequestT = Model::DeregisterApplicationRequest>
        void DeregisterApplicationAsync(const DeregisterApplicationRequestT& request, const DeregisterApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SsmSapClient::DeregisterApplication, request, handler, context);
        }

        /**
         * <p>Gets an application registered with AWS Systems Manager for SAP. It also
         * returns the components of the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/GetApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;

        /**
         * A Callable wrapper for GetApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApplicationRequestT = Model::GetApplicationRequest>
        Model::GetApplicationOutcomeCallable GetApplicationCallable(const GetApplicationRequestT& request) const
        {
            return SubmitCallable(&SsmSapClient::GetApplication, request);
        }

        /**
         * An Async wrapper for GetApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApplicationRequestT = Model::GetApplicationRequest>
        void GetApplicationAsync(const GetApplicationRequestT& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SsmSapClient::GetApplication, request, handler, context);
        }

        /**
         * <p>Gets the component of an application registered with AWS Systems Manager for
         * SAP.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/GetComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComponentOutcome GetComponent(const Model::GetComponentRequest& request) const;

        /**
         * A Callable wrapper for GetComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetComponentRequestT = Model::GetComponentRequest>
        Model::GetComponentOutcomeCallable GetComponentCallable(const GetComponentRequestT& request) const
        {
            return SubmitCallable(&SsmSapClient::GetComponent, request);
        }

        /**
         * An Async wrapper for GetComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetComponentRequestT = Model::GetComponentRequest>
        void GetComponentAsync(const GetComponentRequestT& request, const GetComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SsmSapClient::GetComponent, request, handler, context);
        }

        /**
         * <p>Gets the SAP HANA database of an application registered with AWS Systems
         * Manager for SAP.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/GetDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatabaseOutcome GetDatabase(const Model::GetDatabaseRequest& request) const;

        /**
         * A Callable wrapper for GetDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDatabaseRequestT = Model::GetDatabaseRequest>
        Model::GetDatabaseOutcomeCallable GetDatabaseCallable(const GetDatabaseRequestT& request) const
        {
            return SubmitCallable(&SsmSapClient::GetDatabase, request);
        }

        /**
         * An Async wrapper for GetDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDatabaseRequestT = Model::GetDatabaseRequest>
        void GetDatabaseAsync(const GetDatabaseRequestT& request, const GetDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SsmSapClient::GetDatabase, request, handler, context);
        }

        /**
         * <p>Gets the details of an operation by specifying the operation
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/GetOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOperationOutcome GetOperation(const Model::GetOperationRequest& request) const;

        /**
         * A Callable wrapper for GetOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOperationRequestT = Model::GetOperationRequest>
        Model::GetOperationOutcomeCallable GetOperationCallable(const GetOperationRequestT& request) const
        {
            return SubmitCallable(&SsmSapClient::GetOperation, request);
        }

        /**
         * An Async wrapper for GetOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOperationRequestT = Model::GetOperationRequest>
        void GetOperationAsync(const GetOperationRequestT& request, const GetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SsmSapClient::GetOperation, request, handler, context);
        }

        /**
         * <p>Gets permissions associated with the target database.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/GetResourcePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePermissionOutcome GetResourcePermission(const Model::GetResourcePermissionRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourcePermissionRequestT = Model::GetResourcePermissionRequest>
        Model::GetResourcePermissionOutcomeCallable GetResourcePermissionCallable(const GetResourcePermissionRequestT& request) const
        {
            return SubmitCallable(&SsmSapClient::GetResourcePermission, request);
        }

        /**
         * An Async wrapper for GetResourcePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourcePermissionRequestT = Model::GetResourcePermissionRequest>
        void GetResourcePermissionAsync(const GetResourcePermissionRequestT& request, const GetResourcePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SsmSapClient::GetResourcePermission, request, handler, context);
        }

        /**
         * <p>Lists all the applications registered with AWS Systems Manager for
         * SAP.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const ListApplicationsRequestT& request) const
        {
            return SubmitCallable(&SsmSapClient::ListApplications, request);
        }

        /**
         * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        void ListApplicationsAsync(const ListApplicationsRequestT& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SsmSapClient::ListApplications, request, handler, context);
        }

        /**
         * <p>Lists all the components registered with AWS Systems Manager for
         * SAP.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/ListComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentsOutcome ListComponents(const Model::ListComponentsRequest& request) const;

        /**
         * A Callable wrapper for ListComponents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListComponentsRequestT = Model::ListComponentsRequest>
        Model::ListComponentsOutcomeCallable ListComponentsCallable(const ListComponentsRequestT& request) const
        {
            return SubmitCallable(&SsmSapClient::ListComponents, request);
        }

        /**
         * An Async wrapper for ListComponents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListComponentsRequestT = Model::ListComponentsRequest>
        void ListComponentsAsync(const ListComponentsRequestT& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SsmSapClient::ListComponents, request, handler, context);
        }

        /**
         * <p>Lists the SAP HANA databases of an application registered with AWS Systems
         * Manager for SAP.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/ListDatabases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatabasesOutcome ListDatabases(const Model::ListDatabasesRequest& request) const;

        /**
         * A Callable wrapper for ListDatabases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDatabasesRequestT = Model::ListDatabasesRequest>
        Model::ListDatabasesOutcomeCallable ListDatabasesCallable(const ListDatabasesRequestT& request) const
        {
            return SubmitCallable(&SsmSapClient::ListDatabases, request);
        }

        /**
         * An Async wrapper for ListDatabases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDatabasesRequestT = Model::ListDatabasesRequest>
        void ListDatabasesAsync(const ListDatabasesRequestT& request, const ListDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SsmSapClient::ListDatabases, request, handler, context);
        }

        /**
         * <p>Lists the operations performed by AWS Systems Manager for SAP.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/ListOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOperationsOutcome ListOperations(const Model::ListOperationsRequest& request) const;

        /**
         * A Callable wrapper for ListOperations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOperationsRequestT = Model::ListOperationsRequest>
        Model::ListOperationsOutcomeCallable ListOperationsCallable(const ListOperationsRequestT& request) const
        {
            return SubmitCallable(&SsmSapClient::ListOperations, request);
        }

        /**
         * An Async wrapper for ListOperations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOperationsRequestT = Model::ListOperationsRequest>
        void ListOperationsAsync(const ListOperationsRequestT& request, const ListOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SsmSapClient::ListOperations, request, handler, context);
        }

        /**
         * <p>Lists all tags on an SAP HANA application and/or database registered with AWS
         * Systems Manager for SAP.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&SsmSapClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SsmSapClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Adds permissions to the target database.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/PutResourcePermission">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePermissionOutcome PutResourcePermission(const Model::PutResourcePermissionRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePermission that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourcePermissionRequestT = Model::PutResourcePermissionRequest>
        Model::PutResourcePermissionOutcomeCallable PutResourcePermissionCallable(const PutResourcePermissionRequestT& request) const
        {
            return SubmitCallable(&SsmSapClient::PutResourcePermission, request);
        }

        /**
         * An Async wrapper for PutResourcePermission that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourcePermissionRequestT = Model::PutResourcePermissionRequest>
        void PutResourcePermissionAsync(const PutResourcePermissionRequestT& request, const PutResourcePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SsmSapClient::PutResourcePermission, request, handler, context);
        }

        /**
         * <p>Register an SAP application with AWS Systems Manager for SAP. You must meet
         * the following requirements before registering. </p> <p>The SAP application you
         * want to register with AWS Systems Manager for SAP is running on Amazon EC2.</p>
         * <p>AWS Systems Manager Agent must be setup on an Amazon EC2 instance along with
         * the required IAM permissions.</p> <p>Amazon EC2 instance(s) must have access to
         * the secrets created in AWS Secrets Manager to manage SAP applications and
         * components.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/RegisterApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterApplicationOutcome RegisterApplication(const Model::RegisterApplicationRequest& request) const;

        /**
         * A Callable wrapper for RegisterApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterApplicationRequestT = Model::RegisterApplicationRequest>
        Model::RegisterApplicationOutcomeCallable RegisterApplicationCallable(const RegisterApplicationRequestT& request) const
        {
            return SubmitCallable(&SsmSapClient::RegisterApplication, request);
        }

        /**
         * An Async wrapper for RegisterApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterApplicationRequestT = Model::RegisterApplicationRequest>
        void RegisterApplicationAsync(const RegisterApplicationRequestT& request, const RegisterApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SsmSapClient::RegisterApplication, request, handler, context);
        }

        /**
         * <p>Refreshes a registered application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/StartApplicationRefresh">AWS
         * API Reference</a></p>
         */
        virtual Model::StartApplicationRefreshOutcome StartApplicationRefresh(const Model::StartApplicationRefreshRequest& request) const;

        /**
         * A Callable wrapper for StartApplicationRefresh that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartApplicationRefreshRequestT = Model::StartApplicationRefreshRequest>
        Model::StartApplicationRefreshOutcomeCallable StartApplicationRefreshCallable(const StartApplicationRefreshRequestT& request) const
        {
            return SubmitCallable(&SsmSapClient::StartApplicationRefresh, request);
        }

        /**
         * An Async wrapper for StartApplicationRefresh that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartApplicationRefreshRequestT = Model::StartApplicationRefreshRequest>
        void StartApplicationRefreshAsync(const StartApplicationRefreshRequestT& request, const StartApplicationRefreshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SsmSapClient::StartApplicationRefresh, request, handler, context);
        }

        /**
         * <p>Creates tag for a resource by specifying the ARN.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&SsmSapClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SsmSapClient::TagResource, request, handler, context);
        }

        /**
         * <p>Delete the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&SsmSapClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SsmSapClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the settings of an application registered with AWS Systems Manager
         * for SAP.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/UpdateApplicationSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationSettingsOutcome UpdateApplicationSettings(const Model::UpdateApplicationSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplicationSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApplicationSettingsRequestT = Model::UpdateApplicationSettingsRequest>
        Model::UpdateApplicationSettingsOutcomeCallable UpdateApplicationSettingsCallable(const UpdateApplicationSettingsRequestT& request) const
        {
            return SubmitCallable(&SsmSapClient::UpdateApplicationSettings, request);
        }

        /**
         * An Async wrapper for UpdateApplicationSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationSettingsRequestT = Model::UpdateApplicationSettingsRequest>
        void UpdateApplicationSettingsAsync(const UpdateApplicationSettingsRequestT& request, const UpdateApplicationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SsmSapClient::UpdateApplicationSettings, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SsmSapEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SsmSapClient>;
      void init(const SsmSapClientConfiguration& clientConfiguration);

      SsmSapClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SsmSapEndpointProviderBase> m_endpointProvider;
  };

} // namespace SsmSap
} // namespace Aws
