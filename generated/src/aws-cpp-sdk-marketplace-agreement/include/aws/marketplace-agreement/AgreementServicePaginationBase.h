/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/marketplace-agreement/model/GetAgreementTermsPaginationTraits.h>
#include <aws/marketplace-agreement/model/ListAgreementCancellationRequestsPaginationTraits.h>
#include <aws/marketplace-agreement/model/ListAgreementInvoiceLineItemsPaginationTraits.h>
#include <aws/marketplace-agreement/model/ListAgreementPaymentRequestsPaginationTraits.h>
#include <aws/marketplace-agreement/model/ListBillingAdjustmentRequestsPaginationTraits.h>
#include <aws/marketplace-agreement/model/SearchAgreementsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace AgreementService {

class AgreementServiceClient;

template <typename DerivedClient>
class AgreementServicePaginationBase {
 public:
  /**
   * Create a paginator for GetAgreementTerms operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAgreementTermsRequest,
                                    Pagination::GetAgreementTermsPaginationTraits<DerivedClient>>
  GetAgreementTermsPaginator(const Model::GetAgreementTermsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAgreementTermsRequest,
                                             Pagination::GetAgreementTermsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAgreementCancellationRequests operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgreementCancellationRequestsRequest,
                                    Pagination::ListAgreementCancellationRequestsPaginationTraits<DerivedClient>>
  ListAgreementCancellationRequestsPaginator(const Model::ListAgreementCancellationRequestsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgreementCancellationRequestsRequest,
                                             Pagination::ListAgreementCancellationRequestsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAgreementInvoiceLineItems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgreementInvoiceLineItemsRequest,
                                    Pagination::ListAgreementInvoiceLineItemsPaginationTraits<DerivedClient>>
  ListAgreementInvoiceLineItemsPaginator(const Model::ListAgreementInvoiceLineItemsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgreementInvoiceLineItemsRequest,
                                             Pagination::ListAgreementInvoiceLineItemsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAgreementPaymentRequests operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgreementPaymentRequestsRequest,
                                    Pagination::ListAgreementPaymentRequestsPaginationTraits<DerivedClient>>
  ListAgreementPaymentRequestsPaginator(const Model::ListAgreementPaymentRequestsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgreementPaymentRequestsRequest,
                                             Pagination::ListAgreementPaymentRequestsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBillingAdjustmentRequests operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillingAdjustmentRequestsRequest,
                                    Pagination::ListBillingAdjustmentRequestsPaginationTraits<DerivedClient>>
  ListBillingAdjustmentRequestsPaginator(const Model::ListBillingAdjustmentRequestsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillingAdjustmentRequestsRequest,
                                             Pagination::ListBillingAdjustmentRequestsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchAgreements operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchAgreementsRequest,
                                    Pagination::SearchAgreementsPaginationTraits<DerivedClient>>
  SearchAgreementsPaginator(const Model::SearchAgreementsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchAgreementsRequest,
                                             Pagination::SearchAgreementsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace AgreementService
}  // namespace Aws
