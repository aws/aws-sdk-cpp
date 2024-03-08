/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryServiceClientModel.h>

namespace Aws
{
namespace ServerlessApplicationRepository
{
  /**
   * <p>The AWS Serverless Application Repository makes it easy for developers and
   * enterprises to quickly find
 and deploy serverless applications in the AWS
   * Cloud. For more information about serverless applications,
 see Serverless
   * Computing and Applications on the AWS website.</p><p>The AWS Serverless
   * Application Repository is deeply integrated with the AWS Lambda console, so that
   * developers of 
 all levels can get started with serverless computing without
   * needing to learn anything new. You can use category 
 keywords to browse for
   * applications such as web and mobile backends, data processing applications, or
   * chatbots. 
 You can also search for applications by name, publisher, or event
   * source. To use an application, you simply choose it, 
 configure any required
   * fields, and deploy it with a few clicks. </p><p>You can also easily publish
   * applications, sharing them publicly with the community at large, or privately

   * within your team or across your organization. To publish a serverless
   * application (or app), you can use the
 AWS Management Console, AWS Command Line
   * Interface (AWS CLI), or AWS SDKs to upload the code. Along with the
 code, you
   * upload a simple manifest file, also known as the AWS Serverless Application
   * Model (AWS SAM) template.
 For more information about AWS SAM, see AWS
   * Serverless Application Model (AWS SAM) on the AWS Labs
 GitHub
   * repository.</p><p>The AWS Serverless Application Repository Developer Guide
   * contains more information about the two developer
 experiences
   * available:</p><ul>
 <li>
 <p>Consuming Applications – Browse for applications
   * and view information about them, including
 source code and readme files. Also
   * install, configure, and deploy applications of your choosing. </p>

   * <p>Publishing Applications – Configure and upload applications to make them
   * available to other
 developers, and publish new versions of applications. </p>

   * </li>
 </ul>
   */
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API ServerlessApplicationRepositoryClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ServerlessApplicationRepositoryClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ServerlessApplicationRepositoryClientConfiguration ClientConfigurationType;
      typedef ServerlessApplicationRepositoryEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServerlessApplicationRepositoryClient(const Aws::ServerlessApplicationRepository::ServerlessApplicationRepositoryClientConfiguration& clientConfiguration = Aws::ServerlessApplicationRepository::ServerlessApplicationRepositoryClientConfiguration(),
                                              std::shared_ptr<ServerlessApplicationRepositoryEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServerlessApplicationRepositoryClient(const Aws::Auth::AWSCredentials& credentials,
                                              std::shared_ptr<ServerlessApplicationRepositoryEndpointProviderBase> endpointProvider = nullptr,
                                              const Aws::ServerlessApplicationRepository::ServerlessApplicationRepositoryClientConfiguration& clientConfiguration = Aws::ServerlessApplicationRepository::ServerlessApplicationRepositoryClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ServerlessApplicationRepositoryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                              std::shared_ptr<ServerlessApplicationRepositoryEndpointProviderBase> endpointProvider = nullptr,
                                              const Aws::ServerlessApplicationRepository::ServerlessApplicationRepositoryClientConfiguration& clientConfiguration = Aws::ServerlessApplicationRepository::ServerlessApplicationRepositoryClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServerlessApplicationRepositoryClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServerlessApplicationRepositoryClient(const Aws::Auth::AWSCredentials& credentials,
                                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ServerlessApplicationRepositoryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ServerlessApplicationRepositoryClient();

        /**
         * <p>Creates an application, optionally including an AWS SAM file to create the
         * first application version in the same call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const CreateApplicationRequestT& request) const
        {
            return SubmitCallable(&ServerlessApplicationRepositoryClient::CreateApplication, request);
        }

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        void CreateApplicationAsync(const CreateApplicationRequestT& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServerlessApplicationRepositoryClient::CreateApplication, request, handler, context);
        }

        /**
         * <p>Creates an application version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateApplicationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationVersionOutcome CreateApplicationVersion(const Model::CreateApplicationVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateApplicationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApplicationVersionRequestT = Model::CreateApplicationVersionRequest>
        Model::CreateApplicationVersionOutcomeCallable CreateApplicationVersionCallable(const CreateApplicationVersionRequestT& request) const
        {
            return SubmitCallable(&ServerlessApplicationRepositoryClient::CreateApplicationVersion, request);
        }

        /**
         * An Async wrapper for CreateApplicationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationVersionRequestT = Model::CreateApplicationVersionRequest>
        void CreateApplicationVersionAsync(const CreateApplicationVersionRequestT& request, const CreateApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServerlessApplicationRepositoryClient::CreateApplicationVersion, request, handler, context);
        }

        /**
         * <p>Creates an AWS CloudFormation change set for the given
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateCloudFormationChangeSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCloudFormationChangeSetOutcome CreateCloudFormationChangeSet(const Model::CreateCloudFormationChangeSetRequest& request) const;

        /**
         * A Callable wrapper for CreateCloudFormationChangeSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCloudFormationChangeSetRequestT = Model::CreateCloudFormationChangeSetRequest>
        Model::CreateCloudFormationChangeSetOutcomeCallable CreateCloudFormationChangeSetCallable(const CreateCloudFormationChangeSetRequestT& request) const
        {
            return SubmitCallable(&ServerlessApplicationRepositoryClient::CreateCloudFormationChangeSet, request);
        }

        /**
         * An Async wrapper for CreateCloudFormationChangeSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCloudFormationChangeSetRequestT = Model::CreateCloudFormationChangeSetRequest>
        void CreateCloudFormationChangeSetAsync(const CreateCloudFormationChangeSetRequestT& request, const CreateCloudFormationChangeSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServerlessApplicationRepositoryClient::CreateCloudFormationChangeSet, request, handler, context);
        }

        /**
         * <p>Creates an AWS CloudFormation template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/CreateCloudFormationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCloudFormationTemplateOutcome CreateCloudFormationTemplate(const Model::CreateCloudFormationTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateCloudFormationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCloudFormationTemplateRequestT = Model::CreateCloudFormationTemplateRequest>
        Model::CreateCloudFormationTemplateOutcomeCallable CreateCloudFormationTemplateCallable(const CreateCloudFormationTemplateRequestT& request) const
        {
            return SubmitCallable(&ServerlessApplicationRepositoryClient::CreateCloudFormationTemplate, request);
        }

        /**
         * An Async wrapper for CreateCloudFormationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCloudFormationTemplateRequestT = Model::CreateCloudFormationTemplateRequest>
        void CreateCloudFormationTemplateAsync(const CreateCloudFormationTemplateRequestT& request, const CreateCloudFormationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServerlessApplicationRepositoryClient::CreateCloudFormationTemplate, request, handler, context);
        }

        /**
         * <p>Deletes the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const DeleteApplicationRequestT& request) const
        {
            return SubmitCallable(&ServerlessApplicationRepositoryClient::DeleteApplication, request);
        }

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        void DeleteApplicationAsync(const DeleteApplicationRequestT& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServerlessApplicationRepositoryClient::DeleteApplication, request, handler, context);
        }

        /**
         * <p>Gets the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/GetApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;

        /**
         * A Callable wrapper for GetApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApplicationRequestT = Model::GetApplicationRequest>
        Model::GetApplicationOutcomeCallable GetApplicationCallable(const GetApplicationRequestT& request) const
        {
            return SubmitCallable(&ServerlessApplicationRepositoryClient::GetApplication, request);
        }

        /**
         * An Async wrapper for GetApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApplicationRequestT = Model::GetApplicationRequest>
        void GetApplicationAsync(const GetApplicationRequestT& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServerlessApplicationRepositoryClient::GetApplication, request, handler, context);
        }

        /**
         * <p>Retrieves the policy for the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/GetApplicationPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationPolicyOutcome GetApplicationPolicy(const Model::GetApplicationPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetApplicationPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApplicationPolicyRequestT = Model::GetApplicationPolicyRequest>
        Model::GetApplicationPolicyOutcomeCallable GetApplicationPolicyCallable(const GetApplicationPolicyRequestT& request) const
        {
            return SubmitCallable(&ServerlessApplicationRepositoryClient::GetApplicationPolicy, request);
        }

        /**
         * An Async wrapper for GetApplicationPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApplicationPolicyRequestT = Model::GetApplicationPolicyRequest>
        void GetApplicationPolicyAsync(const GetApplicationPolicyRequestT& request, const GetApplicationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServerlessApplicationRepositoryClient::GetApplicationPolicy, request, handler, context);
        }

        /**
         * <p>Gets the specified AWS CloudFormation template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/GetCloudFormationTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudFormationTemplateOutcome GetCloudFormationTemplate(const Model::GetCloudFormationTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetCloudFormationTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCloudFormationTemplateRequestT = Model::GetCloudFormationTemplateRequest>
        Model::GetCloudFormationTemplateOutcomeCallable GetCloudFormationTemplateCallable(const GetCloudFormationTemplateRequestT& request) const
        {
            return SubmitCallable(&ServerlessApplicationRepositoryClient::GetCloudFormationTemplate, request);
        }

        /**
         * An Async wrapper for GetCloudFormationTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCloudFormationTemplateRequestT = Model::GetCloudFormationTemplateRequest>
        void GetCloudFormationTemplateAsync(const GetCloudFormationTemplateRequestT& request, const GetCloudFormationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServerlessApplicationRepositoryClient::GetCloudFormationTemplate, request, handler, context);
        }

        /**
         * <p>Retrieves the list of applications nested in the containing
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ListApplicationDependencies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationDependenciesOutcome ListApplicationDependencies(const Model::ListApplicationDependenciesRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationDependencies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationDependenciesRequestT = Model::ListApplicationDependenciesRequest>
        Model::ListApplicationDependenciesOutcomeCallable ListApplicationDependenciesCallable(const ListApplicationDependenciesRequestT& request) const
        {
            return SubmitCallable(&ServerlessApplicationRepositoryClient::ListApplicationDependencies, request);
        }

        /**
         * An Async wrapper for ListApplicationDependencies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationDependenciesRequestT = Model::ListApplicationDependenciesRequest>
        void ListApplicationDependenciesAsync(const ListApplicationDependenciesRequestT& request, const ListApplicationDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServerlessApplicationRepositoryClient::ListApplicationDependencies, request, handler, context);
        }

        /**
         * <p>Lists versions for the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ListApplicationVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationVersionsOutcome ListApplicationVersions(const Model::ListApplicationVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationVersionsRequestT = Model::ListApplicationVersionsRequest>
        Model::ListApplicationVersionsOutcomeCallable ListApplicationVersionsCallable(const ListApplicationVersionsRequestT& request) const
        {
            return SubmitCallable(&ServerlessApplicationRepositoryClient::ListApplicationVersions, request);
        }

        /**
         * An Async wrapper for ListApplicationVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationVersionsRequestT = Model::ListApplicationVersionsRequest>
        void ListApplicationVersionsAsync(const ListApplicationVersionsRequestT& request, const ListApplicationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServerlessApplicationRepositoryClient::ListApplicationVersions, request, handler, context);
        }

        /**
         * <p>Lists applications owned by the requester.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const ListApplicationsRequestT& request) const
        {
            return SubmitCallable(&ServerlessApplicationRepositoryClient::ListApplications, request);
        }

        /**
         * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        void ListApplicationsAsync(const ListApplicationsRequestT& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServerlessApplicationRepositoryClient::ListApplications, request, handler, context);
        }

        /**
         * <p>Sets the permission policy for an application. For the list of actions
         * supported for this operation, see
 <a
         * href="https://docs.aws.amazon.com/serverlessrepo/latest/devguide/access-control-resource-based.html#application-permissions">Application
         * 
 Permissions</a>
 .</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/PutApplicationPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutApplicationPolicyOutcome PutApplicationPolicy(const Model::PutApplicationPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutApplicationPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutApplicationPolicyRequestT = Model::PutApplicationPolicyRequest>
        Model::PutApplicationPolicyOutcomeCallable PutApplicationPolicyCallable(const PutApplicationPolicyRequestT& request) const
        {
            return SubmitCallable(&ServerlessApplicationRepositoryClient::PutApplicationPolicy, request);
        }

        /**
         * An Async wrapper for PutApplicationPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutApplicationPolicyRequestT = Model::PutApplicationPolicyRequest>
        void PutApplicationPolicyAsync(const PutApplicationPolicyRequestT& request, const PutApplicationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServerlessApplicationRepositoryClient::PutApplicationPolicy, request, handler, context);
        }

        /**
         * <p>Unshares an application from an AWS Organization.</p><p>This operation can be
         * called only from the organization's master account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/UnshareApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UnshareApplicationOutcome UnshareApplication(const Model::UnshareApplicationRequest& request) const;

        /**
         * A Callable wrapper for UnshareApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UnshareApplicationRequestT = Model::UnshareApplicationRequest>
        Model::UnshareApplicationOutcomeCallable UnshareApplicationCallable(const UnshareApplicationRequestT& request) const
        {
            return SubmitCallable(&ServerlessApplicationRepositoryClient::UnshareApplication, request);
        }

        /**
         * An Async wrapper for UnshareApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UnshareApplicationRequestT = Model::UnshareApplicationRequest>
        void UnshareApplicationAsync(const UnshareApplicationRequestT& request, const UnshareApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServerlessApplicationRepositoryClient::UnshareApplication, request, handler, context);
        }

        /**
         * <p>Updates the specified application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const UpdateApplicationRequestT& request) const
        {
            return SubmitCallable(&ServerlessApplicationRepositoryClient::UpdateApplication, request);
        }

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        void UpdateApplicationAsync(const UpdateApplicationRequestT& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServerlessApplicationRepositoryClient::UpdateApplication, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ServerlessApplicationRepositoryEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ServerlessApplicationRepositoryClient>;
      void init(const ServerlessApplicationRepositoryClientConfiguration& clientConfiguration);

      ServerlessApplicationRepositoryClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ServerlessApplicationRepositoryEndpointProviderBase> m_endpointProvider;
  };

} // namespace ServerlessApplicationRepository
} // namespace Aws
