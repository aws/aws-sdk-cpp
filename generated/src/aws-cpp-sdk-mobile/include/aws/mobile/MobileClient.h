/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mobile/MobileServiceClientModel.h>

namespace Aws
{
namespace Mobile
{
  /**
   * <p> AWS Mobile Service provides mobile app and website developers with
   * capabilities required to configure AWS resources and bootstrap their developer
   * desktop projects with the necessary SDKs, constants, tools and samples to make
   * use of those resources. </p>
   */
  class AWS_MOBILE_API MobileClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MobileClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MobileClientConfiguration ClientConfigurationType;
      typedef MobileEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MobileClient(const Aws::Mobile::MobileClientConfiguration& clientConfiguration = Aws::Mobile::MobileClientConfiguration(),
                     std::shared_ptr<MobileEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MobileClient(const Aws::Auth::AWSCredentials& credentials,
                     std::shared_ptr<MobileEndpointProviderBase> endpointProvider = nullptr,
                     const Aws::Mobile::MobileClientConfiguration& clientConfiguration = Aws::Mobile::MobileClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MobileClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<MobileEndpointProviderBase> endpointProvider = nullptr,
                     const Aws::Mobile::MobileClientConfiguration& clientConfiguration = Aws::Mobile::MobileClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MobileClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MobileClient(const Aws::Auth::AWSCredentials& credentials,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MobileClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MobileClient();

        /**
         * <p> Creates an AWS Mobile Hub project. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

        /**
         * A Callable wrapper for CreateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        Model::CreateProjectOutcomeCallable CreateProjectCallable(const CreateProjectRequestT& request) const
        {
            return SubmitCallable(&MobileClient::CreateProject, request);
        }

        /**
         * An Async wrapper for CreateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        void CreateProjectAsync(const CreateProjectRequestT& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MobileClient::CreateProject, request, handler, context);
        }

        /**
         * <p> Delets a project in AWS Mobile Hub. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;

        /**
         * A Callable wrapper for DeleteProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const DeleteProjectRequestT& request) const
        {
            return SubmitCallable(&MobileClient::DeleteProject, request);
        }

        /**
         * An Async wrapper for DeleteProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        void DeleteProjectAsync(const DeleteProjectRequestT& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MobileClient::DeleteProject, request, handler, context);
        }

        /**
         * <p> Get the bundle details for the requested bundle id. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/DescribeBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBundleOutcome DescribeBundle(const Model::DescribeBundleRequest& request) const;

        /**
         * A Callable wrapper for DescribeBundle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBundleRequestT = Model::DescribeBundleRequest>
        Model::DescribeBundleOutcomeCallable DescribeBundleCallable(const DescribeBundleRequestT& request) const
        {
            return SubmitCallable(&MobileClient::DescribeBundle, request);
        }

        /**
         * An Async wrapper for DescribeBundle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBundleRequestT = Model::DescribeBundleRequest>
        void DescribeBundleAsync(const DescribeBundleRequestT& request, const DescribeBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MobileClient::DescribeBundle, request, handler, context);
        }

        /**
         * <p> Gets details about a project in AWS Mobile Hub. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/DescribeProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest& request) const;

        /**
         * A Callable wrapper for DescribeProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeProjectRequestT = Model::DescribeProjectRequest>
        Model::DescribeProjectOutcomeCallable DescribeProjectCallable(const DescribeProjectRequestT& request) const
        {
            return SubmitCallable(&MobileClient::DescribeProject, request);
        }

        /**
         * An Async wrapper for DescribeProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProjectRequestT = Model::DescribeProjectRequest>
        void DescribeProjectAsync(const DescribeProjectRequestT& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MobileClient::DescribeProject, request, handler, context);
        }

        /**
         * <p> Generates customized software development kit (SDK) and or tool packages
         * used to integrate mobile web or mobile app clients with backend AWS resources.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ExportBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportBundleOutcome ExportBundle(const Model::ExportBundleRequest& request) const;

        /**
         * A Callable wrapper for ExportBundle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportBundleRequestT = Model::ExportBundleRequest>
        Model::ExportBundleOutcomeCallable ExportBundleCallable(const ExportBundleRequestT& request) const
        {
            return SubmitCallable(&MobileClient::ExportBundle, request);
        }

        /**
         * An Async wrapper for ExportBundle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportBundleRequestT = Model::ExportBundleRequest>
        void ExportBundleAsync(const ExportBundleRequestT& request, const ExportBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MobileClient::ExportBundle, request, handler, context);
        }

        /**
         * <p> Exports project configuration to a snapshot which can be downloaded and
         * shared. Note that mobile app push credentials are encrypted in exported
         * projects, so they can only be shared successfully within the same AWS account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ExportProject">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportProjectOutcome ExportProject(const Model::ExportProjectRequest& request) const;

        /**
         * A Callable wrapper for ExportProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportProjectRequestT = Model::ExportProjectRequest>
        Model::ExportProjectOutcomeCallable ExportProjectCallable(const ExportProjectRequestT& request) const
        {
            return SubmitCallable(&MobileClient::ExportProject, request);
        }

        /**
         * An Async wrapper for ExportProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportProjectRequestT = Model::ExportProjectRequest>
        void ExportProjectAsync(const ExportProjectRequestT& request, const ExportProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MobileClient::ExportProject, request, handler, context);
        }

        /**
         * <p> List all available bundles. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ListBundles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBundlesOutcome ListBundles(const Model::ListBundlesRequest& request) const;

        /**
         * A Callable wrapper for ListBundles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBundlesRequestT = Model::ListBundlesRequest>
        Model::ListBundlesOutcomeCallable ListBundlesCallable(const ListBundlesRequestT& request) const
        {
            return SubmitCallable(&MobileClient::ListBundles, request);
        }

        /**
         * An Async wrapper for ListBundles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBundlesRequestT = Model::ListBundlesRequest>
        void ListBundlesAsync(const ListBundlesRequestT& request, const ListBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MobileClient::ListBundles, request, handler, context);
        }

        /**
         * <p> Lists projects in AWS Mobile Hub. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;

        /**
         * A Callable wrapper for ListProjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProjectsRequestT = Model::ListProjectsRequest>
        Model::ListProjectsOutcomeCallable ListProjectsCallable(const ListProjectsRequestT& request) const
        {
            return SubmitCallable(&MobileClient::ListProjects, request);
        }

        /**
         * An Async wrapper for ListProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProjectsRequestT = Model::ListProjectsRequest>
        void ListProjectsAsync(const ListProjectsRequestT& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MobileClient::ListProjects, request, handler, context);
        }

        /**
         * <p> Update an existing project. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;

        /**
         * A Callable wrapper for UpdateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProjectRequestT = Model::UpdateProjectRequest>
        Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const UpdateProjectRequestT& request) const
        {
            return SubmitCallable(&MobileClient::UpdateProject, request);
        }

        /**
         * An Async wrapper for UpdateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProjectRequestT = Model::UpdateProjectRequest>
        void UpdateProjectAsync(const UpdateProjectRequestT& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MobileClient::UpdateProject, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MobileEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MobileClient>;
      void init(const MobileClientConfiguration& clientConfiguration);

      MobileClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MobileEndpointProviderBase> m_endpointProvider;
  };

} // namespace Mobile
} // namespace Aws
