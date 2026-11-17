/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/marketplace-agreement/model/GetAgreementEntitlementsPaginationTraits.h>
#include <aws/marketplace-agreement/model/GetAgreementRequestApprovalPlansPaginationTraits.h>
#include <aws/marketplace-agreement/model/GetAgreementRequestTermsPaginationTraits.h>
#include <aws/marketplace-agreement/model/GetAgreementTermsPaginationTraits.h>
#include <aws/marketplace-agreement/model/ListAgreementApprovalsPaginationTraits.h>
#include <aws/marketplace-agreement/model/ListAgreementCancellationRequestsPaginationTraits.h>
#include <aws/marketplace-agreement/model/ListAgreementChargesPaginationTraits.h>
#include <aws/marketplace-agreement/model/ListAgreementInvoiceLineItemsPaginationTraits.h>
#include <aws/marketplace-agreement/model/ListAgreementPaymentRequestsPaginationTraits.h>
#include <aws/marketplace-agreement/model/ListAgreementRequestsPaginationTraits.h>
#include <aws/marketplace-agreement/model/ListBillingAdjustmentRequestsPaginationTraits.h>
#include <aws/marketplace-agreement/model/SearchAgreementsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace AgreementService {

template <typename DerivedClient>
class AgreementServicePaginationBase {
 public:
  /**
   * Create a paginator for GetAgreementEntitlements operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAgreementEntitlementsRequest,
                                    Pagination::GetAgreementEntitlementsPaginationTraits<DerivedClient>>
  GetAgreementEntitlementsPaginator(const Model::GetAgreementEntitlementsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAgreementEntitlementsRequest,
                                             Pagination::GetAgreementEntitlementsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetAgreementRequestApprovalPlans operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAgreementRequestApprovalPlansRequest,
                                    Pagination::GetAgreementRequestApprovalPlansPaginationTraits<DerivedClient>>
  GetAgreementRequestApprovalPlansPaginator(const Model::GetAgreementRequestApprovalPlansRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAgreementRequestApprovalPlansRequest,
                                             Pagination::GetAgreementRequestApprovalPlansPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetAgreementRequestTerms operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAgreementRequestTermsRequest,
                                    Pagination::GetAgreementRequestTermsPaginationTraits<DerivedClient>>
  GetAgreementRequestTermsPaginator(const Model::GetAgreementRequestTermsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAgreementRequestTermsRequest,
                                             Pagination::GetAgreementRequestTermsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

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
   * Create a paginator for ListAgreementApprovals operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgreementApprovalsRequest,
                                    Pagination::ListAgreementApprovalsPaginationTraits<DerivedClient>>
  ListAgreementApprovalsPaginator(const Model::ListAgreementApprovalsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgreementApprovalsRequest,
                                             Pagination::ListAgreementApprovalsPaginationTraits<DerivedClient>>{
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
   * Create a paginator for ListAgreementCharges operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgreementChargesRequest,
                                    Pagination::ListAgreementChargesPaginationTraits<DerivedClient>>
  ListAgreementChargesPaginator(const Model::ListAgreementChargesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgreementChargesRequest,
                                             Pagination::ListAgreementChargesPaginationTraits<DerivedClient>>{
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
   * Create a paginator for ListAgreementRequests operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgreementRequestsRequest,
                                    Pagination::ListAgreementRequestsPaginationTraits<DerivedClient>>
  ListAgreementRequestsPaginator(const Model::ListAgreementRequestsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgreementRequestsRequest,
                                             Pagination::ListAgreementRequestsPaginationTraits<DerivedClient>>{
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
