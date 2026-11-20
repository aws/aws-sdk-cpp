/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/payments/model/GetAccountBalancePaginationTraits.h>
#include <aws/payments/model/ListFinancialRecordsPaginationTraits.h>
#include <aws/payments/model/ListPaymentInstrumentsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Payments {

template <typename DerivedClient>
class PaymentsPaginationBase {
 public:
  /**
   * Create a paginator for GetAccountBalance operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAccountBalanceRequest,
                                    Pagination::GetAccountBalancePaginationTraits<DerivedClient>>
  GetAccountBalancePaginator(const Model::GetAccountBalanceRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAccountBalanceRequest,
                                             Pagination::GetAccountBalancePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFinancialRecords operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFinancialRecordsRequest,
                                    Pagination::ListFinancialRecordsPaginationTraits<DerivedClient>>
  ListFinancialRecordsPaginator(const Model::ListFinancialRecordsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFinancialRecordsRequest,
                                             Pagination::ListFinancialRecordsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPaymentInstruments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPaymentInstrumentsRequest,
                                    Pagination::ListPaymentInstrumentsPaginationTraits<DerivedClient>>
  ListPaymentInstrumentsPaginator(const Model::ListPaymentInstrumentsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPaymentInstrumentsRequest,
                                             Pagination::ListPaymentInstrumentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Payments
}  // namespace Aws
