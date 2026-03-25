/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/AgreementServicePaginationBase.h>
#include <aws/marketplace-agreement/AgreementServiceServiceClientModel.h>
#include <aws/marketplace-agreement/AgreementServiceWaiter.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

namespace Aws {
namespace AgreementService {
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
class AWS_AGREEMENTSERVICE_API AgreementServiceClient : public Aws::Client::AWSJsonClient,
                                                        public Aws::Client::ClientWithAsyncTemplateMethods<AgreementServiceClient>,
                                                        public AgreementServicePaginationBase<AgreementServiceClient>,
                                                        public AgreementServiceWaiter<AgreementServiceClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef AgreementServiceClientConfiguration ClientConfigurationType;
  typedef AgreementServiceEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  AgreementServiceClient(const Aws::AgreementService::AgreementServiceClientConfiguration& clientConfiguration =
                             Aws::AgreementService::AgreementServiceClientConfiguration(),
                         std::shared_ptr<AgreementServiceEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  AgreementServiceClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<AgreementServiceEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::AgreementService::AgreementServiceClientConfiguration& clientConfiguration =
                             Aws::AgreementService::AgreementServiceClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  AgreementServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<AgreementServiceEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::AgreementService::AgreementServiceClientConfiguration& clientConfiguration =
                             Aws::AgreementService::AgreementServiceClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  AgreementServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  AgreementServiceClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  AgreementServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~AgreementServiceClient();

  /**
   * <p>Allows sellers (proposers) to cancel a payment request that is in
   * <code>PENDING_APPROVAL</code> status. Once cancelled, the payment request
   * transitions to <code>CANCELLED</code> status and can no longer be accepted or
   * rejected by the buyer.</p>  <p>Only payment requests in
   * <code>PENDING_APPROVAL</code> status can be cancelled. A
   * <code>ConflictException</code> is thrown if the payment request is in any other
   * status.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/CancelAgreementPaymentRequest">AWS
   * API Reference</a></p>
   */
  virtual Model::CancelAgreementPaymentRequestOutcome CancelAgreementPaymentRequest(
      const Model::CancelAgreementPaymentRequestRequest& request) const;

  /**
   * A Callable wrapper for CancelAgreementPaymentRequest that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CancelAgreementPaymentRequestRequestT = Model::CancelAgreementPaymentRequestRequest>
  Model::CancelAgreementPaymentRequestOutcomeCallable CancelAgreementPaymentRequestCallable(
      const CancelAgreementPaymentRequestRequestT& request) const {
    return SubmitCallable(&AgreementServiceClient::CancelAgreementPaymentRequest, request);
  }

  /**
   * An Async wrapper for CancelAgreementPaymentRequest that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CancelAgreementPaymentRequestRequestT = Model::CancelAgreementPaymentRequestRequest>
  void CancelAgreementPaymentRequestAsync(const CancelAgreementPaymentRequestRequestT& request,
                                          const CancelAgreementPaymentRequestResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgreementServiceClient::CancelAgreementPaymentRequest, request, handler, context);
  }

  /**
   * <p>Provides details about an agreement, such as the proposer, acceptor, start
   * date, and end date.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/DescribeAgreement">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeAgreementOutcome DescribeAgreement(const Model::DescribeAgreementRequest& request) const;

  /**
   * A Callable wrapper for DescribeAgreement that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeAgreementRequestT = Model::DescribeAgreementRequest>
  Model::DescribeAgreementOutcomeCallable DescribeAgreementCallable(const DescribeAgreementRequestT& request) const {
    return SubmitCallable(&AgreementServiceClient::DescribeAgreement, request);
  }

  /**
   * An Async wrapper for DescribeAgreement that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DescribeAgreementRequestT = Model::DescribeAgreementRequest>
  void DescribeAgreementAsync(const DescribeAgreementRequestT& request, const DescribeAgreementResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgreementServiceClient::DescribeAgreement, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific payment request. Both sellers
   * (proposers) and buyers (acceptors) can use this operation to view payment
   * requests associated with their agreements. The response includes the current
   * status, charge details, timestamps, and the charge ID if the request has been
   * approved.</p>  <p>The calling identity must be either the acceptor or
   * proposer of the payment request. A <code>ResourceNotFoundException</code> is
   * returned if the payment request does not exist.</p> <p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/GetAgreementPaymentRequest">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAgreementPaymentRequestOutcome GetAgreementPaymentRequest(
      const Model::GetAgreementPaymentRequestRequest& request) const;

  /**
   * A Callable wrapper for GetAgreementPaymentRequest that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetAgreementPaymentRequestRequestT = Model::GetAgreementPaymentRequestRequest>
  Model::GetAgreementPaymentRequestOutcomeCallable GetAgreementPaymentRequestCallable(
      const GetAgreementPaymentRequestRequestT& request) const {
    return SubmitCallable(&AgreementServiceClient::GetAgreementPaymentRequest, request);
  }

  /**
   * An Async wrapper for GetAgreementPaymentRequest that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetAgreementPaymentRequestRequestT = Model::GetAgreementPaymentRequestRequest>
  void GetAgreementPaymentRequestAsync(const GetAgreementPaymentRequestRequestT& request,
                                       const GetAgreementPaymentRequestResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgreementServiceClient::GetAgreementPaymentRequest, request, handler, context);
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
   * A Callable wrapper for GetAgreementTerms that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetAgreementTermsRequestT = Model::GetAgreementTermsRequest>
  Model::GetAgreementTermsOutcomeCallable GetAgreementTermsCallable(const GetAgreementTermsRequestT& request) const {
    return SubmitCallable(&AgreementServiceClient::GetAgreementTerms, request);
  }

  /**
   * An Async wrapper for GetAgreementTerms that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetAgreementTermsRequestT = Model::GetAgreementTermsRequest>
  void GetAgreementTermsAsync(const GetAgreementTermsRequestT& request, const GetAgreementTermsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgreementServiceClient::GetAgreementTerms, request, handler, context);
  }

  /**
   * <p>Lists payment requests available to you as a seller or buyer. Both sellers
   * (proposers) and buyers (acceptors) can use this operation to find payment
   * requests by specifying their party type and applying optional parameters.</p>
   *  <p> <code>PartyType</code> is a required parameter. A
   * <code>ValidationException</code> is returned if <code>PartyType</code> is not
   * provided. Pagination is supported through <code>maxResults</code> (1-50, default
   * 50) and <code>nextToken</code> parameters.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/ListAgreementPaymentRequests">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAgreementPaymentRequestsOutcome ListAgreementPaymentRequests(
      const Model::ListAgreementPaymentRequestsRequest& request) const;

  /**
   * A Callable wrapper for ListAgreementPaymentRequests that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListAgreementPaymentRequestsRequestT = Model::ListAgreementPaymentRequestsRequest>
  Model::ListAgreementPaymentRequestsOutcomeCallable ListAgreementPaymentRequestsCallable(
      const ListAgreementPaymentRequestsRequestT& request) const {
    return SubmitCallable(&AgreementServiceClient::ListAgreementPaymentRequests, request);
  }

  /**
   * An Async wrapper for ListAgreementPaymentRequests that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListAgreementPaymentRequestsRequestT = Model::ListAgreementPaymentRequestsRequest>
  void ListAgreementPaymentRequestsAsync(const ListAgreementPaymentRequestsRequestT& request,
                                         const ListAgreementPaymentRequestsResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgreementServiceClient::ListAgreementPaymentRequests, request, handler, context);
  }

  /**
   * <p>Searches across all agreements that a proposer has in AWS Marketplace. The
   * search returns a list of agreements with basic agreement information.</p> <p>The
   * following filter combinations are supported when the <code>PartyType</code> is
   * <code>Proposer</code>:</p> <ul> <li> <p> <code>AgreementType</code> </p> </li>
   * <li> <p> <code>AgreementType</code> + <code>EndTime</code> </p> </li> <li> <p>
   * <code>AgreementType</code> + <code>ResourceType</code> </p> </li> <li> <p>
   * <code>AgreementType</code> + <code>ResourceType</code> + <code>EndTime</code>
   * </p> </li> <li> <p> <code>AgreementType</code> + <code>ResourceType</code> +
   * <code>Status</code> </p> </li> <li> <p> <code>AgreementType</code> +
   * <code>ResourceType</code> + <code>Status</code> + <code>EndTime</code> </p>
   * </li> <li> <p> <code>AgreementType</code> + <code>ResourceId</code> </p> </li>
   * <li> <p> <code>AgreementType</code> + <code>ResourceId</code> +
   * <code>EndTime</code> </p> </li> <li> <p> <code>AgreementType</code> +
   * <code>ResourceId</code> + <code>Status</code> </p> </li> <li> <p>
   * <code>AgreementType</code> + <code>ResourceId</code> + <code>Status</code> +
   * <code>EndTime</code> </p> </li> <li> <p> <code>AgreementType</code> +
   * <code>AcceptorAccountId</code> </p> </li> <li> <p> <code>AgreementType</code> +
   * <code>AcceptorAccountId</code> + <code>EndTime</code> </p> </li> <li> <p>
   * <code>AgreementType</code> + <code>AcceptorAccountId</code> +
   * <code>Status</code> </p> </li> <li> <p> <code>AgreementType</code> +
   * <code>AcceptorAccountId</code> + <code>Status</code> + <code>EndTime</code> </p>
   * </li> <li> <p> <code>AgreementType</code> + <code>AcceptorAccountId</code> +
   * <code>OfferId</code> </p> </li> <li> <p> <code>AgreementType</code> +
   * <code>AcceptorAccountId</code> + <code>OfferId</code> + <code>Status</code> </p>
   * </li> <li> <p> <code>AgreementType</code> + <code>AcceptorAccountId</code> +
   * <code>OfferId</code> + <code>EndTime</code> </p> </li> <li> <p>
   * <code>AgreementType</code> + <code>AcceptorAccountId</code> +
   * <code>OfferId</code> + <code>Status</code> + <code>EndTime</code> </p> </li>
   * <li> <p> <code>AgreementType</code> + <code>AcceptorAccountId</code> +
   * <code>ResourceId</code> </p> </li> <li> <p> <code>AgreementType</code> +
   * <code>AcceptorAccountId</code> + <code>ResourceId</code> + <code>Status</code>
   * </p> </li> <li> <p> <code>AgreementType</code> + <code>AcceptorAccountId</code>
   * + <code>ResourceId</code> + <code>EndTime</code> </p> </li> <li> <p>
   * <code>AgreementType</code> + <code>AcceptorAccountId</code> +
   * <code>ResourceId</code> + <code>Status</code> + <code>EndTime</code> </p> </li>
   * <li> <p> <code>AgreementType</code> + <code>AcceptorAccountId</code> +
   * <code>ResourceType</code> </p> </li> <li> <p> <code>AgreementType</code> +
   * <code>AcceptorAccountId</code> + <code>ResourceType</code> +
   * <code>EndTime</code> </p> </li> <li> <p> <code>AgreementType</code> +
   * <code>AcceptorAccountId</code> + <code>ResourceType</code> + <code>Status</code>
   * </p> </li> <li> <p> <code>AgreementType</code> + <code>AcceptorAccountId</code>
   * + <code>ResourceType</code> + <code>Status</code> + <code>EndTime</code> </p>
   * </li> <li> <p> <code>AgreementType</code> + <code>Status</code> </p> </li> <li>
   * <p> <code>AgreementType</code> + <code>Status</code> + <code>EndTime</code> </p>
   * </li> <li> <p> <code>AgreementType</code> + <code>OfferId</code> </p> </li> <li>
   * <p> <code>AgreementType</code> + <code>OfferId</code> + <code>EndTime</code>
   * </p> </li> <li> <p> <code>AgreementType</code> + <code>OfferId</code> +
   * <code>Status</code> </p> </li> <li> <p> <code>AgreementType</code> +
   * <code>OfferId</code> + <code>Status</code> + <code>EndTime</code> </p> </li>
   * <li> <p> <code>AgreementType</code> + <code>OfferSetId</code> </p> </li> <li>
   * <p> <code>AgreementType</code> + <code>OfferSetId</code> + <code>EndTime</code>
   * </p> </li> <li> <p> <code>AgreementType</code> + <code>OfferSetId</code> +
   * <code>Status</code> </p> </li> <li> <p> <code>AgreementType</code> +
   * <code>OfferSetId</code> + <code>Status</code> + <code>EndTime</code> </p> </li>
   * </ul>  <p> To filter by <code>EndTime</code>, you can use either
   * <code>BeforeEndTime</code> or <code>AfterEndTime</code>. Only
   * <code>EndTime</code> is supported for sorting.</p> <p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/SearchAgreements">AWS
   * API Reference</a></p>
   */
  virtual Model::SearchAgreementsOutcome SearchAgreements(const Model::SearchAgreementsRequest& request = {}) const;

  /**
   * A Callable wrapper for SearchAgreements that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename SearchAgreementsRequestT = Model::SearchAgreementsRequest>
  Model::SearchAgreementsOutcomeCallable SearchAgreementsCallable(const SearchAgreementsRequestT& request = {}) const {
    return SubmitCallable(&AgreementServiceClient::SearchAgreements, request);
  }

  /**
   * An Async wrapper for SearchAgreements that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename SearchAgreementsRequestT = Model::SearchAgreementsRequest>
  void SearchAgreementsAsync(const SearchAgreementsResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const SearchAgreementsRequestT& request = {}) const {
    return SubmitAsync(&AgreementServiceClient::SearchAgreements, request, handler, context);
  }

  /**
   * <p>Allows sellers (proposers) to submit a payment request to buyers (acceptors)
   * for a specific charge amount for an agreement that includes a
   * <code>VariablePaymentTerm</code>. The payment request is created in
   * <code>PENDING_APPROVAL</code> status, at which point the buyer can accept or
   * reject it.</p>  <p>The agreement must be active and have a
   * <code>VariablePaymentTerm</code> to support payment requests. The
   * <code>chargeAmount</code> must not exceed the remaining available balance under
   * the <code>VariablePaymentTerm</code> <code>maxTotalChargeAmount</code>.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/SendAgreementPaymentRequest">AWS
   * API Reference</a></p>
   */
  virtual Model::SendAgreementPaymentRequestOutcome SendAgreementPaymentRequest(
      const Model::SendAgreementPaymentRequestRequest& request) const;

  /**
   * A Callable wrapper for SendAgreementPaymentRequest that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename SendAgreementPaymentRequestRequestT = Model::SendAgreementPaymentRequestRequest>
  Model::SendAgreementPaymentRequestOutcomeCallable SendAgreementPaymentRequestCallable(
      const SendAgreementPaymentRequestRequestT& request) const {
    return SubmitCallable(&AgreementServiceClient::SendAgreementPaymentRequest, request);
  }

  /**
   * An Async wrapper for SendAgreementPaymentRequest that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename SendAgreementPaymentRequestRequestT = Model::SendAgreementPaymentRequestRequest>
  void SendAgreementPaymentRequestAsync(const SendAgreementPaymentRequestRequestT& request,
                                        const SendAgreementPaymentRequestResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&AgreementServiceClient::SendAgreementPaymentRequest, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<AgreementServiceEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<AgreementServiceClient>;
  void init(const AgreementServiceClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, AgreementServiceError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const;

  AgreementServiceClientConfiguration m_clientConfiguration;
  std::shared_ptr<AgreementServiceEndpointProviderBase> m_endpointProvider;
};

}  // namespace AgreementService
}  // namespace Aws
