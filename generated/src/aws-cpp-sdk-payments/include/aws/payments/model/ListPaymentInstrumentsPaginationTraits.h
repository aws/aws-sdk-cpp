/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payments/PaymentsServiceClientModel.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/ListPaymentInstrumentsRequest.h>
#include <aws/payments/model/ListPaymentInstrumentsResult.h>

namespace Aws {
namespace Payments {
namespace Pagination {

template <typename Client = PaymentsClient>
struct ListPaymentInstrumentsPaginationTraits {
  using RequestType = Model::ListPaymentInstrumentsRequest;
  using ResultType = Model::ListPaymentInstrumentsResult;
  using OutcomeType = Model::ListPaymentInstrumentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPaymentInstruments(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Payments
}  // namespace Aws
