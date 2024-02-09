/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/AgreementServiceServiceClientModel.h>

namespace Aws
{
namespace AgreementService
{
  /**
   * <p>AWS Marketplace is a curated digital catalog that customers can use to find,
   * buy, deploy, and manage third-party software, data, and services to build
   * solutions and run their businesses. The AWS Marketplace Agreement Service
   * provides an API interface that helps AWS Marketplace sellers manage their
   * product-related agreements, including listing, searching, and filtering
   * agreements.</p> <p>To manage agreements in AWS Marketplace, you must ensure that
   * your AWS Identity and Access Management (IAM) policies and roles are set up. The
   * user must have the required policies/permissions that allow them to carry out
   * the actions in AWS:</p> <ul> <li> <p> <code>DescribeAgreement</code> – Grants
   * permission to users to obtain detailed meta data about any of their
   * agreements.</p> </li> <li> <p> <code>GetAgreementTerms</code> – Grants
   * permission to users to obtain details about the terms of an agreement.</p> </li>
   * <li> <p> <code>SearchAgreements</code> – Grants permission to users to search
   * through all their agreements.</p> </li> </ul>
   */
  class AWS_AGREEMENTSERVICE_API AgreementServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AgreementServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef AgreementServiceClientConfiguration ClientConfigurationType;
      typedef AgreementServiceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AgreementServiceClient(const Aws::AgreementService::AgreementServiceClientConfiguration& clientConfiguration = Aws::AgreementService::AgreementServiceClientConfiguration(),
                               std::shared_ptr<AgreementServiceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AgreementServiceClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<AgreementServiceEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::AgreementService::AgreementServiceClientConfiguration& clientConfiguration = Aws::AgreementService::AgreementServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AgreementServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<AgreementServiceEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::AgreementService::AgreementServiceClientConfiguration& clientConfiguration = Aws::AgreementService::AgreementServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AgreementServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AgreementServiceClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AgreementServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AgreementServiceClient();

        /**
         * <p>Provides details about an agreement, such as the proposer, acceptor, start
         * date, and end date.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/DescribeAgreement">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAgreementOutcome DescribeAgreement(const Model::DescribeAgreementRequest& request) const;

        /**
         * A Callable wrapper for DescribeAgreement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAgreementRequestT = Model::DescribeAgreementRequest>
        Model::DescribeAgreementOutcomeCallable DescribeAgreementCallable(const DescribeAgreementRequestT& request) const
        {
            return SubmitCallable(&AgreementServiceClient::DescribeAgreement, request);
        }

        /**
         * An Async wrapper for DescribeAgreement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAgreementRequestT = Model::DescribeAgreementRequest>
        void DescribeAgreementAsync(const DescribeAgreementRequestT& request, const DescribeAgreementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AgreementServiceClient::DescribeAgreement, request, handler, context);
        }

        /**
         * <p>Obtains details about the terms in an agreement that you participated in as
         * proposer or acceptor.</p> <p>The details include:</p> <ul> <li> <p>
         * <code>TermType</code> – The type of term, such as <code>LegalTerm</code>,
         * <code>RenewalTerm</code>, or <code>ConfigurableUpfrontPricingTerm</code>.</p>
         * </li> <li> <p> <code>TermID</code> – The ID of the particular term, which is
         * common between offer and agreement.</p> </li> <li> <p> <code>TermPayload</code>
         * – The key information contained in the term, such as the EULA for
         * <code>LegalTerm</code> or pricing and dimensions for various pricing terms, such
         * as <code>ConfigurableUpfrontPricingTerm</code> or
         * <code>UsageBasedPricingTerm</code>.</p> </li> </ul> <ul> <li> <p>
         * <code>Configuration</code> – The buyer/acceptor's selection at the time of
         * agreement creation, such as the number of units purchased for a dimension or
         * setting the <code>EnableAutoRenew</code> flag.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/GetAgreementTerms">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAgreementTermsOutcome GetAgreementTerms(const Model::GetAgreementTermsRequest& request) const;

        /**
         * A Callable wrapper for GetAgreementTerms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAgreementTermsRequestT = Model::GetAgreementTermsRequest>
        Model::GetAgreementTermsOutcomeCallable GetAgreementTermsCallable(const GetAgreementTermsRequestT& request) const
        {
            return SubmitCallable(&AgreementServiceClient::GetAgreementTerms, request);
        }

        /**
         * An Async wrapper for GetAgreementTerms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAgreementTermsRequestT = Model::GetAgreementTermsRequest>
        void GetAgreementTermsAsync(const GetAgreementTermsRequestT& request, const GetAgreementTermsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AgreementServiceClient::GetAgreementTerms, request, handler, context);
        }

        /**
         * <p>Searches across all agreements that a proposer or an acceptor has in AWS
         * Marketplace. The search returns a list of agreements with basic agreement
         * information.</p> <p>The following filter combinations are supported:</p> <ul>
         * <li> <p> <code>PartyType</code> as <code>Proposer</code> +
         * <code>AgreementType</code> + <code>ResourceIdentifier</code> </p> </li> <li> <p>
         * <code>PartyType</code> as <code>Proposer</code> + <code>AgreementType</code> +
         * <code>OfferId</code> </p> </li> <li> <p> <code>PartyType</code> as
         * <code>Proposer</code> + <code>AgreementType</code> +
         * <code>AcceptorAccountId</code> </p> </li> <li> <p> <code>PartyType</code> as
         * <code>Proposer</code> + <code>AgreementType</code> + <code>Status</code> </p>
         * </li> <li> <p> <code>PartyType</code> as <code>Proposer</code> +
         * <code>AgreementType</code> + <code>ResourceIdentifier</code> +
         * <code>Status</code> </p> </li> <li> <p> <code>PartyType</code> as
         * <code>Proposer</code> + <code>AgreementType</code> + <code>OfferId</code> +
         * <code>Status</code> </p> </li> <li> <p> <code>PartyType</code> as
         * <code>Proposer</code> + <code>AgreementType</code> +
         * <code>AcceptorAccountId</code> + <code>Status</code> </p> </li> <li> <p>
         * <code>PartyType</code> as <code>Proposer</code> + <code>AgreementType</code> +
         * <code>ResourceType</code> + <code>Status</code> </p> </li> <li> <p>
         * <code>PartyType</code> as <code>Proposer</code> + <code>AgreementType</code> +
         * <code>AcceptorAccountId</code> + <code>ResourceType</code> + <code>Status</code>
         * </p> </li> <li> <p> <code>PartyType</code> as <code>Proposer</code> +
         * <code>AgreementType</code> + <code>AcceptorAccountId</code> +
         * <code>OfferId</code> </p> </li> <li> <p> <code>PartyType</code> as
         * <code>Proposer</code> + <code>AgreementType</code> +
         * <code>AcceptorAccountId</code> + <code>OfferId</code> + <code>Status</code> </p>
         * </li> <li> <p> <code>PartyType</code> as <code>Proposer</code> +
         * <code>AgreementType</code> + <code>AcceptorAccountId</code> +
         * <code>ResourceIdentifier</code> </p> </li> <li> <p> <code>PartyType</code> as
         * <code>Proposer</code> + <code>AgreementType</code> +
         * <code>AcceptorAccountId</code> + <code>ResourceIdentifier</code> +
         * <code>Status</code> </p> </li> <li> <p> <code>PartyType</code> as
         * <code>Proposer</code> + <code>AgreementType</code> +
         * <code>AcceptorAccountId</code> + <code>ResourceType</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/SearchAgreements">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchAgreementsOutcome SearchAgreements(const Model::SearchAgreementsRequest& request) const;

        /**
         * A Callable wrapper for SearchAgreements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchAgreementsRequestT = Model::SearchAgreementsRequest>
        Model::SearchAgreementsOutcomeCallable SearchAgreementsCallable(const SearchAgreementsRequestT& request) const
        {
            return SubmitCallable(&AgreementServiceClient::SearchAgreements, request);
        }

        /**
         * An Async wrapper for SearchAgreements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchAgreementsRequestT = Model::SearchAgreementsRequest>
        void SearchAgreementsAsync(const SearchAgreementsRequestT& request, const SearchAgreementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&AgreementServiceClient::SearchAgreements, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AgreementServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AgreementServiceClient>;
      void init(const AgreementServiceClientConfiguration& clientConfiguration);

      AgreementServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AgreementServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace AgreementService
} // namespace Aws
