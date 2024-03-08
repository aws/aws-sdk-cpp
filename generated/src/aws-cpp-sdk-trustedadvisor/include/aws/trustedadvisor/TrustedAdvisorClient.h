/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/trustedadvisor/TrustedAdvisorServiceClientModel.h>

namespace Aws
{
namespace TrustedAdvisor
{
  /**
   * <p>TrustedAdvisor Public API</p>
   */
  class AWS_TRUSTEDADVISOR_API TrustedAdvisorClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<TrustedAdvisorClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef TrustedAdvisorClientConfiguration ClientConfigurationType;
      typedef TrustedAdvisorEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TrustedAdvisorClient(const Aws::TrustedAdvisor::TrustedAdvisorClientConfiguration& clientConfiguration = Aws::TrustedAdvisor::TrustedAdvisorClientConfiguration(),
                             std::shared_ptr<TrustedAdvisorEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TrustedAdvisorClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<TrustedAdvisorEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::TrustedAdvisor::TrustedAdvisorClientConfiguration& clientConfiguration = Aws::TrustedAdvisor::TrustedAdvisorClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TrustedAdvisorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<TrustedAdvisorEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::TrustedAdvisor::TrustedAdvisorClientConfiguration& clientConfiguration = Aws::TrustedAdvisor::TrustedAdvisorClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TrustedAdvisorClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TrustedAdvisorClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TrustedAdvisorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~TrustedAdvisorClient();

        /**
         * <p>Get a specific recommendation within an AWS Organizations organization. This
         * API supports only prioritized recommendations. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/GetOrganizationRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOrganizationRecommendationOutcome GetOrganizationRecommendation(const Model::GetOrganizationRecommendationRequest& request) const;

        /**
         * A Callable wrapper for GetOrganizationRecommendation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOrganizationRecommendationRequestT = Model::GetOrganizationRecommendationRequest>
        Model::GetOrganizationRecommendationOutcomeCallable GetOrganizationRecommendationCallable(const GetOrganizationRecommendationRequestT& request) const
        {
            return SubmitCallable(&TrustedAdvisorClient::GetOrganizationRecommendation, request);
        }

        /**
         * An Async wrapper for GetOrganizationRecommendation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOrganizationRecommendationRequestT = Model::GetOrganizationRecommendationRequest>
        void GetOrganizationRecommendationAsync(const GetOrganizationRecommendationRequestT& request, const GetOrganizationRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TrustedAdvisorClient::GetOrganizationRecommendation, request, handler, context);
        }

        /**
         * <p>Get a specific Recommendation</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/GetRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecommendationOutcome GetRecommendation(const Model::GetRecommendationRequest& request) const;

        /**
         * A Callable wrapper for GetRecommendation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRecommendationRequestT = Model::GetRecommendationRequest>
        Model::GetRecommendationOutcomeCallable GetRecommendationCallable(const GetRecommendationRequestT& request) const
        {
            return SubmitCallable(&TrustedAdvisorClient::GetRecommendation, request);
        }

        /**
         * An Async wrapper for GetRecommendation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRecommendationRequestT = Model::GetRecommendationRequest>
        void GetRecommendationAsync(const GetRecommendationRequestT& request, const GetRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TrustedAdvisorClient::GetRecommendation, request, handler, context);
        }

        /**
         * <p>List a filterable set of Checks</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/ListChecks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChecksOutcome ListChecks(const Model::ListChecksRequest& request) const;

        /**
         * A Callable wrapper for ListChecks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChecksRequestT = Model::ListChecksRequest>
        Model::ListChecksOutcomeCallable ListChecksCallable(const ListChecksRequestT& request) const
        {
            return SubmitCallable(&TrustedAdvisorClient::ListChecks, request);
        }

        /**
         * An Async wrapper for ListChecks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChecksRequestT = Model::ListChecksRequest>
        void ListChecksAsync(const ListChecksRequestT& request, const ListChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TrustedAdvisorClient::ListChecks, request, handler, context);
        }

        /**
         * <p>Lists the accounts that own the resources for an organization aggregate
         * recommendation. This API only supports prioritized recommendations.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/ListOrganizationRecommendationAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationRecommendationAccountsOutcome ListOrganizationRecommendationAccounts(const Model::ListOrganizationRecommendationAccountsRequest& request) const;

        /**
         * A Callable wrapper for ListOrganizationRecommendationAccounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOrganizationRecommendationAccountsRequestT = Model::ListOrganizationRecommendationAccountsRequest>
        Model::ListOrganizationRecommendationAccountsOutcomeCallable ListOrganizationRecommendationAccountsCallable(const ListOrganizationRecommendationAccountsRequestT& request) const
        {
            return SubmitCallable(&TrustedAdvisorClient::ListOrganizationRecommendationAccounts, request);
        }

        /**
         * An Async wrapper for ListOrganizationRecommendationAccounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOrganizationRecommendationAccountsRequestT = Model::ListOrganizationRecommendationAccountsRequest>
        void ListOrganizationRecommendationAccountsAsync(const ListOrganizationRecommendationAccountsRequestT& request, const ListOrganizationRecommendationAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TrustedAdvisorClient::ListOrganizationRecommendationAccounts, request, handler, context);
        }

        /**
         * <p>List Resources of a Recommendation within an Organization. This API only
         * supports prioritized recommendations. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/ListOrganizationRecommendationResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationRecommendationResourcesOutcome ListOrganizationRecommendationResources(const Model::ListOrganizationRecommendationResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListOrganizationRecommendationResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOrganizationRecommendationResourcesRequestT = Model::ListOrganizationRecommendationResourcesRequest>
        Model::ListOrganizationRecommendationResourcesOutcomeCallable ListOrganizationRecommendationResourcesCallable(const ListOrganizationRecommendationResourcesRequestT& request) const
        {
            return SubmitCallable(&TrustedAdvisorClient::ListOrganizationRecommendationResources, request);
        }

        /**
         * An Async wrapper for ListOrganizationRecommendationResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOrganizationRecommendationResourcesRequestT = Model::ListOrganizationRecommendationResourcesRequest>
        void ListOrganizationRecommendationResourcesAsync(const ListOrganizationRecommendationResourcesRequestT& request, const ListOrganizationRecommendationResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TrustedAdvisorClient::ListOrganizationRecommendationResources, request, handler, context);
        }

        /**
         * <p>List a filterable set of Recommendations within an Organization. This API
         * only supports prioritized recommendations. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/ListOrganizationRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationRecommendationsOutcome ListOrganizationRecommendations(const Model::ListOrganizationRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ListOrganizationRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOrganizationRecommendationsRequestT = Model::ListOrganizationRecommendationsRequest>
        Model::ListOrganizationRecommendationsOutcomeCallable ListOrganizationRecommendationsCallable(const ListOrganizationRecommendationsRequestT& request) const
        {
            return SubmitCallable(&TrustedAdvisorClient::ListOrganizationRecommendations, request);
        }

        /**
         * An Async wrapper for ListOrganizationRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOrganizationRecommendationsRequestT = Model::ListOrganizationRecommendationsRequest>
        void ListOrganizationRecommendationsAsync(const ListOrganizationRecommendationsRequestT& request, const ListOrganizationRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TrustedAdvisorClient::ListOrganizationRecommendations, request, handler, context);
        }

        /**
         * <p>List Resources of a Recommendation</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/ListRecommendationResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecommendationResourcesOutcome ListRecommendationResources(const Model::ListRecommendationResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListRecommendationResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRecommendationResourcesRequestT = Model::ListRecommendationResourcesRequest>
        Model::ListRecommendationResourcesOutcomeCallable ListRecommendationResourcesCallable(const ListRecommendationResourcesRequestT& request) const
        {
            return SubmitCallable(&TrustedAdvisorClient::ListRecommendationResources, request);
        }

        /**
         * An Async wrapper for ListRecommendationResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRecommendationResourcesRequestT = Model::ListRecommendationResourcesRequest>
        void ListRecommendationResourcesAsync(const ListRecommendationResourcesRequestT& request, const ListRecommendationResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TrustedAdvisorClient::ListRecommendationResources, request, handler, context);
        }

        /**
         * <p>List a filterable set of Recommendations</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/ListRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecommendationsOutcome ListRecommendations(const Model::ListRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ListRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRecommendationsRequestT = Model::ListRecommendationsRequest>
        Model::ListRecommendationsOutcomeCallable ListRecommendationsCallable(const ListRecommendationsRequestT& request) const
        {
            return SubmitCallable(&TrustedAdvisorClient::ListRecommendations, request);
        }

        /**
         * An Async wrapper for ListRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRecommendationsRequestT = Model::ListRecommendationsRequest>
        void ListRecommendationsAsync(const ListRecommendationsRequestT& request, const ListRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TrustedAdvisorClient::ListRecommendations, request, handler, context);
        }

        /**
         * <p>Update the lifecyle of a Recommendation within an Organization. This API only
         * supports prioritized recommendations. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/UpdateOrganizationRecommendationLifecycle">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOrganizationRecommendationLifecycleOutcome UpdateOrganizationRecommendationLifecycle(const Model::UpdateOrganizationRecommendationLifecycleRequest& request) const;

        /**
         * A Callable wrapper for UpdateOrganizationRecommendationLifecycle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateOrganizationRecommendationLifecycleRequestT = Model::UpdateOrganizationRecommendationLifecycleRequest>
        Model::UpdateOrganizationRecommendationLifecycleOutcomeCallable UpdateOrganizationRecommendationLifecycleCallable(const UpdateOrganizationRecommendationLifecycleRequestT& request) const
        {
            return SubmitCallable(&TrustedAdvisorClient::UpdateOrganizationRecommendationLifecycle, request);
        }

        /**
         * An Async wrapper for UpdateOrganizationRecommendationLifecycle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateOrganizationRecommendationLifecycleRequestT = Model::UpdateOrganizationRecommendationLifecycleRequest>
        void UpdateOrganizationRecommendationLifecycleAsync(const UpdateOrganizationRecommendationLifecycleRequestT& request, const UpdateOrganizationRecommendationLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TrustedAdvisorClient::UpdateOrganizationRecommendationLifecycle, request, handler, context);
        }

        /**
         * <p>Update the lifecyle of a Recommendation. This API only supports prioritized
         * recommendations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/UpdateRecommendationLifecycle">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRecommendationLifecycleOutcome UpdateRecommendationLifecycle(const Model::UpdateRecommendationLifecycleRequest& request) const;

        /**
         * A Callable wrapper for UpdateRecommendationLifecycle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRecommendationLifecycleRequestT = Model::UpdateRecommendationLifecycleRequest>
        Model::UpdateRecommendationLifecycleOutcomeCallable UpdateRecommendationLifecycleCallable(const UpdateRecommendationLifecycleRequestT& request) const
        {
            return SubmitCallable(&TrustedAdvisorClient::UpdateRecommendationLifecycle, request);
        }

        /**
         * An Async wrapper for UpdateRecommendationLifecycle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRecommendationLifecycleRequestT = Model::UpdateRecommendationLifecycleRequest>
        void UpdateRecommendationLifecycleAsync(const UpdateRecommendationLifecycleRequestT& request, const UpdateRecommendationLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TrustedAdvisorClient::UpdateRecommendationLifecycle, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<TrustedAdvisorEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<TrustedAdvisorClient>;
      void init(const TrustedAdvisorClientConfiguration& clientConfiguration);

      TrustedAdvisorClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<TrustedAdvisorEndpointProviderBase> m_endpointProvider;
  };

} // namespace TrustedAdvisor
} // namespace Aws
