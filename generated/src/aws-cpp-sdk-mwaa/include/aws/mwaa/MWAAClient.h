/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mwaa/MWAAServiceClientModel.h>

namespace Aws
{
namespace MWAA
{
  /**
   * <p><fullname>Amazon Managed Workflows for Apache Airflow</fullname> <p>This
   * section contains the Amazon Managed Workflows for Apache Airflow (MWAA) API
   * reference documentation. For more information, see <a
   * href="https://docs.aws.amazon.com/mwaa/latest/userguide/what-is-mwaa.html">What
   * is Amazon MWAA?</a>.</p> <p> <b>Endpoints</b> </p> <ul> <li> <p>
   * <code>api.airflow.{region}.amazonaws.com</code> - This endpoint is used for
   * environment management.</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/mwaa/latest/API/API_CreateEnvironment.html">CreateEnvironment</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/mwaa/latest/API/API_DeleteEnvironment.html">DeleteEnvironment</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/mwaa/latest/API/API_GetEnvironment.html">GetEnvironment</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/mwaa/latest/API/API_ListEnvironments.html">ListEnvironments</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/mwaa/latest/API/API_ListTagsForResource.html">ListTagsForResource</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/mwaa/latest/API/API_TagResource.html">TagResource</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/mwaa/latest/API/API_UntagResource.html">UntagResource</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/mwaa/latest/API/API_UpdateEnvironment.html">UpdateEnvironment</a>
   * </p> </li> </ul> </li> <li> <p> <code>env.airflow.{region}.amazonaws.com</code>
   * - This endpoint is used to operate the Airflow environment.</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/mwaa/latest/API/API_CreateCliToken.html
   * ">CreateCliToken</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/mwaa/latest/API/API_CreateWebLoginToken.html">CreateWebLoginToken</a>
   * </p> </li> </ul> </li> </ul> <p> <b>Regions</b> </p> <p>For a list of supported
   * regions, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/mwaa.html">Amazon MWAA
   * endpoints and quotas</a> in the <i>Amazon Web Services General
   * Reference</i>.</p></p>
   */
  class AWS_MWAA_API MWAAClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MWAAClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MWAAClientConfiguration ClientConfigurationType;
      typedef MWAAEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MWAAClient(const Aws::MWAA::MWAAClientConfiguration& clientConfiguration = Aws::MWAA::MWAAClientConfiguration(),
                   std::shared_ptr<MWAAEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MWAAClient(const Aws::Auth::AWSCredentials& credentials,
                   std::shared_ptr<MWAAEndpointProviderBase> endpointProvider = nullptr,
                   const Aws::MWAA::MWAAClientConfiguration& clientConfiguration = Aws::MWAA::MWAAClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MWAAClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   std::shared_ptr<MWAAEndpointProviderBase> endpointProvider = nullptr,
                   const Aws::MWAA::MWAAClientConfiguration& clientConfiguration = Aws::MWAA::MWAAClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MWAAClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MWAAClient(const Aws::Auth::AWSCredentials& credentials,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MWAAClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MWAAClient();

        /**
         * <p>Creates a CLI token for the Airflow CLI. To learn more, see <a
         * href="https://docs.aws.amazon.com/mwaa/latest/userguide/call-mwaa-apis-cli.html">Creating
         * an Apache Airflow CLI token</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/CreateCliToken">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCliTokenOutcome CreateCliToken(const Model::CreateCliTokenRequest& request) const;

        /**
         * A Callable wrapper for CreateCliToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCliTokenRequestT = Model::CreateCliTokenRequest>
        Model::CreateCliTokenOutcomeCallable CreateCliTokenCallable(const CreateCliTokenRequestT& request) const
        {
            return SubmitCallable(&MWAAClient::CreateCliToken, request);
        }

        /**
         * An Async wrapper for CreateCliToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCliTokenRequestT = Model::CreateCliTokenRequest>
        void CreateCliTokenAsync(const CreateCliTokenRequestT& request, const CreateCliTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MWAAClient::CreateCliToken, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Managed Workflows for Apache Airflow (MWAA)
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/CreateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEnvironmentRequestT = Model::CreateEnvironmentRequest>
        Model::CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const CreateEnvironmentRequestT& request) const
        {
            return SubmitCallable(&MWAAClient::CreateEnvironment, request);
        }

        /**
         * An Async wrapper for CreateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEnvironmentRequestT = Model::CreateEnvironmentRequest>
        void CreateEnvironmentAsync(const CreateEnvironmentRequestT& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MWAAClient::CreateEnvironment, request, handler, context);
        }

        /**
         * <p>Creates a web login token for the Airflow Web UI. To learn more, see <a
         * href="https://docs.aws.amazon.com/mwaa/latest/userguide/call-mwaa-apis-web.html">Creating
         * an Apache Airflow web login token</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/CreateWebLoginToken">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWebLoginTokenOutcome CreateWebLoginToken(const Model::CreateWebLoginTokenRequest& request) const;

        /**
         * A Callable wrapper for CreateWebLoginToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWebLoginTokenRequestT = Model::CreateWebLoginTokenRequest>
        Model::CreateWebLoginTokenOutcomeCallable CreateWebLoginTokenCallable(const CreateWebLoginTokenRequestT& request) const
        {
            return SubmitCallable(&MWAAClient::CreateWebLoginToken, request);
        }

        /**
         * An Async wrapper for CreateWebLoginToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWebLoginTokenRequestT = Model::CreateWebLoginTokenRequest>
        void CreateWebLoginTokenAsync(const CreateWebLoginTokenRequestT& request, const CreateWebLoginTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MWAAClient::CreateWebLoginToken, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Managed Workflows for Apache Airflow (MWAA)
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/DeleteEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEnvironmentRequestT = Model::DeleteEnvironmentRequest>
        Model::DeleteEnvironmentOutcomeCallable DeleteEnvironmentCallable(const DeleteEnvironmentRequestT& request) const
        {
            return SubmitCallable(&MWAAClient::DeleteEnvironment, request);
        }

        /**
         * An Async wrapper for DeleteEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEnvironmentRequestT = Model::DeleteEnvironmentRequest>
        void DeleteEnvironmentAsync(const DeleteEnvironmentRequestT& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MWAAClient::DeleteEnvironment, request, handler, context);
        }

        /**
         * <p>Describes an Amazon Managed Workflows for Apache Airflow (MWAA)
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/GetEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentOutcome GetEnvironment(const Model::GetEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for GetEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEnvironmentRequestT = Model::GetEnvironmentRequest>
        Model::GetEnvironmentOutcomeCallable GetEnvironmentCallable(const GetEnvironmentRequestT& request) const
        {
            return SubmitCallable(&MWAAClient::GetEnvironment, request);
        }

        /**
         * An Async wrapper for GetEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEnvironmentRequestT = Model::GetEnvironmentRequest>
        void GetEnvironmentAsync(const GetEnvironmentRequestT& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MWAAClient::GetEnvironment, request, handler, context);
        }

        /**
         * <p>Lists the Amazon Managed Workflows for Apache Airflow (MWAA)
         * environments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/ListEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
        Model::ListEnvironmentsOutcomeCallable ListEnvironmentsCallable(const ListEnvironmentsRequestT& request) const
        {
            return SubmitCallable(&MWAAClient::ListEnvironments, request);
        }

        /**
         * An Async wrapper for ListEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
        void ListEnvironmentsAsync(const ListEnvironmentsRequestT& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MWAAClient::ListEnvironments, request, handler, context);
        }

        /**
         * <p>Lists the key-value tag pairs associated to the Amazon Managed Workflows for
         * Apache Airflow (MWAA) environment. For example, <code>"Environment":
         * "Staging"</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&MWAAClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MWAAClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Associates key-value tag pairs to your Amazon Managed Workflows for Apache
         * Airflow (MWAA) environment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&MWAAClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MWAAClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes key-value tag pairs associated to your Amazon Managed Workflows for
         * Apache Airflow (MWAA) environment. For example, <code>"Environment":
         * "Staging"</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&MWAAClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MWAAClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an Amazon Managed Workflows for Apache Airflow (MWAA)
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/UpdateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnvironmentOutcome UpdateEnvironment(const Model::UpdateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEnvironmentRequestT = Model::UpdateEnvironmentRequest>
        Model::UpdateEnvironmentOutcomeCallable UpdateEnvironmentCallable(const UpdateEnvironmentRequestT& request) const
        {
            return SubmitCallable(&MWAAClient::UpdateEnvironment, request);
        }

        /**
         * An Async wrapper for UpdateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEnvironmentRequestT = Model::UpdateEnvironmentRequest>
        void UpdateEnvironmentAsync(const UpdateEnvironmentRequestT& request, const UpdateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MWAAClient::UpdateEnvironment, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MWAAEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MWAAClient>;
      void init(const MWAAClientConfiguration& clientConfiguration);

      MWAAClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MWAAEndpointProviderBase> m_endpointProvider;
  };

} // namespace MWAA
} // namespace Aws
