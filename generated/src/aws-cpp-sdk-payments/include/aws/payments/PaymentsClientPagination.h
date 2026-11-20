/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/payments/PaymentsClient.h>
#include <aws/payments/model/GetAccountBalancePaginationTraits.h>
#include <aws/payments/model/ListFinancialRecordsPaginationTraits.h>
#include <aws/payments/model/ListPaymentInstrumentsPaginationTraits.h>

namespace Aws {
namespace Payments {

using GetAccountBalancePaginator = Aws::Utils::Pagination::Paginator<PaymentsClient, Model::GetAccountBalanceRequest,
                                                                     Pagination::GetAccountBalancePaginationTraits<PaymentsClient>>;
using ListFinancialRecordsPaginator = Aws::Utils::Pagination::Paginator<PaymentsClient, Model::ListFinancialRecordsRequest,
                                                                        Pagination::ListFinancialRecordsPaginationTraits<PaymentsClient>>;
using ListPaymentInstrumentsPaginator =
    Aws::Utils::Pagination::Paginator<PaymentsClient, Model::ListPaymentInstrumentsRequest,
                                      Pagination::ListPaymentInstrumentsPaginationTraits<PaymentsClient>>;

}  // namespace Payments
}  // namespace Aws
