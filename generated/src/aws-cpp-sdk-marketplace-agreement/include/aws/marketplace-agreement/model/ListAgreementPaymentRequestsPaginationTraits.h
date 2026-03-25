/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementServiceServiceClientModel.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/ListAgreementPaymentRequestsRequest.h>
#include <aws/marketplace-agreement/model/ListAgreementPaymentRequestsResult.h>

namespace Aws {
namespace AgreementService {
namespace Pagination {

template <typename Client = AgreementServiceClient>
struct ListAgreementPaymentRequestsPaginationTraits {
  using RequestType = Model::ListAgreementPaymentRequestsRequest;
  using ResultType = Model::ListAgreementPaymentRequestsResult;
  using OutcomeType = Model::ListAgreementPaymentRequestsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAgreementPaymentRequests(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AgreementService
}  // namespace Aws
