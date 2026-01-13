/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptographyServiceClientModel.h>
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/ListAliasesRequest.h>
#include <aws/payment-cryptography/model/ListAliasesResult.h>

namespace Aws {
namespace PaymentCryptography {
namespace Pagination {

template <typename Client = PaymentCryptographyClient>
struct ListAliasesPaginationTraits {
  using RequestType = Model::ListAliasesRequest;
  using ResultType = Model::ListAliasesResult;
  using OutcomeType = Model::ListAliasesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAliases(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PaymentCryptography
}  // namespace Aws
