/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payments/PaymentsServiceClientModel.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/GetAccountBalanceRequest.h>
#include <aws/payments/model/GetAccountBalanceResult.h>

namespace Aws {
namespace Payments {
namespace Pagination {

template <typename Client = PaymentsClient>
struct GetAccountBalancePaginationTraits {
  using RequestType = Model::GetAccountBalanceRequest;
  using ResultType = Model::GetAccountBalanceResult;
  using OutcomeType = Model::GetAccountBalanceOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetAccountBalance(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Payments
}  // namespace Aws
