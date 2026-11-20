/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payments/PaymentsServiceClientModel.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/ListFinancialRecordsRequest.h>
#include <aws/payments/model/ListFinancialRecordsResult.h>

namespace Aws {
namespace Payments {
namespace Pagination {

template <typename Client = PaymentsClient>
struct ListFinancialRecordsPaginationTraits {
  using RequestType = Model::ListFinancialRecordsRequest;
  using ResultType = Model::ListFinancialRecordsResult;
  using OutcomeType = Model::ListFinancialRecordsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFinancialRecords(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Payments
}  // namespace Aws
